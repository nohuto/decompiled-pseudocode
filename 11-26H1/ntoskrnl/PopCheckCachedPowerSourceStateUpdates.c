/*
 * XREFs of PopCheckCachedPowerSourceStateUpdates @ 0x1409C2300
 * Callers:
 *     PopBatteryApplyCompositeState @ 0x1409C2820 (PopBatteryApplyCompositeState.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x14072BC00 (ZwUpdateWnfStateData.c)
 */

NTSTATUS PopCheckCachedPowerSourceStateUpdates()
{
  NTSTATUS result; // eax
  NTSTATUS v1; // [rsp+40h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v2; // [rsp+48h] [rbp-40h] BYREF
  NTSTATUS *v3; // [rsp+68h] [rbp-20h]
  __int64 v4; // [rsp+70h] [rbp-18h]

  if ( word_140F10885 != (_WORD)xmmword_140F10840
    || qword_140F10888 != *((_QWORD *)&xmmword_140F10840 + 1)
    || dword_140F10890 != (_DWORD)xmmword_140F10860
    || qword_140F10894 != __PAIR64__(xmmword_140F10870, DWORD2(xmmword_140F10860))
    || unk_140F1089C != DWORD1(xmmword_140F10870)
    || (result = DWORD2(xmmword_140F10870), dword_140F108A0 != DWORD2(xmmword_140F10870)) )
  {
    qword_140F10888 = *((_QWORD *)&xmmword_140F10840 + 1);
    dword_140F10890 = xmmword_140F10860;
    LODWORD(qword_140F10894) = DWORD2(xmmword_140F10860);
    *(__int64 *)((char *)&qword_140F10894 + 4) = xmmword_140F10870;
    word_140F10885 = xmmword_140F10840;
    dword_140F108A0 = DWORD2(xmmword_140F10870);
    byte_140F10884 = 0;
    result = ZwUpdateWnfStateData(&WNF_PO_POWER_SOURCE_STATE_CHANGE, &byte_140F10884, 0x20u, 0LL, 0LL, 0, 0);
    if ( (unsigned int)dword_140E07560 > 5 )
    {
      v1 = result;
      v4 = 4LL;
      v3 = &v1;
      return tlgWriteTransfer_EtwWriteTransfer(
               (__int64)&dword_140E07560,
               (unsigned __int8 *)byte_14004E8E3,
               0LL,
               0LL,
               3u,
               &v2);
    }
  }
  return result;
}
