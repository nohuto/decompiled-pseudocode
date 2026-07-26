/*
 * XREFs of ?ndisPktMonRegisterAllOpens@@YAXXZ @ 0x1400B5410
 * Callers:
 *     ndisPktMonRegisterComponentsCallback @ 0x1400B55D0 (ndisPktMonRegisterComponentsCallback.c)
 * Callees:
 *     ?ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x140041C80 (-ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ?ndisMTryReferenceOpen@@YAEPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x14009EE74 (-ndisMTryReferenceOpen@@YAEPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     memset @ 0x1400EA4C0 (memset.c)
 *     ndisPktMonOpenRegister @ 0x140164380 (ndisPktMonOpenRegister.c)
 */

void ndisPktMonRegisterAllOpens(void)
{
  KIRQL v0; // al
  struct _NDIS_OPEN_BLOCK *NextGlobalOpen; // rbx
  KIRQL v2; // si
  PVOID **Pool2; // rax
  PVOID *v4; // rcx
  _QWORD *v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rbx
  PVOID P; // [rsp+20h] [rbp-10h] BYREF
  PVOID *p_P; // [rsp+28h] [rbp-8h]

  p_P = &P;
  P = &P;
  v0 = KeAcquireSpinLockRaiseToDpc(&ndisGlobalOpenListLock);
  NextGlobalOpen = ndisGlobalOpenList;
  v2 = v0;
  while ( NextGlobalOpen )
  {
    if ( !ndisMTryReferenceOpen((__int64)NextGlobalOpen, 0x13u) )
      goto LABEL_10;
    KeAcquireSpinLockAtDpcLevel(&NextGlobalOpen->SpinLock);
    if ( (NextGlobalOpen->OpenFlags & 0x8000) != 0 || (NextGlobalOpen->OpenFlags & 0x10000) != 0 )
    {
      KeReleaseSpinLockFromDpcLevel(&NextGlobalOpen->SpinLock);
LABEL_9:
      ndisMDereferenceOpenUnlocked((__int64)NextGlobalOpen, 0x13u);
      goto LABEL_10;
    }
    KeReleaseSpinLockFromDpcLevel(&NextGlobalOpen->SpinLock);
    Pool2 = (PVOID **)ExAllocatePool2(64LL, 24LL, 1836074062LL);
    if ( !Pool2 )
      goto LABEL_9;
    Pool2[2] = &NextGlobalOpen->MacHandle;
    v4 = p_P;
    if ( *p_P != &P )
LABEL_20:
      __fastfail(3u);
    Pool2[1] = p_P;
    *Pool2 = &P;
    *v4 = Pool2;
    p_P = (PVOID *)Pool2;
LABEL_10:
    NextGlobalOpen = NextGlobalOpen->NextGlobalOpen;
  }
  KeReleaseSpinLock(&ndisGlobalOpenListLock, v2);
  while ( 1 )
  {
    v5 = P;
    if ( P == &P )
      break;
    if ( *((PVOID **)P + 1) != &P )
      goto LABEL_20;
    v6 = *(_QWORD *)P;
    if ( *(PVOID *)(*(_QWORD *)P + 8LL) != P )
      goto LABEL_20;
    P = *(PVOID *)P;
    *(_QWORD *)(v6 + 8) = &P;
    v7 = v5[2];
    ExFreePoolWithTag(v5, 0);
    if ( (*(_DWORD *)(v7 + 224) & 0x8000) == 0 && (*(_DWORD *)(v7 + 224) & 0x10000) == 0 )
    {
      memset((void *)(v7 + 920), 0, 0x40uLL);
      ndisPktMonOpenRegister(v7);
    }
    ndisMDereferenceOpenUnlocked(v7, 0x13u);
  }
}
