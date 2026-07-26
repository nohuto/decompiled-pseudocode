/*
 * XREFs of ndisEtwCaptureMiniportFilterList @ 0x1400988D4
 * Callers:
 *     ndisEtwWriteMiniportRundown @ 0x140099298 (ndisEtwWriteMiniportRundown.c)
 * Callees:
 *     ?reserve@?$KArray@UEtwProtocolBind@@$00@Rtl@@QEAA_N_K@Z @ 0x1400019C0 (-reserve@-$KArray@UEtwProtocolBind@@$00@Rtl@@QEAA_N_K@Z.c)
 *     ?reset@?$KArray@_W$00@Rtl@@AEAAXXZ @ 0x140001C00 (-reset@-$KArray@_W$00@Rtl@@AEAAXXZ.c)
 *     ?resize@?$KArray@UEtwProtocolBind@@$00@Rtl@@QEAA_N_K@Z @ 0x140001C40 (-resize@-$KArray@UEtwProtocolBind@@$00@Rtl@@QEAA_N_K@Z.c)
 *     ?GetActualPauseState@BindState@Ndis@@QEAA?AW4PAUSE_OR_RESTART@@XZ @ 0x140138C90 (-GetActualPauseState@BindState@Ndis@@QEAA-AW4PAUSE_OR_RESTART@@XZ.c)
 *     ?GetBindSources@BindState@Ndis@@QEBAKXZ @ 0x14014B0F4 (-GetBindSources@BindState@Ndis@@QEBAKXZ.c)
 *     ?GetPauseReasons@BindState@Ndis@@QEBAKXZ @ 0x14014B100 (-GetPauseReasons@BindState@Ndis@@QEBAKXZ.c)
 *     ?GetUnbindReasons@BindState@Ndis@@QEBAKXZ @ 0x14014B10C (-GetUnbindReasons@BindState@Ndis@@QEBAKXZ.c)
 *     ?GetActualBindingState@BindState@Ndis@@QEAA?AW4BINDING_ENABLED_OR_DISABLED@@XZ @ 0x140159620 (-GetActualBindingState@BindState@Ndis@@QEAA-AW4BINDING_ENABLED_OR_DISABLED@@XZ.c)
 */

__int64 __fastcall ndisEtwCaptureMiniportFilterList(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rdx
  __int64 v6; // rax
  unsigned __int64 v7; // rcx
  __int64 v8; // rsi
  unsigned __int64 v9; // rbx
  int v10; // r12d
  __int64 v11; // r13
  __int64 v12; // r15
  __int64 v13; // rcx
  __int64 v14; // [rsp+20h] [rbp-10h] BYREF
  __int64 v15; // [rsp+28h] [rbp-8h]
  unsigned __int64 v16; // [rsp+70h] [rbp+40h]
  unsigned __int64 v17; // [rsp+80h] [rbp+50h]
  __int64 v18; // [rsp+88h] [rbp+58h]

  Rtl::KArray<EtwProtocolBind,1>::resize(a2, 0LL);
  v4 = *(unsigned int *)(a1 + 5036);
  v14 = 0LL;
  v15 = 0LL;
  if ( Rtl::KArray<EtwProtocolBind,1>::reserve((unsigned int *)&v14, v4) )
  {
    v6 = *(unsigned int *)(a1 + 5036);
    v7 = 0LL;
    v8 = v15;
    v9 = 0LL;
    v10 = HIDWORD(v14);
    v11 = 0LL;
    v16 = 0LL;
    v18 = v6;
    while ( v9 != v6 )
    {
      if ( v9 >= *(unsigned int *)(a1 + 5036) )
        goto LABEL_12;
      v12 = *(_QWORD *)(a1 + 5040);
      if ( *(_QWORD *)(v12 + 8 * v9) )
      {
        v17 = v7 + 1;
        Rtl::KArray<EtwProtocolBind,1>::resize((__int64)&v14, v7 + 1);
        v10 = HIDWORD(v14);
        if ( v16 >= HIDWORD(v14) )
LABEL_12:
          __fastfail(5u);
        v8 = v15;
        v13 = *(_QWORD *)(*(_QWORD *)(v12 + 8 * v9) + 80LL);
        if ( v13 )
          *(_OWORD *)(v15 + v11) = *(_OWORD *)(v13 + 24);
        *(_DWORD *)(v8 + v11 + 16) = *(_DWORD *)(*(_QWORD *)(v12 + 8 * v9) + 88LL);
        *(_DWORD *)(v8 + v11 + 20) = Ndis::BindState::GetActualBindingState(*(Ndis::BindState **)(v12 + 8 * v9));
        *(_DWORD *)(v8 + v11 + 24) = Ndis::BindState::GetActualPauseState(*(Ndis::BindState **)(v12 + 8 * v9));
        *(_DWORD *)(v8 + v11 + 28) = Ndis::BindState::GetBindSources(*(Ndis::BindState **)(v12 + 8 * v9));
        *(_DWORD *)(v8 + v11 + 32) = Ndis::BindState::GetUnbindReasons(*(Ndis::BindState **)(v12 + 8 * v9));
        *(_DWORD *)(v8 + v11 + 36) = Ndis::BindState::GetPauseReasons(*(Ndis::BindState **)(v12 + 8 * v9));
        *(_DWORD *)(v8 + v11 + 40) = *(_DWORD *)(*(_QWORD *)(v12 + 8 * v9) + 24LL);
        v11 += 44LL;
        v7 = v17;
        v16 = v17;
      }
      v6 = v18;
      ++v9;
    }
    Rtl::KArray<wchar_t,1>::reset((_QWORD *)a2);
    *(_DWORD *)a2 = v14;
    v15 = 0LL;
    v14 = 0LL;
    *(_QWORD *)(a2 + 8) = v8;
    *(_DWORD *)(a2 + 4) = v10;
    Rtl::KArray<wchar_t,1>::reset(&v14);
    return 0LL;
  }
  else
  {
    Rtl::KArray<wchar_t,1>::reset(&v14);
    return 2LL;
  }
}
