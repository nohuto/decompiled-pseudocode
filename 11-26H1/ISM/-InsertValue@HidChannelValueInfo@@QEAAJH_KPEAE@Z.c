/*
 * XREFs of ?InsertValue@HidChannelValueInfo@@QEAAJH_KPEAE@Z @ 0x18005FBE8
 * Callers:
 *     ?CreateAndInitializeOutputBuffer@HidLampRangeUpdateReportParser@@QEAAJPEBULampRangeUpdateDeviceReport@@AEAV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@PEAI@Z @ 0x18005F94C (-CreateAndInitializeOutputBuffer@HidLampRangeUpdateReportParser@@QEAAJPEBULampRangeUpdateDeviceR.c)
 *     ?CreateAndInitializeOutputBuffer@HidLampAttributesRequestReportParser@@QEAAJPEBULampAttributesRequestDeviceReport@@AEAV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@PEAI@Z @ 0x18008D7F0 (-CreateAndInitializeOutputBuffer@HidLampAttributesRequestReportParser@@QEAAJPEBULampAttributesRe.c)
 *     ?CreateAndInitializeOutputBuffer@HidLampArrayControlReportParser@@QEAAJPEBULampArrayControlDeviceReport@@AEAV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@PEAI@Z @ 0x1800EFFCC (-CreateAndInitializeOutputBuffer@HidLampArrayControlReportParser@@QEAAJPEBULampArrayControlDevic.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HidChannelValueInfo::InsertValue(
        HidChannelValueInfo *this,
        unsigned int a2,
        unsigned __int64 a3,
        unsigned __int8 *a4)
{
  unsigned __int8 v5; // r8
  __int64 v6; // rdx
  unsigned __int8 *v7; // rcx

  if ( (int)a2 < *((_QWORD *)this + 3) || (int)a2 > *((_QWORD *)this + 4) )
    return 2147942487LL;
  if ( *((unsigned int *)this + 12) < a3 )
  {
    v5 = 1;
    v6 = (unsigned __int64)a2 << *((_DWORD *)this + 11);
    v7 = &a4[*((unsigned int *)this + 14) + 1];
    *v7 = v6;
    if ( *((_DWORD *)this + 10) > 1u )
    {
      do
      {
        ++v7;
        v6 >>= 8;
        ++v5;
        *v7 |= v6;
      }
      while ( (unsigned int)v5 < *((_DWORD *)this + 10) );
    }
  }
  return 0LL;
}
