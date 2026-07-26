/*
 * XREFs of Ndis::BindRegistry::UpdateFiltersInner @ 0x140160EB0
 * Callers:
 *     Ndis::BindRegistry::UpdateFiltersInner @ 0x140160EB0 (Ndis--BindRegistry--UpdateFiltersInner.c)
 *     ?UpdateFilters@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@V?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@$00@Rtl@@1W4Flags@ReadBindingsOptions@2@@Z @ 0x140161FF0 (-UpdateFilters@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV-$KArray@V-$unique_ptr@UNDIS.c)
 * Callees:
 *     WPP_RECORDER_SF_Zq @ 0x14005F000 (WPP_RECORDER_SF_Zq.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     memset @ 0x1400EA4C0 (memset.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x14014C2B8 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     Ndis::BindRegistry::UpdateFiltersInner @ 0x140160EB0 (Ndis--BindRegistry--UpdateFiltersInner.c)
 *     Ndis::BindRegistry::RemoveBindingsInSpan @ 0x1401610C0 (Ndis--BindRegistry--RemoveBindingsInSpan.c)
 *     ??$AddBindingToSet@UNDIS_BIND_FILTER_LINK@@@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@V?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@$00@Rtl@@_KAEAV?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@@Z @ 0x140161350 (--$AddBindingToSet@UNDIS_BIND_FILTER_LINK@@@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEA.c)
 *     ?SetSource@BindState@Ndis@@QEAA_NW4BIND_SOURCE_STATE@@W4Flags@BindSource@2@@Z @ 0x140161AC0 (-SetSource@BindState@Ndis@@QEAA_NW4BIND_SOURCE_STATE@@W4Flags@BindSource@2@@Z.c)
 */

bool __fastcall Ndis::BindRegistry::UpdateFiltersInner(
        __int64 a1,
        __int64 *a2,
        __int64 *a3,
        _QWORD *a4,
        unsigned __int8 a5,
        unsigned int a6)
{
  unsigned __int64 v6; // rbx
  __int64 v7; // r10
  unsigned __int64 v8; // r12
  unsigned __int64 v11; // rsi
  __int64 v12; // rsi
  unsigned __int64 v13; // rdi
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r9
  unsigned __int64 v19; // r8
  unsigned __int64 v20; // rcx
  __int64 v21; // r11
  __int64 v22; // rax
  Ndis::BindState *v23; // r11
  int v24; // edx
  unsigned __int64 v25; // rbx
  unsigned __int64 v26; // [rsp+40h] [rbp-C0h]
  __int64 v28; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v29; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v30; // [rsp+60h] [rbp-A0h]
  __int64 v31; // [rsp+70h] [rbp-90h] BYREF
  __int64 v32; // [rsp+78h] [rbp-88h]
  unsigned __int64 v33; // [rsp+80h] [rbp-80h]
  __int64 v34; // [rsp+90h] [rbp-70h]
  unsigned __int64 v35; // [rsp+98h] [rbp-68h]
  __int64 v36; // [rsp+A0h] [rbp-60h]
  _QWORD *v37; // [rsp+A8h] [rbp-58h] BYREF
  unsigned __int64 i; // [rsp+B0h] [rbp-50h]
  __int64 v39; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v40; // [rsp+C0h] [rbp-40h]
  __int64 v41; // [rsp+C8h] [rbp-38h] BYREF
  _DWORD *m_AdditionalContext; // [rsp+D0h] [rbp-30h]
  _DWORD *v43; // [rsp+D8h] [rbp-28h]
  struct NDIS_BIND_FILTER_LINK **v44; // [rsp+E0h] [rbp-20h]
  struct _UNICODE_STRING v45[10]; // [rsp+F0h] [rbp-10h] BYREF

  v6 = a2[1];
  v7 = a1;
  v8 = a3[2];
  v26 = a3[1];
  v11 = v26;
  v37 = a4;
  *a4 = 0LL;
  v35 = v6;
  while ( 1 )
  {
    v36 = v6;
    if ( v11 >= v8 )
    {
      v12 = *a2;
      v13 = a2[2];
      v33 = v13;
      v31 = v12;
      v32 = v6;
      Ndis::BindRegistry::RemoveBindingsInSpan(&v31, a5, a6);
      if ( !a5 )
        return 1;
      v31 = *a3;
      v32 = v26;
      v37 = 0LL;
      v33 = v8;
      v28 = v12;
      v29 = v6;
      v30 = v13;
      return (unsigned __int8)Ndis::BindRegistry::UpdateFiltersInner(
                                a1,
                                (unsigned int)&v28,
                                (unsigned int)&v31,
                                (unsigned int)&v37,
                                0,
                                a6) != 0;
    }
    v15 = *a3;
    v40 = v15;
    if ( v11 >= *(unsigned int *)(v15 + 4) )
LABEL_19:
      __fastfail(5u);
    v16 = *(_QWORD *)(v15 + 8);
    v17 = *(_QWORD *)(v16 + 8 * v11);
    v18 = v16 + 8 * v11;
    if ( v17 )
    {
      v43 = *(_DWORD **)(v17 + 80);
      if ( ((v43[10] & 0xC) != 0) == a5 )
        break;
    }
LABEL_14:
    ++v11;
  }
  v19 = a2[2];
  v20 = v6;
  for ( i = v6; ; i = v20 )
  {
    v21 = *a2;
    v34 = *a2;
    if ( v20 >= v19 )
    {
      if ( (unsigned __int8)Ndis::BindRegistry::AddBindingToSet<NDIS_BIND_FILTER_LINK>(v7, v21, v6, v18) )
      {
        ++v6;
        v36 = a2[2] + 1;
        a2[2] = v36;
        ++*v37;
        if ( !a5 )
        {
LABEL_13:
          v7 = a1;
          v26 = v11;
          v35 = v6;
          goto LABEL_14;
        }
        v31 = v40;
        v32 = v26;
        v28 = v34;
        v29 = v35;
        v41 = 0LL;
        v33 = v11;
        v30 = v6;
        if ( (unsigned __int8)Ndis::BindRegistry::UpdateFiltersInner(
                                a1,
                                (unsigned int)&v28,
                                (unsigned int)&v31,
                                (unsigned int)&v41,
                                0,
                                a6) )
        {
          v6 += v41;
          a2[2] = v36 + v41;
          goto LABEL_13;
        }
      }
      return 0;
    }
    if ( v20 >= *(unsigned int *)(v21 + 4) )
      goto LABEL_19;
    v22 = *(_QWORD *)(v21 + 8);
    v23 = *(Ndis::BindState **)(v22 + 8 * v20);
    v44 = (struct NDIS_BIND_FILTER_LINK **)(v22 + 8 * v20);
    m_AdditionalContext = v23[1].m_AdditionalContext;
    if ( ((m_AdditionalContext[10] & 0xC) != 0) == a5
      && v43 == m_AdditionalContext
      && *(_DWORD *)(v17 + 88) == v23[1].m_LastErrorCode )
    {
      break;
    }
    ++v20;
  }
  if ( Ndis::BindState::SetSource(v23, AddBindSource, Registry) )
  {
    memset(v45, 0, sizeof(v45));
    if ( (unsigned __int8)byte_14011EAD3 >= 4u )
    {
      ndisGetBindLinkNameForTracing(*v44, v45);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_Zq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v24,
          0x1Cu,
          0xFu,
          (struct _GUID *)&WPP_388d5b0555a83352147e712e55d69f1d_Traceguids,
          v45[0].Buffer,
          *(_QWORD *)&v45[0].Length);
    }
  }
  v29 = v6;
  v25 = i;
  v30 = i;
  v28 = v34;
  Ndis::BindRegistry::RemoveBindingsInSpan(&v28, a5, a6);
  v6 = v25 + 1;
  if ( !a5 )
    goto LABEL_13;
  v28 = v40;
  v29 = v26;
  v31 = v34;
  v32 = v36;
  v39 = 0LL;
  v30 = v11;
  v33 = v6;
  if ( (unsigned __int8)Ndis::BindRegistry::UpdateFiltersInner(
                          a1,
                          (unsigned int)&v31,
                          (unsigned int)&v28,
                          (unsigned int)&v39,
                          0,
                          a6) )
  {
    v6 += v39;
    a2[2] += v39;
    goto LABEL_13;
  }
  return 0;
}
