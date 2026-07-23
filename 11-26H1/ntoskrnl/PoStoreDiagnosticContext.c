/*
 * XREFs of PoStoreDiagnosticContext @ 0x140426240
 * Callers:
 *     ExGetWakeTimerList @ 0x1404241AC (ExGetWakeTimerList.c)
 *     PopTraceThermalRequestActiveActivity @ 0x1404255AC (PopTraceThermalRequestActiveActivity.c)
 *     PopTraceThermalRequestPassiveHistogram @ 0x1404258E0 (PopTraceThermalRequestPassiveHistogram.c)
 *     PopTracePowerLimitHistogram @ 0x14060C8BC (PopTracePowerLimitHistogram.c)
 *     PopDiagTracePowerLimitRequest @ 0x1407D74B0 (PopDiagTracePowerLimitRequest.c)
 *     PopDiagTracePowerLimitRequestValueUpdate @ 0x1407D77C8 (PopDiagTracePowerLimitRequestValueUpdate.c)
 *     PopExecutePowerAction @ 0x1409F3918 (PopExecutePowerAction.c)
 *     PopDiagTraceThermalRequest @ 0x140AC398C (PopDiagTraceThermalRequest.c)
 *     PopUmpoSendPowerRequestCreate @ 0x140ADAD84 (PopUmpoSendPowerRequestCreate.c)
 *     PopGetPowerRequestListInfo @ 0x140AECE04 (PopGetPowerRequestListInfo.c)
 *     ExGetNextWakeTime @ 0x140C12EE0 (ExGetNextWakeTime.c)
 * Callees:
 *     PoStoreRequester @ 0x1404263B8 (PoStoreRequester.c)
 *     memmove @ 0x140742080 (memmove.c)
 */

__int64 __fastcall PoStoreDiagnosticContext(__int64 a1, unsigned __int64 *a2, unsigned __int64 *a3)
{
  unsigned __int64 v3; // r14
  __int64 result; // rax
  __int64 v8; // r9
  unsigned __int64 v9; // rcx
  unsigned int v10; // edi
  bool v11; // dl
  _BYTE *v12; // rcx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // [rsp+40h] [rbp+8h] BYREF

  v3 = *a3;
  v14 = *a3;
  result = PoStoreRequester(a1, a2, &v14, 0LL);
  v8 = *(_QWORD *)(a1 + 40);
  v9 = v14;
  v10 = result;
  v11 = (int)result >= 0;
  if ( v8 )
  {
    v12 = (_BYTE *)(((unsigned __int64)a2 + v14 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
    v13 = v12 - (_BYTE *)a2 + v8;
    *a3 = v13;
    if ( v11 && v3 >= v13 )
    {
      a2[4] = v12 - (_BYTE *)a2;
      *a2 = v13;
      memmove(v12, (const void *)((a1 + 55) & 0xFFFFFFFFFFFFFFF8uLL), *(_QWORD *)(a1 + 40));
      return v10;
    }
    else
    {
      return 3221225507LL;
    }
  }
  else
  {
    if ( (int)result >= 0 )
    {
      *a2 = v14;
      a2[4] = 0LL;
    }
    *a3 = v9;
  }
  return result;
}
