/*
 * XREFs of ?ValidateReportData@HidLampMultiUpdateReportParser@@AEAAJPEBULampMultiUpdateDeviceReport@@@Z @ 0x1800600C8
 * Callers:
 *     ?CreateAndInitializeOutputBuffer@HidLampMultiUpdateReportParser@@QEAAJPEBULampMultiUpdateDeviceReport@@AEAV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@PEAI@Z @ 0x18005FC4C (-CreateAndInitializeOutputBuffer@HidLampMultiUpdateReportParser@@QEAAJPEBULampMultiUpdateDeviceR.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HidLampMultiUpdateReportParser::ValidateReportData(
        HidLampMultiUpdateReportParser *this,
        const struct LampMultiUpdateDeviceReport *a2)
{
  __int64 result; // rax

  result = 0LL;
  if ( !*((_QWORD *)a2 + 1)
    || !*((_QWORD *)a2 + 2) && *((_BYTE *)this + 324)
    || !*((_QWORD *)a2 + 3) && *((_BYTE *)this + 325)
    || !*((_QWORD *)a2 + 4) && *((_BYTE *)this + 326) )
  {
    return 2147942487LL;
  }
  if ( !*((_QWORD *)a2 + 5) )
    return *((_BYTE *)this + 327) != 0 ? 0x80070057 : 0;
  return result;
}
