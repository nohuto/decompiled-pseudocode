/*
 * XREFs of MiZeroPageMakeHot @ 0x140713BF0
 * Callers:
 *     MiInitializeBackgroundZeroingContext @ 0x140456E64 (MiInitializeBackgroundZeroingContext.c)
 * Callees:
 *     MiGetPfnPageSizeIndexUnsynchronized @ 0x1402D2C40 (MiGetPfnPageSizeIndexUnsynchronized.c)
 *     MiIssuePageHeatList @ 0x1402D58BC (MiIssuePageHeatList.c)
 *     MiInitializePageHeatList @ 0x1404655D0 (MiInitializePageHeatList.c)
 *     MiSetZeroPageThreadPriority @ 0x1404769A4 (MiSetZeroPageThreadPriority.c)
 *     MiAddPageToHeatList @ 0x14048AF80 (MiAddPageToHeatList.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void __fastcall MiZeroPageMakeHot(__int64 a1)
{
  unsigned __int64 v1; // r14
  __int64 v2; // rdi
  __int64 v3; // rbp
  unsigned int v5; // esi
  __int64 v6; // r14
  unsigned __int64 v7; // rdx
  int v8; // [rsp+20h] [rbp-48h] BYREF
  int v9; // [rsp+24h] [rbp-44h] BYREF
  __int128 v10; // [rsp+28h] [rbp-40h] BYREF
  __int64 v11; // [rsp+38h] [rbp-30h]

  v1 = *(_QWORD *)(a1 + 24);
  v2 = *(_QWORD *)(a1 + 80);
  v3 = *(unsigned int *)(a1 + 64);
  v11 = 0LL;
  v9 = 0;
  v8 = 0;
  v10 = 0LL;
  if ( (v1 & 0xC) == 0xC )
  {
    ++*(_DWORD *)(v2 + 4 * v3 + 476);
    if ( KeGetCurrentThread()->Priority )
      v5 = 33;
    else
      v5 = MiSetZeroPageThreadPriority(a1, 1u, 0LL);
    MiInitializePageHeatList((__int64)&v10, 1, 1, 1);
    v6 = (v1 >> 12) & 0x3FFFFFFFFFLL;
    if ( (_DWORD)v3 == (unsigned int)MiGetPfnPageSizeIndexUnsynchronized(48 * v6 - 0x220000000000LL, &v9, &v8) )
      MiAddPageToHeatList(&v10, v6, (unsigned int)v3);
    else
      ++*(_DWORD *)(v2 + 492);
    if ( DWORD1(v10) )
      MiIssuePageHeatList(&v10, v7);
    if ( v5 != 33 )
      MiSetZeroPageThreadPriority(a1, v5, 0LL);
  }
}
