/*
 * XREFs of ?UpdateBtAudioStreamContextIfNecessary@CBtAudioResourceManagerBase@@IEAAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x1800E7748
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_8fcbd9b75bc588af2273aa990fa2fe7f__void_::_Do_call @ 0x1800E7B70 (std--_Func_impl_no_alloc__lambda_8fcbd9b75bc588af2273aa990fa2fe7f__void_--_Do_call.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180016090 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ??1?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001D260 (--1-$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z @ 0x18001DBC0 (-GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BCFBC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?DoSecondaryProfileRenderStreamGroupsExist@CBtAudioResourceManagerBase@@IEAA_NPEAVCEndpointStore@@@Z @ 0x1800E1F3C (-DoSecondaryProfileRenderStreamGroupsExist@CBtAudioResourceManagerBase@@IEAA_NPEAVCEndpointStore.c)
 *     ?GetBTAudio_StreamContextFromStreamCounts@CBtAudioResourceManagerBase@@IEAA?AW4BTAudio_StreamContext@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x1800E2A18 (-GetBTAudio_StreamContextFromStreamCounts@CBtAudioResourceManagerBase@@IEAA-AW4BTAudio_StreamCon.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CBtAudioResourceManagerBase::UpdateBtAudioStreamContextIfNecessary(
        const unsigned __int16 **this,
        int a2)
{
  __int64 v2; // rsi
  unsigned int BTAudio_StreamContextFromStreamCounts; // ebp
  RTL_SRWLOCK *v5; // rcx
  struct CEndpointStore *v6; // rbx
  char v7; // al
  const unsigned __int16 *v8; // r8
  __int64 (__fastcall *v9)(const unsigned __int16 **, _QWORD, __int128 *); // rbx
  __int128 *v10; // rax
  int v11; // eax
  struct CEndpointStore *v12; // [rsp+20h] [rbp-68h] BYREF
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+28h] [rbp-60h] BYREF
  __int128 v14; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v15[16]; // [rsp+40h] [rbp-48h] BYREF
  _BYTE v16[16]; // [rsp+50h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v2 = a2;
  BTAudio_StreamContextFromStreamCounts = CBtAudioResourceManagerBase::GetBTAudio_StreamContextFromStreamCounts(
                                            (__int64)this,
                                            a2);
  v12 = 0LL;
  if ( (int)CEndpointStoreCache::GetEndpointStore(v5, this[7], &v12) >= 0 )
  {
    v6 = v12;
    (*(void (__fastcall **)(_QWORD, struct _RTL_CRITICAL_SECTION **))(**((_QWORD **)v12 + 13) + 128LL))(
      *((_QWORD *)v12 + 13),
      &v13);
    v7 = CBtAudioResourceManagerBase::DoSecondaryProfileRenderStreamGroupsExist((CBtAudioResourceManagerBase *)this, v6);
    v8 = *this;
    v9 = (__int64 (__fastcall *)(const unsigned __int16 **, _QWORD, __int128 *))*((_QWORD *)*this + 20);
    if ( v7 )
      v10 = (__int128 *)(*((__int64 (__fastcall **)(const unsigned __int16 **, _BYTE *))v8 + 17))(this, v15);
    else
      v10 = (__int128 *)(*((__int64 (__fastcall **)(const unsigned __int16 **, _BYTE *))v8 + 16))(this, v16);
    v14 = *v10;
    BTAudio_StreamContextFromStreamCounts |= v9(this, (unsigned int)v2, &v14);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v13);
  }
  wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>::~com_ptr_t<CEndpointStore,wil::err_returncode_policy>((volatile signed __int32 **)&v12);
  if ( BTAudio_StreamContextFromStreamCounts != *((_DWORD *)this + v2 + 127) && *((_DWORD *)this + 129) )
  {
    v11 = (*((__int64 (__fastcall **)(const unsigned __int16 **, _QWORD, _QWORD))*this + 21))(
            this,
            (unsigned int)v2,
            BTAudio_StreamContextFromStreamCounts);
    if ( v11 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        1888LL,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
        (const char *)(unsigned int)v11);
  }
}
