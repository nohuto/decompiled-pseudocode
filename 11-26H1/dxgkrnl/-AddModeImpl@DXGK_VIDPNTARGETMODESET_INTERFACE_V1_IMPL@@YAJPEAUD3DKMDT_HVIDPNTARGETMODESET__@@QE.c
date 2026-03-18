/*
 * XREFs of ?AddModeImpl@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTARGETMODESET__@@QEAU_D3DKMDT_VIDPN_TARGET_MODE@@W4_DXGK_VIDPN_INTERFACE_VERSION@@@Z @ 0x14037A1DC
 * Callers:
 *     ?AddMode@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTARGETMODESET__@@QEAU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x14037A1A0 (-AddMode@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTARGETMODESET__@@QEAU_D.c)
 *     ?AddMode@DXGK_VIDPNTARGETMODESET_INTERFACE_V2_IMPL@@YAJPEAUD3DKMDT_HVIDPNTARGETMODESET__@@QEAU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x14037A1C0 (-AddMode@DXGK_VIDPNTARGETMODESET_INTERFACE_V2_IMPL@@YAJPEAUD3DKMDT_HVIDPNTARGETMODESET__@@QEAU_D.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400358E0 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1400468D0 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?Initialize@DMMVIDPNTARGETMODE@@QEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@T_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@PEAU_D3DDDI_RATIONAL@@@Z @ 0x140049D3C (-Initialize@DMMVIDPNTARGETMODE@@QEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@T_D3DKMDT_WIRE_FORMAT_AND_P.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@SAPEAVDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@Z @ 0x14004B4A4 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@S.c)
 *     ??0DMMVIDPNTARGETMODE@@QEAA@I@Z @ 0x14004D358 (--0DMMVIDPNTARGETMODE@@QEAA@I@Z.c)
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x14005B6A4 (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x14037AA90 (-UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 *     ?AddMode@DMMVIDPNTARGETMODESET@@QEAAJV?$auto_ptr@VDMMVIDPNTARGETMODE@@@@@Z @ 0x14037AB00 (-AddMode@DMMVIDPNTARGETMODESET@@QEAAJV-$auto_ptr@VDMMVIDPNTARGETMODE@@@@@Z.c)
 *     ?ReleaseDdiEnumerator@DMMVIDPNTARGETMODESET@@QEAAJPEBU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x14037AEE8 (-ReleaseDdiEnumerator@DMMVIDPNTARGETMODESET@@QEAAJPEBU_D3DKMDT_VIDPN_TARGET_MODE@@@Z.c)
 */

__int64 __fastcall DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL::AddModeImpl(
        DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTARGETMODESET__ *a2,
        struct _D3DKMDT_VIDPN_TARGET_MODE *const a3,
        enum _DXGK_VIDPN_INTERFACE_VERSION a4)
{
  struct _D3DDDI_RATIONAL *v4; // r12
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  DMMVIDPNTARGETMODESET *v11; // r13
  __int64 v12; // rbx
  __int64 v13; // rdi
  __int64 v14; // rdi
  __int64 v15; // rcx
  _QWORD *v16; // r14
  __int64 v17; // rdx
  unsigned int v18; // eax
  __int64 v19; // rcx
  bool v20; // zf
  struct D3DKMDT_HVIDPNTARGETMODESET__ *v22; // r9
  DMMVIDPNTARGETMODE *v23; // rax
  DMMVIDPNTARGETMODE *v24; // r14
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // r8
  unsigned __int8 v28; // al
  int v29; // r10d
  int v30; // r8d
  int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rbx
  int v35; // eax
  __int64 v36; // rdx
  __int64 v37; // rcx
  _QWORD *v38; // rax
  __int64 v39; // rcx
  bool v40; // zf
  _QWORD *v41; // rax
  void (__fastcall **v42)(DMMVIDPNTARGETMODE *, __int64); // rcx
  int v43; // eax
  __int64 v44; // rcx
  __int64 v45; // rcx
  __int64 v46; // rdx
  _QWORD *v47; // rax
  int v48; // r9d
  unsigned __int64 v49; // r11
  int v50; // [rsp+30h] [rbp-20h] BYREF
  __int64 v51; // [rsp+38h] [rbp-18h]
  char v52; // [rsp+40h] [rbp-10h]
  DMMVIDPNTARGETMODE *v53; // [rsp+90h] [rbp+40h] BYREF
  int v54; // [rsp+A0h] [rbp+50h]

  v54 = (int)a3;
  v4 = 0LL;
  v50 = -1;
  v51 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v52 = 1;
    v50 = 7014;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, (__int64)&EventProfilerEnter);
  }
  else
  {
    v52 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v50, 7014);
  v9 = WdLogNewEntry5_WdTrace(v8, v7);
  *(_QWORD *)(v9 + 24) = a2;
  *(_QWORD *)(v9 + 32) = this;
  WdLogGlobalForLineNumber = 1442;
  if ( a2 )
  {
    v10 = ExposedViaHandle<DMMVIDPNTARGETMODESET,D3DKMDT_HVIDPNTARGETMODESET__ *>::GetFromHandle((__int64)this);
    v11 = (DMMVIDPNTARGETMODESET *)v10;
    if ( v10 )
    {
      v12 = *(_QWORD *)(v10 + 112);
      if ( !*(_QWORD *)(v12 + 40) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 68;
      }
      v13 = *(_QWORD *)(ContainedBy<DMMVIDPN>::GetContainer(*(_QWORD *)(v12 + 40) + 64LL) + 48);
      if ( !*(_QWORD *)(v13 + 8) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 68;
      }
      v14 = *(_QWORD *)(v13 + 8);
      if ( !v14 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 1469;
      }
      v15 = *((unsigned int *)a2 + 7);
      if ( *(_QWORD *)(a2 + 7) == 0xFFFFFFFEFFFFFFFEuLL )
      {
        if ( *((_DWORD *)a2 + 9) != -2 || *((_DWORD *)a2 + 10) != -2 || *((_QWORD *)a2 + 6) != 4294967294LL )
        {
          WdLogSingleEntry2(2LL, *(_QWORD *)(v14 + 16), -1071774966LL);
          WdLogGlobalForLineNumber = 1515;
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v50);
          if ( v52 )
          {
            v20 = (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) == 0;
LABEL_25:
            if ( !v20 )
              McTemplateK0q_EtwWriteTransfer(v19, (__int64)&EventProfilerExit);
          }
          return 3223192330LL;
        }
        v16 = (_QWORD *)(v14 + 16);
        v46 = *(_QWORD *)(v14 + 16);
        if ( *(_QWORD *)(v46 + 696) )
        {
          if ( !VIDPN_MGR::_bAllowUnspecifiedVSync )
          {
            WdLogSingleEntry2(2LL, v46, -1071774966LL);
            WdLogGlobalForLineNumber = 1490;
            goto LABEL_23;
          }
          *(_QWORD *)(WdLogNewEntry5_WdTrace(v15, v46) + 24) = *v16;
          WdLogGlobalForLineNumber = 1497;
        }
        else
        {
          v47 = (_QWORD *)WdLogNewEntry5_WdTrace(v15, v46);
          v47[3] = *((unsigned int *)a2 + 5);
          v47[4] = *((unsigned int *)a2 + 6);
          v47[5] = *((unsigned int *)a2 + 7);
          v47[6] = *((unsigned int *)a2 + 8);
          WdLogGlobalForLineNumber = 1504;
        }
      }
      else
      {
        v16 = (_QWORD *)(v14 + 16);
        v17 = *(_QWORD *)(v14 + 16);
        if ( (*(_DWORD *)(v17 + 444) & 0x100) == 0 && !*(_QWORD *)(v17 + 696) )
        {
          WdLogSingleEntry2(2LL, v17, -1071774966LL);
          WdLogGlobalForLineNumber = 1523;
          goto LABEL_23;
        }
        if ( *((_DWORD *)a2 + 9) == -2 && *((_DWORD *)a2 + 10) == -2 )
        {
          if ( !VIDPN_MGR::_bAllowUnspecifiedHSync )
          {
            WdLogSingleEntry4(
              2LL,
              *((unsigned int *)a2 + 5),
              *((unsigned int *)a2 + 6),
              *((unsigned int *)a2 + 7),
              *((unsigned int *)a2 + 8));
            WdLogGlobalForLineNumber = 1536;
            goto LABEL_23;
          }
          *((_DWORD *)a2 + 9) = 1000;
          *((_DWORD *)a2 + 10) = 1;
        }
        if ( *((_QWORD *)a2 + 6) == 4294967294LL )
        {
          if ( !VIDPN_MGR::_bAllowUnspecifiedPixelRate )
          {
            WdLogSingleEntry4(2LL, *((unsigned int *)a2 + 5), *((unsigned int *)a2 + 6), v15, *((unsigned int *)a2 + 8));
            WdLogGlobalForLineNumber = 1552;
            goto LABEL_23;
          }
          *((_QWORD *)a2 + 6) = 1000000LL;
        }
      }
      if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v11 + 14) + 96LL) + 84LL) == 15
        || (unsigned int)(*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v11 + 14) + 96LL) + 84LL) - 16) <= 1
        || (*(_DWORD *)(*v16 + 444LL) & 0x200) != 0 )
      {
        v18 = *((_DWORD *)a2 + 14);
        if ( (v18 & 0x1F8) == 0 )
        {
          WdLogSingleEntry2(2LL, *v16, -1071774966LL);
          WdLogGlobalForLineNumber = 1570;
          goto LABEL_23;
        }
        if ( *(_QWORD *)(a2 + 7) != 0xFFFFFFFEFFFFFFFEuLL )
        {
          if ( DXGADAPTER::IsAdapterSessionized(
                 *(DXGADAPTER **)(v14 + 16),
                 (struct _LUID *)(10 * (unsigned __int64)*((unsigned int *)a2 + 7)
                                % (*((unsigned int *)a2 + 8) * (((unsigned __int64)v18 >> 3) & 0x3F))),
                 0LL,
                 0LL) )
          {
            if ( v49 < 0x32 )
            {
              WdLogSingleEntry2((unsigned int)(v48 + 2), *(_QWORD *)(v14 + 16), -1071774966LL);
              WdLogGlobalForLineNumber = 1587;
              goto LABEL_23;
            }
          }
          else if ( v49 < 0xEF )
          {
            WdLogSingleEntry2(2LL, *(_QWORD *)(v14 + 16), -1071774966LL);
            WdLogGlobalForLineNumber = 1597;
            goto LABEL_23;
          }
        }
      }
      else if ( ((_DWORD)a2[14] & 0x1F8) != 0 )
      {
        WdLogSingleEntry2(2LL, *v16, -1071774966LL);
        WdLogGlobalForLineNumber = 1609;
        goto LABEL_23;
      }
      v22 = a2 + 17;
      if ( v54 < 2 )
      {
        if ( *(_DWORD *)v22 != -1 || *((_DWORD *)a2 + 18) != -1 )
        {
          LODWORD(v34) = -1073741819;
          WdLogSingleEntry5(0LL, 275LL, 7LL, *(_QWORD *)(v14 + 16), -1073741819LL, 0LL);
          WdLogGlobalForLineNumber = 1721;
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v50);
          v40 = v52 == 0;
LABEL_57:
          if ( !v40 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v39, (__int64)&EventProfilerExit);
          return (unsigned int)v34;
        }
LABEL_33:
        v23 = (DMMVIDPNTARGETMODE *)operator new(0xA8uLL, 0x4E506456u, 256LL);
        if ( !v23 || (v24 = DMMVIDPNTARGETMODE::DMMVIDPNTARGETMODE(v23, *(_DWORD *)a2)) == 0LL )
        {
          WdLogSingleEntry1(6LL);
          WdLogGlobalForLineNumber = 1733;
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v50);
          if ( v52 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v25, (__int64)&EventProfilerExit);
          return 3221225495LL;
        }
        v28 = DXGADAPTER::UsingSetTimingsFromVidPn(*(DXGADAPTER **)(v14 + 16));
        v30 = v29 & 3;
        if ( v28 )
          v30 = v29;
        v31 = DMMVIDPNTARGETMODE::Initialize(
                v24,
                (const struct _D3DKMDT_VIDEO_SIGNAL_INFO *)(a2 + 2),
                (union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE)v30,
                v4);
        v34 = v31;
        if ( v31 < 0 )
        {
          v41 = (_QWORD *)WdLogNewEntry5_WdTrace(v33, v32);
          v41[3] = v24;
          v41[4] = this;
          v41[5] = v34;
          v42 = *(void (__fastcall ***)(DMMVIDPNTARGETMODE *, __int64))v24;
          WdLogGlobalForLineNumber = 1753;
          (*v42)(v24, 1LL);
        }
        else
        {
          v53 = v24;
          v35 = DMMVIDPNTARGETMODESET::AddMode(v11, &v53);
          v34 = v35;
          if ( v35 >= 0 )
          {
            LODWORD(v34) = DMMVIDPNTARGETMODESET::ReleaseDdiEnumerator(
                             v11,
                             (const struct _D3DKMDT_VIDPN_TARGET_MODE *)a2);
          }
          else
          {
            v38 = (_QWORD *)WdLogNewEntry5_WdTrace(v37, v36);
            v38[3] = a2;
            v38[4] = this;
            v38[5] = v34;
            WdLogGlobalForLineNumber = 1767;
          }
        }
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v50);
        v40 = v52 == 0;
        goto LABEL_57;
      }
      v26 = *(_DWORD *)v22;
      if ( (*(_DWORD *)(v14 + 24) & 0x20) == 0 )
      {
        v43 = -1;
        if ( (_DWORD)v26 != -1 && (v43 = -2, (_DWORD)v26 != -2) || *((_DWORD *)a2 + 18) != v43 )
        {
          WdLogSingleEntry2(2LL, *(_QWORD *)(v14 + 16), -1071774966LL);
          WdLogGlobalForLineNumber = 1707;
          goto LABEL_23;
        }
        goto LABEL_33;
      }
      if ( (_DWORD)v26 == -1 || (v27 = *((unsigned int *)a2 + 18), (_DWORD)v27 == -1) )
      {
        WdLogSingleEntry2(2LL, *(_QWORD *)(v14 + 16), -1071774966LL);
        WdLogGlobalForLineNumber = 1634;
      }
      else
      {
        if ( (_DWORD)v26 == -2 && (_DWORD)v27 == -2 )
          goto LABEL_33;
        v4 = (struct _D3DDDI_RATIONAL *)(a2 + 17);
        if ( (_DWORD)v26 == -2 || (_DWORD)v27 == -2 || (_DWORD)v26 && !(_DWORD)v27 )
        {
          WdLogSingleEntry2(2LL, *(_QWORD *)(v14 + 16), -1071774966LL);
          WdLogGlobalForLineNumber = 1661;
        }
        else
        {
          if ( v27 * (unsigned __int64)*((unsigned int *)a2 + 7) >= v26 * (unsigned __int64)*((unsigned int *)a2 + 8) )
          {
            if ( !(_DWORD)v27 )
              *((_DWORD *)a2 + 18) = 1;
            goto LABEL_33;
          }
          WdLogSingleEntry2(2LL, *(_QWORD *)(v14 + 16), -1071774966LL);
          WdLogGlobalForLineNumber = 1678;
        }
      }
LABEL_23:
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v50);
      if ( v52 )
      {
        v20 = (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) == 0;
        goto LABEL_25;
      }
      return 3223192330LL;
    }
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 1462;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v50);
    if ( v52 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v45, (__int64)&EventProfilerExit);
    return 3223192329LL;
  }
  else
  {
    WdLogSingleEntry2(2LL, 0LL, this);
    WdLogGlobalForLineNumber = 1448;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v50);
    if ( v52 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v44, (__int64)&EventProfilerExit);
    return 3223192337LL;
  }
}
