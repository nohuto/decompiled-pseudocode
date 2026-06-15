/*
 * XREFs of ?SetEchoCancellationRenderEndpoint@CAudioStream@@QEAAJPEBG@Z @ 0x1800D57FC
 * Callers:
 *     ?SetEchoCancellationRenderEndpoint@CVADServer@@UEAAJ_KPEBG@Z @ 0x180113A50 (-SetEchoCancellationRenderEndpoint@CVADServer@@UEAAJ_KPEBG@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800160F8 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ??$make_unique_string_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x18002A460 (--$make_unique_string_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@.c)
 *     ??1EndpointCharacteristicsDescriptor@@QEAA@XZ @ 0x18002D1F8 (--1EndpointCharacteristicsDescriptor@@QEAA@XZ.c)
 *     ??4?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x180053E8C (--4-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x180053ED0 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?reset@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005759C (-reset@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?GetEndpointCharacteristicsDescriptor@@YAJPEBGHPEAUEndpointCharacteristicsDescriptor@@@Z @ 0x180068448 (-GetEndpointCharacteristicsDescriptor@@YAJPEBGHPEAUEndpointCharacteristicsDescriptor@@@Z.c)
 *     ?GetEndpointCharacteristics@@YAJPEBGHPEAPEAVCEndpointCharacteristics@@@Z @ 0x18006ECBC (-GetEndpointCharacteristics@@YAJPEBGHPEAPEAVCEndpointCharacteristics@@@Z.c)
 *     ?GetDefaultAecReferenceEndpointId@@YAJU_GUID@@PEAPEAG@Z @ 0x1800AB05C (-GetDefaultAecReferenceEndpointId@@YAJU_GUID@@PEAPEAG@Z.c)
 *     ?UpdatePMPAecReferenceEndpointId@CAudioStream@@AEAAJPEBG@Z @ 0x1800D6124 (-UpdatePMPAecReferenceEndpointId@CAudioStream@@AEAAJPEBG@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CAudioStream::SetEchoCancellationRenderEndpoint(
        CAudioStream *this,
        unsigned __int16 *a2,
        __int64 a3,
        const char *a4)
{
  int EndpointCharacteristics; // esi
  int v7; // eax
  unsigned int v8; // esi
  __int64 result; // rax
  const char *v10; // r9
  unsigned __int16 *v11; // rdx
  unsigned __int16 *v12; // rbx
  int DefaultAecReferenceEndpointId; // eax
  unsigned int v14; // ebx
  int updated; // eax
  unsigned int v16; // ebx
  const unsigned __int16 *v17; // rax
  int EndpointCharacteristicsDescriptor; // eax
  unsigned int v19; // ebx
  __int64 (__fastcall *v20)(struct IAudioResourceManager *, __int128 *, __int64, unsigned __int64); // r14
  __int64 v21; // rax
  int v22; // eax
  unsigned int v23; // ebx
  struct _GUID v24; // [rsp+30h] [rbp-48h] BYREF
  __int128 v25; // [rsp+40h] [rbp-38h] BYREF
  __int64 v26; // [rsp+50h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  unsigned __int16 *v28; // [rsp+80h] [rbp+8h] BYREF
  struct CEndpointCharacteristics *v29; // [rsp+90h] [rbp+18h] BYREF
  unsigned __int16 *v30; // [rsp+98h] [rbp+20h] BYREF

  try
  {
    if ( *((_QWORD *)this + 70) )
    {
      v28 = 0LL;
      if ( a2 )
      {
        v30 = 0LL;
        v29 = 0LL;
        wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((__int64 *)&v29);
        EndpointCharacteristics = GetEndpointCharacteristics(a2, 0, &v29);
        if ( EndpointCharacteristics < 0 )
        {
          wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
            (void **)&v30,
            0LL);
          if ( (int)mmdDevGetMMDeviceIdFromInterfaceId(a2, &v30) < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x863,
              (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
              (const char *)(unsigned int)EndpointCharacteristics);
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v29);
            wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&v30);
            wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&v28);
            return (unsigned int)EndpointCharacteristics;
          }
          wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((__int64 *)&v29);
          v7 = GetEndpointCharacteristics(v30, 0, &v29);
          v8 = v7;
          if ( v7 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x85E,
              (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
              (const char *)(unsigned int)v7);
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v29);
            wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&v30);
            wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&v28);
            return v8;
          }
        }
        if ( (*(unsigned int (__fastcall **)(struct CEndpointCharacteristics *))(*(_QWORD *)v29 + 56LL))(v29) )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x867,
            (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
            (const char *)0x80070057LL);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v29);
          wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&v30);
          wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&v28);
          return 2147942487LL;
        }
        v11 = v30;
        if ( !v30 )
          v11 = a2;
        wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
          &v24,
          (char *)v11,
          0xFFFFFFFFFFFFFFFFuLL,
          v10);
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::operator=(
          &v28,
          &v24);
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&v24);
        v12 = v28;
        if ( !v28 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x871,
            (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
            (const char *)0x8007000ELL);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v29);
          wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&v30);
          wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&v28);
          return 2147942414LL;
        }
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v29);
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&v30);
      }
      else
      {
        wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
          (void **)&v28,
          0LL);
        v24 = *(struct _GUID *)(*((_QWORD *)this + 77) + 32LL);
        DefaultAecReferenceEndpointId = GetDefaultAecReferenceEndpointId(&v24, &v28);
        v14 = DefaultAecReferenceEndpointId;
        if ( DefaultAecReferenceEndpointId < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x876,
            (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
            (const char *)(unsigned int)DefaultAecReferenceEndpointId);
          wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&v28);
          return v14;
        }
        v12 = v28;
      }
      if ( !(unsigned int)_o__wcsicmp(*((_QWORD *)this + 75), v12) )
      {
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&v28);
        return 0LL;
      }
      updated = CAudioStream::UpdatePMPAecReferenceEndpointId(this, v12);
      v16 = updated;
      if ( updated < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x87D,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
          (const char *)(unsigned int)updated);
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&v28);
        return v16;
      }
      v25 = 0LL;
      v26 = 0LL;
      v17 = (const unsigned __int16 *)(*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 2) + 40LL))((char *)this + 16);
      EndpointCharacteristicsDescriptor = GetEndpointCharacteristicsDescriptor(
                                            v17,
                                            0,
                                            (struct EndpointCharacteristicsDescriptor *)&v25);
      v19 = EndpointCharacteristicsDescriptor;
      if ( EndpointCharacteristicsDescriptor < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x880,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
          (const char *)(unsigned int)EndpointCharacteristicsDescriptor);
        EndpointCharacteristicsDescriptor::~EndpointCharacteristicsDescriptor((EndpointCharacteristicsDescriptor *)&v25);
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&v28);
        return v19;
      }
      v20 = *(__int64 (__fastcall **)(struct IAudioResourceManager *, __int128 *, __int64, unsigned __int64))(*(_QWORD *)g_AudioResourceManager + 64LL);
      v21 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 2) + 40LL))((char *)this + 16);
      v22 = v20(g_AudioResourceManager, &v25, v21, ((unsigned __int64)this + 8) & -(__int64)(this != 0LL));
      v23 = v22;
      if ( v22 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x883,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
          (const char *)(unsigned int)v22);
        EndpointCharacteristicsDescriptor::~EndpointCharacteristicsDescriptor((EndpointCharacteristicsDescriptor *)&v25);
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&v28);
        return v23;
      }
      EndpointCharacteristicsDescriptor::~EndpointCharacteristicsDescriptor((EndpointCharacteristicsDescriptor *)&v25);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&v28);
    }
    result = 0LL;
  }
  catch ( ... )
  {
    LODWORD(v28) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x887,
                     (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
                     a4);
    return (unsigned int)v28;
  }
  return result;
}
