/*
 * XREFs of EditionIsPointerQueuedMessageCoalescable @ 0x1400CA6CC
 * Callers:
 *     ApiSetEditionIsPointerQueuedMessageCoalescable @ 0x1400CBE38 (ApiSetEditionIsPointerQueuedMessageCoalescable.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall EditionIsPointerQueuedMessageCoalescable(
        _OWORD *a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        int a6))(_OWORD *, __int64, _QWORD, _QWORD, __int64, int)
{
  __int64 (__fastcall *result)(_OWORD *, __int64, _QWORD, _QWORD, __int64, int); // rax
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  _OWORD v16[7]; // [rsp+40h] [rbp-78h] BYREF

  result = *(__int64 (__fastcall **)(_OWORD *, __int64, _QWORD, _QWORD, __int64, int))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1)
                                                                                                 + 48)
                                                                                     + 6152LL);
  if ( result )
  {
    v11 = a1[1];
    v16[0] = *a1;
    v16[2] = a1[2];
    v12 = a1[4];
    v16[1] = v11;
    v13 = a1[3];
    v16[4] = v12;
    v14 = a1[6];
    v16[3] = v13;
    v15 = a1[5];
    v16[6] = v14;
    v16[5] = v15;
    return (__int64 (__fastcall *)(_OWORD *, __int64, _QWORD, _QWORD, __int64, int))result(v16, a2, a3, a4, a5, a6);
  }
  return result;
}
