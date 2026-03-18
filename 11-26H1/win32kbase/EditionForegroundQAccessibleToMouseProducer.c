/*
 * XREFs of EditionForegroundQAccessibleToMouseProducer @ 0x1401494AC
 * Callers:
 *     ApiSetEditionForegroundQAccessibleToMouseProducer @ 0x14018741C (ApiSetEditionForegroundQAccessibleToMouseProducer.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall EditionForegroundQAccessibleToMouseProducer(
        __int64 *a1,
        __int64 a2,
        unsigned int a3))(__int64 *, __int64, _QWORD)
{
  __int64 (__fastcall *result)(__int64 *, __int64, _QWORD); // rax
  __int64 v6; // xmm0_8
  __int64 v7; // [rsp+20h] [rbp-18h] BYREF
  int v8; // [rsp+28h] [rbp-10h]

  result = *(__int64 (__fastcall **)(__int64 *, __int64, _QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48)
                                                                + 4520LL);
  if ( result )
  {
    v6 = *a1;
    v8 = *((_DWORD *)a1 + 2);
    v7 = v6;
    return (__int64 (__fastcall *)(__int64 *, __int64, _QWORD))result(&v7, 1LL, a3);
  }
  return result;
}
