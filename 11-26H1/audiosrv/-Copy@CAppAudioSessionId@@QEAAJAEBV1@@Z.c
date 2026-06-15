/*
 * XREFs of ?Copy@CAppAudioSessionId@@QEAAJAEBV1@@Z @ 0x180028D64
 * Callers:
 *     ?Copy@CAudioSessionInstanceId@@QEAAJAEBV1@@Z @ 0x180028134 (-Copy@CAudioSessionInstanceId@@QEAAJAEBV1@@Z.c)
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18001A8D8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??4?$CSimpleStringT@G$0A@@ATL@@QEAAAEAV01@AEBV01@@Z @ 0x18002A090 (--4-$CSimpleStringT@G$0A@@ATL@@QEAAAEAV01@AEBV01@@Z.c)
 */

// Hidden C++ exception states: #try_helpers=1
__int64 __fastcall CAppAudioSessionId::Copy(CAppAudioSessionId *this, const struct CAppAudioSessionId *a2)
{
  unsigned int v2; // ebx
  CAppAudioSessionId *v4; // rsi
  const struct CAppAudioSessionId *v5; // rdi
  ATL::CAtlException *v6; // rbx
  ATL::CAtlException *v7; // rbx
  ATL::CAtlException *v8; // [rsp+20h] [rbp-38h] BYREF
  ATL::CAtlException *v9; // [rsp+28h] [rbp-30h] BYREF
  int v12; // [rsp+70h] [rbp+18h]
  int v13; // [rsp+70h] [rbp+18h]

  try
  {
    v5 = a2;
    v4 = this;
    *((_OWORD *)this + 1) = *((_OWORD *)a2 + 1);
    ATL::CSimpleStringT<unsigned short,0>::operator=(this, a2);
  }
  catch ( ATL::CAtlException *v8 )
  {
    v6 = v8;
    if ( *(_DWORD *)v8 == -1073741571 )
      _o__resetstkoflw();
    v12 = *(_DWORD *)v6;
    v2 = *(_DWORD *)v6;
    if ( v12 < 0 )
      goto LABEL_3;
    v4 = this;
    v5 = a2;
  }
  try
  {
    ATL::CSimpleStringT<unsigned short,0>::operator=((char *)v4 + 8, (char *)v5 + 8);
  }
  catch ( ATL::CAtlException *v9 )
  {
    v7 = v9;
    if ( *(_DWORD *)v9 == -1073741571 )
      _o__resetstkoflw();
    v13 = *(_DWORD *)v7;
    v2 = *(_DWORD *)v7;
    if ( v13 < 0 )
    {
LABEL_3:
      AudSrvTraceLoggingErrorHelper("CAppAudioSessionId::Copy", 479, v2);
      return v2;
    }
    v4 = this;
    v5 = a2;
  }
  *((_DWORD *)v4 + 10) = *((_DWORD *)v5 + 10);
  v2 = 0;
  ATL::CSimpleStringT<unsigned short,0>::operator=((char *)v4 + 32, (char *)v5 + 32);
  return v2;
}
