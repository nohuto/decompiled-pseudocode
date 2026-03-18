/*
 * XREFs of ?GetScaledComponentValue@InteractiveControlParser@@SAJPEAUtagINTERACTIVECTRL_COMPONENT_ENTRY@@J@Z @ 0x140302138
 * Callers:
 *     ?SetComponentResolution@InteractiveControlDevice@@QEAAJW4_INTERACTIVECTRL_COMPONENT_TYPE@@JPEAW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z @ 0x14013CBE0 (-SetComponentResolution@InteractiveControlDevice@@QEAAJW4_INTERACTIVECTRL_COMPONENT_TYPE@@JPEAW4.c)
 *     ?ParseInputReport@InteractiveControlParser@@SAJPEAVInteractiveControlDevice@@PEAEKPEAUtagINTERACTIVECTRL_INFO@@@Z @ 0x14025D090 (-ParseInputReport@InteractiveControlParser@@SAJPEAVInteractiveControlDevice@@PEAEKPEAUtagINTERAC.c)
 *     ?BuildDeviceShapeDescriptor@InteractiveControlParser@@CAJPEAVInteractiveControlDevice@@@Z @ 0x140301A84 (-BuildDeviceShapeDescriptor@InteractiveControlParser@@CAJPEAVInteractiveControlDevice@@@Z.c)
 *     ?CreateAndLinkComponent@InteractiveControlParser@@CAJPEAU_HIDP_VALUE_CAPS@@HPEAU_INTERACTIVECTRL_CAPABILITIES@@PEAPEAUtagINTERACTIVECTRL_COMPONENT_ENTRY@@@Z @ 0x140301B4C (-CreateAndLinkComponent@InteractiveControlParser@@CAJPEAU_HIDP_VALUE_CAPS@@HPEAU_INTERACTIVECTRL.c)
 *     ?FindDigitizerForDevice@InteractiveControlParser@@CAJPEAVInteractiveControlDevice@@@Z @ 0x140301E00 (-FindDigitizerForDevice@InteractiveControlParser@@CAJPEAVInteractiveControlDevice@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@44@Z @ 0x140003FC8 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProv.c)
 */

__int64 __fastcall InteractiveControlParser::GetScaledComponentValue(
        struct tagINTERACTIVECTRL_COMPONENT_ENTRY *a1,
        int a2)
{
  __int64 v2; // r10
  __int64 v3; // r9
  __int64 v4; // r8
  int v6; // [rsp+50h] [rbp+8h] BYREF
  int v7; // [rsp+58h] [rbp+10h] BYREF
  int v8; // [rsp+60h] [rbp+18h] BYREF
  const char *v9; // [rsp+68h] [rbp+20h] BYREF

  v2 = *((int *)a1 + 30);
  v3 = *((int *)a1 + 29);
  v4 = v2 * *((unsigned int *)a1 + 31);
  if ( v4 )
    return a2 * v3 / v4;
  if ( (unsigned int)dword_1403AAA68 > 3 )
  {
    v7 = *((_DWORD *)a1 + 31);
    v9 = "InteractiveControlParser::GetScaledComponentValue -> Invalid component configuration.";
    v6 = v2;
    v8 = v3;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)a1,
      (__int64)&unk_14037A970,
      0LL,
      v3,
      (void **)&v9,
      (__int64)&v8,
      (__int64)&v6,
      (__int64)&v7);
  }
  return 1LL;
}
