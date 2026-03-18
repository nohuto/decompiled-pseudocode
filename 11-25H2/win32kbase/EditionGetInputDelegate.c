/*
 * XREFs of EditionGetInputDelegate @ 0x1401079E8
 * Callers:
 *     ApiSetEditionGetInputDelegate @ 0x140195368 (ApiSetEditionGetInputDelegate.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall EditionGetInputDelegate(_OWORD *a1, __int64 a2))(_OWORD *)
{
  __int64 (__fastcall *result)(_OWORD *); // rax
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  _OWORD v9[7]; // [rsp+20h] [rbp-78h] BYREF

  result = *(__int64 (__fastcall **)(_OWORD *))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 6176LL);
  if ( result )
  {
    v4 = a1[1];
    v9[0] = *a1;
    v9[2] = a1[2];
    v5 = a1[4];
    v9[1] = v4;
    v6 = a1[3];
    v9[4] = v5;
    v7 = a1[6];
    v9[3] = v6;
    v8 = a1[5];
    v9[6] = v7;
    v9[5] = v8;
    return (__int64 (__fastcall *)(_OWORD *))result(v9);
  }
  return result;
}
