/*
 * XREFs of MiCopyFileOnlyPage @ 0x1404B5FDC
 * Callers:
 *     MiResolveMappedFileFaultByCopying @ 0x1404893DC (MiResolveMappedFileFaultByCopying.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278CA0 (KeYieldProcessorEx.c)
 *     MiCopyPage @ 0x140293FA4 (MiCopyPage.c)
 *     MiUnlockProtoPoolPage @ 0x1402D3E40 (MiUnlockProtoPoolPage.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402DC6D0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402DED10 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiObtainProtoReference @ 0x1402E5B70 (MiObtainProtoReference.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1402E8BF0 (MiRemoveLockedPageChargeAndDecRef.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1402EDFB0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiInitializeTransitionPfn @ 0x14036A9A4 (MiInitializeTransitionPfn.c)
 *     MiStartingOffset @ 0x14036CEA0 (MiStartingOffset.c)
 *     MiAdvanceFaultList @ 0x14036F4A0 (MiAdvanceFaultList.c)
 *     MiTryLockProtoPoolPageAtDpc @ 0x14047F0C4 (MiTryLockProtoPoolPageAtDpc.c)
 *     MiTryLockLeafPage @ 0x14047F28C (MiTryLockLeafPage.c)
 *     MiHandleInPageError @ 0x1404B6438 (MiHandleInPageError.c)
 */

__int64 MiCopyFileOnlyPage(__int64 a1, __int64 a2, ...)
{
  __int64 v2; // r12
  __int64 v4; // r14
  __int64 v5; // rdi
  __int64 v6; // r15
  volatile LONG *v7; // r13
  __int64 v8; // r12
  ULONG_PTR v9; // rcx
  int v10; // eax
  unsigned int v11; // r14d
  __int64 v12; // r14
  __int64 *v14; // rdx
  unsigned __int64 v15; // rax
  __int64 v16; // r8
  ULONG_PTR v17; // rdx
  ULONG_PTR v18; // rcx
  __int64 v19; // rdi
  __int64 v20; // rax
  __int64 v21; // [rsp+20h] [rbp-28h] BYREF
  __int64 v22; // [rsp+28h] [rbp-20h]
  __int64 v23; // [rsp+30h] [rbp-18h] BYREF
  __int64 v24; // [rsp+38h] [rbp-10h]
  unsigned int v25; // [rsp+90h] [rbp+48h]
  __int64 v27; // [rsp+A0h] [rbp+58h] BYREF
  va_list va; // [rsp+A0h] [rbp+58h]
  __int64 v29; // [rsp+A8h] [rbp+60h]
  ULONG_PTR v30; // [rsp+B0h] [rbp+68h]
  __int64 v31; // [rsp+B8h] [rbp+70h]
  __int64 v32; // [rsp+C0h] [rbp+78h]
  va_list va1; // [rsp+C8h] [rbp+80h] BYREF

  va_start(va1, a2);
  va_start(va, a2);
  v27 = va_arg(va1, _QWORD);
  v29 = va_arg(va1, _QWORD);
  v30 = va_arg(va1, _QWORD);
  v31 = va_arg(va1, _QWORD);
  v32 = va_arg(va1, _QWORD);
  v2 = *(_QWORD *)a2;
  if ( (*(_DWORD *)(a2 + 32) & 0x20000) != 0 && (*(_DWORD *)(v2 + 56) & 8) != 0 && (*(_DWORD *)(v2 + 56) & 0x20) != 0 )
  {
    v4 = v32;
    v22 = v32;
    v24 = 0LL;
    v25 = *(_DWORD *)(v32 + 64);
  }
  else
  {
    v24 = v32;
    v4 = 0LL;
    v22 = 0LL;
    v25 = 0;
  }
  v5 = 48 * v30 - 0x220000000000LL;
  LODWORD(v21) = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v5 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v21);
    while ( *(__int64 *)(v5 + 24) < 0 );
  }
  MiInitializeTransitionPfn(v30, (__int64 *)v27, v27);
  *(_DWORD *)(v5 + 32) = *(_DWORD *)(v5 + 32) & 0xFFF8FFFF | 0x20000;
  *(_DWORD *)(v5 + 32) = *(_DWORD *)(v5 + 32) & 0xFFFF0000 | 1;
  *(_DWORD *)(v5 + 32) |= 0x200000u;
  *(_QWORD *)v5 = (a1 + 32) & -(__int64)(a1 != 0);
  if ( (*(_QWORD *)(v5 + 40) & 0x20000000000000LL) == 0 )
    *(_DWORD *)(v5 + 32) = ((char)(*(_DWORD *)(a1 + 188) >> 11) << 24) ^ (*(_DWORD *)(v5 + 32) ^ ((char)(*(_DWORD *)(a1 + 188) >> 11) << 24)) & 0xF8FFFFFF;
  _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v6 = v31;
  MiObtainProtoReference(v31, 0);
  v7 = (volatile LONG *)(v2 + 72);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v2 + 72));
  ++*(_QWORD *)(v2 + 32);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v2 + 72));
  v23 = 0LL;
  v8 = 0LL;
  v21 = 0LL;
  if ( v4 )
  {
    v9 = *(_QWORD *)(a2 + 8) + 8LL * (unsigned int)((v27 - *(_QWORD *)(v4 + 72)) >> 3);
    if ( ((v27 ^ v9) & 0xFFFFFFFFF000LL) != 0 )
    {
      v10 = MiTryLockProtoPoolPageAtDpc(v9, 0xFFFFFFFFF000LL, &v23, (__int64)&v21);
      v8 = v23;
    }
    else
    {
      v10 = MiTryLockLeafPage((__int64 *)v9, 0, &v21);
    }
    v11 = v10;
    if ( v10 < 0 )
      goto LABEL_24;
    v12 = v21;
  }
  else
  {
    ExAcquireSpinLockSharedAtDpcLevel(v7);
    v12 = *(_QWORD *)v24;
    if ( (*(_QWORD *)v24 & 1) != 0 )
    {
      ExReleaseSpinLockSharedFromDpcLevel(v7);
      v11 = -1073740748;
LABEL_24:
      LODWORD(v27) = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v5 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx((__int64 *)va);
        while ( *(__int64 *)(v5 + 24) < 0 );
      }
      MiHandleInPageError(v5);
      MiRemoveLockedPageChargeAndDecRef(v5);
      _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      LODWORD(v27) = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx((__int64 *)va);
        while ( *(__int64 *)(v6 + 24) < 0 );
      }
      MiRemoveLockedPageChargeAndDecRef(v6);
      _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      return v11;
    }
  }
  if ( (*(_DWORD *)(v12 + 32) & 0x40000000) != 0 && *(int *)(v12 + 32) < 0 )
  {
    if ( v22 )
      _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    else
      ExReleaseSpinLockSharedFromDpcLevel(v7);
    if ( v8 )
      MiUnlockProtoPoolPage(v8, 0x11u);
    v11 = -1073740023;
    goto LABEL_24;
  }
  v24 = (v12 + 0x220000000000LL) / 48;
  if ( (v29 & 1) != 0 && *(_BYTE *)(v29 & 0xFFFFFFFFFFFFFFFEuLL) == 1 )
  {
    MiAdvanceFaultList((_QWORD *)(v29 & 0xFFFFFFFFFFFFFFFEuLL));
    *(_DWORD *)(a1 + 188) |= 0x20u;
  }
  v14 = (__int64 *)v27;
  *(_QWORD *)(a1 + 168) = *(_QWORD *)v27;
  *(_QWORD *)(a1 + 240) = v14;
  *(_DWORD *)(a1 + 188) |= 0x10000080u;
  *(_QWORD *)(a1 + 320) = v30;
  *(_QWORD *)(a1 + 272) = 0LL;
  *(_DWORD *)(a1 + 280) = 4325432;
  *(_QWORD *)(a1 + 304) = 0LL;
  *(_QWORD *)(a1 + 312) = 4096LL;
  v15 = MiStartingOffset((__int64 *)a2, (unsigned __int64)v14, v25);
  v16 = v27;
  v17 = v24;
  v18 = v30;
  *(_QWORD *)(a1 + 96) = v15;
  *(_QWORD *)(a1 + 248) = v16;
  *(_QWORD *)(a1 + 192) = a2;
  *(_QWORD *)(a1 + 256) = v5;
  v19 = v22;
  v20 = v22;
  *(_QWORD *)(a1 + 200) = 0LL;
  *(_DWORD *)(a1 + 184) = 4096;
  *(_QWORD *)(a1 + 160) = v6;
  MiCopyPage(v18, v17, v20 != 0 ? 68 : 320);
  if ( v19 )
    _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  else
    ExReleaseSpinLockSharedFromDpcLevel(v7);
  if ( v8 )
    MiUnlockProtoPoolPage(v8, 0x11u);
  MiUnlockProtoPoolPage(v6, 0x11u);
  __incgsdword(0x2E98u);
  *(_DWORD *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 88) = 4096LL;
  KeSetEvent((PRKEVENT)(a1 + 32), 0, 0);
  return 0LL;
}
