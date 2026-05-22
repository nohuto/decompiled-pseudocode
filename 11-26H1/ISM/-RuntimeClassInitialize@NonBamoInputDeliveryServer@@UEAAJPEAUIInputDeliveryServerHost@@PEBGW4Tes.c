/*
 * XREFs of ?RuntimeClassInitialize@NonBamoInputDeliveryServer@@UEAAJPEAUIInputDeliveryServerHost@@PEBGW4TestMode@1@@Z @ 0x180046350
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C32C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InitPort@NonBamoInputDeliveryServer@@AEAAXXZ @ 0x1800451DC (-InitPort@NonBamoInputDeliveryServer@@AEAAXXZ.c)
 *     ?InitConversation@NonBamoInputDeliveryServer@@AEAAXPEBG@Z @ 0x180046498 (-InitConversation@NonBamoInputDeliveryServer@@AEAAXPEBG@Z.c)
 *     ?Initialize@?$KernelInputConnection@UtagQMSGINPUTREPORT@@@@QEAAXAEBV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@W4_MIT_ENDPOINT@@V?$function@$$A6AXPEBUtagQMSGINPUTREPORT@@@Z@std@@@Z @ 0x180077F7C (-Initialize@-$KernelInputConnection@UtagQMSGINPUTREPORT@@@@QEAAXAEBV-$ComPtr@UIMessageSession@@@.c)
 *     ??0_lambda_329431f877b8a1cf1c33d43387e7f0d1_@@QEAA@PEAV?$CBaseInputObserverServer@$0L@@@@Z @ 0x18008884C (--0_lambda_329431f877b8a1cf1c33d43387e7f0d1_@@QEAA@PEAV-$CBaseInputObserverServer@$0L@@@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     CreateInputServiceProxy @ 0x18008DBBC (CreateInputServiceProxy.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall NonBamoInputDeliveryServer::RuntimeClassInitialize(
        __int64 a1,
        __int64 a2,
        const unsigned __int16 *a3,
        int a4)
{
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // r8
  int InputServiceProxy; // eax
  int v13[2]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v14; // [rsp+28h] [rbp-40h]
  int *v15; // [rsp+58h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  char v17; // [rsp+70h] [rbp+8h] BYREF

  if ( *(_QWORD *)(a1 + 32) != a2 )
  {
    if ( a2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
    v8 = *(_QWORD *)(a1 + 32);
    *(_QWORD *)(a1 + 32) = a2;
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  *(_DWORD *)(a1 + 40) = a4;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(a1 + 48));
  v9 = CoreUICreate(a1 + 48);
  if ( v9 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x35,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\nonbamoinputdeliveryserver.cpp",
      (const char *)(unsigned int)v9,
      v13[0]);
  NonBamoInputDeliveryServer::InitPort((NonBamoInputDeliveryServer *)a1);
  NonBamoInputDeliveryServer::InitConversation((NonBamoInputDeliveryServer *)a1, a3);
  if ( *(_DWORD *)(a1 + 40) != 1 )
  {
    *(_QWORD *)v13 = &off_1801EE488;
    v14 = *(_QWORD *)_lambda_329431f877b8a1cf1c33d43387e7f0d1_::_lambda_329431f877b8a1cf1c33d43387e7f0d1_(&v17, a1);
    v15 = v13;
    KernelInputConnection<tagQMSGINPUTREPORT>::Initialize(a1 + 72, a1 + 48, v10, v13);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(a1 + 280));
  InputServiceProxy = CreateInputServiceProxy((a1 + 8) & -(__int64)(a1 != 0), a1 + 280);
  if ( InputServiceProxy < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x3E,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\nonbamoinputdeliveryserver.cpp",
      (const char *)(unsigned int)InputServiceProxy,
      v13[0]);
  return 0LL;
}
