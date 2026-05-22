/*
 * XREFs of ??0InputDeliveryServer@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x18002611C
 * Callers:
 *     ??0InputSystem@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x1800264C0 (--0InputSystem@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C32C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z @ 0x180026AC8 (--0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z.c)
 *     ?Initialize@?$KernelInputConnection@U_MIT_KEYBOARD_INPUT_ATTEMPTED_MESSAGE@@@@QEAAXAEBV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@W4_MIT_ENDPOINT@@V?$function@$$A6AXPEBU_MIT_KEYBOARD_INPUT_ATTEMPTED_MESSAGE@@@Z@std@@@Z @ 0x180041374 (-Initialize@-$KernelInputConnection@U_MIT_KEYBOARD_INPUT_ATTEMPTED_MESSAGE@@@@QEAAXAEBV-$ComPtr@.c)
 *     ?GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ @ 0x18004A64C (-GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ.c)
 *     ??0_lambda_329431f877b8a1cf1c33d43387e7f0d1_@@QEAA@PEAV?$CBaseInputObserverServer@$0L@@@@Z @ 0x18008884C (--0_lambda_329431f877b8a1cf1c33d43387e7f0d1_@@QEAA@PEAV-$CBaseInputObserverServer@$0L@@@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=5
InputDeliveryServer *__fastcall InputDeliveryServer::InputDeliveryServer(
        InputDeliveryServer *this,
        struct ISMBamos_AutoBamos::BamoConnection *a2)
{
  int v3; // eax
  __int64 v4; // r8
  _QWORD v6[7]; // [rsp+20h] [rbp-48h] BYREF
  _QWORD *v7; // [rsp+58h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  char v9; // [rsp+80h] [rbp+18h] BYREF

  *(_QWORD *)this = &BamoInputDeliveryServerPrincipal::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  *((_QWORD *)this + 1) = &InputDeliveryServer::`vftable'{for `IInputDeliveryServerPrincipal'};
  Microsoft::BamoImpl::BamoPrincipalImpl::BamoPrincipalImpl((InputDeliveryServer *)((char *)this + 16), a2);
  *((_QWORD *)this + 2) = &BamoImpl::BamoInputDeliveryServerPrincipalImpl::`vftable';
  *(_QWORD *)this = &InputDeliveryServer::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  *((_QWORD *)this + 1) = &InputDeliveryServer::`vftable'{for `IInputDeliveryServerPrincipal'};
  *((_QWORD *)this + 7) = 0LL;
  *((_OWORD *)this + 4) = 0LL;
  *((_OWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 8) = ISMStatics::GetViewHierarchy();
  *((_DWORD *)this + 18) = 0;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = "CMK:KbdInputAttempted";
  *((_QWORD *)this + 31) = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 7);
  v3 = CoreUICreate((char *)this + 56);
  if ( v3 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xF,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\inputdeliveryserver.cpp",
      (const char *)(unsigned int)v3,
      v6[0]);
  v7 = 0LL;
  v6[0] = off_1801DFF88;
  v6[1] = *(_QWORD *)_lambda_329431f877b8a1cf1c33d43387e7f0d1_::_lambda_329431f877b8a1cf1c33d43387e7f0d1_(&v9, this);
  v7 = v6;
  ((void (__fastcall *)(char *, char *, __int64, _QWORD *))KernelInputConnection<_MIT_KEYBOARD_INPUT_ATTEMPTED_MESSAGE>::Initialize)(
    (char *)this + 104,
    (char *)this + 56,
    v4,
    v6);
  return this;
}
