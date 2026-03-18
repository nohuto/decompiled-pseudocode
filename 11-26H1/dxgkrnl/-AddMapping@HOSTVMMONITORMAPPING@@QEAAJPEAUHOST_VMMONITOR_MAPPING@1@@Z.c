/*
 * XREFs of ?AddMapping@HOSTVMMONITORMAPPING@@QEAAJPEAUHOST_VMMONITOR_MAPPING@1@@Z @ 0x1400816C4
 * Callers:
 *     _lambda_5ba4a65bff08d755783aff6afc159ac4_::operator() @ 0x14021FAF8 (_lambda_5ba4a65bff08d755783aff6afc159ac4_--operator().c)
 *     _lambda_af43cb63713906f6ee9ac5c062dc4f06_::operator() @ 0x14021FD6C (_lambda_af43cb63713906f6ee9ac5c062dc4f06_--operator().c)
 * Callees:
 *     ?IncrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z @ 0x140011840 (-IncrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x140016EF0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x140017020 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x140017080 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x140018480 (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14002E850 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400358E0 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x140035AF4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1DXGAUTOSPINLOCK@@QEAA@XZ @ 0x14003CDA8 (--1DXGAUTOSPINLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOSPINLOCK@@QEAA@QEAVDXGSPINLOCK@@E@Z @ 0x14003D0D0 (--0DXGAUTOSPINLOCK@@QEAA@QEAVDXGSPINLOCK@@E@Z.c)
 *     ?AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEBU_LUID@@@Z @ 0x14003DB88 (-AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEBU_LUID@@@Z.c)
 *     ?VidSchIsVSyncEnabled@VIDSCH_EXPORT@@QEAAEPEAU_VIDSCH_GLOBAL@@I@Z @ 0x14003DCA0 (-VidSchIsVSyncEnabled@VIDSCH_EXPORT@@QEAAEPEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     ?VidSchControlVSyncAdapter@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@W4_VIDSCH_VSYNC_REASON_ADAPTER@@EI@Z @ 0x14004C058 (-VidSchControlVSyncAdapter@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@W4_VIDSCH_VSYNC_REASON_ADAPTE.c)
 *     HOSTVMMONITORMAPPING::IterateList__lambda_35d6e908399b17a6c4ed52239f7ddbb9___ @ 0x140080D20 (HOSTVMMONITORMAPPING--IterateList__lambda_35d6e908399b17a6c4ed52239f7ddbb9___.c)
 *     HOSTVMMONITORMAPPING::RemoveMappingInternal__lambda_0c150cc48e274b7aa1002551270ee584___ @ 0x140080F5C (HOSTVMMONITORMAPPING--RemoveMappingInternal__lambda_0c150cc48e274b7aa1002551270ee584___.c)
 *     Feature_MSRC99593_58389349__private_IsEnabledNoReportingNoInline @ 0x140081CE0 (Feature_MSRC99593_58389349__private_IsEnabledNoReportingNoInline.c)
 *     McTemplateK0xqppq_EtwWriteTransfer @ 0x140081DB0 (McTemplateK0xqppq_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ??_GHOST_VMMONITOR_MAPPING_ENTRY@@QEAAPEAXI@Z @ 0x1401FD5D8 (--_GHOST_VMMONITOR_MAPPING_ENTRY@@QEAAPEAXI@Z.c)
 *     ?ControlVSyncAdapter@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1402A12F8 (-ControlVSyncAdapter@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?DmmGetSourceConnectedToTargetInClientVidPn@@YAJQEAXIPEAI@Z @ 0x1402AC92C (-DmmGetSourceConnectedToTargetInClientVidPn@@YAJQEAXIPEAI@Z.c)
 *     ?IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z @ 0x140360A60 (-IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z.c)
 */

__int64 __fastcall HOSTVMMONITORMAPPING::AddMapping(KSPIN_LOCK *this, const struct _LUID *a2)
{
  struct DXGADAPTER *v4; // rsi
  int SourceConnectedToTargetInClientVidPn; // ebx
  int v6; // edx
  int v7; // ecx
  int v8; // r8d
  unsigned int v9; // r15d
  __int64 v10; // rax
  KSPIN_LOCK v11; // rdi
  KSPIN_LOCK v12; // rax
  unsigned int v13; // edx
  bool v14; // zf
  __int64 v15; // rax
  __int64 v16; // r13
  int v17; // eax
  int IsEnabledNoReportingNoInline; // eax
  _OWORD *v19; // rdx
  char v21; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v22[2]; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v23[24]; // [rsp+60h] [rbp-A0h] BYREF
  struct DXGADAPTER *v24[3]; // [rsp+78h] [rbp-88h] BYREF
  _QWORD v25[4]; // [rsp+90h] [rbp-70h] BYREF
  _OWORD v26[5]; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v27; // [rsp+100h] [rbp+0h]
  _BYTE v28[48]; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v29[144]; // [rsp+140h] [rbp+40h] BYREF

  v24[0] = 0LL;
  v22[0] = 0;
  memset(v26, 0, sizeof(v26));
  *((_QWORD *)&v27 + 1) = 0LL;
  DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)v24, a2);
  v4 = v24[0];
  if ( !v24[0] )
  {
    SourceConnectedToTargetInClientVidPn = -1073741585;
    WdLogSingleEntry3(3LL, a2->LowPart, a2->HighPart, -1073741585LL);
    WdLogGlobalForLineNumber = 322;
    goto LABEL_48;
  }
  DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v23, v24[0], 1);
  if ( *((_BYTE *)v4 + 3057) || *((_DWORD *)v4 + 50) != 1 )
  {
    SourceConnectedToTargetInClientVidPn = -1073741585;
    WdLogSingleEntry2(3LL, v4, -1073741585LL);
    WdLogGlobalForLineNumber = 331;
    goto LABEL_47;
  }
  if ( !*((_QWORD *)v4 + 395) )
  {
    SourceConnectedToTargetInClientVidPn = -1073741585;
    WdLogSingleEntry2(3LL, v4, -1073741585LL);
    WdLogGlobalForLineNumber = 339;
LABEL_47:
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v23);
    goto LABEL_48;
  }
  SourceConnectedToTargetInClientVidPn = DmmGetSourceConnectedToTargetInClientVidPn(v4, a2[1].LowPart, v22);
  if ( SourceConnectedToTargetInClientVidPn < 0 )
  {
    SourceConnectedToTargetInClientVidPn = -1073741584;
    WdLogSingleEntry3(3LL, v4, a2[1].LowPart, -1073741584LL);
    WdLogGlobalForLineNumber = 348;
    goto LABEL_47;
  }
  v9 = v22[0];
  if ( *(_QWORD *)&a2[4] && !DXGADAPTER::IsVSyncAvailable(v4, v22[0]) )
  {
    SourceConnectedToTargetInClientVidPn = -1071775738;
    WdLogSingleEntry3(4LL, v4, v9, -1071775738LL);
    WdLogGlobalForLineNumber = 356;
    goto LABEL_47;
  }
  v10 = operator new(0x60uLL, 0x4B677844u, 64LL);
  v11 = v10;
  if ( !v10 )
  {
    SourceConnectedToTargetInClientVidPn = -1073741801;
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 365;
    DxgkLogInternalTriageEvent(0LL, 262145, -1, (__int64)L"Failed to allocate new entry", 365LL, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_47;
  }
  *(_QWORD *)(v10 + 72) = 0LL;
  DXGAUTOSPINLOCK::DXGAUTOSPINLOCK((DXGAUTOSPINLOCK *)v28, this + 2, 1);
  v22[0] = 0;
  v25[0] = v22;
  v21 = 0;
  v25[1] = &v21;
  v25[2] = a2;
  HOSTVMMONITORMAPPING::IterateList__lambda_35d6e908399b17a6c4ed52239f7ddbb9___((_QWORD **)this, (__int64)v25);
  if ( v22[0] >= 0x11 )
  {
    SourceConnectedToTargetInClientVidPn = -1073741756;
    WdLogSingleEntry2(3LL, *(_QWORD *)&a2[2], -1073741756LL);
    WdLogGlobalForLineNumber = 414;
  }
  else if ( v21 )
  {
    SourceConnectedToTargetInClientVidPn = -1073741723;
    WdLogSingleEntry4(3LL, v4, a2[1].LowPart, *(_QWORD *)&a2[2], -1073741723LL);
    WdLogGlobalForLineNumber = 408;
  }
  else
  {
    *(_DWORD *)(v11 + 64) = v9;
    *(_OWORD *)(v11 + 16) = *(_OWORD *)&a2->LowPart;
    *(_OWORD *)(v11 + 32) = *(_OWORD *)&a2[2].LowPart;
    *(_OWORD *)(v11 + 48) = *(_OWORD *)&a2[4].LowPart;
    v12 = *this;
    if ( *(KSPIN_LOCK **)(*this + 8) != this )
      __fastfail(3u);
    *(_QWORD *)v11 = v12;
    *(_QWORD *)(v11 + 8) = this;
    *(_QWORD *)(v12 + 8) = v11;
    *this = v11;
  }
  if ( (unsigned int)Feature_MSRC99593_58389349__private_IsEnabledNoReportingNoInline() )
  {
    if ( SourceConnectedToTargetInClientVidPn >= 0 )
    {
      v26[0] = *(_OWORD *)v11;
      v26[1] = *(_OWORD *)(v11 + 16);
      v26[2] = *(_OWORD *)(v11 + 32);
      v26[3] = *(_OWORD *)(v11 + 48);
      v26[4] = *(_OWORD *)(v11 + 64);
      v27 = *(_OWORD *)(v11 + 80);
      DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)(v11 + 72), v4);
      if ( *(_QWORD *)(v11 + 48) )
        DXGADAPTER::IncrementVSyncWaiter(v4, v9);
    }
  }
  DXGAUTOSPINLOCK::~DXGAUTOSPINLOCK((DXGAUTOSPINLOCK *)v28);
  if ( !(unsigned int)Feature_MSRC99593_58389349__private_IsEnabledNoReportingNoInline() )
  {
    if ( SourceConnectedToTargetInClientVidPn >= 0 )
    {
      DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)(v11 + 72), v4);
      goto LABEL_27;
    }
    goto LABEL_26;
  }
  if ( SourceConnectedToTargetInClientVidPn < 0 )
  {
LABEL_26:
    HOST_VMMONITOR_MAPPING_ENTRY::`scalar deleting destructor'((HOST_VMMONITOR_MAPPING_ENTRY *)v11, v13);
    v11 = 0LL;
  }
LABEL_27:
  DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v23);
  if ( SourceConnectedToTargetInClientVidPn >= 0 )
  {
    v14 = (unsigned int)Feature_MSRC99593_58389349__private_IsEnabledNoReportingNoInline() == 0;
    v15 = *(_QWORD *)&v26[3];
    if ( v14 )
      v15 = *(_QWORD *)(v11 + 48);
    if ( v15 )
    {
      if ( !(unsigned int)Feature_MSRC99593_58389349__private_IsEnabledNoReportingNoInline() )
        DXGADAPTER::IncrementVSyncWaiter(v4, v9);
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v29, v4, 0LL);
      SourceConnectedToTargetInClientVidPn = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v29, 0LL);
      if ( SourceConnectedToTargetInClientVidPn < 0 )
        goto LABEL_41;
      v16 = *((_QWORD *)v4 + 396);
      if ( v16 )
      {
        if ( (unsigned __int8)VIDSCH_EXPORT::VidSchIsVSyncEnabled(
                                *(VIDSCH_EXPORT **)(v16 + 736),
                                *(struct _VIDSCH_GLOBAL **)(v16 + 744),
                                v9) )
          goto LABEL_44;
        v17 = VIDSCH_EXPORT::VidSchControlVSyncAdapter(*(_QWORD *)(v16 + 736), *(_QWORD *)(v16 + 744), 4LL, 1, v9);
      }
      else
      {
        v17 = ADAPTER_DISPLAY::ControlVSyncAdapter(*((ADAPTER_DISPLAY **)v4 + 395), v9);
      }
      SourceConnectedToTargetInClientVidPn = v17;
      if ( v17 < 0 )
      {
LABEL_41:
        IsEnabledNoReportingNoInline = Feature_MSRC99593_58389349__private_IsEnabledNoReportingNoInline();
        v19 = v26;
        if ( !IsEnabledNoReportingNoInline )
          v19 = (_OWORD *)v11;
        *(_QWORD *)v22 = v19;
        HOSTVMMONITORMAPPING::RemoveMappingInternal__lambda_0c150cc48e274b7aa1002551270ee584___(this, (__int64 *)v22);
        Feature_MSRC99593_58389349__private_IsEnabledNoReportingNoInline();
      }
LABEL_44:
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v29);
    }
  }
LABEL_48:
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20000000) != 0 )
    McTemplateK0xqppq_EtwWriteTransfer(
      v7,
      v6,
      v8,
      *a2,
      a2[1].LowPart,
      *(_QWORD *)&a2[4],
      *(_QWORD *)&a2[2],
      SourceConnectedToTargetInClientVidPn);
  DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)((char *)&v26[4] + 8), 0LL);
  DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)v24, 0LL);
  return (unsigned int)SourceConnectedToTargetInClientVidPn;
}
