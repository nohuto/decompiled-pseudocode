/*
 * XREFs of ?DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z @ 0x14025B780
 * Callers:
 *     ?DxgkCddDisable@@YAJIII@Z @ 0x1401BC480 (-DxgkCddDisable@@YAJIII@Z.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x14000CEB0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?PinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z @ 0x14002C69C (-PinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x14002D768 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1400319C0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1400381A8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x14004B63C (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?UnpinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJXZ @ 0x140058868 (-UnpinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJXZ.c)
 *     ?VidSchCancelDeferredVidPnSourceVisibility@VIDSCH_EXPORT@@QEAAXPEAU_VIDSCH_GLOBAL@@I@Z @ 0x14006020C (-VidSchCancelDeferredVidPnSourceVisibility@VIDSCH_EXPORT@@QEAAXPEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     ?GetPrimaryPath@ADAPTER_DISPLAY@@QEBAXPEAI0PEAW4_DXGK_PRIMARY_TARGET_TYPE@@@Z @ 0x140063768 (-GetPrimaryPath@ADAPTER_DISPLAY@@QEBAXPEAI0PEAW4_DXGK_PRIMARY_TARGET_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1402A76C8 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1402A7894 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ?RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1402AB7A4 (-RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1402CFF04 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1402D4EF8 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?CacheLastClientCommittedVidPnRef@VIDPN_MGR@@QEAAJQEAVDMMVIDPN@@@Z @ 0x1402D6908 (-CacheLastClientCommittedVidPnRef@VIDPN_MGR@@QEAAJQEAVDMMVIDPN@@@Z.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1402DCD14 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x140344370 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z @ 0x1403EC5CC (-DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z.c)
 */

__int64 __fastcall DmmRemovePathsFromVidPnSource(struct DXGDEVICE *a1, unsigned int a2, char a3)
{
  __int64 v3; // rdi
  __int64 v5; // rsi
  char *v6; // r8
  ADAPTER_DISPLAY *v7; // rcx
  unsigned int v8; // eax
  DMMVIDPNTOPOLOGY *v9; // rbx
  char v10; // r14
  unsigned int i; // r13d
  int v12; // eax
  __int64 v13; // rdx
  struct DMMVIDPNPRESENTPATH *Path; // r14
  enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING v15; // eax
  int v16; // eax
  struct DMMVIDPN *v17; // rbx
  struct DXGDEVICE *v18; // r13
  VIDPN_MGR *v19; // r14
  int v20; // eax
  ADAPTER_DISPLAY *v21; // rbx
  int v22; // eax
  int ClientCommittedVidPnRef; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r14
  _QWORD *v27; // rax
  int v28; // eax
  __int64 v29; // rcx
  __int64 v30; // r8
  int v31; // eax
  __int64 v32; // rbx
  int v34; // [rsp+30h] [rbp-D0h]
  char v35[4]; // [rsp+50h] [rbp-B0h] BYREF
  enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING v36; // [rsp+54h] [rbp-ACh] BYREF
  int v37; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v38; // [rsp+5Ch] [rbp-A4h] BYREF
  struct DMMVIDPN *v39; // [rsp+60h] [rbp-A0h] BYREF
  ADAPTER_DISPLAY *v40; // [rsp+68h] [rbp-98h]
  VIDPN_MGR *v41; // [rsp+70h] [rbp-90h]
  struct DXGDEVICE *v42; // [rsp+78h] [rbp-88h]
  __int64 v43; // [rsp+80h] [rbp-80h] BYREF
  DMMVIDPNTOPOLOGY *v44; // [rsp+88h] [rbp-78h]
  _BYTE v45[32]; // [rsp+90h] [rbp-70h] BYREF
  _DWORD v46[68]; // [rsp+B0h] [rbp-50h] BYREF

  v3 = *((_QWORD *)a1 + 237);
  v42 = a1;
  v5 = a2;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)v3) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 14053;
  }
  v40 = *(ADAPTER_DISPLAY **)(v3 + 3160);
  v41 = (VIDPN_MGR *)*((_QWORD *)v40 + 13);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v43, (__int64)v41);
  WdLogSingleEntry2(7LL, v5, v41);
  WdLogGlobalForLineNumber = 14071;
  v39 = 0LL;
  if ( (int)VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(v41) < 0 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 14082;
    goto LABEL_50;
  }
  v6 = (char *)v39 + 96;
  v44 = (struct DMMVIDPN *)((char *)v39 + 96);
  LOBYTE(v6) = 2;
  ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
    v45,
    ((unsigned __int64)v39 + 152) & -(__int64)((struct DMMVIDPN *)((char *)v39 + 96) != 0LL),
    v6);
  v37 = -1;
  v38 = -1;
  if ( a3 )
  {
    v7 = *(ADAPTER_DISPLAY **)(v3 + 3160);
    v36 = D3DKMDT_VPPS_UNINITIALIZED;
    ADAPTER_DISPLAY::GetPrimaryPath(v7, (unsigned int *)&v36, &v38, (enum _DXGK_PRIMARY_TARGET_TYPE *)&v37);
    v8 = v38;
    if ( v36 != (_DWORD)v5 )
      v8 = -1;
    v37 = v8;
  }
  v9 = v44;
  v10 = 0;
  v35[0] = 0;
  for ( i = 0; ; ++i )
  {
    v36 = -1;
    v12 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v9, v5, i, (unsigned int *)&v36);
    if ( v12 < 0 )
    {
      if ( v12 == -1071774919 )
        break;
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 14127;
    }
    if ( v36 == -1 )
      break;
    if ( v36 == v37 )
    {
      Path = DMMVIDPNTOPOLOGY::FindPath(v9, v5, v36);
      if ( !Path )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 14155;
      }
      v15 = *((_DWORD *)Path + 28);
      v36 = v15;
      if ( v15 == D3DKMDT_VPPS_UNPINNED )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 14161;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"ScalingMode != D3DKMDT_VPPS_UNPINNED",
          14161LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      else if ( ((v15 - 1) & 0xFFFFFFFD) == 0 )
      {
        goto LABEL_30;
      }
      if ( (*((_DWORD *)Path + 30) & 4) == 0 )
      {
LABEL_30:
        v10 = v35[0];
        continue;
      }
      if ( (int)DMMVIDPNPRESENTPATH::UnpinContentScaling(Path, v13) < 0 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 14179;
      }
      v16 = DMMVIDPNPRESENTPATH::PinContentScaling(Path, D3DKMDT_VPPS_STRETCHED);
      if ( v16 < 0 )
      {
        WdLogSingleEntry3(2LL, v5, v3, v16);
        WdLogGlobalForLineNumber = 14190;
        if ( (int)DMMVIDPNPRESENTPATH::PinContentScaling(Path, v36) < 0 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 14192;
        }
      }
      v10 = 1;
      v35[0] = 1;
    }
    else
    {
      if ( (int)DMMVIDPNTOPOLOGY::RemovePath(v9, v5, v36, 0LL) < 0 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 14142;
      }
      v10 = 1;
      --i;
      v35[0] = 1;
    }
  }
  v17 = v39;
  if ( !v10 )
  {
    v19 = v41;
    v18 = v42;
LABEL_39:
    ClientCommittedVidPnRef = VIDPN_MGR::CacheLastClientCommittedVidPnRef(v19, v17);
    v26 = ClientCommittedVidPnRef;
    if ( ClientCommittedVidPnRef < 0 )
    {
      v27 = (_QWORD *)WdLogNewEntry5_WdTrace(v25, v24);
      v27[3] = v17;
      v27[4] = v3;
      v27[5] = v26;
      WdLogGlobalForLineNumber = 14241;
    }
    v21 = v40;
    v28 = ADAPTER_DISPLAY::DestroyCddAllocations(v40, v18, v5);
    if ( v28 < 0 )
    {
      WdLogSingleEntry3(2LL, v5, v3, v28);
      WdLogGlobalForLineNumber = 14257;
    }
    goto LABEL_43;
  }
  memset(v46, 0, 0x104uLL);
  v18 = v42;
  v19 = v41;
  LOBYTE(v34) = 0;
  v35[0] = 0;
  v20 = VIDPN_MGR::SetTimingsFromVidPn(v41, 0LL, 1LL, v39, v46, v35, v34, v42, 0LL);
  if ( v20 < 0 )
  {
    WdLogSingleEntry2(3LL, v17, v20);
    WdLogGlobalForLineNumber = 14215;
    goto LABEL_35;
  }
  v22 = v46[21];
  if ( !_bittest(&v22, v5) )
    goto LABEL_39;
  WdLogSingleEntry3(3LL, v17, v5, -1071774970LL);
  WdLogGlobalForLineNumber = 14224;
LABEL_35:
  v21 = v40;
LABEL_43:
  v29 = *(_QWORD *)(v3 + 3168);
  if ( v29 )
  {
    VIDSCH_EXPORT::VidSchCancelDeferredVidPnSourceVisibility(
      *(VIDSCH_EXPORT **)(v29 + 736),
      *(struct _VIDSCH_GLOBAL **)(v29 + 744),
      v5);
  }
  else
  {
    v30 = *((_QWORD *)v21 + 58);
    if ( v30 )
      _InterlockedExchange((volatile __int32 *)(3040 * v5 + *(_QWORD *)(v30 + 8) + 1080), 0);
  }
  v31 = ADAPTER_DISPLAY::SetVidPnSourceVisibility(v21, v5, 0, 0x100u, 0);
  if ( v31 < 0 )
  {
    v32 = v31;
    WdLogSingleEntry3(2LL, v5, v3, v31);
    WdLogGlobalForLineNumber = 14297;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to reset VidPn source visibility on VidPn source 0x%I64x on adapter 0x%I64x (Status = 0x%I64x).",
      v5,
      v3,
      v32,
      0LL,
      0LL);
  }
  ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v45);
LABEL_50:
  auto_rc<DMMVIDPN>::reset((__int64 *)&v39, 0LL);
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v43 + 40));
  return 0LL;
}
