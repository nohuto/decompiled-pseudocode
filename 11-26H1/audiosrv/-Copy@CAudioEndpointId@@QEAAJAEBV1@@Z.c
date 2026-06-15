/*
 * XREFs of ?Copy@CAudioEndpointId@@QEAAJAEBV1@@Z @ 0x180028564
 * Callers:
 *     ?Copy@CAudioSessionInstanceId@@QEAAJAEBV1@@Z @ 0x180028134 (-Copy@CAudioSessionInstanceId@@QEAAJAEBV1@@Z.c)
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18001A8D8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??4?$CSimpleStringT@G$0A@@ATL@@QEAAAEAV01@AEBV01@@Z @ 0x18002A090 (--4-$CSimpleStringT@G$0A@@ATL@@QEAAAEAV01@AEBV01@@Z.c)
 */

__int64 __fastcall CAudioEndpointId::Copy(CAudioEndpointId *this, const struct CAudioEndpointId *a2)
{
  unsigned int v2; // ebx
  int *v4; // rbx
  ATL::CAtlException *v5; // [rsp+20h] [rbp-18h] BYREF
  int v6; // [rsp+40h] [rbp+8h]

  try
  {
    v2 = 0;
    ATL::CSimpleStringT<unsigned short,0>::operator=(this, a2);
  }
  catch ( ATL::CAtlException *v5 )
  {
    v4 = (int *)v5;
    if ( *(_DWORD *)v5 == -1073741571 )
      _o__resetstkoflw();
    v6 = *v4;
    v2 = *v4;
    if ( v6 < 0 )
      AudSrvTraceLoggingErrorHelper("CAudioEndpointId::Copy", 157, v6);
  }
  return v2;
}
