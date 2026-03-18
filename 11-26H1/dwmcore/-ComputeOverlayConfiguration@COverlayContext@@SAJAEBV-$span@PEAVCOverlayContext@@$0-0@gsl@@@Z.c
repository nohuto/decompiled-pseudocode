/*
 * XREFs of ?ComputeOverlayConfiguration@COverlayContext@@SAJAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@@Z @ 0x180141868
 * Callers:
 *     ?ComputeOverlayConfiguration@CRenderTargetManager@@AEAAJXZ @ 0x180141510 (-ComputeOverlayConfiguration@CRenderTargetManager@@AEAAJXZ.c)
 * Callees:
 *     ?clear@?$vector_facade@PEAVCResponseItemBase@@V?$buffer_impl@PEAVCResponseItemBase@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1800316C4 (-clear@-$vector_facade@PEAVCResponseItemBase@@V-$buffer_impl@PEAVCResponseItemBase@@$01$00Vliber.c)
 *     ??1?$vector_facade@U_LUID@@V?$buffer_impl@U_LUID@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x180054C0C (--1-$vector_facade@U_LUID@@V-$buffer_impl@U_LUID@@$01$00Vliberal_expansion_policy@detail@@@detai.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ScheduleCompositionPass@CComposition@@QEAAXKW4CompositionReason@@@Z @ 0x1800F39E0 (-ScheduleCompositionPass@CComposition@@QEAAXKW4CompositionReason@@@Z.c)
 *     ?erase@?$vector_facade@PEAVCOverlayContext@@V?$buffer_impl@PEAVCOverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@PEAVCOverlayContext@@@2@V?$basic_iterator@QEAVCOverlayContext@@@2@@Z @ 0x180140EEC (-erase@-$vector_facade@PEAVCOverlayContext@@V-$buffer_impl@PEAVCOverlayContext@@$0BA@$00Vliberal.c)
 *     ?pop_back@?$vector_facade@PEAVCOverlayContext@@V?$buffer_impl@PEAVCOverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x180140FF4 (-pop_back@-$vector_facade@PEAVCOverlayContext@@V-$buffer_impl@PEAVCOverlayContext@@$0BA@$00Vlibe.c)
 *     ?push_back@?$vector_facade@PEAVCOverlayContext@@V?$buffer_impl@PEAVCOverlayContext@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXAEBQEAVCOverlayContext@@@Z @ 0x180141340 (-push_back@-$vector_facade@PEAVCOverlayContext@@V-$buffer_impl@PEAVCOverlayContext@@$03$00Vliber.c)
 *     ?push_back@?$vector_facade@PEAVCOverlayContext@@V?$buffer_impl@PEAVCOverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXAEBQEAVCOverlayContext@@@Z @ 0x180141AC8 (-push_back@-$vector_facade@PEAVCOverlayContext@@V-$buffer_impl@PEAVCOverlayContext@@$0BA@$00Vlib.c)
 *     ??$?0$0?0V?$vector_facade@PEAVCOverlayContext@@V?$buffer_impl@PEAVCOverlayContext@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@$0A@@?$span@PEAVCOverlayContext@@$0?0@gsl@@QEAA@AEAV?$vector_facade@PEAVCOverlayContext@@V?$buffer_impl@PEAVCOverlayContext@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x180182B20 (--$-0$0-0V-$vector_facade@PEAVCOverlayContext@@V-$buffer_impl@PEAVCOverlayContext@@$03$00Vlibera.c)
 *     ?HasRevokablePlanes@COverlayContext@@QEBA_NXZ @ 0x180188360 (-HasRevokablePlanes@COverlayContext@@QEBA_NXZ.c)
 *     ??1?$vector_facade@PEAVCOverlayContext@@V?$buffer_impl@PEAVCOverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x18018C03C (--1-$vector_facade@PEAVCOverlayContext@@V-$buffer_impl@PEAVCOverlayContext@@$0BA@$00Vliberal_exp.c)
 *     ?ComputeOverlayConfigurationForAdapter@COverlayContext@@KAJAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@@Z @ 0x1801B0D5C (-ComputeOverlayConfigurationForAdapter@COverlayContext@@KAJAEBV-$span@PEAVCOverlayContext@@$0-0@.c)
 *     ?GetDisplayAdapterLuid@COverlayContext@@IEBA?AU_LUID@@XZ @ 0x1801BC984 (-GetDisplayAdapterLuid@COverlayContext@@IEBA-AU_LUID@@XZ.c)
 *     ?Reset@COverlayContext@@QEAAXXZ @ 0x18020A23C (-Reset@COverlayContext@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     std::_Sort_unchecked_detail::basic_iterator_COverlayContext_____COverlayContext::ComputeOverlayConfiguration_::_11_::_lambda_1___ @ 0x1802389A8 (std--_Sort_unchecked_detail--basic_iterator_COverlayContext_____COverlayContext--ComputeOverlayC.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall COverlayContext::ComputeOverlayConfiguration(_QWORD *a1)
{
  __int64 *v2; // rcx
  unsigned int v3; // edi
  __int64 v4; // rbx
  __int64 v5; // r14
  COverlayContext *v6; // rcx
  char v7; // bl
  __int64 v8; // r9
  __int64 *v9; // rbx
  struct _LUID DisplayAdapterLuid; // rcx
  int v11; // eax
  COverlayContext **v12; // rbx
  COverlayContext **v13; // rsi
  COverlayContext **v14; // rbx
  COverlayContext **v15; // rsi
  char v17; // [rsp+30h] [rbp-D0h]
  __int64 *v18; // [rsp+38h] [rbp-C8h] BYREF
  int v19; // [rsp+40h] [rbp-C0h]
  int v20; // [rsp+44h] [rbp-BCh]
  __int64 v21; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v22; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v23[16]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE *v24; // [rsp+70h] [rbp-90h] BYREF
  __int64 *v25; // [rsp+78h] [rbp-88h]
  __int64 **v26; // [rsp+80h] [rbp-80h]
  _BYTE v27[32]; // [rsp+88h] [rbp-78h] BYREF
  __int64 *v28; // [rsp+A8h] [rbp-58h] BYREF
  __int64 *v29; // [rsp+B0h] [rbp-50h]
  __int64 *v30; // [rsp+B8h] [rbp-48h]
  _BYTE v31[128]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v32; // [rsp+140h] [rbp+40h] BYREF

  v28 = (__int64 *)v31;
  v2 = (__int64 *)v31;
  v29 = (__int64 *)v31;
  v30 = &v32;
  v3 = 0;
  v4 = a1[1];
  v5 = v4 + 8LL * *a1;
  if ( v4 != v5 )
  {
    do
    {
      if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)v4 + 56LL) + 48LL))(*(_QWORD *)(*(_QWORD *)v4 + 56LL)) )
        detail::vector_facade<COverlayContext *,detail::buffer_impl<COverlayContext *,16,1,detail::liberal_expansion_policy>>::push_back(
          &v28,
          v4);
      v4 += 8LL;
    }
    while ( v4 != v5 );
    v2 = v29;
  }
  v24 = v27;
  v25 = (__int64 *)v27;
  v26 = &v28;
  while ( v2 != v28 )
  {
    v6 = (COverlayContext *)*(v2 - 1);
    v7 = *((_BYTE *)v6 + 44);
    COverlayContext::GetDisplayAdapterLuid(v6);
    detail::vector_facade<COverlayContext *,detail::buffer_impl<COverlayContext *,4,1,detail::liberal_expansion_policy>>::push_back(
      (__int64)&v24,
      v29 - 1);
    detail::vector_facade<COverlayContext *,detail::buffer_impl<COverlayContext *,16,1,detail::liberal_expansion_policy>>::pop_back((__int64 *)&v28);
    if ( !v7 )
    {
      v9 = v28;
      while ( v9 != v29 )
      {
        if ( !*(_BYTE *)(*v9 + 44)
          && (DisplayAdapterLuid = COverlayContext::GetDisplayAdapterLuid((COverlayContext *)*v9),
              *(_DWORD *)DisplayAdapterLuid.LowPart == v19)
          && *(_DWORD *)(*(_QWORD *)&DisplayAdapterLuid + 4LL) == v20 )
        {
          detail::vector_facade<COverlayContext *,detail::buffer_impl<COverlayContext *,4,1,detail::liberal_expansion_policy>>::push_back(
            (__int64)&v24,
            v9);
          v18 = v9;
          v9 = (__int64 *)*detail::vector_facade<COverlayContext *,detail::buffer_impl<COverlayContext *,16,1,detail::liberal_expansion_policy>>::erase(
                             (__int64 *)&v28,
                             &v22,
                             &v18);
        }
        else
        {
          ++v9;
        }
      }
    }
    LOBYTE(v8) = v17;
    v18 = v25;
    v21 = (__int64)v24;
    std::_Sort_unchecked_detail::basic_iterator_COverlayContext_____COverlayContext::ComputeOverlayConfiguration_::_11_::_lambda_1___(
      &v21,
      &v18,
      ((char *)v25 - v24) >> 3,
      v8);
    gsl::span<COverlayContext *,-1>::span<COverlayContext *,-1>(v23, &v24);
    v11 = COverlayContext::ComputeOverlayConfigurationForAdapter(v23);
    v3 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0xF2u, 0LL);
      v12 = (COverlayContext **)a1[1];
      v13 = &v12[*a1];
      while ( v12 != v13 )
        COverlayContext::Reset(*v12++);
      goto LABEL_29;
    }
    detail::vector_facade<CResponseItemBase *,detail::buffer_impl<CResponseItemBase *,2,1,detail::liberal_expansion_policy>>::clear((__int64 *)&v24);
    v2 = v29;
  }
  if ( *a1 )
  {
    v14 = (COverlayContext **)a1[1];
    v15 = &v14[*a1];
    while ( v14 != v15 )
    {
      if ( COverlayContext::HasRevokablePlanes(*v14) )
      {
        CComposition::ScheduleCompositionPass((__int64)g_pComposition, 0x1388u, 0x10000u);
        break;
      }
      ++v14;
    }
  }
LABEL_29:
  detail::vector_facade<_LUID,detail::buffer_impl<_LUID,2,1,detail::liberal_expansion_policy>>::~vector_facade<_LUID,detail::buffer_impl<_LUID,2,1,detail::liberal_expansion_policy>>((__int64 *)&v24);
  detail::vector_facade<COverlayContext *,detail::buffer_impl<COverlayContext *,16,1,detail::liberal_expansion_policy>>::~vector_facade<COverlayContext *,detail::buffer_impl<COverlayContext *,16,1,detail::liberal_expansion_policy>>(&v28);
  return v3;
}
