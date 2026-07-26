/*
 * XREFs of ?UpdateProtocols@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@V?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@$00@Rtl@@1W4Flags@ReadBindingsOptions@2@@Z @ 0x140162090
 * Callers:
 *     ?Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z @ 0x140164210 (-Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_Zq @ 0x14005F000 (WPP_RECORDER_SF_Zq.c)
 *     ?reserve@?$KArray@V?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@$00@Rtl@@QEAA_N_K@Z @ 0x140079750 (-reserve@-$KArray@V-$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U-$default_delete@UNDIS_BIND_PROTOCOL_.c)
 *     ?SetSource@BindState@Ndis@@QEAA_NW4BIND_SOURCE_STATE@@W4Flags@BindSource@2@@Z @ 0x140161AC0 (-SetSource@BindState@Ndis@@QEAA_NW4BIND_SOURCE_STATE@@W4Flags@BindSource@2@@Z.c)
 *     ??$AddBindingToSet@UNDIS_BIND_PROTOCOL_LINK@@@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@V?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@$00@Rtl@@_KAEAV?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@@Z @ 0x1401622F0 (--$AddBindingToSet@UNDIS_BIND_PROTOCOL_LINK@@@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@A.c)
 */

char __fastcall Ndis::BindRegistry::UpdateProtocols(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rbp
  __int64 v10; // rax
  Ndis::BindState *v11; // rcx
  _QWORD **v12; // r12
  void *v13; // rdx
  unsigned __int16 *v14; // rdx
  unsigned __int16 *v15; // rdx
  Ndis::BindState **v16; // rbx
  unsigned __int16 *v17; // rdx

  if ( !Rtl::KArray<wistd::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK>>,1>::reserve(
          (unsigned int *)a2,
          *(unsigned int *)(a3 + 4)) )
    return 0;
  v8 = 0LL;
  v9 = 0LL;
  while ( v9 < *(unsigned int *)(a3 + 4) )
  {
    if ( v8 < *(unsigned int *)(a2 + 4) )
    {
      v10 = *(_QWORD *)(a2 + 8);
      v11 = *(Ndis::BindState **)(v10 + 8 * v8);
      v12 = (_QWORD **)(v10 + 8 * v8);
      v13 = *(void **)(*(_QWORD *)(*(_QWORD *)(a3 + 8) + 8 * v9) + 80LL);
      if ( v11[1].m_AdditionalContext == v13 )
      {
        if ( Ndis::BindState::SetSource(v11, AddBindSource, Registry)
          && (unsigned __int8)byte_14011EAD3 >= 4u
          && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v14 = *(unsigned __int16 **)((*v12)[10] + 24LL);
          WPP_RECORDER_SF_Zq(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            (int)v14,
            0x1Cu,
            0xBu,
            (struct _GUID *)&WPP_388d5b0555a83352147e712e55d69f1d_Traceguids,
            v14,
            **v12);
        }
        ++v9;
      }
      else if ( v11[1].m_AdditionalContext >= v13 )
      {
        if ( !(unsigned __int8)Ndis::BindRegistry::AddBindingToSet<NDIS_BIND_PROTOCOL_LINK>(a1, a2, v8) )
          return 0;
        ++v9;
      }
      else if ( (a4 & 1) == 0
             && Ndis::BindState::SetSource(v11, RemoveBindSource, Registry)
             && (unsigned __int8)byte_14011EAD3 >= 4u
             && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v15 = *(unsigned __int16 **)((*v12)[10] + 24LL);
        WPP_RECORDER_SF_Zq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          (int)v15,
          0x1Cu,
          0xCu,
          (struct _GUID *)&WPP_388d5b0555a83352147e712e55d69f1d_Traceguids,
          v15,
          **v12);
      }
      ++v8;
    }
    else
    {
      if ( !(unsigned __int8)Ndis::BindRegistry::AddBindingToSet<NDIS_BIND_PROTOCOL_LINK>(a1, a2, v8) )
        return 0;
      ++v9;
      ++v8;
    }
  }
  if ( (a4 & 1) == 0 )
  {
    while ( v8 < *(unsigned int *)(a2 + 4) )
    {
      v16 = (Ndis::BindState **)(*(_QWORD *)(a2 + 8) + 8 * v8);
      if ( Ndis::BindState::SetSource(*v16, RemoveBindSource, Registry)
        && (unsigned __int8)byte_14011EAD3 >= 4u
        && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v17 = (unsigned __int16 *)*((_QWORD *)(*v16)[1].m_AdditionalContext + 3);
        WPP_RECORDER_SF_Zq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          (int)v17,
          0x1Cu,
          0xDu,
          (struct _GUID *)&WPP_388d5b0555a83352147e712e55d69f1d_Traceguids,
          v17,
          (*v16)->Miniport);
      }
      ++v8;
    }
  }
  return 1;
}
