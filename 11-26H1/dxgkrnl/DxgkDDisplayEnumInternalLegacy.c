/*
 * XREFs of DxgkDDisplayEnumInternalLegacy @ 0x1403C1FD0
 * Callers:
 *     DxgkDDisplayEnum @ 0x1403C1FB0 (DxgkDDisplayEnum.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     Feature_PanelBufferControl__private_IsEnabledDeviceUsageNoInline @ 0x14005D4C4 (Feature_PanelBufferControl__private_IsEnabledDeviceUsageNoInline.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x1400A56A4 (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     RtlCopyToUser @ 0x1401966EC (RtlCopyToUser.c)
 *     ?IsMismatchedKernelAbiSession@@YA_NXZ @ 0x1403C2464 (-IsMismatchedKernelAbiSession@@YA_NXZ.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_D3DKMT_DDISPLAY_ENUM_ADAPTER@@$00@@QEAAPEAU_D3DKMT_DDISPLAY_ENUM_ADAPTER@@I@Z @ 0x1403C2508 (-AllocateElements@-$PagedPoolZeroedArray@U_D3DKMT_DDISPLAY_ENUM_ADAPTER@@$00@@QEAAPEAU_D3DKMT_DD.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_D3DKMT_DDISPLAY_ENUM_TARGET@@$00@@QEAAPEAU_D3DKMT_DDISPLAY_ENUM_TARGET@@I@Z @ 0x1403C258C (-AllocateElements@-$PagedPoolZeroedArray@U_D3DKMT_DDISPLAY_ENUM_TARGET@@$00@@QEAAPEAU_D3DKMT_DDI.c)
 *     ?DxgkDDisplayEnumCoreLegacy@@YAJPEAU_D3DKMT_DDISPLAY_ENUM@@@Z @ 0x1403C2610 (-DxgkDDisplayEnumCoreLegacy@@YAJPEAU_D3DKMT_DDISPLAY_ENUM@@@Z.c)
 *     ?DxgkDDisplayEnumCoreTranslate@@YAJPEAU_D3DKMT_DDISPLAY_ENUM@@@Z @ 0x1403C2704 (-DxgkDDisplayEnumCoreTranslate@@YAJPEAU_D3DKMT_DDISPLAY_ENUM@@@Z.c)
 */

__int64 __fastcall DxgkDDisplayEnumInternalLegacy(struct _D3DKMT_DDISPLAY_ENUM *a1, char a2)
{
  PVOID v3; // rcx
  PVOID v4; // rdx
  unsigned int v5; // eax
  __int64 v6; // r8
  int v7; // eax
  int v8; // ebx
  volatile void *Address[2]; // [rsp+50h] [rbp-6F8h] BYREF
  volatile void *v11[2]; // [rsp+60h] [rbp-6E8h]
  void *Src[2]; // [rsp+70h] [rbp-6D8h] BYREF
  void *v13[2]; // [rsp+80h] [rbp-6C8h]
  PVOID v14; // [rsp+90h] [rbp-6B8h] BYREF
  _BYTE v15[568]; // [rsp+98h] [rbp-6B0h] BYREF
  int v16; // [rsp+2D0h] [rbp-478h]
  PVOID P; // [rsp+2E0h] [rbp-468h] BYREF
  _BYTE v18[1088]; // [rsp+2E8h] [rbp-460h] BYREF
  int v19; // [rsp+728h] [rbp-20h]

  if ( !a2 )
  {
    if ( (unsigned int)Feature_PanelBufferControl__private_IsEnabledDeviceUsageNoInline() )
      return DxgkDDisplayEnumCoreTranslate(a1);
    else
      return DxgkDDisplayEnumCoreLegacy(a1);
  }
  *(_OWORD *)Address = 0LL;
  *(_OWORD *)v11 = 0LL;
  if ( IsMismatchedKernelAbiSession() )
  {
    MicrosoftTelemetryAssertTriggeredMsgKM((__int64)"DxgkDDisplayEnum is called from container with different OS version.");
    v8 = -1073741735;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 10753;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"DxgkDDisplayEnum is called from container with different OS version., returning 0x%I64x",
      -1073741735LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return (unsigned int)v8;
  }
  RtlCopyFromUser(Address, a1, 0x20uLL);
  ProbeForWrite(Address[1], 568LL * HIDWORD(Address[0]), 4u);
  ProbeForWrite(v11[1], 1088LL * HIDWORD(v11[0]), 4u);
  v3 = 0LL;
  v14 = 0LL;
  v16 = 0;
  v4 = 0LL;
  P = 0LL;
  v19 = 0;
  v5 = HIDWORD(Address[0]);
  if ( HIDWORD(Address[0]) )
  {
    PagedPoolZeroedArray<_D3DKMT_DDISPLAY_ENUM_ADAPTER,1>::AllocateElements(&v14, HIDWORD(Address[0]));
    v5 = HIDWORD(Address[0]);
    v3 = v14;
    v4 = P;
  }
  v6 = HIDWORD(v11[0]);
  if ( HIDWORD(v11[0]) )
  {
    PagedPoolZeroedArray<_D3DKMT_DDISPLAY_ENUM_TARGET,1>::AllocateElements(&P, HIDWORD(v11[0]));
    v6 = HIDWORD(v11[0]);
    v5 = HIDWORD(Address[0]);
    v3 = v14;
    v4 = P;
  }
  if ( (!v5 || v3) && (!(_DWORD)v6 || v4) )
  {
    Src[0] = (void *)Address[0];
    v13[0] = (void *)v11[0];
    Src[1] = v3;
    v13[1] = v4;
    if ( (unsigned int)Feature_PanelBufferControl__private_IsEnabledDeviceUsageNoInline() )
      v7 = DxgkDDisplayEnumCoreTranslate((struct _D3DKMT_DDISPLAY_ENUM *)Src);
    else
      v7 = DxgkDDisplayEnumCoreLegacy((struct _D3DKMT_DDISPLAY_ENUM *)Src);
    v8 = v7;
    LODWORD(Address[0]) = Src[0];
    LODWORD(v11[0]) = v13[0];
    RtlCopyToUser(a1, Address, 0x20uLL);
    if ( v8 >= 0 )
    {
      if ( Address[1] )
        RtlCopyToUser((void *)Address[1], Src[1], 568LL * LODWORD(Address[0]));
      if ( v11[1] )
        RtlCopyToUser((void *)v11[1], v13[1], 1088LL * LODWORD(v11[0]));
    }
    if ( P != v18 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v19 = 0;
    if ( v14 != v15 )
    {
      if ( v14 )
        ExFreePoolWithTag(v14, 0);
    }
    return (unsigned int)v8;
  }
  WdLogSingleEntry2(2LL, v5, v6);
  WdLogGlobalForLineNumber = 10786;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Failed to allocate buffers for DispBrokerEnum: 0x%I64x adapter, 0x%I64x targets",
    HIDWORD(Address[0]),
    HIDWORD(v11[0]),
    0LL,
    0LL,
    0LL);
  if ( P != v18 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v19 = 0;
  if ( v14 != v15 && v14 )
    ExFreePoolWithTag(v14, 0);
  return 3221225495LL;
}
