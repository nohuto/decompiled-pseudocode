/*
 * XREFs of MiAllocateChildVads @ 0x140A077C4
 * Callers:
 *     MiCloneProcessAddressSpace @ 0x140A07308 (MiCloneProcessAddressSpace.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402491E0 (KiStackAttachProcess.c)
 *     MiIsVadLargePrivate @ 0x1402ED74C (MiIsVadLargePrivate.c)
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     MmGetCurrentProcessorColor @ 0x140442EF0 (MmGetCurrentProcessorColor.c)
 *     MiReadVadFlags @ 0x14045E590 (MiReadVadFlags.c)
 *     MiCopyVadContents @ 0x140460AFC (MiCopyVadContents.c)
 *     MiVadBytes @ 0x1404C31C0 (MiVadBytes.c)
 *     MiVadShouldBeForked @ 0x1404E7C98 (MiVadShouldBeForked.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     MiInitializeQuotaTracker @ 0x140995B34 (MiInitializeQuotaTracker.c)
 *     MiDeletePartialCloneVads @ 0x140A076D8 (MiDeletePartialCloneVads.c)
 *     MiCloneAncillaryVadInfo @ 0x140A07A00 (MiCloneAncillaryVadInfo.c)
 *     MiInsertChildVads @ 0x140B22D0C (MiInsertChildVads.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiAllocateChildVads(ULONG_PTR BugCheckParameter1, _QWORD *a2)
{
  __int64 *v3; // r14
  _QWORD *v4; // rdi
  _QWORD *i; // rax
  _QWORD **v6; // rcx
  _DWORD *v7; // r15
  _QWORD *v8; // rax
  _QWORD *j; // rcx
  __int64 v10; // rcx
  int VadFlags; // eax
  int v12; // r10d
  int v13; // ebx
  int v14; // r13d
  BOOL v15; // esi
  int v16; // ebp
  int CurrentProcessorColor; // eax
  __int64 PoolMm; // rax
  _QWORD *v19; // rsi
  __int64 v20; // rax
  int v21; // ebx
  ULONG_PTR v23; // [rsp+20h] [rbp-88h]
  _OWORD v25[3]; // [rsp+30h] [rbp-78h] BYREF

  *a2 = 0LL;
  memset(v25, 0, sizeof(v25));
  v3 = 0LL;
  v4 = 0LL;
  for ( i = *(_QWORD **)&KeGetCurrentThread()->ApcState.Process[3].Header.Lock; i; i = (_QWORD *)*i )
    v4 = i;
  while ( 1 )
  {
    do
    {
      if ( !v4 )
        return MiInsertChildVads(BugCheckParameter1, v3);
      v6 = (_QWORD **)v4[1];
      v7 = v4;
      v8 = v4;
      if ( v6 )
      {
        v4 = (_QWORD *)v4[1];
        for ( j = *v6; j; j = (_QWORD *)*j )
          v4 = j;
      }
      else
      {
        while ( 1 )
        {
          v4 = (_QWORD *)(v4[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !v4 || (_QWORD *)*v4 == v8 )
            break;
          v8 = v4;
        }
      }
    }
    while ( !(unsigned int)MiVadShouldBeForked((__int64)v7) );
    v23 = MiVadBytes((__int64)v7);
    VadFlags = MiReadVadFlags(v10);
    v13 = VadFlags;
    v14 = VadFlags & 0x80000;
    v15 = (VadFlags & 0x80000) == 0
       && ((unsigned __int8)v12 & (unsigned __int8)VadFlags) == 8
       && (VadFlags & 0x100000) != 0;
    v16 = v12 & VadFlags;
    CurrentProcessorColor = MmGetCurrentProcessorColor();
    PoolMm = ExAllocatePoolMm(64LL, v23, v15 ? 1231315286 : 1818517846, CurrentProcessorColor | 0x80000000);
    v19 = (_QWORD *)PoolMm;
    if ( !PoolMm )
      break;
    MiInitializeQuotaTracker((_BYTE *)(PoolMm + 68), BugCheckParameter1, 0);
    MiCopyVadContents(v20, v7);
    if ( v14 )
      *((_DWORD *)v19 + 12) &= ~2u;
    else
      v19[15] = BugCheckParameter1 | 1;
    v19[7] &= 0xFuLL;
    *((_DWORD *)v19 + 9) = 0;
    v19[5] = 0LL;
    v19[1] = 0LL;
    if ( !v14 && v16 == 8 && (v13 & 0x600000) != 0 )
      *((_DWORD *)v19 + 12) &= 0xFF9FFFFF;
    v21 = MiCloneAncillaryVadInfo(BugCheckParameter1);
    if ( v21 < 0 )
    {
      ExFreePoolWithTag(v19, 0);
      goto LABEL_33;
    }
    if ( MiIsVadLargePrivate((__int64)v7) )
      ++*a2;
    *v19 = v3;
    v3 = v19;
  }
  v21 = -1073741670;
LABEL_33:
  if ( v3 )
  {
    KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v25);
    MiDeletePartialCloneVads(v3);
    KiUnstackDetachProcess((__int64)v25, 0);
  }
  return (unsigned int)v21;
}
