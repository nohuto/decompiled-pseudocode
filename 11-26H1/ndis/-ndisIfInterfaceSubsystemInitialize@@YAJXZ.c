/*
 * XREFs of ?ndisIfInterfaceSubsystemInitialize@@YAJXZ @ 0x1401913F4
 * Callers:
 *     ?ndisIfInitializePhase1@@YAJXZ @ 0x140191604 (-ndisIfInitializePhase1@@YAJXZ.c)
 * Callees:
 *     NdisCloseConfiguration @ 0x140020B40 (NdisCloseConfiguration.c)
 *     NdisReadConfiguration @ 0x140020C40 (NdisReadConfiguration.c)
 *     NdisConvertNdisStatusToNtStatus @ 0x14005A5E0 (NdisConvertNdisStatusToNtStatus.c)
 *     NdisOpenProtocolConfiguration @ 0x1400613C0 (NdisOpenProtocolConfiguration.c)
 *     ?ndisIsValidIfStringParts@@YAEPEB_WK@Z @ 0x140090040 (-ndisIsValidIfStringParts@@YAEPEB_WK@Z.c)
 *     memmove @ 0x1400EA1C0 (memmove.c)
 */

__int64 ndisIfInterfaceSubsystemInitialize(void)
{
  unsigned int v1; // ecx
  __int64 v2; // r9
  unsigned int v3; // ecx
  __int64 v4; // r9
  size_t v5; // r8
  _UNICODE_STRING v6; // [rsp+30h] [rbp-30h] BYREF
  UNICODE_STRING Keyword; // [rsp+40h] [rbp-20h] BYREF
  UNICODE_STRING v8; // [rsp+50h] [rbp-10h] BYREF
  int Status; // [rsp+70h] [rbp+10h] BYREF
  PNDIS_CONFIGURATION_PARAMETER ParameterValue; // [rsp+78h] [rbp+18h] BYREF
  NDIS_HANDLE ConfigurationHandle; // [rsp+80h] [rbp+20h] BYREF

  Status = 0;
  KeInitializeSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved);
  ConfigurationHandle = 0LL;
  WPP_MAIN_CB.DeviceObjectExtension = (_DEVOBJ_EXTENSION *)&WPP_MAIN_CB.SectorSize;
  *(_QWORD *)&WPP_MAIN_CB.SectorSize = &WPP_MAIN_CB.SectorSize;
  *(_QWORD *)&v6.Length = 655368LL;
  v6.Buffer = L"Ndis";
  NdisOpenProtocolConfiguration(&Status, &ConfigurationHandle, &v6);
  if ( Status )
    return NdisConvertNdisStatusToNtStatus(Status);
  Keyword.Buffer = L"DefaultIfLoopbackDesc";
  ParameterValue = 0LL;
  *(_QWORD *)&Keyword.Length = 2883626LL;
  NdisReadConfiguration(&Status, &ParameterValue, ConfigurationHandle, &Keyword, NdisParameterString);
  if ( Status
    || !ndisIsValidIfStringParts(
          (const wchar_t *)ParameterValue->ParameterData.StringData.Length,
          ParameterValue->ParameterData.StringData.Length) )
  {
    word_14011F240 = 54;
    wmemcpy((wchar_t *)&xmmword_14011F242, L"Software Loopback Interface", 27);
  }
  else
  {
    word_14011F240 = v1;
    memmove(&xmmword_14011F242, *(const void **)(v2 + 16), v1);
  }
  v8.Buffer = L"DefaultIfLoopbackAlias";
  *(_QWORD *)&v8.Length = 3014700LL;
  NdisReadConfiguration(&Status, &ParameterValue, ConfigurationHandle, &v8, NdisParameterString);
  if ( Status
    || !ndisIsValidIfStringParts(
          (const wchar_t *)ParameterValue->ParameterData.StringData.Length,
          ParameterValue->ParameterData.StringData.Length) )
  {
    word_14011F450 = 50;
    wmemcpy((wchar_t *)&xmmword_14011F452, L"Loopback Pseudo-Interface", 25);
  }
  else
  {
    v5 = 512LL;
    word_14011F450 = v3;
    if ( (unsigned __int16)v3 <= 0x200u )
      v5 = v3;
    memmove(&xmmword_14011F452, *(const void **)(v4 + 16), v5);
  }
  NdisCloseConfiguration(ConfigurationHandle);
  return 0LL;
}
