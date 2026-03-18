/*
 * XREFs of CmpInitializeSystemHive @ 0x140CEB618
 * Callers:
 *     CmpInitializePreloadedHives @ 0x140CEB354 (CmpInitializePreloadedHives.c)
 * Callees:
 *     CmpAllocatePool @ 0x140474870 (CmpAllocatePool.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     CmpSetupLoggingState @ 0x14084D128 (CmpSetupLoggingState.c)
 *     CmpCreateHive @ 0x1408B5E6C (CmpCreateHive.c)
 *     CmpLinkHiveToMaster @ 0x14097C11C (CmpLinkHiveToMaster.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpInitializeSystemHive(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // ebx
  _OWORD *Pool; // rdi
  int v9; // r8d
  int Hive; // eax
  int v11; // ecx
  int v12; // esi
  ULONG_PTR BugCheckParameter3[2]; // [rsp+70h] [rbp-28h] BYREF
  __int64 v15; // [rsp+B0h] [rbp+18h] BYREF

  v15 = a3;
  v6 = 0;
  LOBYTE(v15) = 0;
  BugCheckParameter3[0] = 0LL;
  Pool = (_OWORD *)CmpAllocatePool(0x100uLL);
  if ( Pool )
  {
    v9 = 18;
    if ( LODWORD(WheapPfaLock.StackBase) )
      v9 = 33554450;
    Hive = CmpCreateHive(
             BugCheckParameter3,
             1u,
             v9,
             2u,
             *(_QWORD *)(a1 + 168),
             0LL,
             (__int64)&KiSystemServiceTraceCallbackLock.ApcState.ApcListHead[1],
             5832712,
             0LL,
             0LL,
             a4,
             (__int64)&v15,
             (__int64)Pool);
    if ( Hive < 0 )
      KeBugCheckEx(0x74u, 3uLL, 2uLL, (ULONG_PTR)Pool, Hive);
    CmpSetupLoggingState(BugCheckParameter3[0], (unsigned int *)(*(_QWORD *)(a1 + 240) + 2916LL));
    if ( (_BYTE)v15 == 1 )
      LOBYTE(WheapPfaLock.ThreadLock) = 1;
    if ( BYTE5(NlsMbOemCodePageTag) )
      *(_DWORD *)(BugCheckParameter3[0] + 160) |= 0x8000u;
    if ( HIDWORD(WheapPfaLock.CycleTime) && !HIDWORD(WheapPfaLock.ThreadLock) )
    {
      *(_DWORD *)(BugCheckParameter3[0] + 160) |= 0x8000u;
      *(_DWORD *)(BugCheckParameter3[0] + 160) &= ~2u;
    }
    v11 = *(_DWORD *)(*(_QWORD *)(BugCheckParameter3[0] + 64) + 4088LL);
    *(_DWORD *)&CmpCallbackListLock.ApcStateFill[28] = v11;
    if ( !CmSelfHeal )
    {
      BYTE2(NlsMbOemCodePageTag) = 0;
      if ( (v11 & 4) != 0 )
        KeBugCheckEx(0x74u, 3uLL, 3uLL, BugCheckParameter3[0], 0LL);
    }
    v12 = CmpLinkHiveToMaster(
            (unsigned __int16 *)&KiSystemServiceTraceCallbackLock.ApcStateFill[32],
            0LL,
            BugCheckParameter3[0],
            0,
            *(unsigned int *)&stru_140E098B8.WaitBlockFill11[136],
            0,
            0LL,
            a2,
            0LL,
            0LL,
            1,
            Pool);
    if ( v12 >= 0 )
      stru_140E098B8.WaitBlock[2].Thread = (struct _KTHREAD *)BugCheckParameter3[0];
    ExFreePoolWithTag(Pool, 0);
    if ( v12 < 0 )
      return (unsigned int)v12;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v6;
}
