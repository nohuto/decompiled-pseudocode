/*
 * XREFs of ?AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV?$AutoBuffer@E@DMM@@@Z @ 0x140258880
 * Callers:
 *     ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x140257CC8 (-AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z.c)
 * Callees:
 *     ?Initialize@?$AutoBuffer@U_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION@@@DMM@@QEAAJ_KQEBXW4DXGK_POOL_FLAGS@@@Z @ 0x14000714C (-Initialize@-$AutoBuffer@U_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION@@@DMM@@QEAAJ_KQEBXW4DXGK_P.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x14000CEB0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1400381A8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ @ 0x14004B460 (-GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ.c)
 *     ??1?$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION@@@DMM@@UEAA@XZ @ 0x14005EE30 (--1-$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION@@@DMM@@UEAA@XZ.c)
 *     ?Initialize@?$AutoBuffer@E@DMM@@QEAAJ_KQEBXW4DXGK_POOL_FLAGS@@@Z @ 0x14006DB08 (-Initialize@-$AutoBuffer@E@DMM@@QEAAJ_KQEBXW4DXGK_POOL_FLAGS@@@Z.c)
 *     memmove @ 0x1400A5B00 (memmove.c)
 *     ?SerializeCommitVidPnRequests@COMMITVIDPNREQUEST@VIDPN_MGR@@SAJAEBV?$Queue@UCOMMITVIDPNREQUEST@VIDPN_MGR@@@@PEAV?$AutoBuffer@U_DMM_COMMITVIDPNREQUESTSET_SERIALIZATION@@@DMM@@@Z @ 0x14025D2C0 (-SerializeCommitVidPnRequests@COMMITVIDPNREQUEST@VIDPN_MGR@@SAJAEBV-$Queue@UCOMMITVIDPNREQUEST@V.c)
 *     ?SerializeModeChangeRequests@DISPMODECHANGEREQUEST@VIDPN_MGR@@SAJAEBV?$Queue@UDISPMODECHANGEREQUEST@VIDPN_MGR@@@@PEAV?$AutoBuffer@U_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION@@@DMM@@@Z @ 0x14025D5E0 (-SerializeModeChangeRequests@DISPMODECHANGEREQUEST@VIDPN_MGR@@SAJAEBV-$Queue@UDISPMODECHANGEREQU.c)
 *     ?Serialize@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDEOPRESENTTARGETSET_SERIALIZATION@@@DMM@@@Z @ 0x140260908 (-Serialize@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV-$AutoBuffer@U_DMM_VIDEOPRESENTTARGETSET_SERIALIZA.c)
 *     ?SerializeConnectedMonitors@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV?$AutoBuffer@U_DMM_MONITORSET_SERIALIZATION@@@DMM@@@Z @ 0x140260A88 (-SerializeConnectedMonitors@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV-$AutoBuffer@U_DMM_MONITORSET_SER.c)
 *     ?SerializeVidPns@DMMVIDPN@@SAJAEBV?$Queue@VDMMVIDPN@@@@PEAV?$AutoBuffer@U_DMM_VIDPNSET_SERIALIZATION@@@DMM@@@Z @ 0x140266F84 (-SerializeVidPns@DMMVIDPN@@SAJAEBV-$Queue@VDMMVIDPN@@@@PEAV-$AutoBuffer@U_DMM_VIDPNSET_SERIALIZA.c)
 *     ?Serialize@DMMVIDEOPRESENTSOURCESET@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION@@@DMM@@@Z @ 0x140268788 (-Serialize@DMMVIDEOPRESENTSOURCESET@@QEBAJPEAV-$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZA.c)
 *     ?MonitorSerializeMonitorPresentEvents@@YAJPEAXPEA_KPEAU_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION@@@Z @ 0x14026F970 (-MonitorSerializeMonitorPresentEvents@@YAJPEAXPEA_KPEAU_DMM_MONITORPRESENCEEVENTSET_SERIALIZATIO.c)
 *     ?Serialize@DMMVIDPN@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@@Z @ 0x140384CA4 (-Serialize@DMMVIDPN@@QEBAJPEAV-$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@@Z.c)
 */

__int64 __fastcall VIDPN_MGR::AcquireDiagSummary(VIDPN_MGR *this, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v5; // rcx
  int v6; // eax
  unsigned __int64 v7; // rbx
  struct DXGADAPTER *v8; // rax
  DMMVIDEOPRESENTTARGETSET *v9; // rcx
  int v10; // eax
  struct DXGADAPTER *ContainingAdapter; // rax
  __int64 v12; // rcx
  int v13; // eax
  struct DXGADAPTER *v14; // rax
  int v15; // eax
  _DWORD *v16; // rcx
  int v17; // eax
  __int64 v18; // rsi
  struct DXGADAPTER *v19; // rax
  __int64 v20; // rcx
  int v21; // eax
  struct DXGADAPTER *v22; // rax
  int v23; // eax
  struct DXGADAPTER *v24; // rax
  int v25; // eax
  struct DXGADAPTER *v26; // rax
  struct DXGADAPTER *v27; // rax
  int v28; // eax
  struct DXGADAPTER *v29; // rax
  struct _DMM_MONITORPRESENCEEVENTSET_SERIALIZATION *v30; // r15
  struct DXGADAPTER *v31; // rax
  struct DXGADAPTER *v32; // rax
  int v33; // eax
  struct DXGADAPTER *v34; // rax
  size_t v35; // r12
  size_t v36; // rsi
  int v37; // eax
  _DWORD *v38; // rdi
  char *v39; // rbx
  char *v40; // rcx
  char *v41; // rbx
  char *v42; // rbx
  char *v43; // rbx
  char *v44; // rbx
  char *v45; // rbx
  void *v46; // rcx
  _QWORD v47[4]; // [rsp+28h] [rbp-E0h] BYREF
  void *v48; // [rsp+48h] [rbp-C0h]
  size_t v49; // [rsp+50h] [rbp-B8h]
  __int64 v50; // [rsp+58h] [rbp-B0h]
  _QWORD v51[4]; // [rsp+60h] [rbp-A8h] BYREF
  _DWORD *v52; // [rsp+80h] [rbp-88h]
  unsigned __int64 v53; // [rsp+88h] [rbp-80h]
  __int64 v54; // [rsp+90h] [rbp-78h]
  void **v55; // [rsp+98h] [rbp-70h] BYREF
  __int128 v56; // [rsp+A0h] [rbp-68h]
  void **v57; // [rsp+B0h] [rbp-58h]
  void *v58; // [rsp+B8h] [rbp-50h]
  size_t v59; // [rsp+C0h] [rbp-48h]
  __int64 v60; // [rsp+C8h] [rbp-40h]
  void **v61; // [rsp+D0h] [rbp-38h] BYREF
  __int128 v62; // [rsp+D8h] [rbp-30h]
  void **v63; // [rsp+E8h] [rbp-20h]
  void *v64; // [rsp+F0h] [rbp-18h]
  size_t v65; // [rsp+F8h] [rbp-10h]
  __int64 v66; // [rsp+100h] [rbp-8h]
  void **v67; // [rsp+108h] [rbp+0h] BYREF
  __int128 v68; // [rsp+110h] [rbp+8h]
  void **v69; // [rsp+120h] [rbp+18h]
  void *v70; // [rsp+128h] [rbp+20h]
  size_t v71; // [rsp+130h] [rbp+28h]
  __int64 v72; // [rsp+138h] [rbp+30h]
  void **v73; // [rsp+140h] [rbp+38h] BYREF
  __int128 v74; // [rsp+148h] [rbp+40h]
  void **v75; // [rsp+158h] [rbp+50h]
  void *v76; // [rsp+160h] [rbp+58h]
  size_t v77; // [rsp+168h] [rbp+60h]
  __int64 v78; // [rsp+170h] [rbp+68h]
  void **v79; // [rsp+178h] [rbp+70h] BYREF
  __int128 v80; // [rsp+180h] [rbp+78h]
  void **v81; // [rsp+190h] [rbp+88h]
  void *v82; // [rsp+198h] [rbp+90h]
  size_t v83; // [rsp+1A0h] [rbp+98h]
  __int64 v84; // [rsp+1A8h] [rbp+A0h]
  void **v85; // [rsp+1B0h] [rbp+A8h] BYREF
  __int128 v86; // [rsp+1B8h] [rbp+B0h]
  void **v87; // [rsp+1C8h] [rbp+C0h]
  struct _DMM_MONITORPRESENCEEVENTSET_SERIALIZATION *v88; // [rsp+1D0h] [rbp+C8h]
  size_t v89; // [rsp+1D8h] [rbp+D0h]
  __int64 v90; // [rsp+1E0h] [rbp+D8h]
  void **v91; // [rsp+1E8h] [rbp+E0h] BYREF
  __int128 v92; // [rsp+1F0h] [rbp+E8h]
  void **v93; // [rsp+200h] [rbp+F8h]
  void *Src; // [rsp+208h] [rbp+100h]
  size_t Size; // [rsp+210h] [rbp+108h]
  __int64 v96; // [rsp+218h] [rbp+110h]
  unsigned __int64 v97; // [rsp+260h] [rbp+158h] BYREF

  if ( !a2 )
  {
    WdLogSingleEntry1(2LL);
    result = 3221225485LL;
    WdLogGlobalForLineNumber = 4321;
    return result;
  }
  if ( a2[4] )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4327;
  }
  v5 = *((_QWORD *)this + 14);
  v91 = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
  Src = 0LL;
  v93 = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
  Size = 0LL;
  v92 = 0LL;
  v96 = 256LL;
  v6 = DMMVIDEOPRESENTSOURCESET::Serialize(v5, &v91);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v9 = (DMMVIDEOPRESENTTARGETSET *)*((_QWORD *)this + 15);
    v55 = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
    v58 = 0LL;
    v57 = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
    v56 = 0LL;
    v59 = 0LL;
    v60 = 256LL;
    v10 = DMMVIDEOPRESENTTARGETSET::Serialize(v9);
    v7 = v10;
    if ( v10 < 0 )
    {
      ContainingAdapter = VIDPN_MGR::GetContainingAdapter(this);
      WdLogSingleEntry3(2LL, *((_QWORD *)this + 15), ContainingAdapter, v7);
      WdLogGlobalForLineNumber = 4351;
LABEL_9:
      DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v55);
      goto LABEL_45;
    }
    v12 = *((_QWORD *)this + 16);
    v47[0] = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
    v47[3] = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
    v48 = 0LL;
    v49 = 0LL;
    v50 = 256LL;
    *(_OWORD *)&v47[1] = 0LL;
    if ( v12 )
    {
      v13 = DMMVIDPN::Serialize(v12, v47);
      v7 = v13;
      if ( v13 < 0 )
      {
        v14 = VIDPN_MGR::GetContainingAdapter(this);
        WdLogSingleEntry3(2LL, *((_QWORD *)this + 16), v14, v7);
        WdLogGlobalForLineNumber = 4369;
LABEL_13:
        DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(v47);
        goto LABEL_9;
      }
    }
    else
    {
      v15 = DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::Initialize(v47, 12LL);
      LODWORD(v7) = v15;
      if ( v15 < 0 )
      {
        WdLogSingleEntry2(2LL, 12LL, v15);
        WdLogGlobalForLineNumber = 4382;
        goto LABEL_13;
      }
      v16 = v48;
      *(_QWORD *)v48 = qword_140167308;
      v16[2] = dword_140167310;
    }
    v64 = 0LL;
    v61 = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
    v65 = 0LL;
    v63 = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
    v66 = 256LL;
    v62 = 0LL;
    v17 = VIDPN_MGR::COMMITVIDPNREQUEST::SerializeCommitVidPnRequests((char *)this + 192, &v61);
    v18 = v17;
    if ( v17 < 0 )
    {
      v19 = VIDPN_MGR::GetContainingAdapter(this);
      WdLogSingleEntry3(2LL, (char *)this + 192, v19, v18);
      WdLogGlobalForLineNumber = 4400;
LABEL_19:
      DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v61);
      DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(v47);
      DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v55);
      LODWORD(v7) = v18;
      goto LABEL_45;
    }
    v20 = *((_QWORD *)this + 15);
    v67 = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
    v70 = 0LL;
    v69 = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
    v68 = 0LL;
    v71 = 0LL;
    v72 = 256LL;
    v21 = DMMVIDEOPRESENTTARGETSET::SerializeConnectedMonitors(v20, &v67);
    v7 = v21;
    if ( v21 < 0 )
    {
      v22 = VIDPN_MGR::GetContainingAdapter(this);
      WdLogSingleEntry3(2LL, *((_QWORD *)this + 15), v22, v7);
      WdLogGlobalForLineNumber = 4414;
LABEL_22:
      DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v67);
      DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v61);
      goto LABEL_13;
    }
    v76 = 0LL;
    v73 = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
    v77 = 0LL;
    v75 = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
    v78 = 256LL;
    v74 = 0LL;
    v23 = VIDPN_MGR::DISPMODECHANGEREQUEST::SerializeModeChangeRequests((char *)this + 328, &v73);
    v18 = v23;
    if ( v23 >= 0 )
    {
      v82 = 0LL;
      v79 = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
      v83 = 0LL;
      v81 = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
      v84 = 256LL;
      v80 = 0LL;
      EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64 *)&v97, (__int64)this);
      v25 = DMMVIDPN::SerializeVidPns((char *)this + 256, &v79);
      v18 = v25;
      if ( v25 >= 0 )
      {
        DXGFASTMUTEX::Release((struct _KTHREAD **)(v97 + 40));
        v88 = 0LL;
        v85 = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
        v89 = 0LL;
        v87 = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
        v86 = 0LL;
        v90 = 256LL;
        v97 = 0LL;
        v27 = VIDPN_MGR::GetContainingAdapter(this);
        v28 = MonitorSerializeMonitorPresentEvents(v27, &v97, 0LL);
        v18 = v28;
        if ( (int)(v28 + 0x80000000) < 0 || v28 == -1073741789 )
        {
          v7 = v97;
          if ( !v97 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 4469;
          }
          DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::Initialize(&v85, v7);
          v30 = v88;
          if ( !v88 )
          {
            v31 = VIDPN_MGR::GetContainingAdapter(this);
            WdLogSingleEntry2(2LL, v7, v31);
            WdLogGlobalForLineNumber = 4476;
            DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v85);
            DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v79);
            DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v73);
            DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v67);
            DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v61);
            DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(v47);
            DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v55);
            LODWORD(v7) = -1073741801;
            goto LABEL_45;
          }
          v32 = VIDPN_MGR::GetContainingAdapter(this);
          v33 = MonitorSerializeMonitorPresentEvents(v32, &v97, v30);
          v18 = v33;
          if ( v33 >= 0 )
          {
            v54 = 256LL;
            v35 = v89;
            v51[0] = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
            v36 = Size + v59 + v49 + v65 + v71 + v77 + v89 + v83;
            *(_OWORD *)&v51[1] = 0LL;
            v51[3] = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
            v52 = 0LL;
            v53 = 0LL;
            v37 = DMM::AutoBuffer<unsigned char>::Initialize(v51, v36 + 40, 0LL, 256LL);
            LODWORD(v7) = v37;
            if ( v37 >= 0 )
            {
              v38 = v52;
              v52[1] = v53;
              *(_WORD *)v38 = 28673;
              v39 = (char *)(v52 + 10);
              v40 = (char *)(v52 + 10);
              v38[2] = 40;
              memmove(v40, Src, Size);
              v41 = &v39[Size];
              v38[3] = (_DWORD)v41 - (_DWORD)v52;
              memmove(v41, v58, v59);
              v42 = &v41[v59];
              v38[4] = (_DWORD)v42 - (_DWORD)v52;
              memmove(v42, v48, v49);
              v43 = &v42[v49];
              v38[5] = (_DWORD)v43 - (_DWORD)v52;
              memmove(v43, v64, v65);
              v44 = &v43[v65];
              v38[6] = (_DWORD)v44 - (_DWORD)v52;
              memmove(v44, v70, v71);
              v45 = &v44[v71];
              v38[7] = (_DWORD)v45 - (_DWORD)v52;
              memmove(v45, v76, v77);
              v7 = (unsigned __int64)&v45[v77];
              v38[8] = v7 - (_DWORD)v52;
              memmove((void *)v7, v82, v83);
              v46 = (void *)(v7 + v83);
              v38[9] = v7 + v83 - (_DWORD)v52;
              memmove(v46, v30, v35);
              LODWORD(v7) = DMM::AutoBuffer<unsigned char>::Initialize(a2, v53, v52, v54);
              if ( (v7 & 0x80000000) == 0LL )
              {
                DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(v51);
                DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v85);
                DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v79);
                DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v73);
                DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v67);
                DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v61);
                DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(v47);
                DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v55);
                LODWORD(v7) = 0;
                goto LABEL_45;
              }
              WdLogSingleEntry2(2LL, a2, v51);
              WdLogGlobalForLineNumber = 4659;
            }
            else
            {
              WdLogSingleEntry3(2LL, v36 + 40, this, v37);
              WdLogGlobalForLineNumber = 4532;
            }
            DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(v51);
            DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v85);
            DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v79);
            DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v73);
            goto LABEL_22;
          }
          v34 = VIDPN_MGR::GetContainingAdapter(this);
          WdLogSingleEntry2(2LL, v34, v18);
          WdLogGlobalForLineNumber = 4488;
        }
        else
        {
          v29 = VIDPN_MGR::GetContainingAdapter(this);
          WdLogSingleEntry2(2LL, v29, v18);
          WdLogGlobalForLineNumber = 4464;
        }
        DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v85);
      }
      else
      {
        v26 = VIDPN_MGR::GetContainingAdapter(this);
        WdLogSingleEntry3(2LL, (char *)this + 256, v26, v18);
        WdLogGlobalForLineNumber = 4447;
        DXGFASTMUTEX::Release((struct _KTHREAD **)(v97 + 40));
      }
      DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v79);
    }
    else
    {
      v24 = VIDPN_MGR::GetContainingAdapter(this);
      WdLogSingleEntry3(2LL, (char *)this + 328, v24, v18);
      WdLogGlobalForLineNumber = 4429;
    }
    DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v73);
    DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v67);
    goto LABEL_19;
  }
  v8 = VIDPN_MGR::GetContainingAdapter(this);
  WdLogSingleEntry3(2LL, *((_QWORD *)this + 14), v8, v7);
  WdLogGlobalForLineNumber = 4337;
LABEL_45:
  DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v91);
  return (unsigned int)v7;
}
