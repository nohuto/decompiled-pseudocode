/*
 * XREFs of MiGetPageForSystemCache @ 0x14033BDD0
 * Callers:
 *     MiResolveCachedPageHardFault @ 0x14033BBFC (MiResolveCachedPageHardFault.c)
 * Callees:
 *     MiGetSubsectionFromPte @ 0x140282C30 (MiGetSubsectionFromPte.c)
 *     MiGetPage @ 0x140285C00 (MiGetPage.c)
 *     MiInitializePageColorBase @ 0x140371BD0 (MiInitializePageColorBase.c)
 */

__int64 __fastcall MiGetPageForSystemCache(unsigned __int64 a1)
{
  __int64 SubsectionFromPte; // rax
  char v2; // r9
  int v3; // r10d
  __int64 v4; // r8
  __int64 v6; // rdi
  BOOL v7; // ebx
  int v8; // edx
  __int128 v9; // [rsp+20h] [rbp-18h] BYREF

  v9 = 0LL;
  SubsectionFromPte = MiGetSubsectionFromPte(a1);
  v4 = *(_QWORD *)SubsectionFromPte;
  if ( (*(_DWORD *)(*(_QWORD *)SubsectionFromPte + 56LL) & 0x30000000) != 0 || (v2 & 1) == 0 )
    return -1LL;
  v6 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8LL * (*(_DWORD *)(v4 + 60) & 0x3FF));
  v7 = v3 != 0;
  MiInitializePageColorBase(0LL, 3LL, (*(_DWORD *)(v4 + 56) >> 20) & 0x7F, &v9);
  v8 = (unsigned __int8)_InterlockedExchangeAdd((volatile signed __int32 *)v9, 1u);
  return MiGetPage(v6, DWORD2(v9) & 0xFFFFFF00 | v8, v7 + 16);
}
