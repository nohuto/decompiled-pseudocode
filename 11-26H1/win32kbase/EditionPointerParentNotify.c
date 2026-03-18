/*
 * XREFs of EditionPointerParentNotify @ 0x140191508
 * Callers:
 *     ApiSetEditionPointerParentNotify @ 0x1401BD42C (ApiSetEditionPointerParentNotify.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall EditionPointerParentNotify(
        _OWORD *a1,
        __int64 a2,
        __int64 a3))(_OWORD *, __int64, __int64)
{
  __int64 (__fastcall *result)(_OWORD *, __int64, __int64); // rax
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  _OWORD v12[7]; // [rsp+20h] [rbp-78h] BYREF

  result = *(__int64 (__fastcall **)(_OWORD *, __int64, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48)
                                                                + 5688LL);
  if ( result )
  {
    v7 = a1[1];
    v12[0] = *a1;
    v12[2] = a1[2];
    v8 = a1[4];
    v12[1] = v7;
    v9 = a1[3];
    v12[4] = v8;
    v10 = a1[6];
    v12[3] = v9;
    v11 = a1[5];
    v12[6] = v10;
    v12[5] = v11;
    return (__int64 (__fastcall *)(_OWORD *, __int64, __int64))result(v12, a2, a3);
  }
  return result;
}
