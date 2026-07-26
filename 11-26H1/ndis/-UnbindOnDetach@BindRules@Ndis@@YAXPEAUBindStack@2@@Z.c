/*
 * XREFs of ?UnbindOnDetach@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x140159690
 * Callers:
 *     ?Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140159D50 (-Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMExitInitMode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z @ 0x140169CA0 (-ndisMExitInitMode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_Ld @ 0x14005D7A0 (WPP_RECORDER_SF_Ld.c)
 *     WPP_RECORDER_SF_Zq @ 0x14005F000 (WPP_RECORDER_SF_Zq.c)
 *     WPP_RECORDER_SF__guid_D @ 0x1400E625C (WPP_RECORDER_SF__guid_D_ea_1400E625C.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     memset @ 0x1400EA4C0 (memset.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x14014C2B8 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ?GetActualBindingState@BindState@Ndis@@QEAA?AW4BINDING_ENABLED_OR_DISABLED@@XZ @ 0x140159620 (-GetActualBindingState@BindState@Ndis@@QEAA-AW4BINDING_ENABLED_OR_DISABLED@@XZ.c)
 */

void __fastcall Ndis::BindRules::UnbindOnDetach(Ndis::BindRules *this, struct Ndis::BindStack *a2)
{
  __int64 v2; // r14
  int v3; // r15d
  unsigned __int64 v4; // rbx
  struct _GUID *v6; // r10
  __int64 v7; // rax
  _DWORD *v8; // rdi
  struct NDIS_BIND_FILTER_LINK **v9; // rsi
  int v10; // r8d
  struct NDIS_BIND_FILTER_LINK *v11; // rcx
  __int64 v12; // rsi
  unsigned __int64 i; // rbx
  __int64 v14; // rax
  _DWORD *v15; // rdi
  __int64 **v16; // r14
  int v17; // edx
  bool v18; // cf
  __int64 v19; // rcx
  unsigned __int16 *v20; // rdx
  unsigned __int16 v21; // r9
  int v22; // eax
  __int64 v23; // rdx
  int v24; // edx
  int v25; // edx
  int v26; // [rsp+20h] [rbp-198h]
  char v27[8]; // [rsp+30h] [rbp-188h]
  struct _UNICODE_STRING v28[10]; // [rsp+40h] [rbp-178h] BYREF
  struct _UNICODE_STRING v29[10]; // [rsp+E0h] [rbp-D8h] BYREF

  v2 = *((unsigned int *)this + 5);
  v3 = 0;
  v4 = 0LL;
  v6 = (struct _GUID *)&WPP_190ea6b10f113182d35a903b93524bb3_Traceguids;
  while ( v4 != v2 )
  {
    if ( v4 >= *((unsigned int *)this + 5) )
LABEL_46:
      __fastfail(5u);
    v7 = *((_QWORD *)this + 3);
    v8 = *(_DWORD **)(v7 + 8 * v4);
    v9 = (struct NDIS_BIND_FILTER_LINK **)(v7 + 8 * v4);
    if ( v8[13] || v8[7] )
    {
      v10 = v8[8];
      if ( v3 )
      {
        v8[8] = v10 | 0x400;
        if ( v10 == 0 || !*(_QWORD *)v8 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
          {
            *(_DWORD *)v27 = v10 | 0x400;
            WPP_RECORDER_SF_Ld(*((_QWORD *)WPP_GLOBAL_Control + 8), 5u, 0x1Cu, 0xEu, v6, v10, *(_QWORD *)v27);
          }
          *(_BYTE *)(*(_QWORD *)v8 + 5224LL) = 1;
          memset(v29, 0, sizeof(v29));
          if ( (unsigned __int8)byte_14011EAD3 >= 4u )
          {
            ndisGetBindLinkNameForTracing(*v9, v29);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_Zq(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                v25,
                0x1Cu,
                0x36u,
                (struct _GUID *)&WPP_065a33821845343ef30f5566aa9547e7_Traceguids,
                v29[0].Buffer,
                *(_QWORD *)&v29[0].Length);
          }
LABEL_53:
          v6 = (struct _GUID *)&WPP_190ea6b10f113182d35a903b93524bb3_Traceguids;
        }
      }
      else
      {
        v8[8] = v10 & 0xFFFFFBFF;
        if ( (v10 != 0) != ((v10 & 0xFFFFFBFF) != 0) || !*(_QWORD *)v8 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
          {
            *(_DWORD *)v27 = v10 & 0xFFFFFBFF;
            WPP_RECORDER_SF_Ld(*((_QWORD *)WPP_GLOBAL_Control + 8), 5u, 0x1Cu, 0xEu, v6, v10, *(_QWORD *)v27);
          }
          *(_BYTE *)(*(_QWORD *)v8 + 5224LL) = 1;
          memset(v28, 0, sizeof(v28));
          if ( (unsigned __int8)byte_14011EAD3 >= 4u )
          {
            ndisGetBindLinkNameForTracing(*v9, v28);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_Zq(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                v24,
                0x1Cu,
                0x35u,
                (struct _GUID *)&WPP_065a33821845343ef30f5566aa9547e7_Traceguids,
                v28[0].Buffer,
                *(_QWORD *)&v28[0].Length);
          }
          goto LABEL_53;
        }
      }
      v11 = *v9;
      if ( ((*v9)->BindDriver._p->_t.FilterBindFlags & 8) != 0 )
      {
        if ( v11->BindState.m_unbindReasons )
        {
          LOBYTE(v22) = Ndis::BindState::GetActualBindingState(&v11->BindState);
          if ( !v22 )
          {
            v3 = 1;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              if ( *((_WORD *)WPP_GLOBAL_Control + 36) )
              {
                WPP_RECORDER_SF__guid_D(
                  *((_QWORD *)WPP_GLOBAL_Control + 8),
                  v23 + 24,
                  (__int64)WPP_GLOBAL_Control,
                  0x37u,
                  v26,
                  v23 + 24);
                v6 = (struct _GUID *)&WPP_190ea6b10f113182d35a903b93524bb3_Traceguids;
              }
            }
          }
        }
      }
    }
    ++v4;
  }
  v12 = *((unsigned int *)this + 1);
  for ( i = 0LL; i != v12; ++i )
  {
    if ( i >= *((unsigned int *)this + 1) )
      goto LABEL_46;
    v14 = *((_QWORD *)this + 1);
    v15 = *(_DWORD **)(v14 + 8 * i);
    v16 = (__int64 **)(v14 + 8 * i);
    v17 = v15[8];
    if ( v3 )
    {
      v15[8] = v17 | 0x400;
      if ( v17 == 0 || !*(_QWORD *)v15 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
        {
          *(_DWORD *)v27 = v17 | 0x400;
          WPP_RECORDER_SF_Ld(*((_QWORD *)WPP_GLOBAL_Control + 8), 5u, 0x1Cu, 0xEu, v6, v17, *(_QWORD *)v27);
          v6 = (struct _GUID *)&WPP_190ea6b10f113182d35a903b93524bb3_Traceguids;
        }
        v18 = (unsigned __int8)byte_14011EAD3 < 4u;
        *(_BYTE *)(*(_QWORD *)v15 + 5224LL) = 1;
        if ( !v18 )
        {
          v19 = **v16;
          v20 = *(unsigned __int16 **)((*v16)[10] + 24);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v21 = 57;
            goto LABEL_54;
          }
        }
      }
    }
    else
    {
      v15[8] = v17 & 0xFFFFFBFF;
      if ( (v17 != 0) != ((v17 & 0xFFFFFBFF) != 0) || !*(_QWORD *)v15 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
        {
          *(_DWORD *)v27 = v17 & 0xFFFFFBFF;
          WPP_RECORDER_SF_Ld(*((_QWORD *)WPP_GLOBAL_Control + 8), 5u, 0x1Cu, 0xEu, v6, v17, *(_QWORD *)v27);
          v6 = (struct _GUID *)&WPP_190ea6b10f113182d35a903b93524bb3_Traceguids;
        }
        v18 = (unsigned __int8)byte_14011EAD3 < 4u;
        *(_BYTE *)(*(_QWORD *)v15 + 5224LL) = 1;
        if ( !v18 )
        {
          v19 = **v16;
          v20 = *(unsigned __int16 **)((*v16)[10] + 24);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v21 = 56;
LABEL_54:
            WPP_RECORDER_SF_Zq(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              (int)v20,
              0x1Cu,
              v21,
              (struct _GUID *)&WPP_065a33821845343ef30f5566aa9547e7_Traceguids,
              v20,
              v19);
            v6 = (struct _GUID *)&WPP_190ea6b10f113182d35a903b93524bb3_Traceguids;
            continue;
          }
        }
      }
    }
  }
}
