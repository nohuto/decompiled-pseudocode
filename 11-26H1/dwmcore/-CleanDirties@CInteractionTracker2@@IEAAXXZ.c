/*
 * XREFs of ?CleanDirties@CInteractionTracker2@@IEAAXXZ @ 0x180272760
 * Callers:
 *     ?ScheduleCleanup@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker2@@@Z @ 0x180278B68 (-ScheduleCleanup@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker2@@@Z.c)
 *     ?TryCleanTrackers@CInteractionTrackerBindingManager@@QEAAXXZ @ 0x180279094 (-TryCleanTrackers@CInteractionTrackerBindingManager@@QEAAXXZ.c)
 *     ?UpdateBindings@CInteractionTrackerBindingManager@@AEAAXXZ @ 0x1802792AC (-UpdateBindings@CInteractionTrackerBindingManager@@AEAAXXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@44444444444444444444444@Z @ 0x180003A04 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180016FF8 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VCConditionalExpression@@@WRL@Microsoft@@IEAAKXZ @ 0x180050020 (-InternalRelease@-$ComPtr@VCConditionalExpression@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _tlgKeywordOn @ 0x1800982C0 (_tlgKeywordOn.c)
 *     ?clear@?$vector@V?$ComPtr@VCInteraction@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCInteraction@@@WRL@Microsoft@@@std@@@std@@QEAAXXZ @ 0x18024F070 (-clear@-$vector@V-$ComPtr@VCInteraction@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VCInteraction@@@.c)
 *     ?clear@?$vector@V?$ComPtr@VCManipulation@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCManipulation@@@WRL@Microsoft@@@std@@@std@@QEAAXXZ @ 0x18024F0A0 (-clear@-$vector@V-$ComPtr@VCManipulation@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VCManipulation@.c)
 *     ?ProcessApplyPositionImpulse@CInteractionTracker2@@AEAAXXZ @ 0x1802747FC (-ProcessApplyPositionImpulse@CInteractionTracker2@@AEAAXXZ.c)
 *     ?ProcessApplyPositionShift@CInteractionTracker2@@AEAAXXZ @ 0x180274888 (-ProcessApplyPositionShift@CInteractionTracker2@@AEAAXXZ.c)
 *     ?ProcessApplyScaleImpulse@CInteractionTracker2@@AEAAXXZ @ 0x180274928 (-ProcessApplyScaleImpulse@CInteractionTracker2@@AEAAXXZ.c)
 *     ?ProcessDwmRestartCompleted@CInteractionTracker2@@AEAAXXZ @ 0x1802749CC (-ProcessDwmRestartCompleted@CInteractionTracker2@@AEAAXXZ.c)
 *     ?ProcessDwmStarted@CInteractionTracker2@@AEAAXXZ @ 0x180274A00 (-ProcessDwmStarted@CInteractionTracker2@@AEAAXXZ.c)
 *     ?ProcessSetInertiaCenterpointX@CInteractionTracker2@@AEAAXXZ @ 0x180274D58 (-ProcessSetInertiaCenterpointX@CInteractionTracker2@@AEAAXXZ.c)
 *     ?ProcessSetInertiaCenterpointY@CInteractionTracker2@@AEAAXXZ @ 0x180274DC0 (-ProcessSetInertiaCenterpointY@CInteractionTracker2@@AEAAXXZ.c)
 *     ?ProcessSetInertiaDecayRates@CInteractionTracker2@@AEAAXXZ @ 0x180274E28 (-ProcessSetInertiaDecayRates@CInteractionTracker2@@AEAAXXZ.c)
 *     ?ProcessSetInertiaModifierAnimations@CInteractionTracker2@@AEAAXHPEAVCConditionalExpression@@AEBV?$vector@IV?$allocator@I@std@@@std@@@Z @ 0x180274EB0 (-ProcessSetInertiaModifierAnimations@CInteractionTracker2@@AEAAXHPEAVCConditionalExpression@@AEB.c)
 *     ?ProcessSetManipulations@CInteractionTracker2@@AEAAXXZ @ 0x180274F98 (-ProcessSetManipulations@CInteractionTracker2@@AEAAXXZ.c)
 *     ?ProcessSetMaxPosition@CInteractionTracker2@@AEAAXXZ @ 0x180275124 (-ProcessSetMaxPosition@CInteractionTracker2@@AEAAXXZ.c)
 *     ?ProcessSetRequestedDeltaPosition@CInteractionTracker2@@AEAAXXZ @ 0x180275164 (-ProcessSetRequestedDeltaPosition@CInteractionTracker2@@AEAAXXZ.c)
 *     ?ProcessSetRequestedPosition@CInteractionTracker2@@AEAAXXZ @ 0x1802751FC (-ProcessSetRequestedPosition@CInteractionTracker2@@AEAAXXZ.c)
 *     ?ProcessSetRequestedPositionAnimation@CInteractionTracker2@@AEAAXXZ @ 0x180275298 (-ProcessSetRequestedPositionAnimation@CInteractionTracker2@@AEAAXXZ.c)
 *     ?ProcessSetRequestedScale@CInteractionTracker2@@AEAAXXZ @ 0x180275350 (-ProcessSetRequestedScale@CInteractionTracker2@@AEAAXXZ.c)
 *     ?ProcessSetRequestedScaleAnimation@CInteractionTracker2@@AEAAXXZ @ 0x1802753D0 (-ProcessSetRequestedScaleAnimation@CInteractionTracker2@@AEAAXXZ.c)
 *     ?SetMaxScaleInternal@CInteractionTracker2@@AEAAXM@Z @ 0x1802763A4 (-SetMaxScaleInternal@CInteractionTracker2@@AEAAXM@Z.c)
 *     ?SetMinPositionInternal@CInteractionTracker2@@AEAAXAEBUD2DVector3@@@Z @ 0x180276448 (-SetMinPositionInternal@CInteractionTracker2@@AEAAXAEBUD2DVector3@@@Z.c)
 *     ?SetMinScaleInternal@CInteractionTracker2@@AEAAXM@Z @ 0x18027655C (-SetMinScaleInternal@CInteractionTracker2@@AEAAXM@Z.c)
 */

void __fastcall CInteractionTracker2::CleanDirties(CInteractionTracker2 *this)
{
  unsigned int v2; // ecx
  unsigned int v3; // ecx
  unsigned int v4; // eax
  unsigned int v5; // ecx
  unsigned int v6; // eax
  unsigned int v7; // ecx
  __int64 v8; // rcx
  char v9; // cl
  int v10; // eax
  char v11; // al
  int v12; // xmm1_4
  char v13; // al
  char v14; // al
  CInteractionTracker2 **v15; // [rsp+20h] [rbp-150h]
  int *v16; // [rsp+28h] [rbp-148h]
  int *v17; // [rsp+30h] [rbp-140h]
  unsigned int *v18; // [rsp+38h] [rbp-138h]
  int *v19; // [rsp+40h] [rbp-130h]
  int *v20; // [rsp+48h] [rbp-128h]
  int *v21; // [rsp+50h] [rbp-120h]
  int *v22; // [rsp+58h] [rbp-118h]
  int *v23; // [rsp+60h] [rbp-110h]
  int *v24; // [rsp+68h] [rbp-108h]
  int *v25; // [rsp+70h] [rbp-100h]
  unsigned int *v26; // [rsp+78h] [rbp-F8h]
  int *v27; // [rsp+80h] [rbp-F0h]
  int *v28; // [rsp+88h] [rbp-E8h]
  int *v29; // [rsp+90h] [rbp-E0h]
  int *v30; // [rsp+98h] [rbp-D8h]
  int *v31; // [rsp+A0h] [rbp-D0h]
  int *v32; // [rsp+A8h] [rbp-C8h]
  int *v33; // [rsp+B0h] [rbp-C0h]
  unsigned int *v34; // [rsp+B8h] [rbp-B8h]
  int *v35; // [rsp+C0h] [rbp-B0h]
  int *v36; // [rsp+C8h] [rbp-A8h]
  int *v37; // [rsp+D0h] [rbp-A0h]
  int *v38; // [rsp+D8h] [rbp-98h]
  int *v39; // [rsp+E0h] [rbp-90h]
  int v40; // [rsp+F0h] [rbp-80h] BYREF
  unsigned int v41; // [rsp+F4h] [rbp-7Ch] BYREF
  int v42; // [rsp+F8h] [rbp-78h] BYREF
  int v43; // [rsp+FCh] [rbp-74h] BYREF
  int v44; // [rsp+100h] [rbp-70h] BYREF
  int v45; // [rsp+104h] [rbp-6Ch] BYREF
  int v46; // [rsp+108h] [rbp-68h] BYREF
  int v47; // [rsp+10Ch] [rbp-64h] BYREF
  int v48; // [rsp+110h] [rbp-60h] BYREF
  unsigned int v49; // [rsp+114h] [rbp-5Ch] BYREF
  int v50; // [rsp+118h] [rbp-58h] BYREF
  int v51; // [rsp+11Ch] [rbp-54h] BYREF
  int v52; // [rsp+120h] [rbp-50h] BYREF
  int v53; // [rsp+124h] [rbp-4Ch] BYREF
  int v54; // [rsp+128h] [rbp-48h] BYREF
  int v55; // [rsp+12Ch] [rbp-44h] BYREF
  int v56; // [rsp+130h] [rbp-40h] BYREF
  unsigned int v57; // [rsp+134h] [rbp-3Ch] BYREF
  int v58; // [rsp+138h] [rbp-38h] BYREF
  int v59; // [rsp+13Ch] [rbp-34h] BYREF
  CInteractionTracker2 *v60; // [rsp+140h] [rbp-30h] BYREF
  int v61; // [rsp+148h] [rbp-28h]
  int v62; // [rsp+180h] [rbp+10h] BYREF
  int v63; // [rsp+188h] [rbp+18h] BYREF
  int v64; // [rsp+190h] [rbp+20h] BYREF
  int v65; // [rsp+198h] [rbp+28h] BYREF

  if ( (unsigned int)dword_1803DC880 > 4 && tlgKeywordOn((__int64)&dword_1803DC880, 2LL) )
  {
    v2 = *((unsigned __int8 *)this + 832);
    v62 = *((_BYTE *)this + 828) & 1;
    v63 = (v2 >> 3) & 1;
    v64 = (v2 >> 2) & 1;
    v40 = v2 & 1;
    v65 = (v2 >> 1) & 1;
    v3 = *((unsigned __int8 *)this + 831);
    v41 = v3 >> 7;
    v42 = (v3 >> 6) & 1;
    v43 = (v3 >> 5) & 1;
    v44 = (v3 >> 4) & 1;
    v45 = (v3 >> 3) & 1;
    v46 = (v3 >> 2) & 1;
    v4 = v3 >> 1;
    v48 = v3 & 1;
    v5 = *((unsigned __int8 *)this + 830);
    v47 = v4 & 1;
    v49 = v5 >> 7;
    v50 = (v5 >> 6) & 1;
    v51 = (v5 >> 5) & 1;
    v52 = (v5 >> 4) & 1;
    v53 = (v5 >> 3) & 1;
    v54 = (v5 >> 2) & 1;
    v6 = v5 >> 1;
    v56 = v5 & 1;
    v7 = *((unsigned __int8 *)this + 829);
    v55 = v6 & 1;
    v57 = v7 >> 7;
    v60 = this;
    v58 = (v7 >> 6) & 1;
    v8 = (v7 >> 5) & 1;
    v59 = v8;
    v39 = &v62;
    v38 = &v63;
    v37 = &v64;
    v36 = &v65;
    v35 = &v40;
    v34 = &v41;
    v33 = &v42;
    v32 = &v43;
    v31 = &v44;
    v30 = &v45;
    v29 = &v46;
    v28 = &v47;
    v27 = &v48;
    v26 = &v49;
    v25 = &v50;
    v24 = &v51;
    v23 = &v52;
    v22 = &v53;
    v21 = &v54;
    v20 = &v55;
    v19 = &v56;
    v18 = &v57;
    v17 = &v58;
    v16 = &v59;
    v15 = &v60;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v8,
      (__int64)&unk_1803B44EE);
  }
  v9 = *((_BYTE *)this + 829);
  if ( (v9 & 0x20) != 0 )
  {
    *((_BYTE *)this + 828) &= ~1u;
    v9 &= ~0x20u;
    *((_BYTE *)this + 829) = v9;
  }
  if ( (v9 & 0x40) != 0 )
  {
    CInteractionTracker2::ProcessDwmStarted(this);
    *((_BYTE *)this + 829) &= ~0x40u;
    v9 = *((_BYTE *)this + 829);
  }
  if ( v9 < 0 )
  {
    v10 = *((_DWORD *)this + 50);
    *((_BYTE *)this + 829) = v9 & 0x7F;
    *((_DWORD *)this + 225) = v10;
  }
  v11 = *((_BYTE *)this + 830);
  if ( (v11 & 1) != 0 )
  {
    CInteractionTracker2::ProcessSetInertiaDecayRates(this);
    *((_BYTE *)this + 830) &= ~1u;
    v11 = *((_BYTE *)this + 830);
  }
  if ( (v11 & 2) != 0 )
  {
    v12 = *((_DWORD *)this + 56);
    LODWORD(v60) = *((_DWORD *)this + 55);
    HIDWORD(v60) = v12;
    v61 = 0;
    CInteractionTracker2::SetMinPositionInternal(this, (const struct D2DVector3 *)&v60);
    *((_BYTE *)this + 830) &= ~2u;
    v11 = *((_BYTE *)this + 830);
  }
  if ( (v11 & 4) != 0 )
  {
    CInteractionTracker2::ProcessSetMaxPosition(this);
    *((_BYTE *)this + 830) &= ~4u;
    v11 = *((_BYTE *)this + 830);
  }
  if ( (v11 & 8) != 0 )
  {
    CInteractionTracker2::SetMinScaleInternal(this, *((float *)this + 59));
    *((_BYTE *)this + 830) &= ~8u;
    v11 = *((_BYTE *)this + 830);
  }
  if ( (v11 & 0x10) != 0 )
  {
    CInteractionTracker2::SetMaxScaleInternal(this, *((float *)this + 61));
    *((_BYTE *)this + 830) &= ~0x10u;
    v11 = *((_BYTE *)this + 830);
  }
  if ( (v11 & 0x20) != 0 )
  {
    CInteractionTracker2::ProcessSetRequestedScale(this);
    *((_BYTE *)this + 830) &= ~0x20u;
    v11 = *((_BYTE *)this + 830);
  }
  if ( (v11 & 0x40) != 0 )
  {
    CInteractionTracker2::ProcessSetRequestedScaleAnimation(this);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 121);
    *((_BYTE *)this + 830) &= ~0x40u;
    v11 = *((_BYTE *)this + 830);
  }
  if ( v11 < 0 )
  {
    CInteractionTracker2::ProcessSetRequestedPosition(this);
    *((_BYTE *)this + 830) &= ~0x80u;
  }
  v13 = *((_BYTE *)this + 831);
  if ( (v13 & 1) != 0 )
  {
    CInteractionTracker2::ProcessSetRequestedDeltaPosition(this);
    *((_BYTE *)this + 831) &= ~1u;
    v13 = *((_BYTE *)this + 831);
  }
  if ( (v13 & 2) != 0 )
  {
    CInteractionTracker2::ProcessSetRequestedPositionAnimation(this);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 120);
    *((_BYTE *)this + 831) &= ~2u;
    v13 = *((_BYTE *)this + 831);
  }
  if ( (v13 & 4) != 0 )
  {
    CInteractionTracker2::ProcessApplyScaleImpulse(this);
    *((_BYTE *)this + 831) &= ~4u;
    v13 = *((_BYTE *)this + 831);
  }
  if ( (v13 & 8) != 0 )
  {
    CInteractionTracker2::ProcessApplyPositionImpulse(this);
    *((_BYTE *)this + 831) &= ~8u;
    v13 = *((_BYTE *)this + 831);
  }
  if ( (v13 & 0x10) != 0 )
  {
    CInteractionTracker2::ProcessSetInertiaCenterpointX(this);
    Microsoft::WRL::ComPtr<CConditionalExpression>::InternalRelease((__int64 *)this + 118);
    *((_BYTE *)this + 831) &= ~0x10u;
    v13 = *((_BYTE *)this + 831);
  }
  if ( (v13 & 0x20) != 0 )
  {
    CInteractionTracker2::ProcessSetInertiaCenterpointY(this);
    Microsoft::WRL::ComPtr<CConditionalExpression>::InternalRelease((__int64 *)this + 119);
    *((_BYTE *)this + 831) &= ~0x20u;
    v13 = *((_BYTE *)this + 831);
  }
  if ( (v13 & 0x40) != 0 )
  {
    CInteractionTracker2::ProcessSetInertiaModifierAnimations(
      this,
      0LL,
      *((_QWORD *)this + 115),
      (char *)this + 304,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31,
      v32,
      v33,
      v34,
      v35,
      v36,
      v37,
      v38,
      v39);
    Microsoft::WRL::ComPtr<CConditionalExpression>::InternalRelease((__int64 *)this + 115);
    *((_BYTE *)this + 831) &= ~0x40u;
    v13 = *((_BYTE *)this + 831);
  }
  if ( v13 < 0 )
  {
    CInteractionTracker2::ProcessSetInertiaModifierAnimations(
      this,
      1LL,
      *((_QWORD *)this + 117),
      (char *)this + 328,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31,
      v32,
      v33,
      v34,
      v35,
      v36,
      v37,
      v38,
      v39);
    Microsoft::WRL::ComPtr<CConditionalExpression>::InternalRelease((__int64 *)this + 117);
    *((_BYTE *)this + 831) &= ~0x80u;
  }
  v14 = *((_BYTE *)this + 832);
  if ( (v14 & 1) != 0 )
  {
    CInteractionTracker2::ProcessSetInertiaModifierAnimations(
      this,
      2LL,
      *((_QWORD *)this + 114),
      (char *)this + 352,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31,
      v32,
      v33,
      v34,
      v35,
      v36,
      v37,
      v38,
      v39);
    Microsoft::WRL::ComPtr<CConditionalExpression>::InternalRelease((__int64 *)this + 114);
    *((_BYTE *)this + 832) &= ~1u;
    v14 = *((_BYTE *)this + 832);
  }
  if ( (v14 & 2) != 0 )
  {
    CInteractionTracker2::ProcessSetInertiaModifierAnimations(
      this,
      3LL,
      *((_QWORD *)this + 116),
      (char *)this + 376,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31,
      v32,
      v33,
      v34,
      v35,
      v36,
      v37,
      v38,
      v39);
    Microsoft::WRL::ComPtr<CConditionalExpression>::InternalRelease((__int64 *)this + 116);
    *((_BYTE *)this + 832) &= ~2u;
    v14 = *((_BYTE *)this + 832);
  }
  if ( (v14 & 4) != 0 )
  {
    CInteractionTracker2::ProcessSetManipulations(this);
    std::vector<Microsoft::WRL::ComPtr<CManipulation>>::clear((__int64 **)this + 122);
    std::vector<Microsoft::WRL::ComPtr<CInteraction>>::clear((__int64 **)this + 125);
    *((_BYTE *)this + 832) &= ~4u;
    v14 = *((_BYTE *)this + 832);
  }
  if ( (v14 & 8) != 0 )
  {
    CInteractionTracker2::ProcessApplyPositionShift(this);
    *((_BYTE *)this + 832) &= ~8u;
  }
  if ( (*((_BYTE *)this + 828) & 1) != 0 )
  {
    CInteractionTracker2::ProcessDwmRestartCompleted(this);
    *((_BYTE *)this + 828) &= ~1u;
  }
}
