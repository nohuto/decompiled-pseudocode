/*
 * XREFs of ?CheckMissingMandatoryFilter@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x14015B8E0
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
 */

void __fastcall Ndis::BindRules::CheckMissingMandatoryFilter(Ndis::BindRules *this, struct Ndis::BindStack *a2)
{
  __int64 v2; // rbp
  int v3; // r15d
  unsigned __int64 i; // rbx
  __int64 v6; // rax
  _DWORD *v7; // rdi
  struct NDIS_BIND_FILTER_LINK **v8; // r14
  __int64 v9; // rbp
  unsigned __int64 j; // rbx
  __int64 v11; // rax
  _DWORD *v12; // rdi
  __int64 **v13; // r14
  int v14; // edx
  bool v15; // cf
  __int64 v16; // rcx
  unsigned __int16 *v17; // rdx
  unsigned __int16 v18; // r9
  int v19; // edx
  struct NDIS_BIND_FILTER_LINK *v20; // r8
  KRef<NDIS_BIND_FILTER_DRIVER>::KRefHolder *p; // rdx
  int v22; // edx
  int v23; // edx
  int v24; // [rsp+20h] [rbp-198h]
  char v25[8]; // [rsp+30h] [rbp-188h]
  struct _UNICODE_STRING v26[10]; // [rsp+40h] [rbp-178h] BYREF
  struct _UNICODE_STRING v27[10]; // [rsp+E0h] [rbp-D8h] BYREF

  v2 = *((unsigned int *)this + 5);
  v3 = 0;
  for ( i = 0LL; i != v2; ++i )
  {
    if ( i >= *((unsigned int *)this + 5) )
LABEL_48:
      __fastfail(5u);
    v6 = *((_QWORD *)this + 3);
    v7 = *(_DWORD **)(v6 + 8 * i);
    v8 = (struct NDIS_BIND_FILTER_LINK **)(v6 + 8 * i);
    if ( v7[13] || v7[7] )
    {
      v19 = v7[8];
      if ( v3 )
      {
        v7[8] = v19 | 0x20;
        if ( !v19 || !*(_QWORD *)v7 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
          {
            *(_DWORD *)v25 = v19 | 0x20;
            WPP_RECORDER_SF_Ld(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              5u,
              0x1Cu,
              0xEu,
              (struct _GUID *)&WPP_190ea6b10f113182d35a903b93524bb3_Traceguids,
              v19,
              *(_QWORD *)v25);
          }
          *(_BYTE *)(*(_QWORD *)v7 + 5224LL) = 1;
          memset(v27, 0, sizeof(v27));
          if ( (unsigned __int8)byte_14011EAD3 >= 4u )
          {
            ndisGetBindLinkNameForTracing(*v8, v27);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_Zq(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                v23,
                0x1Cu,
                0x1Eu,
                (struct _GUID *)&WPP_065a33821845343ef30f5566aa9547e7_Traceguids,
                v27[0].Buffer,
                *(_QWORD *)&v27[0].Length);
          }
        }
      }
      else
      {
        v7[8] = v19 & 0xFFFFFFDF;
        if ( (v19 != 0) != ((v19 & 0xFFFFFFDF) != 0) || !*(_QWORD *)v7 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
          {
            *(_DWORD *)v25 = v19 & 0xFFFFFFDF;
            WPP_RECORDER_SF_Ld(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              5u,
              0x1Cu,
              0xEu,
              (struct _GUID *)&WPP_190ea6b10f113182d35a903b93524bb3_Traceguids,
              v19,
              *(_QWORD *)v25);
          }
          *(_BYTE *)(*(_QWORD *)v7 + 5224LL) = 1;
          memset(v26, 0, sizeof(v26));
          if ( (unsigned __int8)byte_14011EAD3 >= 4u )
          {
            ndisGetBindLinkNameForTracing(*v8, v26);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_Zq(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                v22,
                0x1Cu,
                0x1Du,
                (struct _GUID *)&WPP_065a33821845343ef30f5566aa9547e7_Traceguids,
                v26[0].Buffer,
                *(_QWORD *)&v26[0].Length);
          }
        }
      }
      v20 = *v8;
      p = (*v8)->BindDriver._p;
      if ( (p->_t.FilterBindFlags & 1) == 0
        && v20->BindState.m_bindSources
        && v20->BindState.m_unbindReasons
        && !v20->BindState.AllowBindDespiteMandatory )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          if ( *((_WORD *)WPP_GLOBAL_Control + 36) )
            WPP_RECORDER_SF__guid_D(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              (__int64)&p->_t.Guid,
              (__int64)v20,
              0x1Fu,
              v24,
              (__int64)&p->_t.Guid);
        }
        v3 = 1;
      }
    }
  }
  v9 = *((unsigned int *)this + 1);
  for ( j = 0LL; j != v9; ++j )
  {
    if ( j >= *((unsigned int *)this + 1) )
      goto LABEL_48;
    v11 = *((_QWORD *)this + 1);
    v12 = *(_DWORD **)(v11 + 8 * j);
    v13 = (__int64 **)(v11 + 8 * j);
    v14 = v12[8];
    if ( v3 )
    {
      v12[8] = v14 | 0x20;
      if ( !v14 || !*(_QWORD *)v12 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
        {
          *(_DWORD *)v25 = v14 | 0x20;
          WPP_RECORDER_SF_Ld(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            5u,
            0x1Cu,
            0xEu,
            (struct _GUID *)&WPP_190ea6b10f113182d35a903b93524bb3_Traceguids,
            v14,
            *(_QWORD *)v25);
        }
        v15 = (unsigned __int8)byte_14011EAD3 < 4u;
        *(_BYTE *)(*(_QWORD *)v12 + 5224LL) = 1;
        if ( !v15 )
        {
          v16 = **v13;
          v17 = *(unsigned __int16 **)((*v13)[10] + 24);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v18 = 33;
            goto LABEL_56;
          }
        }
      }
    }
    else
    {
      v12[8] = v14 & 0xFFFFFFDF;
      if ( (v14 != 0) != ((v14 & 0xFFFFFFDF) != 0) || !*(_QWORD *)v12 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
        {
          *(_DWORD *)v25 = v14 & 0xFFFFFFDF;
          WPP_RECORDER_SF_Ld(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            5u,
            0x1Cu,
            0xEu,
            (struct _GUID *)&WPP_190ea6b10f113182d35a903b93524bb3_Traceguids,
            v14,
            *(_QWORD *)v25);
        }
        v15 = (unsigned __int8)byte_14011EAD3 < 4u;
        *(_BYTE *)(*(_QWORD *)v12 + 5224LL) = 1;
        if ( !v15 )
        {
          v16 = **v13;
          v17 = *(unsigned __int16 **)((*v13)[10] + 24);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v18 = 32;
LABEL_56:
            WPP_RECORDER_SF_Zq(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              (int)v17,
              0x1Cu,
              v18,
              (struct _GUID *)&WPP_065a33821845343ef30f5566aa9547e7_Traceguids,
              v17,
              v16);
            continue;
          }
        }
      }
    }
  }
}
