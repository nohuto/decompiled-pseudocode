/*
 * XREFs of EditionxxxBroadcastSPIChange @ 0x1401C1AC8
 * Callers:
 *     ApiSetEditionxxxBroadcastSPIChange @ 0x1401C1A80 (ApiSetEditionxxxBroadcastSPIChange.c)
 *     UnpackMouseSettings @ 0x14021C740 (UnpackMouseSettings.c)
 *     UnpackPenSettings @ 0x14021C800 (UnpackPenSettings.c)
 *     UnpackTouchpadSettings @ 0x14021C8D4 (UnpackTouchpadSettings.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall EditionxxxBroadcastSPIChange(
        __int64 a1,
        __int64 a2,
        unsigned int a3))(_QWORD, _QWORD, _QWORD)
{
  unsigned int v4; // edi
  __int64 (__fastcall *result)(_QWORD, _QWORD, _QWORD); // rax

  v4 = a1;
  result = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48) + 2856LL);
  if ( result )
    return (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))result(v4, 0LL, a3);
  return result;
}
