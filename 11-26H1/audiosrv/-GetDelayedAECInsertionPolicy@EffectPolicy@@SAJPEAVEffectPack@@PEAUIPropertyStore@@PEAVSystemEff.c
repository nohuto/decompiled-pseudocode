/*
 * XREFs of ?GetDelayedAECInsertionPolicy@EffectPolicy@@SAJPEAVEffectPack@@PEAUIPropertyStore@@PEAVSystemEffectDescriptor@@U_GUID@@PEAW4INBOX_AEC_INSERTION_POLICY@@AEAU_AEC_POLICY_RESULTS@@@Z @ 0x180009970
 * Callers:
 *     _lambda_c30c4322ad4fbb47bc43bb3cdcd427e3_::operator() @ 0x180136F24 (_lambda_c30c4322ad4fbb47bc43bb3cdcd427e3_--operator().c)
 * Callees:
 *     ?Allocate@CComAllocator@ATL@@SAPEAX_K@Z @ 0x180009344 (-Allocate@CComAllocator@ATL@@SAPEAX_K@Z.c)
 *     ??$copy_to@VCAudioSession@@@?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEAPEAVCAudioSession@@@Z @ 0x18000990C (--$copy_to@VCAudioSession@@@-$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@QEBAJP.c)
 *     ??A?$span@VCAudioSignalProcessingModeArray@@$0?0@gsl@@QEBAAEAVCAudioSignalProcessingModeArray@@_K@Z @ 0x180009940 (--A-$span@VCAudioSignalProcessingModeArray@@$0-0@gsl@@QEBAAEAVCAudioSignalProcessingModeArray@@_.c)
 *     ?IsMicArray@EffectPolicy@@CA_NPEAUIPropertyStore@@AEAU_AEC_POLICY_RESULTS@@@Z @ 0x180009EB4 (-IsMicArray@EffectPolicy@@CA_NPEAUIPropertyStore@@AEAU_AEC_POLICY_RESULTS@@@Z.c)
 *     ??4?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAV01@AEBV01@@Z @ 0x180009F80 (--4-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?RemoveAll@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ @ 0x18000AC90 (-RemoveAll@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x18000F5F0 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsValidMicArrayForAEC@EffectPolicy@@CA_NPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIPropertyStore@@AEAU_AEC_POLICY_RESULTS@@@Z @ 0x180034C38 (-IsValidMicArrayForAEC@EffectPolicy@@CA_NPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audio.c)
 *     memcpy_0 @ 0x1800B31FC (memcpy_0.c)
 *     ?CreateCompositeSystemEffect@@YAJPEBU_tlgProvider_t@@W4__MIDL___MIDL_itf_audioenginecore_0000_0000_0002@@W4FormatChangePosition@@W4AUDIO_DIRECTION@@IPEBU_GUID@@PEAPEAUICompositeSystemEffect@@@Z @ 0x18014F30C (-CreateCompositeSystemEffect@@YAJPEBU_tlgProvider_t@@W4__MIDL___MIDL_itf_audioenginecore_0000_00.c)
 *     ?IsIntegratedAudioDevice@EffectPolicy@@CAJPEAUIPropertyStore@@PEAH@Z @ 0x18014FEF0 (-IsIntegratedAudioDevice@EffectPolicy@@CAJPEAUIPropertyStore@@PEAH@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall EffectPolicy::GetDelayedAECInsertionPolicy(
        struct EffectPack *a1,
        struct IPropertyStore *a2,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 *a3,
        struct _GUID *a4,
        enum INBOX_AEC_INSERTION_POLICY *a5,
        struct _AEC_POLICY_RESULTS *a6)
{
  struct EffectPack *v7; // r14
  void *v8; // rbx
  void *v9; // r12
  __int64 v10; // rdi
  int v11; // edi
  __int64 v12; // r14
  int v13; // eax
  unsigned int v14; // edi
  __int64 v15; // rdi
  unsigned __int64 v16; // rcx
  void *v17; // rax
  __int64 v18; // rax
  _OWORD *v19; // r12
  int v20; // eax
  int CompositeSystemEffect; // eax
  void *v22; // rcx
  _QWORD *v23; // rax
  __int64 v24; // rdi
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // r10
  __int64 v29; // r11
  __int64 v30; // r12
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rcx
  int v35; // [rsp+20h] [rbp-79h]
  int v36; // [rsp+20h] [rbp-79h]
  int v37; // [rsp+20h] [rbp-79h]
  void *Block; // [rsp+40h] [rbp-59h] BYREF
  __int64 v39; // [rsp+48h] [rbp-51h]
  unsigned int v40; // [rsp+50h] [rbp-49h] BYREF
  __int64 v41; // [rsp+58h] [rbp-41h] BYREF
  __int64 v42; // [rsp+60h] [rbp-39h] BYREF
  __int64 v43; // [rsp+68h] [rbp-31h] BYREF
  LPVOID pv; // [rsp+70h] [rbp-29h] BYREF
  struct EffectPack *v45; // [rsp+78h] [rbp-21h]
  struct IPropertyStore *v46; // [rsp+80h] [rbp-19h]
  void *v47; // [rsp+88h] [rbp-11h]
  _OWORD v48[5]; // [rsp+90h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+4Fh]

  *(_QWORD *)&v48[0] = a4;
  v46 = a2;
  v7 = a1;
  v45 = a1;
  pv = 0LL;
  v40 = 0;
  v8 = 0LL;
  v47 = 0LL;
  v42 = 0LL;
  v41 = 0LL;
  v9 = 0LL;
  Block = 0LL;
  v39 = 0LL;
  v10 = 0LL;
  v43 = 0LL;
  if ( EffectPolicy::IsMicArray(a2, a6)
    && !EffectPolicy::IsValidMicArrayForAEC(*((struct CEndpointCharacteristics **)v7 + 198), a3[12], v46, a6) )
  {
    *(_DWORD *)a5 = 2;
    *((_DWORD *)a6 + 16) = 5;
    goto LABEL_54;
  }
  v39 = 0LL;
  v11 = 0;
  if ( *((_QWORD *)a3 + 2) )
  {
    ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator=(&Block);
    v12 = *((_QWORD *)a3 + 2);
    v13 = *(_DWORD *)(v12 + 8);
    if ( (_DWORD)v39 != v13 )
    {
      v14 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xBA,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
        (const char *)0x8007000ELL,
        v35);
LABEL_18:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x136,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\effectpolicy.cpp",
        (const char *)0x8007000ELL,
        v36);
      if ( Block )
        free(Block);
      if ( v41 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v41 + 16LL))(v41);
      if ( v42 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v42 + 16LL))(v42);
      v22 = 0LL;
      goto LABEL_16;
    }
    v15 = 40LL;
    if ( v13 <= 0 )
      v15 = 56LL;
    v8 = 0LL;
    v16 = *(int *)(v15 + v12 + 8);
    if ( *(_DWORD *)(v15 + v12 + 8) )
    {
      if ( 0xFFFFFFFFFFFFFFFFuLL / v16 < 0x10 )
        goto LABEL_17;
      v16 *= 16LL;
    }
    v17 = ATL::CComAllocator::Allocate(v16);
    v8 = v17;
    if ( v17 )
    {
      memcpy_0(v17, *(const void **)(v15 + v12), 16LL * *(int *)(v15 + v12 + 8));
      v47 = v8;
      CoTaskMemFree(0LL);
      v11 = *(_DWORD *)(v15 + v12 + 8);
      v7 = v45;
      goto LABEL_14;
    }
LABEL_17:
    v14 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC0,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
      (const char *)0x8007000ELL,
      v35);
    CoTaskMemFree(v8);
    goto LABEL_18;
  }
LABEL_14:
  v18 = gsl::span<CAudioSignalProcessingModeArray,-1>::operator[]((unsigned __int64 *)v7 + 214, *((int *)a3 + 12));
  v19 = *(_OWORD **)&v48[0];
  v20 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(v18, *(_QWORD *)&v48[0]);
  v37 = v11;
  CompositeSystemEffect = CreateCompositeSystemEffect(0LL, 2LL, v20 != -1);
  v14 = CompositeSystemEffect;
  if ( CompositeSystemEffect < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x13F,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\effectpolicy.cpp",
      (const char *)(unsigned int)CompositeSystemEffect,
      v37);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v43);
    ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(&Block);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v41);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v42);
    v22 = v8;
LABEL_16:
    CoTaskMemFree(v22);
    goto LABEL_63;
  }
  wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>::copy_to<CAudioSession>(
    (__int64 *)(*((_QWORD *)v45 + 198) + 40LL),
    &v43);
  v48[0] = *v19;
  v10 = v43;
  if ( (*(int (__fastcall **)(__int64, __int64, _OWORD *, __int64, _DWORD, _QWORD, __int64 *))(*(_QWORD *)v42 + 24LL))(
         v42,
         v43,
         v48,
         1LL,
         *((_DWORD *)a3 + 12),
         0LL,
         &v41) >= 0
    && (*(int (__fastcall **)(__int64, LPVOID *, unsigned int *, _QWORD))(*(_QWORD *)v41 + 24LL))(v41, &pv, &v40, 0LL) >= 0 )
  {
    *((_DWORD *)a6 + 9) = 0;
    if ( v40 )
    {
      v23 = pv;
      v24 = v40;
      v25 = *(_QWORD *)GUID_6f64adbe_8211_11e2_8c70_2c27d7f001fa.Data4;
      v26 = *(_QWORD *)&GUID_6f64adbe_8211_11e2_8c70_2c27d7f001fa.Data1;
      v27 = *(_QWORD *)GUID_6f64adbf_8211_11e2_8c70_2c27d7f001fa.Data4;
      v28 = *(_QWORD *)&GUID_6f64adbf_8211_11e2_8c70_2c27d7f001fa.Data1;
      v29 = *(_QWORD *)GUID_6f64adc0_8211_11e2_8c70_2c27d7f001fa.Data4;
      v30 = *(_QWORD *)&GUID_6f64adc0_8211_11e2_8c70_2c27d7f001fa.Data1;
      do
      {
        v31 = *v23 - v26;
        if ( *v23 == v26 )
          v31 = v23[1] - v25;
        if ( !v31 )
        {
          *((_DWORD *)a6 + 9) |= 2u;
          v25 = *(_QWORD *)GUID_6f64adbe_8211_11e2_8c70_2c27d7f001fa.Data4;
          v26 = *(_QWORD *)&GUID_6f64adbe_8211_11e2_8c70_2c27d7f001fa.Data1;
          v27 = *(_QWORD *)GUID_6f64adbf_8211_11e2_8c70_2c27d7f001fa.Data4;
          v28 = *(_QWORD *)&GUID_6f64adbf_8211_11e2_8c70_2c27d7f001fa.Data1;
          v29 = *(_QWORD *)GUID_6f64adc0_8211_11e2_8c70_2c27d7f001fa.Data4;
          v30 = *(_QWORD *)&GUID_6f64adc0_8211_11e2_8c70_2c27d7f001fa.Data1;
        }
        v32 = *v23 - v28;
        if ( *v23 == v28 )
          v32 = v23[1] - v27;
        if ( !v32 )
        {
          *((_DWORD *)a6 + 9) |= 4u;
          v25 = *(_QWORD *)GUID_6f64adbe_8211_11e2_8c70_2c27d7f001fa.Data4;
          v26 = *(_QWORD *)&GUID_6f64adbe_8211_11e2_8c70_2c27d7f001fa.Data1;
          v27 = *(_QWORD *)GUID_6f64adbf_8211_11e2_8c70_2c27d7f001fa.Data4;
          v28 = *(_QWORD *)&GUID_6f64adbf_8211_11e2_8c70_2c27d7f001fa.Data1;
          v29 = *(_QWORD *)GUID_6f64adc0_8211_11e2_8c70_2c27d7f001fa.Data4;
          v30 = *(_QWORD *)&GUID_6f64adc0_8211_11e2_8c70_2c27d7f001fa.Data1;
        }
        v33 = *v23 - v30;
        if ( *v23 == v30 )
          v33 = v23[1] - v29;
        if ( !v33 )
        {
          *((_DWORD *)a6 + 9) |= 8u;
          v25 = *(_QWORD *)GUID_6f64adbe_8211_11e2_8c70_2c27d7f001fa.Data4;
          v26 = *(_QWORD *)&GUID_6f64adbe_8211_11e2_8c70_2c27d7f001fa.Data1;
          v27 = *(_QWORD *)GUID_6f64adbf_8211_11e2_8c70_2c27d7f001fa.Data4;
          v28 = *(_QWORD *)&GUID_6f64adbf_8211_11e2_8c70_2c27d7f001fa.Data1;
          v29 = *(_QWORD *)GUID_6f64adc0_8211_11e2_8c70_2c27d7f001fa.Data4;
          v30 = *(_QWORD *)&GUID_6f64adc0_8211_11e2_8c70_2c27d7f001fa.Data1;
        }
        v23 += 2;
        --v24;
      }
      while ( v24 );
      v10 = v43;
    }
  }
  if ( (*((_BYTE *)a6 + 36) & 4) != 0 && (*((_DWORD *)a3 + 12) == 3 || (*((_BYTE *)a6 + 36) & 2) != 0) )
  {
    EffectPolicy::IsIntegratedAudioDevice(v46, (int *)a6 + 10);
    if ( *((_DWORD *)a6 + 1) != 2 || !*((_DWORD *)a6 + 10) )
    {
      v9 = Block;
      if ( (*((_BYTE *)a6 + 36) & 8) != 0 )
      {
        *(_DWORD *)a5 = 0;
        *((_DWORD *)a6 + 16) = 9;
      }
      else
      {
        *(_DWORD *)a5 = 3;
        *((_DWORD *)a6 + 16) = 7;
      }
      goto LABEL_54;
    }
    *(_DWORD *)a5 = 2;
    *((_DWORD *)a6 + 16) = 0;
  }
  else
  {
    *(_DWORD *)a5 = 2;
    *((_DWORD *)a6 + 16) = 8;
  }
  v9 = Block;
LABEL_54:
  *((_DWORD *)a6 + 15) = *(_DWORD *)a5;
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  if ( v9 )
    free(v9);
  if ( v41 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v41 + 16LL))(v41);
  if ( v42 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v42 + 16LL))(v42);
  CoTaskMemFree(v8);
  v14 = 0;
LABEL_63:
  CoTaskMemFree(pv);
  return v14;
}
