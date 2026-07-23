/*
 * XREFs of MiDbgPatchIdentity @ 0x140703644
 * Callers:
 *     MiDbgLockPage @ 0x140702F08 (MiDbgLockPage.c)
 * Callees:
 *     MiGetSubsectionFromPte @ 0x140282C30 (MiGetSubsectionFromPte.c)
 */

__int64 __fastcall MiDbgPatchIdentity(__int64 a1)
{
  unsigned __int8 v1; // al
  __int64 SubsectionFromPte; // rax
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // r10
  int v6; // ecx
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rcx

  if ( (*(_QWORD *)(a1 + 24) & 0x4000000000000000LL) != 0 )
    return 0LL;
  v1 = *(_BYTE *)(a1 + 34) & 7;
  if ( v1 == 5 )
    return 0LL;
  if ( v1 < 2u )
    return 0LL;
  if ( *(__int64 *)(a1 + 40) >= 0 )
    return 0LL;
  if ( (*(_DWORD *)(a1 + 16) & 0x400LL) == 0 )
    return 0LL;
  SubsectionFromPte = MiGetSubsectionFromPte(*(_QWORD *)(a1 + 16));
  v5 = *(_QWORD *)SubsectionFromPte;
  v6 = *(_DWORD *)(*(_QWORD *)SubsectionFromPte + 56LL);
  if ( (v6 & 1) != 0 )
    return 0LL;
  if ( (v6 & 0x20) == 0 )
    return 0LL;
  v7 = *(_QWORD *)(v3 + 8) | 0x8000000000000000uLL;
  v8 = *(_QWORD *)(SubsectionFromPte + 8);
  if ( v7 < v8 || v7 >= v8 + 8LL * *(unsigned int *)(SubsectionFromPte + 44) )
    return 0LL;
  if ( v4 )
  {
    *(_QWORD *)(v4 + 136) = v5;
    *(_DWORD *)(v4 + 132) = (__int64)(v7 - *(_QWORD *)(v5 + 136)) >> 3;
  }
  return 1LL;
}
