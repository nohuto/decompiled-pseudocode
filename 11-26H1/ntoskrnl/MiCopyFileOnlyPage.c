/*
 * XREFs of MiCopyFileOnlyPage @ 0x1404AF42C
 * Callers:
 *     MiResolveMappedFileFaultByCopying @ 0x140482F1C (MiResolveMappedFileFaultByCopying.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiCopyPage @ 0x140293504 (MiCopyPage.c)
 *     MiUnlockProtoPoolPage @ 0x1402B5C00 (MiUnlockProtoPoolPage.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402BE490 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiObtainProtoReference @ 0x1402C7BB0 (MiObtainProtoReference.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1402CAC30 (MiRemoveLockedPageChargeAndDecRef.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1402D0030 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiInitializeTransitionPfn @ 0x14036C744 (MiInitializeTransitionPfn.c)
 *     MiStartingOffset @ 0x14036EC40 (MiStartingOffset.c)
 *     MiAdvanceFaultList @ 0x140371250 (MiAdvanceFaultList.c)
 *     MiTryLockProtoPoolPageAtDpc @ 0x140478A34 (MiTryLockProtoPoolPageAtDpc.c)
 *     MiTryLockLeafPage @ 0x140478BFC (MiTryLockLeafPage.c)
 *     MiHandleInPageError @ 0x1404AF888 (MiHandleInPageError.c)
 */

__int64 MiCopyFileOnlyPage(__int64 a1, __int64 a2, ...)
{
  __int64 v2; // r12
  __int64 v4; // r14
  __int64 v5; // rdi
  __int64 v6; // r8
  __int64 v7; // r15
  volatile LONG *v8; // r13
  __int64 v9; // r12
  ULONG_PTR v10; // rcx
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // r8
  unsigned int v14; // r14d
  __int64 v15; // r14
  __int64 *v17; // rdx
  unsigned __int64 v18; // rax
  __int64 v19; // r8
  ULONG_PTR v20; // rdx
  ULONG_PTR v21; // rcx
  __int64 v22; // rdi
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // [rsp+20h] [rbp-28h] BYREF
  __int64 v27; // [rsp+28h] [rbp-20h]
  __int64 v28; // [rsp+30h] [rbp-18h] BYREF
  __int64 v29; // [rsp+38h] [rbp-10h]
  unsigned int v30; // [rsp+90h] [rbp+48h]
  __int64 v32; // [rsp+A0h] [rbp+58h] BYREF
  va_list va; // [rsp+A0h] [rbp+58h]
  __int64 v34; // [rsp+A8h] [rbp+60h]
  ULONG_PTR v35; // [rsp+B0h] [rbp+68h]
  __int64 v36; // [rsp+B8h] [rbp+70h]
  __int64 v37; // [rsp+C0h] [rbp+78h]
  va_list va1; // [rsp+C8h] [rbp+80h] BYREF

  va_start(va1, a2);
  va_start(va, a2);
  v32 = va_arg(va1, _QWORD);
  v34 = va_arg(va1, _QWORD);
  v35 = va_arg(va1, _QWORD);
  v36 = va_arg(va1, _QWORD);
  v37 = va_arg(va1, _QWORD);
  v2 = *(_QWORD *)a2;
  if ( (*(_DWORD *)(a2 + 32) & 0x20000) != 0 && (*(_DWORD *)(v2 + 56) & 8) != 0 && (*(_DWORD *)(v2 + 56) & 0x20) != 0 )
  {
    v4 = v37;
    v27 = v37;
    v29 = 0LL;
    v30 = *(_DWORD *)(v37 + 64);
  }
  else
  {
    v29 = v37;
    v4 = 0LL;
    v27 = 0LL;
    v30 = 0;
  }
  v5 = 48 * v35 - 0x220000000000LL;
  LODWORD(v26) = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v5 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v26);
    while ( *(__int64 *)(v5 + 24) < 0 );
  }
  MiInitializeTransitionPfn(v35, (__int64 *)v32, v32);
  *(_DWORD *)(v5 + 32) = *(_DWORD *)(v5 + 32) & 0xFFF8FFFF | 0x20000;
  *(_DWORD *)(v5 + 32) = *(_DWORD *)(v5 + 32) & 0xFFFF0000 | 1;
  *(_DWORD *)(v5 + 32) |= 0x200000u;
  *(_QWORD *)v5 = (a1 + 32) & -(__int64)(a1 != 0);
  if ( (*(_QWORD *)(v5 + 40) & 0x20000000000000LL) == 0 )
    *(_DWORD *)(v5 + 32) = ((char)(*(_DWORD *)(a1 + 188) >> 11) << 24) ^ (*(_DWORD *)(v5 + 32) ^ ((char)(*(_DWORD *)(a1 + 188) >> 11) << 24)) & 0xF8FFFFFF;
  _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v7 = v36;
  MiObtainProtoReference(v36, 0LL, v6);
  v8 = (volatile LONG *)(v2 + 72);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v2 + 72));
  ++*(_QWORD *)(v2 + 32);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v2 + 72));
  v28 = 0LL;
  v9 = 0LL;
  v26 = 0LL;
  if ( v4 )
  {
    v10 = *(_QWORD *)(a2 + 8) + 8LL * (unsigned int)((v32 - *(_QWORD *)(v4 + 72)) >> 3);
    if ( ((v32 ^ v10) & 0xFFFFFFFFF000LL) != 0 )
    {
      v11 = MiTryLockProtoPoolPageAtDpc(v10, 0xFFFFFFFFF000LL, &v28, (__int64)&v26);
      v9 = v28;
    }
    else
    {
      v11 = MiTryLockLeafPage((__int64 *)v10, 0, &v26);
    }
    v14 = v11;
    if ( v11 < 0 )
      goto LABEL_24;
    v15 = v26;
  }
  else
  {
    ExAcquireSpinLockSharedAtDpcLevel(v8);
    v15 = *(_QWORD *)v29;
    if ( (*(_QWORD *)v29 & 1) != 0 )
    {
      ExReleaseSpinLockSharedFromDpcLevel(v8);
      v14 = -1073740748;
LABEL_24:
      LODWORD(v32) = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v5 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx((__int64 *)va);
        while ( *(__int64 *)(v5 + 24) < 0 );
      }
      MiHandleInPageError(v5);
      MiRemoveLockedPageChargeAndDecRef(v5);
      _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      LODWORD(v32) = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx((__int64 *)va);
        while ( *(__int64 *)(v7 + 24) < 0 );
      }
      MiRemoveLockedPageChargeAndDecRef(v7);
      _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      return v14;
    }
  }
  if ( (*(_DWORD *)(v15 + 32) & 0x40000000) != 0 && *(int *)(v15 + 32) < 0 )
  {
    if ( v27 )
      _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    else
      ExReleaseSpinLockSharedFromDpcLevel(v8);
    if ( v9 )
    {
      LOBYTE(v12) = 17;
      MiUnlockProtoPoolPage(v9, v12, v13);
    }
    v14 = -1073740023;
    goto LABEL_24;
  }
  v29 = (v15 + 0x220000000000LL) / 48;
  if ( (v34 & 1) != 0 && *(_BYTE *)(v34 & 0xFFFFFFFFFFFFFFFEuLL) == 1 )
  {
    MiAdvanceFaultList((_QWORD *)(v34 & 0xFFFFFFFFFFFFFFFEuLL));
    *(_DWORD *)(a1 + 188) |= 0x20u;
  }
  v17 = (__int64 *)v32;
  *(_QWORD *)(a1 + 168) = *(_QWORD *)v32;
  *(_QWORD *)(a1 + 240) = v17;
  *(_DWORD *)(a1 + 188) |= 0x10000080u;
  *(_QWORD *)(a1 + 320) = v35;
  *(_QWORD *)(a1 + 272) = 0LL;
  *(_DWORD *)(a1 + 280) = 4325432;
  *(_QWORD *)(a1 + 304) = 0LL;
  *(_QWORD *)(a1 + 312) = 4096LL;
  v18 = MiStartingOffset((__int64 *)a2, (unsigned __int64)v17, v30);
  v19 = v32;
  v20 = v29;
  v21 = v35;
  *(_QWORD *)(a1 + 96) = v18;
  *(_QWORD *)(a1 + 248) = v19;
  *(_QWORD *)(a1 + 192) = a2;
  *(_QWORD *)(a1 + 256) = v5;
  v22 = v27;
  v23 = v27;
  *(_QWORD *)(a1 + 200) = 0LL;
  *(_DWORD *)(a1 + 184) = 4096;
  *(_QWORD *)(a1 + 160) = v7;
  MiCopyPage(v21, v20, v23 != 0 ? 68 : 320);
  if ( v22 )
    _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  else
    ExReleaseSpinLockSharedFromDpcLevel(v8);
  if ( v9 )
  {
    LOBYTE(v24) = 17;
    MiUnlockProtoPoolPage(v9, v24, v25);
  }
  LOBYTE(v24) = 17;
  MiUnlockProtoPoolPage(v7, v24, v25);
  __incgsdword(0x2E98u);
  *(_DWORD *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 88) = 4096LL;
  KeSetEvent((PRKEVENT)(a1 + 32), 0, 0);
  return 0LL;
}
