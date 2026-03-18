/*
 * XREFs of ?FindDigitizerForDevice@InteractiveControlParser@@CAJPEAVInteractiveControlDevice@@@Z @ 0x140301E00
 * Callers:
 *     ?ParseInputReport@InteractiveControlParser@@SAJPEAVInteractiveControlDevice@@PEAEKPEAUtagINTERACTIVECTRL_INFO@@@Z @ 0x14025D090 (-ParseInputReport@InteractiveControlParser@@SAJPEAVInteractiveControlDevice@@PEAEKPEAUtagINTERAC.c)
 *     ?BuildDeviceAttributes@InteractiveControlParser@@CAJPEAU_INTERACTIVECTRL_CAPABILITIES@@PEAVInteractiveControlDevice@@@Z @ 0x1403018BC (-BuildDeviceAttributes@InteractiveControlParser@@CAJPEAU_INTERACTIVECTRL_CAPABILITIES@@PEAVInter.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1401DCD48 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     ?GetScaledComponentValue@InteractiveControlParser@@SAJPEAUtagINTERACTIVECTRL_COMPONENT_ENTRY@@J@Z @ 0x140302138 (-GetScaledComponentValue@InteractiveControlParser@@SAJPEAUtagINTERACTIVECTRL_COMPONENT_ENTRY@@J@.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall InteractiveControlParser::FindDigitizerForDevice(struct InteractiveControlDevice *a1)
{
  struct tagINTERACTIVECTRL_COMPONENT_ENTRY *v1; // rsi
  struct tagINTERACTIVECTRL_COMPONENT_ENTRY *v2; // rbx
  unsigned int v4; // edi
  struct tagINTERACTIVECTRL_COMPONENT_ENTRY *v5; // rcx
  struct tagINTERACTIVECTRL_COMPONENT_ENTRY *v6; // rdx
  struct tagINTERACTIVECTRL_COMPONENT_ENTRY *v7; // r8
  __int16 v8; // ax
  __int64 v9; // r8
  __int64 v10; // r9
  int v12; // [rsp+40h] [rbp-30h] BYREF
  int v13; // [rsp+44h] [rbp-2Ch] BYREF
  const char *v14; // [rsp+48h] [rbp-28h] BYREF
  __int128 v15; // [rsp+50h] [rbp-20h] BYREF

  v1 = (struct InteractiveControlDevice *)((char *)a1 + 184);
  v2 = (struct tagINTERACTIVECTRL_COMPONENT_ENTRY *)*((_QWORD *)a1 + 23);
  v15 = 0LL;
  v4 = 0;
  while ( v2 != v1 )
  {
    v5 = v2;
    v6 = v2;
    v7 = v2;
    v2 = *(struct tagINTERACTIVECTRL_COMPONENT_ENTRY **)v2;
    if ( *((_DWORD *)v5 + 4) == 1 )
    {
      v8 = *((_WORD *)v6 + 40);
      if ( v8 == 48 )
      {
        DWORD2(v15) = InteractiveControlParser::GetScaledComponentValue(v5, *((_DWORD *)v6 + 19) - *((_DWORD *)v7 + 18))
                    + 1;
      }
      else if ( v8 == 49 )
      {
        HIDWORD(v15) = InteractiveControlParser::GetScaledComponentValue(
                         v5,
                         *((_DWORD *)v6 + 19) - *((_DWORD *)v6 + 18))
                     + 1;
      }
    }
  }
  RIMFindTouchDigitizerWithSize(&v15, (char *)a1 + 240);
  if ( !*((_QWORD *)a1 + 30) )
  {
    if ( (unsigned int)dword_1403AAA68 > 3 )
    {
      v12 = HIDWORD(v15);
      v13 = DWORD2(v15);
      v14 = "InteractiveControlParser::FindDigitizerForDevice failed to find matching digitizer.";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)&dword_1403AAA68,
        byte_14037A7EA,
        v9,
        v10,
        (void **)&v14,
        (__int64)&v13,
        (__int64)&v12);
    }
    return (unsigned int)-1073741632;
  }
  return v4;
}
