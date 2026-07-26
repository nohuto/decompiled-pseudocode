/*
 * XREFs of ?UnbindMiniportStack@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x14015AB80
 * Callers:
 *     ?Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140159D50 (-Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMExitInitMode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z @ 0x140169CA0 (-ndisMExitInitMode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_Ld @ 0x14005D7A0 (WPP_RECORDER_SF_Ld.c)
 *     WPP_RECORDER_SF_Zq @ 0x14005F000 (WPP_RECORDER_SF_Zq.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     memset @ 0x1400EA4C0 (memset.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x14014C2B8 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x14015BE50 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 */

void __fastcall Ndis::BindRules::UnbindMiniportStack(Ndis::BindRules *this, struct Ndis::BindStack *a2)
{
  int v2; // r12d
  __int64 v3; // rbp
  unsigned __int64 i; // rbx
  __int64 v6; // rax
  _DWORD *v7; // rdi
  struct NDIS_BIND_FILTER_LINK **v8; // r14
  int v9; // edx
  __int64 v10; // rbp
  unsigned __int64 j; // rbx
  __int64 v12; // rax
  _DWORD *v13; // rdi
  __int64 **v14; // r14
  int v15; // edx
  bool v16; // cf
  __int64 v17; // rcx
  unsigned __int16 *v18; // rdx
  unsigned __int16 v19; // r9
  int v20; // edx
  int v21; // edx
  char v22[8]; // [rsp+30h] [rbp-188h]
  struct _UNICODE_STRING v23[10]; // [rsp+40h] [rbp-178h] BYREF
  struct _UNICODE_STRING v24[10]; // [rsp+E0h] [rbp-D8h] BYREF

  v2 = *((_DWORD *)this + 16);
  v3 = *((unsigned int *)this + 5);
  for ( i = 0LL; i != v3; ++i )
  {
    if ( i >= *((unsigned int *)this + 5) )
LABEL_38:
      __fastfail(5u);
    v6 = *((_QWORD *)this + 3);
    v7 = *(_DWORD **)(v6 + 8 * i);
    v8 = (struct NDIS_BIND_FILTER_LINK **)(v6 + 8 * i);
    if ( v2 )
    {
      if ( Ndis::BindState::SetBinding(
             *(Ndis::BindState **)(v6 + 8 * i),
             (enum BINDING_ENABLED_OR_DISABLED)(v2 != 0),
             Reason_MiniportNotReady) )
      {
        memset(v24, 0, sizeof(v24));
        if ( (unsigned __int8)byte_14011EAD3 >= 4u )
        {
          ndisGetBindLinkNameForTracing(*v8, v24);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_Zq(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              v21,
              0x1Cu,
              0x3Bu,
              (struct _GUID *)&WPP_065a33821845343ef30f5566aa9547e7_Traceguids,
              v24[0].Buffer,
              *(_QWORD *)&v24[0].Length);
        }
      }
    }
    else
    {
      v9 = v7[8];
      v7[8] = v9 & 0xFFFDFFFF;
      if ( (v9 != 0) != ((v9 & 0xFFFDFFFF) != 0) || !*(_QWORD *)v7 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
        {
          *(_DWORD *)v22 = v9 & 0xFFFDFFFF;
          WPP_RECORDER_SF_Ld(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            5u,
            0x1Cu,
            0xEu,
            (struct _GUID *)&WPP_190ea6b10f113182d35a903b93524bb3_Traceguids,
            v9,
            *(_QWORD *)v22);
        }
        *(_BYTE *)(*(_QWORD *)v7 + 5224LL) = 1;
        memset(v23, 0, sizeof(v23));
        if ( (unsigned __int8)byte_14011EAD3 >= 4u )
        {
          ndisGetBindLinkNameForTracing(*v8, v23);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_Zq(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              v20,
              0x1Cu,
              0x3Au,
              (struct _GUID *)&WPP_065a33821845343ef30f5566aa9547e7_Traceguids,
              v23[0].Buffer,
              *(_QWORD *)&v23[0].Length);
        }
      }
    }
  }
  v10 = *((unsigned int *)this + 1);
  for ( j = 0LL; j != v10; ++j )
  {
    if ( j >= *((unsigned int *)this + 1) )
      goto LABEL_38;
    v12 = *((_QWORD *)this + 1);
    v13 = *(_DWORD **)(v12 + 8 * j);
    v14 = (__int64 **)(v12 + 8 * j);
    v15 = v13[8];
    if ( v2 )
    {
      v13[8] = v15 | 0x20000;
      if ( v15 == 0 || !*(_QWORD *)v13 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
        {
          *(_DWORD *)v22 = v15 | 0x20000;
          WPP_RECORDER_SF_Ld(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            5u,
            0x1Cu,
            0xEu,
            (struct _GUID *)&WPP_190ea6b10f113182d35a903b93524bb3_Traceguids,
            v15,
            *(_QWORD *)v22);
        }
        v16 = (unsigned __int8)byte_14011EAD3 < 4u;
        *(_BYTE *)(*(_QWORD *)v13 + 5224LL) = 1;
        if ( !v16 )
        {
          v17 = **v14;
          v18 = *(unsigned __int16 **)((*v14)[10] + 24);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v19 = 61;
            goto LABEL_42;
          }
        }
      }
    }
    else
    {
      v13[8] = v15 & 0xFFFDFFFF;
      if ( (v15 != 0) != ((v15 & 0xFFFDFFFF) != 0) || !*(_QWORD *)v13 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
        {
          *(_DWORD *)v22 = v15 & 0xFFFDFFFF;
          WPP_RECORDER_SF_Ld(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            5u,
            0x1Cu,
            0xEu,
            (struct _GUID *)&WPP_190ea6b10f113182d35a903b93524bb3_Traceguids,
            v15,
            *(_QWORD *)v22);
        }
        v16 = (unsigned __int8)byte_14011EAD3 < 4u;
        *(_BYTE *)(*(_QWORD *)v13 + 5224LL) = 1;
        if ( !v16 )
        {
          v17 = **v14;
          v18 = *(unsigned __int16 **)((*v14)[10] + 24);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v19 = 60;
LABEL_42:
            WPP_RECORDER_SF_Zq(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              (int)v18,
              0x1Cu,
              v19,
              (struct _GUID *)&WPP_065a33821845343ef30f5566aa9547e7_Traceguids,
              v18,
              v17);
            continue;
          }
        }
      }
    }
  }
}
