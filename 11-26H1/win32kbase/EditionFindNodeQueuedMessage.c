/*
 * XREFs of EditionFindNodeQueuedMessage @ 0x14015DD0C
 * Callers:
 *     ApiSetEditionFindNodeQueuedMessage @ 0x140163C00 (ApiSetEditionFindNodeQueuedMessage.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall EditionFindNodeQueuedMessage(
        _OWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4))(_OWORD *, __int64, __int64, __int64)
{
  __int64 (__fastcall *result)(_OWORD *, __int64, __int64, __int64); // rax
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  _OWORD v13[7]; // [rsp+30h] [rbp-78h] BYREF

  result = *(__int64 (__fastcall **)(_OWORD *, __int64, __int64, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1)
                                                                                     + 48)
                                                                         + 6168LL);
  if ( result )
  {
    v8 = a1[1];
    v13[0] = *a1;
    v13[2] = a1[2];
    v9 = a1[4];
    v13[1] = v8;
    v10 = a1[3];
    v13[4] = v9;
    v11 = a1[6];
    v13[3] = v10;
    v12 = a1[5];
    v13[6] = v11;
    v13[5] = v12;
    return (__int64 (__fastcall *)(_OWORD *, __int64, __int64, __int64))result(v13, a2, 1LL, a4);
  }
  return result;
}
