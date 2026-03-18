/*
 * XREFs of EditionGetInputDelegate @ 0x14010AAA8
 * Callers:
 *     ApiSetEditionGetInputDelegate @ 0x14010A470 (ApiSetEditionGetInputDelegate.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall EditionGetInputDelegate(_OWORD *a1))(_OWORD *)
{
  __int64 (__fastcall *result)(_OWORD *); // rax
  __int128 v3; // xmm1
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  _OWORD v8[7]; // [rsp+20h] [rbp-78h] BYREF

  result = *(__int64 (__fastcall **)(_OWORD *))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48) + 5736LL);
  if ( result )
  {
    v3 = a1[1];
    v8[0] = *a1;
    v8[2] = a1[2];
    v4 = a1[4];
    v8[1] = v3;
    v5 = a1[3];
    v8[4] = v4;
    v6 = a1[6];
    v8[3] = v5;
    v7 = a1[5];
    v8[6] = v6;
    v8[5] = v7;
    return (__int64 (__fastcall *)(_OWORD *))result(v8);
  }
  return result;
}
