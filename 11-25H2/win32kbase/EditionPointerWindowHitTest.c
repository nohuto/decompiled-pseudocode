/*
 * XREFs of EditionPointerWindowHitTest @ 0x14012B50C
 * Callers:
 *     ApiSetEditionPointerWindowHitTest @ 0x140196430 (ApiSetEditionPointerWindowHitTest.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 *     memset @ 0x140243000 (memset.c)
 */

_OWORD *__fastcall EditionPointerWindowHitTest(
        _OWORD *a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12)
{
  __int64 (__fastcall *v16)(_OWORD *, __int64, __int64, _QWORD, int, __int64, __int64, __int64, __int64, __int64, __int64, __int64); // r10
  _OWORD *v17; // rax
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  _OWORD *result; // rax
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  _OWORD v29[7]; // [rsp+70h] [rbp-78h] BYREF

  v16 = *(__int64 (__fastcall **)(_OWORD *, __int64, __int64, _QWORD, int, __int64, __int64, __int64, __int64, __int64, __int64, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 6112LL);
  if ( v16 )
  {
    v17 = (_OWORD *)v16(v29, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
    v18 = v17[1];
    *a1 = *v17;
    v19 = v17[2];
    a1[1] = v18;
    v20 = v17[3];
    a1[2] = v19;
    v21 = v17[4];
    a1[3] = v20;
    v22 = v17[5];
    a1[4] = v21;
    v23 = v17[6];
  }
  else
  {
    memset(v29, 0, sizeof(v29));
    v25 = v29[1];
    *a1 = v29[0];
    v26 = v29[2];
    a1[1] = v25;
    v27 = v29[3];
    a1[2] = v26;
    v28 = v29[4];
    a1[3] = v27;
    v22 = v29[5];
    a1[4] = v28;
    v23 = v29[6];
  }
  result = a1;
  a1[5] = v22;
  a1[6] = v23;
  return result;
}
