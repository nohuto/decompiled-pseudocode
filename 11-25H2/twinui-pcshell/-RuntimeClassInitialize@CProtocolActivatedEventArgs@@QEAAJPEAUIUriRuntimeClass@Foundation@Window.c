/*
 * XREFs of ?RuntimeClassInitialize@CProtocolActivatedEventArgs@@QEAAJPEAUIUriRuntimeClass@Foundation@Windows@@@Z @ 0x1806530D8
 * Callers:
 *     ??$MakeAndInitialize@VCProtocolActivatedEventArgs@@UIProtocolActivatedEventArgs@Activation@ApplicationModel@Windows@@PEAUIUriRuntimeClass@Foundation@5@@Details@WRL@Microsoft@@YAJPEAPEAUIProtocolActivatedEventArgs@Activation@ApplicationModel@Windows@@$$QEAPEAUIUriRuntimeClass@Foundation@6@@Z @ 0x18032946C (--$MakeAndInitialize@VCProtocolActivatedEventArgs@@UIProtocolActivatedEventArgs@Activation@Appli.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x18001A30C (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Initialize@String@Internal@Windows@@QEAAJPEBGI@Z @ 0x1801B8D6C (-Initialize@String@Internal@Windows@@QEAAJPEBGI@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x18065EE5C (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CProtocolActivatedEventArgs::RuntimeClassInitialize(
        CProtocolActivatedEventArgs *this,
        struct Windows::Foundation::IUriRuntimeClass *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 *v6; // rsi
  int AgileReference; // ebx
  __int64 v8; // rdx
  __int64 *v10; // rax
  __int64 *v11; // rbx
  __int64 v12; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 *v14; // [rsp+40h] [rbp+8h] BYREF
  __int64 v15; // [rsp+50h] [rbp+18h] BYREF

  v6 = (__int64 *)((char *)this + 328);
  if ( *((_QWORD *)this + 41) )
    MicrosoftTelemetryAssertTriggeredNoArgs(this, a2, a3, a4);
  AgileReference = Windows::Internal::String::Initialize((HSTRING *)this + 42, &LocaleName, 0);
  if ( AgileReference < 0 )
  {
    v8 = 39LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"onecoreuap\\shell\\lib\\activationeventsshell\\protocolactivated.cpp",
      (const char *)(unsigned int)AgileReference);
    return (unsigned int)AgileReference;
  }
  v14 = v6;
  v10 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *(&v14);
  v11 = v10;
  if ( a2 )
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v10);
    AgileReference = RoGetAgileReference(0LL, &GUID_9e365e57_48b2_4160_956f_c7385120bbfc, a2, v11);
    if ( AgileReference < 0 )
    {
      v8 = 40LL;
      goto LABEL_5;
    }
  }
  else
  {
    v15 = 0LL;
    v14 = (__int64 *)*v10;
    *v10 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v14);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v15);
  }
  v12 = *((_QWORD *)this + 43);
  *((_QWORD *)this + 43) = 0LL;
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  GetProcessReference((char *)this + 344);
  return 0LL;
}
