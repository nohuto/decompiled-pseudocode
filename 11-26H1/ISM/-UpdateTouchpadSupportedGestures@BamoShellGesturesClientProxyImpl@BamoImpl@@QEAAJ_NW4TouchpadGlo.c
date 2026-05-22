/*
 * XREFs of ?UpdateTouchpadSupportedGestures@BamoShellGesturesClientProxyImpl@BamoImpl@@QEAAJ_NW4TouchpadGlobalGestureKinds@Input@Internal@UI@Windows@@@Z @ 0x18015E91C
 * Callers:
 *     ?Thunk_UpdateTouchpadSupportedGestures_16@?$IShellGesturesClientProxy_Receive@VBamoShellGesturesClientProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18015E6E0 (-Thunk_UpdateTouchpadSupportedGestures_16@-$IShellGesturesClientProxy_Receive@VBamoShellGestures.c)
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoShellGesturesClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x18015E700 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoShellGesturesClientProxyImpl@BamoImpl@@UEAAXPEAV.c)
 * Callees:
 *     ??1?$CalloutWrapper@VBamoInputSiteElementProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x180037930 (--1-$CalloutWrapper@VBamoInputSiteElementProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0?$CalloutWrapper@VBamoShellGesturesClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoShellGesturesClientProxyImpl@1@W4PrologEpilogConfig@12@@Z @ 0x180038638 (--0-$CalloutWrapper@VBamoShellGesturesClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft_ea_180038638.c)
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x18003AD30 (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LogOnTouchpadSupportedGesturesChanged@BamoShellGesturesClientProxy@@AEAAXXZ @ 0x18015E4D4 (-LogOnTouchpadSupportedGesturesChanged@BamoShellGesturesClientProxy@@AEAAXXZ.c)
 *     ?LogOnTouchpadSupportedGesturesChanging@BamoShellGesturesClientProxy@@AEAAXW4TouchpadGlobalGestureKinds@Input@Internal@UI@Windows@@@Z @ 0x18015E524 (-LogOnTouchpadSupportedGesturesChanging@BamoShellGesturesClientProxy@@AEAAXW4TouchpadGlobalGestu.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoImpl::BamoShellGesturesClientProxyImpl::UpdateTouchpadSupportedGestures(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  unsigned int v3; // ebp
  char v4; // r14
  BamoShellGesturesClientProxy *v6; // rsi
  int v7; // eax
  int v8; // eax
  __int64 v10[5]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v3 = a3;
  v4 = a2;
  v6 = (BamoShellGesturesClientProxy *)(a1 - 16);
  if ( *(_BYTE *)(a1 + 28) )
  {
    BamoShellGesturesClientProxy::LogOnTouchpadSupportedGesturesChanging();
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoShellGesturesClientProxyImpl>::CalloutWrapper<BamoImpl::BamoShellGesturesClientProxyImpl>(
      (__int64)v10,
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 24LL) + 32LL),
      (void (__fastcall ***)(_QWORD))a1,
      1);
    v7 = (*(__int64 (__fastcall **)(BamoShellGesturesClientProxy *, _QWORD))(*(_QWORD *)v6 + 136LL))(v6, v3);
    if ( v7 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x8270,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v7,
        v10[0]);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoInputSiteElementProxyImpl>::~CalloutWrapper<BamoImpl::BamoInputSiteElementProxyImpl>(v10);
  }
  *(_DWORD *)(a1 + 36) = v3;
  if ( *(_BYTE *)(a1 + 28) )
  {
    BamoShellGesturesClientProxy::LogOnTouchpadSupportedGesturesChanged(v6);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoShellGesturesClientProxyImpl>::CalloutWrapper<BamoImpl::BamoShellGesturesClientProxyImpl>(
      (__int64)v10,
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 24LL) + 32LL),
      (void (__fastcall ***)(_QWORD))a1,
      2);
    v8 = (*(__int64 (__fastcall **)(BamoShellGesturesClientProxy *))(*(_QWORD *)v6 + 144LL))(v6);
    if ( v8 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x827E,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v8,
        v10[0]);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoInputSiteElementProxyImpl>::~CalloutWrapper<BamoImpl::BamoInputSiteElementProxyImpl>(v10);
  }
  if ( v4 )
    Microsoft::BamoImpl::BamoProxyImpl::AckReference((Microsoft::BamoImpl::BamoProxyImpl *)a1, a2, a3);
  return 0LL;
}
