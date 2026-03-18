/*
 * XREFs of VslpIumPhase0Initialize @ 0x140CB9CAC
 * Callers:
 *     HvlPhase1Initialize @ 0x1405B89CC (HvlPhase1Initialize.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x14024D8F0 (MmGetPhysicalAddress.c)
 *     VslpEnterIumSecureMode @ 0x1403685AC (VslpEnterIumSecureMode.c)
 *     HvlQueryVsmConnection @ 0x1404851C8 (HvlQueryVsmConnection.c)
 *     MmSetPageProtection @ 0x1405096F0 (MmSetPageProtection.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     KeQueryKvaShadowInformation @ 0x140778BF4 (KeQueryKvaShadowInformation.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

__int64 __fastcall VslpIumPhase0Initialize(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rax
  char *v4; // rcx
  unsigned int v5; // ecx
  _KIDTENTRY64 *IdtBase; // rbx
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // [rsp+30h] [rbp-39h] BYREF
  _DWORD v11[3]; // [rsp+34h] [rbp-35h] BYREF
  _BYTE v12[8]; // [rsp+40h] [rbp-29h] BYREF
  int v13; // [rsp+48h] [rbp-21h]
  int v14; // [rsp+4Ch] [rbp-1Dh]
  PHYSICAL_ADDRESS PhysicalAddress; // [rsp+50h] [rbp-19h]
  char v16; // [rsp+58h] [rbp-11h]
  int v17; // [rsp+5Ch] [rbp-Dh]
  int v18; // [rsp+60h] [rbp-9h]
  int v19; // [rsp+64h] [rbp-5h]
  char v20; // [rsp+68h] [rbp-1h]
  char v21; // [rsp+69h] [rbp+0h]
  char v22; // [rsp+6Ah] [rbp+1h]
  __int64 v23; // [rsp+70h] [rbp+7h]
  ULONG_PTR v24; // [rsp+78h] [rbp+Fh]
  PHYSICAL_ADDRESS v25; // [rsp+88h] [rbp+1Fh]
  PHYSICAL_ADDRESS v26; // [rsp+98h] [rbp+2Fh]

  result = *(_QWORD *)(a1 + 240);
  v11[0] = 0;
  v10 = 0;
  if ( (*(_DWORD *)(result + 132) & 0x200) != 0 )
  {
    if ( !HvlQueryVsmConnection(0LL) )
      KeBugCheckEx(0x6Fu, 0xFFFFFFFFC0000001uLL, 0LL, 0LL, 0LL);
    VslpSecureKernelPeriodicTickWorkItem.Parameter = 0LL;
    VslpSecureKernelPeriodicTickWorkItem.List.Flink = 0LL;
    VslpSecureKernelPeriodicTickWorkItem.WorkerRoutine = (void (__fastcall *)(void *))VslpSecureKernelPeriodicTick;
    memset_0(v12, 0, 0x68uLL);
    v13 = 167772178;
    PhysicalAddress = MmGetPhysicalAddress((PVOID)0xFFFFF78000000000LL);
    if ( (_BYTE)KdDebuggerEnabled )
    {
      v3 = *(_QWORD *)(a1 + 240);
      v16 = 1;
      v4 = *(char **)(v3 + 2800);
      if ( v4 )
      {
        v17 = *((_DWORD *)v4 + 55);
        if ( !*((_DWORD *)v4 + 55) && *(_DWORD *)v4 <= 0xFFu )
        {
          v18 = 2;
          v19 = *((unsigned __int16 *)v4 + 4);
          v20 = *v4;
          v5 = *((_DWORD *)v4 + 1);
          v21 = v5 & 0x1F;
          v22 = (v5 >> 5) & 7;
        }
      }
    }
    else
    {
      v16 = 0;
    }
    IdtBase = KeGetPcr()->IdtBase;
    v25 = MmGetPhysicalAddress(KeGetPcr()->NtTib.ExceptionList);
    v26 = MmGetPhysicalAddress(IdtBase);
    MmSetPageProtection((unsigned __int64)IdtBase, 0x1000uLL, 2u);
    guard_dispatch_icall_no_overrides(46LL, 8LL);
    if ( (VslpNestedPageProtectionFlags & 0x1000) == 0 )
      *(_DWORD *)(MmWriteableSharedUserData + 876) |= 0x100u;
    if ( KiKvaShadowMode )
      v14 |= 1u;
    KeQueryKvaShadowInformation(v11, 4u, 0, &v10);
    v7 = v14;
    if ( (v11[0] & 0x10) != 0 )
    {
      v7 = v14 | 2;
      v14 |= 2u;
      if ( SLODWORD(gLoadedDiffHivesLock.StackBase) > 0 )
      {
        v7 |= 4u;
        v14 = v7;
      }
    }
    if ( KiDisableTsx )
      v14 = v7 | 8;
    v11[2] = VslpNestedPageProtectionFlags & 2;
    v23 = KeFeatureBits;
    v24 = KeFeatureBits2;
    v8 = guard_dispatch_icall_no_overrides(56LL, 8LL);
    if ( v8 < 0 )
      KeBugCheckEx(0x6Fu, v8, 0xFFuLL, 1uLL, 0LL);
    v9 = VslpEnterIumSecureMode(2u, 0xD0u, 0, (__int64)v12);
    if ( v9 < 0 )
      KeBugCheckEx(0x6Fu, v9, 0LL, 1uLL, 0LL);
    if ( PhysicalAddress.LowPart != 167772178 )
      KeBugCheckEx(0x6Fu, 0xFFFFFFFFC0000059uLL, 0LL, 2uLL, 0LL);
    VslpIumThreadSemaphore.Header.WaitListHead.Blink = &VslpIumThreadSemaphore.Header.WaitListHead;
    VslpIumThreadSemaphore.Header.WaitListHead.Flink = &VslpIumThreadSemaphore.Header.WaitListHead;
    VslpIumThreadSemaphore.Header.Type = 5;
    VslpIumThreadSemaphore.Header.Size = 8;
    VslpIumThreadSemaphore.Header.SignalState = PhysicalAddress.HighPart;
    VslpIumThreadSemaphore.Limit = PhysicalAddress.HighPart;
    VslVsmEnabled = 1;
    *(_QWORD *)&VslpReservedTransferLock.Header.Lock = 0LL;
    VslpReservedTransferMdl = ExAllocatePool2(64LL, 0x1000uLL, 0x54736D56u);
    if ( !VslpReservedTransferMdl )
      KeBugCheckEx(0x6Fu, 0xFFFFFFFFC000009AuLL, 0LL, 3uLL, 0LL);
    v11[1] = 0;
    guard_dispatch_icall_no_overrides(16LL, 4LL);
    return guard_dispatch_icall_no_overrides(18LL, 4LL);
  }
  return result;
}
