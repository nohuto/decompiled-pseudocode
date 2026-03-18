/*
 * XREFs of SetManipulationInputTargetTransform @ 0x1401569D8
 * Callers:
 *     ApiSetSetManipulationInputTargetTransform @ 0x1401B9508 (ApiSetSetManipulationInputTargetTransform.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall SetManipulationInputTargetTransform(
        _OWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5))(_OWORD *, __int64, __int64, __int64, int)
{
  __int64 (__fastcall *result)(_OWORD *, __int64, __int64, __int64, int); // rax
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  _OWORD v15[7]; // [rsp+30h] [rbp-78h] BYREF

  result = *(__int64 (__fastcall **)(_OWORD *, __int64, __int64, __int64, int))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1)
                                                                                          + 48)
                                                                              + 5896LL);
  if ( result )
  {
    v10 = a1[1];
    v15[0] = *a1;
    v15[2] = a1[2];
    v11 = a1[4];
    v15[1] = v10;
    v12 = a1[3];
    v15[4] = v11;
    v13 = a1[6];
    v15[3] = v12;
    v14 = a1[5];
    v15[6] = v13;
    v15[5] = v14;
    return (__int64 (__fastcall *)(_OWORD *, __int64, __int64, __int64, int))result(v15, a2, a3, a4, a5);
  }
  return result;
}
