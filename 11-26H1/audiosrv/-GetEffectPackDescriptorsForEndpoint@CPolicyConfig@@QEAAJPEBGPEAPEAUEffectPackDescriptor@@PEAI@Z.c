/*
 * XREFs of ?GetEffectPackDescriptorsForEndpoint@CPolicyConfig@@QEAAJPEBGPEAPEAUEffectPackDescriptor@@PEAI@Z @ 0x180030F50
 * Callers:
 *     s_epmGetEffectPackDescriptorsForEndpoint @ 0x180030E00 (s_epmGetEffectPackDescriptorsForEndpoint.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetEffectPacks@CEndpointCharacteristics@@QEAAJAEAV?$vector@V?$shared_ptr@VEffectPack@@@std@@V?$allocator@V?$shared_ptr@VEffectPack@@@std@@@2@@std@@@Z @ 0x180031114 (-GetEffectPacks@CEndpointCharacteristics@@QEAAJAEAV-$vector@V-$shared_ptr@VEffectPack@@@std@@V-$.c)
 *     MIDL_user_allocate @ 0x180031380 (MIDL_user_allocate.c)
 *     ?_Tidy@?$vector@V?$shared_ptr@VEffectPack@@@std@@V?$allocator@V?$shared_ptr@VEffectPack@@@std@@@2@@std@@AEAAXXZ @ 0x1800313A4 (-_Tidy@-$vector@V-$shared_ptr@VEffectPack@@@std@@V-$allocator@V-$shared_ptr@VEffectPack@@@std@@@.c)
 *     memcpy_0 @ 0x1800B31FC (memcpy_0.c)
 *     memset_0 @ 0x1800B3208 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CPolicyConfig::GetEffectPackDescriptorsForEndpoint(
        CPolicyConfig *this,
        const unsigned __int16 *a2,
        struct EffectPackDescriptor **a3,
        unsigned int *a4)
{
  int EffectPacks; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdi
  struct EffectPackDescriptor *v9; // rax
  struct EffectPackDescriptor *v10; // rsi
  __int64 v11; // rbx
  struct EffectPackDescriptor *v12; // r14
  __int128 v14; // [rsp+30h] [rbp-20h] BYREF
  __int64 v15; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  __int64 v17; // [rsp+80h] [rbp+30h] BYREF

  *a3 = 0LL;
  *a4 = 0;
  v17 = 0LL;
  if ( (*(int (__fastcall **)(PVOID, const unsigned __int16 *, _QWORD, _QWORD, __int64 *))(*(_QWORD *)g_pEndpointCharacteristicsCache
                                                                                         + 24LL))(
         g_pEndpointCharacteristicsCache,
         a2,
         0LL,
         0LL,
         &v17) >= 0 )
  {
    v14 = 0LL;
    v15 = 0LL;
    EffectPacks = CEndpointCharacteristics::GetEffectPacks(v17, &v14);
    v7 = EffectPacks;
    if ( EffectPacks < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x7A4,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
        (const char *)(unsigned int)EffectPacks);
      std::vector<std::shared_ptr<EffectPack>>::_Tidy(&v14);
      if ( v17 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    }
    else
    {
      v8 = (__int64)(*((_QWORD *)&v14 + 1) - v14) >> 4;
      if ( !v8 )
        goto LABEL_9;
      v9 = (struct EffectPackDescriptor *)MIDL_user_allocate(1312 * v8);
      v10 = v9;
      if ( v9 )
      {
        memset_0(v9, 0, 1312 * v8);
        v11 = v14;
        v12 = v10;
        while ( v11 != *((_QWORD *)&v14 + 1) )
        {
          memcpy_0(v12, *(const void **)(*(_QWORD *)v11 + 1568LL), 0x520uLL);
          v12 = (struct EffectPackDescriptor *)((char *)v12 + 1312);
          v11 += 16LL;
        }
        *a3 = v10;
        *a4 = v8;
LABEL_9:
        std::vector<std::shared_ptr<EffectPack>>::_Tidy(&v14);
        if ( v17 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
        return 0LL;
      }
      v7 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x7AD,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
        (const char *)0x8007000ELL);
      std::vector<std::shared_ptr<EffectPack>>::_Tidy(&v14);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v17);
    }
    return v7;
  }
  if ( v17 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  return 2147942487LL;
}
