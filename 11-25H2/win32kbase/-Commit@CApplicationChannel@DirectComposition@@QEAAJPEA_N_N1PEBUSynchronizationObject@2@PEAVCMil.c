/*
 * XREFs of ?Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_N1PEBUSynchronizationObject@2@PEAVCMilProtocolBlock@@PEAII@Z @ 0x14004F890
 * Callers:
 *     ?ReleaseSystemResource@CSystemChannel@DirectComposition@@QEAAXVResourceHandle@@@Z @ 0x14004F81C (-ReleaseSystemResource@CSystemChannel@DirectComposition@@QEAAXVResourceHandle@@@Z.c)
 *     ?BeginDuplicateResource@CSystemChannel@DirectComposition@@QEAAJVResourceHandle@@I@Z @ 0x14004FEB8 (-BeginDuplicateResource@CSystemChannel@DirectComposition@@QEAAJVResourceHandle@@I@Z.c)
 *     ?CreateSystemResource@CConnection@DirectComposition@@QEAAJIPEAVResourceHandle@@@Z @ 0x140050234 (-CreateSystemResource@CConnection@DirectComposition@@QEAAJIPEAVResourceHandle@@@Z.c)
 *     ?BoostCompositorClock@CSystemChannel@DirectComposition@@QEAAJ_N@Z @ 0x140054F2C (-BoostCompositorClock@CSystemChannel@DirectComposition@@QEAAJ_N@Z.c)
 *     ?Synchronize@CSystemChannel@DirectComposition@@QEAAJPEAX_N@Z @ 0x140056904 (-Synchronize@CSystemChannel@DirectComposition@@QEAAJPEAX_N@Z.c)
 *     ?EnableMMCSS@CSystemChannel@DirectComposition@@QEAAJ_N@Z @ 0x140057CC4 (-EnableMMCSS@CSystemChannel@DirectComposition@@QEAAJ_N@Z.c)
 *     ?CompleteReconnection@CApplicationChannel@DirectComposition@@MEAAXXZ @ 0x1400591F0 (-CompleteReconnection@CApplicationChannel@DirectComposition@@MEAAXXZ.c)
 *     NtDCompositionCommitChannel @ 0x1400AF3A0 (NtDCompositionCommitChannel.c)
 *     ?ForceRender@CConnection@DirectComposition@@QEAAJXZ @ 0x1400E833C (-ForceRender@CConnection@DirectComposition@@QEAAJXZ.c)
 *     ?ReevaluateMPOCapabilities@CConnection@DirectComposition@@QEAAJXZ @ 0x14013489C (-ReevaluateMPOCapabilities@CConnection@DirectComposition@@QEAAJXZ.c)
 *     ?ReevaluateDDA@CConnection@DirectComposition@@QEAAJXZ @ 0x14014F4F0 (-ReevaluateDDA@CConnection@DirectComposition@@QEAAJXZ.c)
 *     DCompositionEnableHwProtectionTeardown @ 0x140226544 (DCompositionEnableHwProtectionTeardown.c)
 *     ?DesktopCaptureBits@CSystemChannel@DirectComposition@@QEAAJU_LUID@@HHIIW4DXGI_FORMAT@@PEAX2@Z @ 0x1402290FC (-DesktopCaptureBits@CSystemChannel@DirectComposition@@QEAAJU_LUID@@HHIIW4DXGI_FORMAT@@PEAX2@Z.c)
 * Callees:
 *     ?BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0K_NAEAVCMilCommandBatchParser@12@PEAII@Z @ 0x1400227BC (-BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0K_NAEAVCMilCommandBatc.c)
 *     ?ValidateAndTranslateHandles@CMilCommandBatchParser@CApplicationChannel@DirectComposition@@QEAAJXZ @ 0x14005B550 (-ValidateAndTranslateHandles@CMilCommandBatchParser@CApplicationChannel@DirectComposition@@QEAAJ.c)
 *     ?SubmitBatch@CApplicationChannel@DirectComposition@@IEAAXPEAVCBatch@2@0_NPEBUSynchronizationObject@2@@Z @ 0x1400C7598 (-SubmitBatch@CApplicationChannel@DirectComposition@@IEAAXPEAVCBatch@2@0_NPEBUSynchronizationObje.c)
 *     ?StartNextFrameNow@CApplicationChannel@DirectComposition@@IEAAXXZ @ 0x14010F2E0 (-StartNextFrameNow@CApplicationChannel@DirectComposition@@IEAAXXZ.c)
 *     ?BuildNinjaBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0K@Z @ 0x1401981B0 (-BuildNinjaBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0K@Z.c)
 *     Feature_EffectHash__private_IsEnabledDeviceUsageNoInline @ 0x1402267A0 (Feature_EffectHash__private_IsEnabledDeviceUsageNoInline.c)
 *     ?CollectEffectHashes@CApplicationChannel@DirectComposition@@IEAAPEA_KPEAI@Z @ 0x140228778 (-CollectEffectHashes@CApplicationChannel@DirectComposition@@IEAAPEA_KPEAI@Z.c)
 *     ?PreallocateNextBatch@CApplicationChannel@DirectComposition@@IEAAXK@Z @ 0x140228950 (-PreallocateNextBatch@CApplicationChannel@DirectComposition@@IEAAXK@Z.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::Commit(
        DirectComposition::CApplicationChannel *this,
        bool *a2,
        bool a3,
        char a4,
        const struct DirectComposition::SynchronizationObject *a5,
        struct CMilProtocolBlock *a6,
        unsigned int *a7,
        unsigned int a8)
{
  int v8; // eax
  char v10; // r12
  unsigned int v12; // r13d
  int v13; // eax
  struct CMilProtocolBlock *v14; // rcx
  int v16; // r14d
  char v17; // si
  struct DirectComposition::CBatch *v18; // r15
  __int64 v19; // rax
  struct _ERESOURCE *v20; // rbx
  __int64 v21; // rcx
  __int64 v22; // rcx
  _QWORD *v23; // rbx
  char v24; // al
  _QWORD *v25; // rbx
  char v26; // al
  __int64 v27; // r15
  unsigned int v28; // r13d
  bool v29; // bl
  __int64 v30; // rax
  int v31; // ecx
  unsigned int v32; // r15d
  const struct DirectComposition::SynchronizationObject *v33; // rsi
  unsigned int *v34; // r14
  char v35; // bl
  struct DirectComposition::CBatch *v36[2]; // [rsp+40h] [rbp-69h] BYREF
  struct DirectComposition::CBatch *v37; // [rsp+50h] [rbp-59h] BYREF
  unsigned int v38; // [rsp+58h] [rbp-51h]
  struct DirectComposition::CBatch *v39; // [rsp+60h] [rbp-49h] BYREF
  DirectComposition::CApplicationChannel *v40; // [rsp+70h] [rbp-39h] BYREF
  struct CMilProtocolBlock *v41; // [rsp+78h] [rbp-31h]
  struct CMilProtocolBlock *v42; // [rsp+80h] [rbp-29h]
  int v43; // [rsp+88h] [rbp-21h]
  char *v44; // [rsp+90h] [rbp-19h]
  int v45; // [rsp+98h] [rbp-11h]
  __int64 v46; // [rsp+A0h] [rbp-9h]
  int v47; // [rsp+A8h] [rbp-1h]
  struct DirectComposition::CBatch *v48; // [rsp+F0h] [rbp+47h] BYREF
  bool *v49; // [rsp+F8h] [rbp+4Fh]
  bool v50; // [rsp+100h] [rbp+57h]

  v50 = a3;
  v49 = a2;
  v8 = *((_DWORD *)this + 102);
  v40 = this;
  v10 = 0;
  LODWORD(v37) = v8;
  v42 = 0LL;
  v12 = v8 + 1;
  v43 = 0;
  *((_DWORD *)this + 102) = v8 + 1;
  v13 = 0;
  v14 = a6;
  v38 = v12;
  v41 = a6;
  v44 = 0LL;
  v45 = 0;
  v46 = 0LL;
  v47 = 0;
  if ( __PAIR128__((unsigned __int64)a7, (unsigned __int64)a6) != 0 )
  {
    if ( (*((_BYTE *)this + 265) & 4) == 0 )
      return 3221225506LL;
    v13 = DirectComposition::CApplicationChannel::CMilCommandBatchParser::ValidateAndTranslateHandles((DirectComposition::CApplicationChannel::CMilCommandBatchParser *)&v40);
    v14 = v41;
  }
  v16 = 0;
  if ( v13 < 0 )
    v16 = v13;
  LODWORD(a6) = v16;
  if ( v16 >= 0 )
  {
    v17 = 0;
    v18 = 0LL;
    v36[0] = 0LL;
    LODWORD(v48) = 0;
    if ( a4 )
    {
      v19 = *((_QWORD *)this + 5);
      *((_BYTE *)this + 264) |= 0x30u;
      v20 = *(struct _ERESOURCE **)(v19 + 16);
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite(v20, 1u);
      v21 = *((_QWORD *)this + 5);
      if ( *(_DWORD *)(v21 + 148) )
      {
        v22 = *(_QWORD *)(v21 + 296);
        if ( v22 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 216LL))(v22);
      }
      ExReleaseResourceLite(*(PERESOURCE *)(*((_QWORD *)this + 5) + 16LL));
      KeLeaveCriticalRegion();
      v14 = v41;
    }
    if ( v14 )
    {
      v42 = v14;
      v43 = *((_DWORD *)v14 + 5);
      v44 = (char *)v14 + 24;
      v45 = *((_DWORD *)v14 + 6);
    }
    v23 = (_QWORD *)*((_QWORD *)this + 58);
    if ( v23 )
    {
      do
      {
        if ( v17 )
          break;
        v24 = (*(__int64 (__fastcall **)(_QWORD *))(*v23 + 40LL))(v23);
        v23 = (_QWORD *)v23[1];
        v17 = v24;
      }
      while ( v23 );
    }
    else if ( !*((_QWORD *)this + 59) )
    {
      goto LABEL_31;
    }
    v25 = (_QWORD *)*((_QWORD *)this + 59);
    if ( v25 )
    {
      while ( !v17 )
      {
        v26 = (*(__int64 (__fastcall **)(_QWORD *))(*v25 + 40LL))(v25);
        v25 = (_QWORD *)v25[1];
        v17 = v26;
        if ( !v25 )
          goto LABEL_23;
      }
      goto LABEL_24;
    }
LABEL_23:
    if ( v17 )
    {
LABEL_24:
      if ( (unsigned int)Feature_EffectHash__private_IsEnabledDeviceUsageNoInline() )
      {
        v36[0] = (struct DirectComposition::CBatch *)DirectComposition::CApplicationChannel::CollectEffectHashes(
                                                       this,
                                                       (unsigned int *)&v48);
        LODWORD(a6) = v16;
      }
      v27 = *((_QWORD *)this + 22);
      v28 = (unsigned int)v37;
      *((_QWORD *)this + 22) = 0LL;
      do
      {
        v37 = 0LL;
        v39 = 0LL;
        v29 = DirectComposition::CApplicationChannel::BuildNinjaBatch(this, &v37, &v39, v28);
        if ( v37 )
        {
          DirectComposition::CApplicationChannel::SubmitBatch(this, v37, v39, *((_BYTE *)this + 48) & 1, 0LL);
          v10 = 1;
        }
      }
      while ( !v29 );
      v12 = v38;
      *((_QWORD *)this + 22) = v27;
      v18 = v36[0];
    }
LABEL_31:
    if ( (unsigned int)Feature_EffectHash__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( v17 )
        DirectComposition::CApplicationChannel::StartNextFrameNow(this);
      LODWORD(a6) = v16;
      if ( v18 )
      {
        DirectComposition::CApplicationChannel::PreallocateNextBatch(this, v12);
        v30 = *((_QWORD *)this + 22);
        v31 = (int)v48;
        LODWORD(a6) = v16;
        *(_QWORD *)(v30 + 104) = v18;
        *(_DWORD *)(v30 + 112) = v31;
      }
    }
    v32 = a8;
    v33 = a5;
    v34 = a7;
    do
    {
      v48 = 0LL;
      v36[0] = 0LL;
      v35 = DirectComposition::CApplicationChannel::BuildBatch(
              this,
              &v48,
              v36,
              v12,
              v50,
              (struct DirectComposition::CApplicationChannel::CMilCommandBatchParser *)&v40,
              v34,
              v32);
      if ( v48 )
      {
        DirectComposition::CApplicationChannel::SubmitBatch(this, v48, v36[0], *((_BYTE *)this + 48) & 1, v33);
        v10 = 1;
      }
    }
    while ( !v35 );
    if ( v10 )
    {
      *((_DWORD *)this + 103) = v12;
    }
    else
    {
      v36[0] = (struct DirectComposition::CBatch *)v12;
      v36[1] = 0LL;
      *(_OWORD *)((char *)this + 16 * (v12 & 0x7F) + 584) = v12;
    }
    v16 = (int)a6;
    if ( v49 )
      *v49 = *((_DWORD *)this + 143) != 0;
  }
  return (unsigned int)v16;
}
