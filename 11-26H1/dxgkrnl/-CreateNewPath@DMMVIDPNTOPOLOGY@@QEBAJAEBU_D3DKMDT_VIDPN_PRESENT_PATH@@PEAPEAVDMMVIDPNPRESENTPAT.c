/*
 * XREFs of ?CreateNewPath@DMMVIDPNTOPOLOGY@@QEBAJAEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x140264C80
 * Callers:
 *     ?AddUnpinnedPathToVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x140259188 (-AddUnpinnedPathToVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VI.c)
 *     ?AddPath@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x140265CE0 (-AddPath@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEAU_D3DKMDT_VID.c)
 * Callees:
 *     ??1?$auto_ptr@VDMMVIDPNSOURCE@@@@QEAA@XZ @ 0x14002E460 (--1-$auto_ptr@VDMMVIDPNSOURCE@@@@QEAA@XZ.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400358E0 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1400468D0 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?GetTargetFromId@DMMVIDPN@@QEAAPEAVDMMVIDPNTARGET@@I@Z @ 0x140046C5C (-GetTargetFromId@DMMVIDPN@@QEAAPEAVDMMVIDPNTARGET@@I@Z.c)
 *     ?GetSourceFromId@DMMVIDPN@@QEAAPEAVDMMVIDPNSOURCE@@I@Z @ 0x14004BD5C (-GetSourceFromId@DMMVIDPN@@QEAAPEAVDMMVIDPNSOURCE@@I@Z.c)
 *     ?reset@?$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAAXPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x140053050 (-reset@-$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAAXPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     ?ContainsPath@DMMVIDPNTOPOLOGY@@QEBAEII@Z @ 0x1400544DC (-ContainsPath@DMMVIDPNTOPOLOGY@@QEBAEII@Z.c)
 *     ??0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@AEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x140097080 (--0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@AEBU_D3DKMDT_VIDPN_PRESENT_.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?GetLowestAvailImportanceOrdinal@DMMVIDPNTOPOLOGY@@QEBAJPEAW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@@Z @ 0x1403CC454 (-GetLowestAvailImportanceOrdinal@DMMVIDPNTOPOLOGY@@QEBAJPEAW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTA.c)
 */

__int64 __fastcall DMMVIDPNTOPOLOGY::CreateNewPath(
        DMMVIDPNTOPOLOGY *this,
        const struct _D3DKMDT_VIDPN_PRESENT_PATH *a2,
        struct DMMVIDPNPRESENTPATH **a3)
{
  __int64 VidPnSourceId; // rbp
  struct DMMVIDPNPRESENTPATH *VidPnTargetId; // rbx
  DMMVIDPN *Container; // rax
  struct DMMVIDPNSOURCE *SourceFromId; // r13
  DMMVIDPN *v10; // rax
  struct DMMVIDPNTARGET *TargetFromId; // r12
  __int64 v12; // rax
  struct _D3DKMDT_VIDPN_PRESENT_PATH *v13; // rcx
  const struct _D3DKMDT_VIDPN_PRESENT_PATH *v14; // rax
  __int64 v15; // r8
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  D3DKMDT_COLOR_COEFF_DYNAMIC_RANGES VidPnTargetColorCoeffDynamicRanges; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  bool v23; // zf
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  D3DKMDT_COLOR_COEFF_DYNAMIC_RANGES v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int64 v29; // rax
  int LowestAvailImportanceOrdinal; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rax
  DMMVIDPNPRESENTPATH *v34; // rax
  __int64 (__fastcall ***v36[2])(_QWORD, __int64); // [rsp+30h] [rbp-1C8h] BYREF
  struct _D3DKMDT_VIDPN_PRESENT_PATH v37; // [rsp+40h] [rbp-1B8h] BYREF

  if ( !a3 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 396;
  }
  *a3 = 0LL;
  VidPnSourceId = a2->VidPnSourceId;
  VidPnTargetId = (struct DMMVIDPNPRESENTPATH *)a2->VidPnTargetId;
  v36[0] = 0LL;
  Container = (DMMVIDPN *)ContainedBy<DMMVIDPN>::GetContainer((__int64)this + 160);
  SourceFromId = DMMVIDPN::GetSourceFromId(Container, VidPnSourceId);
  if ( SourceFromId )
  {
    v10 = (DMMVIDPN *)ContainedBy<DMMVIDPN>::GetContainer((__int64)this + 160);
    TargetFromId = DMMVIDPN::GetTargetFromId(v10, (int)VidPnTargetId);
    if ( TargetFromId )
    {
      if ( DMMVIDPNTOPOLOGY::ContainsPath(this, VidPnSourceId, (int)VidPnTargetId) )
      {
        v12 = ContainedBy<DMMVIDPN>::GetContainer((__int64)this + 160);
        WdLogSingleEntry3(7LL, VidPnSourceId, VidPnTargetId, v12);
        WdLogGlobalForLineNumber = 440;
        LODWORD(VidPnTargetId) = -1071774957;
      }
      else
      {
        v13 = &v37;
        v14 = a2;
        v15 = 2LL;
        do
        {
          v16 = *(_OWORD *)&v14->ContentTransformation.ScalingSupport;
          *(_OWORD *)&v13->VidPnSourceId = *(_OWORD *)&v14->VidPnSourceId;
          v17 = *(_OWORD *)&v14->VisibleFromActiveTLOffset.cy;
          *(_OWORD *)&v13->ContentTransformation.ScalingSupport = v16;
          VidPnTargetColorCoeffDynamicRanges = v14->VidPnTargetColorCoeffDynamicRanges;
          *(_OWORD *)&v13->VisibleFromActiveTLOffset.cy = v17;
          v19 = *(_OWORD *)&v14->Content;
          v13->VidPnTargetColorCoeffDynamicRanges = VidPnTargetColorCoeffDynamicRanges;
          v20 = *(_OWORD *)&v14->CopyProtection.OEMCopyProtection[4];
          *(_OWORD *)&v13->Content = v19;
          v21 = *(_OWORD *)&v14->CopyProtection.OEMCopyProtection[20];
          *(_OWORD *)&v13->CopyProtection.OEMCopyProtection[4] = v20;
          v22 = *(_OWORD *)&v14->CopyProtection.OEMCopyProtection[36];
          v14 = (const struct _D3DKMDT_VIDPN_PRESENT_PATH *)((char *)v14 + 128);
          *(_OWORD *)&v13->CopyProtection.OEMCopyProtection[20] = v21;
          v13 = (struct _D3DKMDT_VIDPN_PRESENT_PATH *)((char *)v13 + 128);
          *(_OWORD *)&v13[-1].GammaRamp.DataSize = v22;
          --v15;
        }
        while ( v15 );
        v23 = a2->ImportanceOrdinal == 255;
        v24 = *(_OWORD *)&v14->ContentTransformation.ScalingSupport;
        *(_OWORD *)&v13->VidPnSourceId = *(_OWORD *)&v14->VidPnSourceId;
        v25 = *(_OWORD *)&v14->VisibleFromActiveTLOffset.cy;
        *(_OWORD *)&v13->ContentTransformation.ScalingSupport = v24;
        v26 = v14->VidPnTargetColorCoeffDynamicRanges;
        *(_OWORD *)&v13->VisibleFromActiveTLOffset.cy = v25;
        v27 = *(_OWORD *)&v14->Content;
        v13->VidPnTargetColorCoeffDynamicRanges = v26;
        v28 = *(_OWORD *)&v14->CopyProtection.OEMCopyProtection[4];
        v29 = *(_QWORD *)&v14->CopyProtection.OEMCopyProtection[20];
        *(_OWORD *)&v13->Content = v27;
        *(_OWORD *)&v13->CopyProtection.OEMCopyProtection[4] = v28;
        *(_QWORD *)&v13->CopyProtection.OEMCopyProtection[20] = v29;
        if ( v23
          && (LowestAvailImportanceOrdinal = DMMVIDPNTOPOLOGY::GetLowestAvailImportanceOrdinal(
                                               this,
                                               &v37.ImportanceOrdinal),
              VidPnTargetId = (struct DMMVIDPNPRESENTPATH *)LowestAvailImportanceOrdinal,
              LowestAvailImportanceOrdinal < 0) )
        {
          v33 = WdLogNewEntry5_WdTrace(v32, v31);
          *(_QWORD *)(v33 + 24) = this;
          *(_QWORD *)(v33 + 32) = VidPnTargetId;
          WdLogGlobalForLineNumber = 456;
        }
        else
        {
          v34 = (DMMVIDPNPRESENTPATH *)operator new(0xC0uLL, 0x4E506456u, 256LL);
          if ( v34 )
            v34 = DMMVIDPNPRESENTPATH::DMMVIDPNPRESENTPATH(v34, SourceFromId, TargetFromId, &v37);
          auto_ptr<DMMVIDPNPRESENTPATH>::reset(v36, (__int64 (__fastcall ***)(_QWORD, __int64))v34);
          VidPnTargetId = (struct DMMVIDPNPRESENTPATH *)v36[0];
          if ( v36[0] )
          {
            if ( (**((unsigned __int8 (__fastcall ***)(__int64 (__fastcall ***)(_QWORD, __int64)))v36[0] + 7))(v36[0] + 7) )
            {
              *a3 = VidPnTargetId;
              LODWORD(VidPnTargetId) = 0;
              v36[0] = 0LL;
            }
            else
            {
              WdLogSingleEntry4(7LL, a2->VidPnSourceId, a2->VidPnTargetId, this, *((int *)VidPnTargetId + 16));
              LODWORD(VidPnTargetId) = *((_DWORD *)VidPnTargetId + 16);
              WdLogGlobalForLineNumber = 480;
            }
          }
          else
          {
            WdLogSingleEntry1(6LL);
            WdLogGlobalForLineNumber = 472;
            LODWORD(VidPnTargetId) = -1073741801;
          }
        }
      }
    }
    else
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 430;
      LODWORD(VidPnTargetId) = -1071774971;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 416;
    LODWORD(VidPnTargetId) = -1071774972;
  }
  auto_ptr<DMMVIDPNSOURCE>::~auto_ptr<DMMVIDPNSOURCE>(v36);
  return (unsigned int)VidPnTargetId;
}
