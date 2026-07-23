/*
 * XREFs of MiInsertProtectedStandbyPage @ 0x1402AEAF8
 * Callers:
 *     MiWalkImageReleasePage @ 0x1402AE49C (MiWalkImageReleasePage.c)
 *     MiPfnShareCountIsZero @ 0x1402BE530 (MiPfnShareCountIsZero.c)
 *     MiHardFaultPageRelease @ 0x14031E950 (MiHardFaultPageRelease.c)
 * Callees:
 *     MiInsertPagesInList @ 0x1402AF3C0 (MiInsertPagesInList.c)
 *     MiGetPfnSlabType @ 0x1402DFCC0 (MiGetPfnSlabType.c)
 *     MiPfnReferenceCountIsZero @ 0x14031E3A4 (MiPfnReferenceCountIsZero.c)
 *     MiAddPageToInsertList @ 0x140320F90 (MiAddPageToInsertList.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall MiInsertProtectedStandbyPage(__int64 a1, __int64 a2)
{
  __int64 v4; // r8
  _QWORD v6[4]; // [rsp+20h] [rbp-98h] BYREF
  int v7; // [rsp+40h] [rbp-78h]
  __int64 v8; // [rsp+78h] [rbp-40h]
  int v9; // [rsp+90h] [rbp-28h]

  memset_0(v6, 0, 0x78uLL);
  v4 = (a2 + 0x220000000000LL) / 48;
  if ( (*(_QWORD *)(a2 + 40) & 0x20000000000000LL) != 0
    || (unsigned int)MiGetPfnSlabType(a2) != 9
    || !a1
    || (*(_BYTE *)(a2 + 35) & 0x10) != 0
    || (*(_DWORD *)(a2 + 32) & 0x40000000) != 0
    || (((unsigned __int16)(*(_QWORD *)(a1 + 40) >> 43) ^ (unsigned __int16)(*(_QWORD *)(a2 + 40) >> 43)) & 0x3FF) != 0
    || (*(_DWORD *)(a2 + 32) & 0x7000000u) >= 0x5000000 )
  {
    return MiPfnReferenceCountIsZero(a2, v4);
  }
  v9 = 3;
  v6[0] = 0x3FFFFFFFFFLL;
  v6[1] = 0x3FFFFFFFFFLL;
  v7 = 0;
  v8 = a1;
  MiAddPageToInsertList(v6, 0LL);
  return MiInsertPagesInList(v6);
}
