/*
 * XREFs of ?GetForCurrentThread@InputSystemInternalClientConnection@@SA?AV?$ComPtr@VInputSystemInternalClientConnection@@@WRL@Microsoft@@XZ @ 0x180088E04
 * Callers:
 *     ??0DeviceInputHost@@AEAA@XZ @ 0x180088C68 (--0DeviceInputHost@@AEAA@XZ.c)
 *     ??0InputProcess@@AEAA@XZ @ 0x1800CB948 (--0InputProcess@@AEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C32C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?AddRef@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ @ 0x1800427C8 (-AddRef@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VInputSystemInternalServerConnection@@@WRL@Microsoft@@IEAAKXZ @ 0x180043718 (-InternalRelease@-$ComPtr@VInputSystemInternalServerConnection@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Create@InputSystemInternalClientConnection@@SA?AV?$ComPtr@VInputSystemInternalClientConnection@@@WRL@Microsoft@@PEAUIMessageSession@@@Z @ 0x18007B0C8 (-Create@InputSystemInternalClientConnection@@SA-AV-$ComPtr@VInputSystemInternalClientConnection@.c)
 *     ??0_lambda_329431f877b8a1cf1c33d43387e7f0d1_@@QEAA@PEAV?$CBaseInputObserverServer@$0L@@@@Z @ 0x18008884C (--0_lambda_329431f877b8a1cf1c33d43387e7f0d1_@@QEAA@PEAV-$CBaseInputObserverServer@$0L@@@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     std::function_void___cdecl(enum_CallOnThreadExit::CallbackReason)_::function_void___cdecl(enum_CallOnThreadExit::CallbackReason)___lambda_a541461e8d66da6faf437e54554206d1__0_ @ 0x180130A30 (std--function_void___cdecl(enum_CallOnThreadExit--CallbackReason)_--function_void___cdecl(enum_C.c)
 *     ?Register@CallOnThreadExit@@YAXV?$function@$$A6AXW4CallbackReason@CallOnThreadExit@@@Z@std@@@Z @ 0x180133D34 (-Register@CallOnThreadExit@@YAXV-$function@$$A6AXW4CallbackReason@CallOnThreadExit@@@Z@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
Microsoft::Bamo::BaseBamoConnection **__fastcall InputSystemInternalClientConnection::GetForCurrentThread(
        Microsoft::Bamo::BaseBamoConnection **a1)
{
  __int64 v2; // rdi
  int v3; // eax
  Microsoft::Bamo::BaseBamoConnection **v4; // rax
  Microsoft::Bamo::BaseBamoConnection *v5; // rcx
  _QWORD *v6; // rax
  __int64 v7; // rax
  Microsoft::Bamo::BaseBamoConnection *v8; // rcx
  int v10; // [rsp+20h] [rbp-58h]
  _BYTE v11[72]; // [rsp+28h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  __int64 v13; // [rsp+88h] [rbp+10h] BYREF
  Microsoft::Bamo::BaseBamoConnection *v14; // [rsp+90h] [rbp+18h] BYREF

  v2 = *((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index);
  if ( !*(_QWORD *)(v2 + 16) )
  {
    v13 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v13);
    v3 = CoreUICreate(&v13);
    if ( v3 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x27,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\bamos\\server\\system\\inputsysteminternalclientconnection.cpp",
        (const char *)(unsigned int)v3,
        v10);
    v4 = InputSystemInternalClientConnection::Create(&v14, v13);
    v5 = *v4;
    *v4 = 0LL;
    *(_QWORD *)(v2 + 16) = v5;
    Microsoft::WRL::ComPtr<InputSystemInternalServerConnection>::InternalRelease(&v14);
    v6 = _lambda_329431f877b8a1cf1c33d43387e7f0d1_::_lambda_329431f877b8a1cf1c33d43387e7f0d1_(
           &v14,
           *(_QWORD *)(v2 + 16));
    v7 = std::function_void___cdecl_enum_CallOnThreadExit::CallbackReason__::function_void___cdecl_enum_CallOnThreadExit::CallbackReason____lambda_a541461e8d66da6faf437e54554206d1__0_(
           v11,
           v6);
    CallOnThreadExit::Register(v7);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v13);
  }
  v8 = *(Microsoft::Bamo::BaseBamoConnection **)(v2 + 16);
  *a1 = v8;
  if ( v8 )
    Microsoft::Bamo::BaseBamoConnection::AddRef(v8);
  return a1;
}
