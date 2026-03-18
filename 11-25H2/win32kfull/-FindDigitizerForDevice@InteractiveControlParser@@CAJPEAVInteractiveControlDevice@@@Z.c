/*
 * XREFs of ?FindDigitizerForDevice@InteractiveControlParser@@CAJPEAVInteractiveControlDevice@@@Z @ 0x1402F2688
 * Callers:
 *     ?ParseInputReport@InteractiveControlParser@@SAJPEAVInteractiveControlDevice@@PEAEKPEAUtagINTERACTIVECTRL_INFO@@@Z @ 0x140222F60 (-ParseInputReport@InteractiveControlParser@@SAJPEAVInteractiveControlDevice@@PEAEKPEAUtagINTERAC.c)
 *     ?BuildDeviceAttributes@InteractiveControlParser@@CAJPEAU_INTERACTIVECTRL_CAPABILITIES@@PEAVInteractiveControlDevice@@@Z @ 0x1402F2144 (-BuildDeviceAttributes@InteractiveControlParser@@CAJPEAU_INTERACTIVECTRL_CAPABILITIES@@PEAVInter.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x140005910 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     ?GetScaledComponentValue@InteractiveControlParser@@SAJPEAUtagINTERACTIVECTRL_COMPONENT_ENTRY@@J@Z @ 0x1402F29BC (-GetScaledComponentValue@InteractiveControlParser@@SAJPEAUtagINTERACTIVECTRL_COMPONENT_ENTRY@@J@.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall InteractiveControlParser::FindDigitizerForDevice(struct InteractiveControlDevice *a1)
{
  char *v1; // rsi
  char *v2; // rbx
  unsigned int v4; // edi
  char *v5; // rcx
  __int16 v6; // ax
  __int64 v7; // r8
  __int64 v8; // r9
  const char *v10; // [rsp+48h] [rbp-28h] BYREF
  __int128 v11; // [rsp+50h] [rbp-20h] BYREF

  v1 = (char *)a1 + 184;
  v2 = (char *)*((_QWORD *)a1 + 23);
  v11 = 0LL;
  v4 = 0;
  while ( v2 != v1 )
  {
    v5 = v2;
    v2 = *(char **)v2;
    if ( *((_DWORD *)v5 + 4) == 1 )
    {
      v6 = *((_WORD *)v5 + 40);
      if ( v6 == 48 )
      {
        DWORD2(v11) = InteractiveControlParser::GetScaledComponentValue(
                        (struct tagINTERACTIVECTRL_COMPONENT_ENTRY *)v5,
                        *((_DWORD *)v5 + 19) - *((_DWORD *)v5 + 18))
                    + 1;
      }
      else if ( v6 == 49 )
      {
        HIDWORD(v11) = InteractiveControlParser::GetScaledComponentValue(
                         (struct tagINTERACTIVECTRL_COMPONENT_ENTRY *)v5,
                         *((_DWORD *)v5 + 19) - *((_DWORD *)v5 + 18))
                     + 1;
      }
    }
  }
  RIMFindTouchDigitizerWithSize(&v11, (char *)a1 + 240);
  if ( !*((_QWORD *)a1 + 30) )
  {
    if ( (unsigned int)dword_14039BBF8 > 3 )
    {
      v10 = "InteractiveControlParser::FindDigitizerForDevice failed to find matching digitizer.";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)&dword_14039BBF8,
        (__int64)&unk_14036BC78,
        v7,
        v8,
        &v10);
    }
    return (unsigned int)-1073741632;
  }
  return v4;
}
