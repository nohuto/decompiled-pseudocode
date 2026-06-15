/*
 * XREFs of ?Initialize@CEndpointResourcePool@Sarm@@QEAAJPEAUISaDeviceProxy@@PEAU__POSITION@@@Z @ 0x1801276B8
 * Callers:
 *     ?SetupEndpointResourcePool@CSpatialAudioResourceManager@Sarm@@AEAAJPEAUISaDeviceProxy@@PEAPEAVCEndpointResourcePool@2@@Z @ 0x180126D4C (-SetupEndpointResourcePool@CSpatialAudioResourceManager@Sarm@@AEAAJPEAUISaDeviceProxy@@PEAPEAVCE.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@@Z @ 0x1800044A0 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@@-$_tlgWriteTe.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180011720 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$shared_ptr@VCXvmPowerReference@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180084124 (--4-$shared_ptr@VCXvmPowerReference@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??4?$shared_ptr@UPool@CEndpointResourcePool@Sarm@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18012489C (--4-$shared_ptr@UPool@CEndpointResourcePool@Sarm@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??$make_shared@UPool@CEndpointResourcePool@Sarm@@AEAIAEAIAEA_J@std@@YA?AV?$shared_ptr@UPool@CEndpointResourcePool@Sarm@@@0@AEAI0AEA_J@Z @ 0x1801274C0 (--$make_shared@UPool@CEndpointResourcePool@Sarm@@AEAIAEAIAEA_J@std@@YA-AV-$shared_ptr@UPool@CEnd.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801279C4 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Sarm::CEndpointResourcePool::Initialize(
        Sarm::CEndpointResourcePool *this,
        struct ISaDeviceProxy *a2,
        struct __POSITION *a3)
{
  int v5; // esi
  __int64 v6; // rdx
  __int64 result; // rax
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  bool v12; // al
  __int64 *v13; // rax
  __int64 *v14; // rax
  int v15; // [rsp+20h] [rbp-78h]
  unsigned int v16; // [rsp+50h] [rbp-48h] BYREF
  int v17; // [rsp+54h] [rbp-44h] BYREF
  __int64 v18; // [rsp+58h] [rbp-40h] BYREF
  const wchar_t *v19; // [rsp+60h] [rbp-38h] BYREF
  __int64 v20; // [rsp+68h] [rbp-30h] BYREF
  std::_Ref_count_base *v21; // [rsp+70h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]
  unsigned int v23; // [rsp+A0h] [rbp+8h] BYREF
  int v24; // [rsp+A8h] [rbp+10h] BYREF
  int v25; // [rsp+B0h] [rbp+18h] BYREF
  int v26; // [rsp+B8h] [rbp+20h] BYREF

  v25 = 0;
  v24 = 0;
  v23 = 0;
  v18 = 0LL;
  *(_QWORD *)this = a3;
  if ( !a2 )
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x23,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\endpointresourcepool.cpp",
      (const char *)0x887C0103LL,
      v15);
  v5 = (*(__int64 (__fastcall **)(struct ISaDeviceProxy *, int *, unsigned int *, int *))(*(_QWORD *)a2 + 216LL))(
         a2,
         &v24,
         &v23,
         &v25);
  if ( v5 < 0 )
  {
    v6 = 36LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\endpointresourcepool.cpp",
      (const char *)(unsigned int)v5);
    return (unsigned int)v5;
  }
  v8 = (*(__int64 (__fastcall **)(struct ISaDeviceProxy *, __int64 *))(*(_QWORD *)a2 + 224LL))(a2, &v18);
  v5 = v8;
  if ( v8 < 0 )
  {
    v6 = 37LL;
    goto LABEL_5;
  }
  if ( (unsigned int)dword_1801D32B0 > 4 )
  {
    v19 = (const wchar_t *)(*(__int64 (__fastcall **)(struct ISaDeviceProxy *))(*(_QWORD *)a2 + 24LL))(a2);
    v20 = v18;
    v26 = v25;
    v16 = v23;
    v17 = v24;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>>(
      v9,
      (__int64)&unk_1801A7FFD,
      v10,
      v11,
      (__int64)&v17,
      (__int64)&v16,
      (__int64)&v26,
      (__int64)&v20,
      &v19);
  }
  try
  {
    v12 = v25 != 0;
    *((_BYTE *)this + 8) = v25 != 0;
    if ( v12 )
    {
      if ( !Sarm::CEndpointResourcePool::s_sharedPool )
      {
        v13 = std::make_shared<Sarm::CEndpointResourcePool::Pool,unsigned int &,unsigned int &,__int64 &>(
                &v20,
                &v24,
                &v23,
                &v18);
        std::shared_ptr<CXvmPowerReference>::operator=(&Sarm::CEndpointResourcePool::s_sharedPool, v13);
        if ( v21 )
          std::_Ref_count_base::_Decref(v21);
      }
      std::shared_ptr<Sarm::CEndpointResourcePool::Pool>::operator=(
        (_QWORD *)this + 2,
        &Sarm::CEndpointResourcePool::s_sharedPool);
    }
    else
    {
      v14 = std::make_shared<Sarm::CEndpointResourcePool::Pool,unsigned int &,unsigned int &,__int64 &>(
              &v20,
              &v24,
              &v23,
              &v18);
      std::shared_ptr<CXvmPowerReference>::operator=((_QWORD *)this + 2, v14);
      if ( v21 )
        std::_Ref_count_base::_Decref(v21);
    }
    result = 0LL;
  }
  catch ( std::bad_alloc )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3A,
      (int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\endpointresourcepool.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
  return result;
}
