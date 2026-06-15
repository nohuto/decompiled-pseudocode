/*
 * XREFs of ?GetConnectorTypeForStream@@YA?AW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUEndpointCharacteristicsDescriptor@@KW4_AUDCLNT_SHAREMODE@@HPEBUtWAVEFORMATEX@@PEAUIProcessSubmixProxy@@PEAUIUnknown@@@Z @ 0x180111E58
 * Callers:
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAUEndpointCharacteristicsDescriptor@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@22PEBU_GUID@@77KPEBGKPEBUSPATIAL_STREAM_PROPERTIES@@W4_BridgeStreamProperties@@2KPEAUIProcessSubmixProxy@@PEAUSystemAudioStream@@@Z @ 0x180088410 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAU.c)
 * Callees:
 *     ?HasHardwareAudioEngine@CEndpointCharacteristics@@QEAAHXZ @ 0x18000E2D8 (-HasHardwareAudioEngine@CEndpointCharacteristics@@QEAAHXZ.c)
 *     ??1?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001D260 (--1-$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z @ 0x18001DBC0 (-GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x1800397BC (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@0@@Z @ 0x180043A48 (--$_Destroy_range@V-$allocator@V-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180044828 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180057B18 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?HardwareLoopbackEnabled@EffectPack@@QEAAHXZ @ 0x1800666C0 (-HardwareLoopbackEnabled@EffectPack@@QEAAHXZ.c)
 *     ?IsFormatSupportedByHwAudioEngine@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z @ 0x180091294 (-IsFormatSupportedByHwAudioEngine@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall GetConnectorTypeForStream(
        RTL_SRWLOCK *a1,
        int a2,
        enum _AUDCLNT_SHAREMODE a3,
        int a4,
        const struct tWAVEFORMATEX *a5,
        struct IProcessSubmixProxy *a6,
        struct IUnknown *a7)
{
  int v7; // r12d
  enum _AUDCLNT_SHAREMODE v8; // r13d
  char v9; // r15
  CEndpointCharacteristics **v10; // rsi
  int v12; // edi
  unsigned int v13; // ebx
  char v14; // di
  int v15; // eax
  const char *v16; // r9
  __int64 *v17; // rcx
  unsigned __int128 v18; // kr10_16
  char v19; // [rsp+20h] [rbp-78h]
  struct CEndpointStore *v20; // [rsp+28h] [rbp-70h] BYREF
  int v21; // [rsp+30h] [rbp-68h]
  unsigned __int128 v22; // [rsp+38h] [rbp-60h] BYREF
  __int64 v23; // [rsp+48h] [rbp-50h]
  __int64 v24; // [rsp+50h] [rbp-48h] BYREF
  __int64 v25; // [rsp+58h] [rbp-40h]
  unsigned __int64 v26; // [rsp+60h] [rbp-38h]
  RTL_SRWLOCK *v27; // [rsp+68h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]
  char v29; // [rsp+A8h] [rbp+10h]

  v29 = a2;
  v7 = a4;
  v8 = a3;
  v9 = a2;
  v10 = (CEndpointCharacteristics **)a1;
  v21 = a4;
  v27 = a1;
  if ( (a2 & 0x400000) != 0 )
    return 3LL;
  v12 = a2 & 0x20000;
  v13 = 0;
  if ( a6 && v12 || a3 == AUDCLNT_SHAREMODE_SHARED && a7 )
    return 0LL;
  v20 = 0LL;
  CEndpointStoreCache::GetEndpointStore(a1, *((const unsigned __int16 **)a1->Ptr + 6), &v20);
  if ( !(unsigned int)EffectPack::HardwareLoopbackEnabled(v10[1]) || !v12 )
    goto LABEL_28;
  v14 = 0;
  v19 = 0;
  if ( !g_UseSoftwareLoopbackOnMatchFormat )
    goto LABEL_23;
  try
  {
    v22 = 0LL;
    v23 = 0LL;
    v15 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int128 *))(**((_QWORD **)v20 + 13) + 96LL))(
            *((_QWORD *)v20 + 13),
            &v22);
    v17 = (__int64 *)v22;
    if ( v15 >= 0 )
    {
      v18 = v22;
      v26 = *((_QWORD *)&v22 + 1);
      while ( (_QWORD)v18 != *((_QWORD *)&v18 + 1) )
      {
        v25 = *(_QWORD *)v18;
        v24 = v25;
        Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(&v24);
        if ( v14 || (v14 = 0, (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v25 + 168LL))(v25)) )
          v14 = 1;
        v19 = v14;
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v24);
        v17 = (__int64 *)v22;
        v18 = __PAIR128__(v26, (__int64)v18 + 8);
      }
    }
    if ( v17 )
    {
      std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(v17, *((__int64 **)&v22 + 1));
      std::_Deallocate<16>((void *)v22, (struct std::nothrow_t *)((v23 - v22) & 0xFFFFFFFFFFFFFFF8uLL));
    }
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x1E6,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      v16);
    v13 = 0;
    v8 = a3;
    v9 = v29;
    v14 = v19;
    v7 = v21;
    v10 = (CEndpointCharacteristics **)v27;
  }
  if ( v14 )
  {
LABEL_28:
    if ( v8 == AUDCLNT_SHAREMODE_EXCLUSIVE
      && (unsigned int)CEndpointCharacteristics::HasHardwareAudioEngine(*v10)
      && a5
      && !(unsigned int)CEndpointCharacteristics::IsFormatSupportedByHwAudioEngine(*v10, a5)
      || (v9 & 2) == 0 )
    {
      v13 = 1;
    }
    wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>::~com_ptr_t<CEndpointStore,wil::err_returncode_policy>((volatile signed __int32 **)&v20);
    return v13;
  }
  else
  {
LABEL_23:
    wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>::~com_ptr_t<CEndpointStore,wil::err_returncode_policy>((volatile signed __int32 **)&v20);
    return v7 != 0 ? 4 : 2;
  }
}
