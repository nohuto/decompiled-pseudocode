/*
 * XREFs of ?OnInvalidateInput@MobileButtonDeviceCollection@@UEAAJPEAX@Z @ 0x1800DA430
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x180052670 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ?FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z @ 0x180064414 (-FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18009AC08 (memset_0.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     memcpy_0 @ 0x18009CC62 (memcpy_0.c)
 *     ?count@?$_Hash@V?$_Umap_traits@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEBA_KAEBK@Z @ 0x1800AE980 (-count@-$_Hash@V-$_Umap_traits@KV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@V-$_Uhash_compare@KU-$h.c)
 *     ?_Tidy@?$vector@GV?$allocator@G@std@@@std@@AEAAXXZ @ 0x1800D8CC0 (-_Tidy@-$vector@GV-$allocator@G@std@@@std@@AEAAXXZ.c)
 *     ?find@?$_Hash@V?$_Umap_traits@KUTargetingInfo@ButtonProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUTargetingInfo@ButtonProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUTargetingInfo@ButtonProcessor@@@std@@@std@@@std@@@2@AEBK@Z @ 0x1800D8D08 (-find@-$_Hash@V-$_Umap_traits@KUTargetingInfo@ButtonProcessor@@V-$_Uhash_compare@KU-$hash@K@std@.c)
 *     ??$_Emplace_reallocate@AEBG@?$vector@GV?$allocator@G@std@@@std@@AEAAPEAGQEAGAEBG@Z @ 0x1800D901C (--$_Emplace_reallocate@AEBG@-$vector@GV-$allocator@G@std@@@std@@AEAAPEAGQEAGAEBG@Z.c)
 *     ?CreateButtonInfo@MobileButtonDeviceCollection@@AEAAJKKT_LARGE_INTEGER@@G_NPEAUInputInfo@@@Z @ 0x1800D9934 (-CreateButtonInfo@MobileButtonDeviceCollection@@AEAAJKKT_LARGE_INTEGER@@G_NPEAUInputInfo@@@Z.c)
 *     ?HIDUsageToButtonMapping@MobileButtonDeviceCollection@@AEAAJGPEAK@Z @ 0x1800D9A68 (-HIDUsageToButtonMapping@MobileButtonDeviceCollection@@AEAAJGPEAK@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MobileButtonDeviceCollection::OnInvalidateInput(MobileButtonDeviceCollection *this, void *a2)
{
  int v3; // edx
  unsigned int Device; // ebx
  __int64 v5; // rdx
  int v7; // r12d
  __m128i v8; // xmm6
  char *v9; // rbx
  __int64 v10; // r13
  MobileButtonDeviceCollection *v11; // rcx
  __int16 *v12; // rdi
  __int16 *v13; // r15
  unsigned __int16 v14; // dx
  DWORD TickCount; // ebx
  int ButtonInfo; // eax
  __int64 v17; // rdx
  struct RIMDevice *Src; // [rsp+48h] [rbp-C0h] BYREF
  void *Src_8[2]; // [rsp+50h] [rbp-B8h] BYREF
  void *v20; // [rsp+60h] [rbp-A8h]
  LARGE_INTEGER PerformanceCount; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v22[3]; // [rsp+70h] [rbp-98h] BYREF
  _BYTE v23[24]; // [rsp+88h] [rbp-80h] BYREF
  int v24; // [rsp+A0h] [rbp-68h]
  wil::details::in1diag3 *retaddr; // [rsp+CA0h] [rbp+B98h]

  Src = 0LL;
  Device = RIMDeviceCollection::FindDevice(this, 0, a2, &Src, 0LL);
  if ( (Device & 0x80000000) != 0 )
  {
    v5 = 349LL;
    goto LABEL_3;
  }
  v7 = **((_DWORD **)Src + 4);
  LODWORD(Src) = v7;
  memset_0(v23, v3, 0xBC0uLL);
  v24 = 3008;
  PerformanceCount.QuadPart = 0LL;
  std::_Hash<std::_Umap_traits<unsigned long,ButtonProcessor::TargetingInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,ButtonProcessor::TargetingInfo>>,0>>::find(
    (_QWORD *)this + 345,
    v22,
    (const unsigned __int8 *)&Src);
  if ( v22[0] == *((_QWORD *)this + 346) )
  {
    Device = -2147467259;
    v5 = 362LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\mobilebuttondevicecollection.cpp",
      (const char *)Device);
    return Device;
  }
  v8 = *(__m128i *)(v22[0] + 24LL);
  v9 = (char *)this + 2824;
  *(_OWORD *)Src_8 = 0LL;
  v20 = 0LL;
  v10 = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v8, 8));
  gsl::details::extent_type<-1>::extent_type<-1>(v22, v10);
  if ( v22[0] == -1LL || !v8.m128i_i64[0] && v22[0] )
  {
    _o_terminate(v11);
    __debugbreak();
    JUMPOUT(0x1800DA6F4LL);
  }
  v12 = (__int16 *)v8.m128i_i64[0];
  v13 = (__int16 *)(v8.m128i_i64[0] + 2LL * v22[0]);
  while ( v12 != v13 )
  {
    v14 = *v12;
    if ( *v12 )
    {
      LODWORD(Src) = 0;
      if ( (int)MobileButtonDeviceCollection::HIDUsageToButtonMapping(v11, v14, (unsigned int *)&Src) >= 0 )
      {
        if ( std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IInputTarget>>>,0>>::count(
               (__int64)v9,
               (const unsigned __int8 *)&Src) )
        {
          if ( Src_8[1] == v20 )
          {
            std::vector<unsigned short>::_Emplace_reallocate<unsigned short const &>(Src_8, (__int64)Src_8[1], v12);
          }
          else
          {
            *(_WORD *)Src_8[1] = *v12;
            Src_8[1] = (char *)Src_8[1] + 2;
          }
        }
        else
        {
          TickCount = GetTickCount();
          QueryPerformanceCounter(&PerformanceCount);
          ButtonInfo = MobileButtonDeviceCollection::CreateButtonInfo(
                         (MobileButtonDeviceCollection *)(unsigned __int16)*v12,
                         v7,
                         TickCount,
                         PerformanceCount,
                         *v12,
                         0,
                         (struct InputInfo *)v23);
          Device = ButtonInfo;
          if ( ButtonInfo < 0 )
          {
            v17 = 412LL;
            goto LABEL_24;
          }
          ButtonInfo = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 2) + 24LL))(
                         *((_QWORD *)this + 2),
                         v23);
          Device = ButtonInfo;
          if ( ButtonInfo < 0 )
          {
            v17 = 417LL;
LABEL_24:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v17,
              (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\mobilebuttondevicecollection.cpp",
              (const char *)(unsigned int)ButtonInfo);
            std::vector<unsigned short>::_Tidy((__int64)Src_8);
            return Device;
          }
          v9 = (char *)this + 2824;
        }
      }
    }
    ++v12;
  }
  memset_0((void *)v8.m128i_i64[0], 0, 2 * v10);
  memcpy_0((void *)v8.m128i_i64[0], Src_8[0], 2 * (((char *)Src_8[1] - (char *)Src_8[0]) >> 1));
  std::vector<unsigned short>::_Tidy((__int64)Src_8);
  return 0LL;
}
