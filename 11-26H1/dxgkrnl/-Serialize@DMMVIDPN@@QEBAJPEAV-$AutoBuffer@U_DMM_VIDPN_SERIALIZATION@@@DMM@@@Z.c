/*
 * XREFs of ?Serialize@DMMVIDPN@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@@Z @ 0x140384CA4
 * Callers:
 *     ?Serialize@COMMITVIDPNREQUEST@VIDPN_MGR@@QEAAJPEAV?$AutoBuffer@U_DMM_COMMITVIDPNREQUEST_SERIALIZATION@@@DMM@@@Z @ 0x1400966A0 (-Serialize@COMMITVIDPNREQUEST@VIDPN_MGR@@QEAAJPEAV-$AutoBuffer@U_DMM_COMMITVIDPNREQUEST_SERIALIZ.c)
 *     ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x140257CC8 (-AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z.c)
 *     ?AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV?$AutoBuffer@E@DMM@@@Z @ 0x140258880 (-AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV-$AutoBuffer@E@DMM@@@Z.c)
 *     ?SerializeVidPns@DMMVIDPN@@SAJAEBV?$Queue@VDMMVIDPN@@@@PEAV?$AutoBuffer@U_DMM_VIDPNSET_SERIALIZATION@@@DMM@@@Z @ 0x140266F84 (-SerializeVidPns@DMMVIDPN@@SAJAEBV-$Queue@VDMMVIDPN@@@@PEAV-$AutoBuffer@U_DMM_VIDPNSET_SERIALIZA.c)
 * Callees:
 *     ?Initialize@?$AutoBuffer@U_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION@@@DMM@@QEAAJ_KQEBXW4DXGK_POOL_FLAGS@@@Z @ 0x14000714C (-Initialize@-$AutoBuffer@U_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION@@@DMM@@QEAAJ_KQEBXW4DXGK_P.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14002C340 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ @ 0x14002DC2C (-AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x14004B63C (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?GetNextSource@DMMVIDPNSOURCESET@@QEBAPEAVDMMVIDPNSOURCE@@QEBV2@@Z @ 0x14004D784 (-GetNextSource@DMMVIDPNSOURCESET@@QEBAPEAVDMMVIDPNSOURCE@@QEBV2@@Z.c)
 *     ?Serialize@DMMVIDPNSOURCEMODE@@QEBAXQEAU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1400967B8 (-Serialize@DMMVIDPNSOURCEMODE@@QEBAXQEAU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z.c)
 *     ?GetPathsFromSourceSerialization@@YAPEAU_DMM_VIDPNPATHSFROMSOURCE_SERIALIZATION@@QEBU_DMM_VIDPN_SERIALIZATION@@E@Z @ 0x140097ABC (-GetPathsFromSourceSerialization@@YAPEAU_DMM_VIDPNPATHSFROMSOURCE_SERIALIZATION@@QEBU_DMM_VIDPN_.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1402DCD14 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 *     ?GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z @ 0x140384408 (-GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z.c)
 *     ?Serialize@DMMVIDPNPRESENTPATH@@QEBAXQEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x140386274 (-Serialize@DMMVIDPNPRESENTPATH@@QEBAXQEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z.c)
 */

__int64 __fastcall DMMVIDPN::Serialize(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  __int64 result; // rax
  struct DMMVIDPNSOURCE *NextSource; // rsi
  unsigned __int8 v6; // bl
  __int64 v7; // r14
  DMMVIDPNSOURCESET *v8; // rcx
  unsigned int v9; // edx
  int NumPathsFromSource; // eax
  unsigned __int64 v11; // rax
  unsigned __int8 v12; // di
  __int64 v13; // rsi
  int v14; // eax
  unsigned int v15; // edi
  unsigned __int8 v16; // r13
  unsigned __int8 v17; // cl
  _QWORD *v18; // rdx
  struct DMMVIDPNSOURCE *v19; // rdi
  __int64 v20; // rbx
  unsigned int v21; // r12d
  int v22; // eax
  unsigned __int64 v23; // rax
  struct _DMM_VIDPNPATHSFROMSOURCE_SERIALIZATION *PathsFromSourceSerialization; // r14
  struct DMMVIDPNTARGETMODESET *v25; // rbx
  DMMVIDPNSOURCEMODE *v26; // rcx
  unsigned __int64 v27; // rsi
  char *v28; // rbx
  DMMVIDPNTARGET **Path; // r14
  struct DMMVIDPNTARGETMODESET *v30; // rax
  __int64 v31; // rdx
  DMMVIDPNSOURCESET *v32; // [rsp+20h] [rbp-20h]
  DMMVIDPNTOPOLOGY *v33; // [rsp+28h] [rbp-18h]
  __int64 v34; // [rsp+30h] [rbp-10h]
  unsigned __int64 v36; // [rsp+90h] [rbp+50h] BYREF
  unsigned __int64 v37; // [rsp+98h] [rbp+58h] BYREF

  v2 = a2;
  if ( a2 )
  {
    if ( *(_QWORD *)(a2 + 32) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 665;
    }
    NextSource = 0LL;
    v33 = (DMMVIDPNTOPOLOGY *)(a1 + 96);
    v6 = 0;
    v7 = 12LL;
    v32 = *(DMMVIDPNSOURCESET **)(a1 + 304);
    v8 = (DMMVIDPNSOURCESET *)*((_QWORD *)v32 + 3);
    if ( v8 != (DMMVIDPNSOURCESET *)((char *)v32 + 24) )
      NextSource = (DMMVIDPNSOURCESET *)((char *)v8 - 8);
    if ( !NextSource )
      goto LABEL_16;
    do
    {
      v9 = *((_DWORD *)NextSource + 6);
      v36 = 0LL;
      NumPathsFromSource = DMMVIDPNTOPOLOGY::GetNumPathsFromSource((DMMVIDPNTOPOLOGY *)(a1 + 96), v9, &v36);
      if ( NumPathsFromSource != -1071774919 )
      {
        if ( NumPathsFromSource < 0 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 696;
        }
        ++v6;
        v11 = 1LL;
        if ( v36 > 1 )
          v11 = v36;
        v7 += 440 * v11 + 48;
      }
      v12 = v6;
      NextSource = DMMVIDPNSOURCESET::GetNextSource(v32, NextSource);
    }
    while ( NextSource );
    v2 = a2;
    if ( v6 <= 1u )
LABEL_16:
      v12 = 1;
    v13 = v7 + 4 * (v12 - 1LL);
    v14 = DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::Initialize((_QWORD *)v2, v13);
    v15 = v14;
    if ( v14 >= 0 )
    {
      v16 = 0;
      v17 = 1;
      **(_DWORD **)(v2 + 32) = v13;
      *(_BYTE *)(*(_QWORD *)(v2 + 32) + 4LL) = v6;
      if ( v6 > 1u )
        v17 = v6;
      v18 = (_QWORD *)((char *)v32 + 24);
      v19 = 0LL;
      v20 = 4LL * v17 + 8;
      if ( (_QWORD *)*v18 != v18 )
        v19 = (struct DMMVIDPNSOURCE *)(*v18 - 8LL);
      for ( ; v19; v19 = DMMVIDPNSOURCESET::GetNextSource(v32, v19) )
      {
        v21 = *((_DWORD *)v19 + 6);
        v37 = 0LL;
        v22 = DMMVIDPNTOPOLOGY::GetNumPathsFromSource(v33, v21, &v37);
        if ( v22 != -1071774919 )
        {
          if ( v22 < 0 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 753;
          }
          *(_DWORD *)(*(_QWORD *)(v2 + 32) + 4LL * v16 + 8) = v20;
          v23 = 1LL;
          if ( v37 > 1 )
            v23 = v37;
          v34 = 440 * v23 + 48 + v20;
          PathsFromSourceSerialization = GetPathsFromSourceSerialization(
                                           *(const struct _DMM_VIDPN_SERIALIZATION *const *)(v2 + 32),
                                           v16);
          v25 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(v19);
          v26 = (DMMVIDPNSOURCEMODE *)*((_QWORD *)v25 + 18);
          if ( v26 )
            DMMVIDPNSOURCEMODE::Serialize(v26, (struct _D3DKMDT_VIDPN_SOURCE_MODE *const)PathsFromSourceSerialization);
          ReferenceCounted::Release((struct DMMVIDPNTARGETMODESET *)((char *)v25 + 88));
          v27 = 0LL;
          *((_BYTE *)PathsFromSourceSerialization + 40) = v37;
          if ( v37 )
          {
            v28 = (char *)PathsFromSourceSerialization + 416;
            do
            {
              LODWORD(v36) = -1;
              if ( (int)DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v33, v21, v27, (unsigned int *)&v36) < 0 )
              {
                WdLogSingleEntry0(1LL);
                WdLogGlobalForLineNumber = 800;
              }
              Path = (DMMVIDPNTARGET **)DMMVIDPNTOPOLOGY::FindPath(v33, v21, v36);
              if ( !Path )
              {
                WdLogSingleEntry0(1LL);
                WdLogGlobalForLineNumber = 809;
              }
              DMMVIDPNPRESENTPATH::Serialize(
                (DMMVIDPNPRESENTPATH *)Path,
                (struct _D3DKMDT_VIDPN_PRESENT_PATH *const)(v28 - 368));
              v30 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(Path[12]);
              v31 = *((_QWORD *)v30 + 18);
              if ( v31 )
              {
                *((_DWORD *)v28 - 2) = *(_DWORD *)(v31 + 24);
                *(_OWORD *)v28 = *(_OWORD *)(v31 + 72);
                *((_OWORD *)v28 + 1) = *(_OWORD *)(v31 + 88);
                *((_OWORD *)v28 + 2) = *(_OWORD *)(v31 + 104);
                *((_QWORD *)v28 + 6) = *(_QWORD *)(v31 + 120);
                *((_DWORD *)v28 + 14) = *(_DWORD *)(v31 + 128);
              }
              ReferenceCounted::Release((struct DMMVIDPNTARGETMODESET *)((char *)v30 + 88));
              ++v27;
              v28 += 440;
            }
            while ( v27 < v37 );
            v2 = a2;
          }
          v20 = v34;
          ++v16;
        }
      }
      return 0LL;
    }
    else
    {
      WdLogSingleEntry3(2LL, v13, a1, v14);
      result = v15;
      WdLogGlobalForLineNumber = 718;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL);
    result = 3221225485LL;
    WdLogGlobalForLineNumber = 659;
  }
  return result;
}
