/*
 * XREFs of ??1CInteraction@@MEAA@XZ @ 0x1800A93AC
 * Callers:
 *     ??_GCInteraction@@MEAAPEAXI@Z @ 0x1800A9360 (--_GCInteraction@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x180013F60 (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180016FF8 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     McTemplateU0xxq_EventWriteTransfer @ 0x1800A7614 (McTemplateU0xxq_EventWriteTransfer.c)
 *     ??1CInteractionProcessor@@QEAA@XZ @ 0x1800A9580 (--1CInteractionProcessor@@QEAA@XZ.c)
 *     ?IsDefaultInteractionStateLocked@CInteraction@@AEAA_NXZ @ 0x1800A95F4 (-IsDefaultInteractionStateLocked@CInteraction@@AEAA_NXZ.c)
 *     ??$SAFE_DELETE@VCInputSinkStruct@@@@YAXAEAPEAVCInputSinkStruct@@@Z @ 0x1800A97B4 (--$SAFE_DELETE@VCInputSinkStruct@@@@YAXAEAPEAVCInputSinkStruct@@@Z.c)
 *     ?Find@?$CArray@PEAVCInteraction@@V?$CArrayEqualHelper@PEAVCInteraction@@@@@@QEBAHAEBQEAVCInteraction@@@Z @ 0x1801C5738 (-Find@-$CArray@PEAVCInteraction@@V-$CArrayEqualHelper@PEAVCInteraction@@@@@@QEBAHAEBQEAVCInterac.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x18021C5B4 (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 *     memset_0 @ 0x1802215C0 (memset_0.c)
 *     memmove_0 @ 0x1802B97BC (memmove_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CInteraction::~CInteraction(CInteraction *this)
{
  int *v2; // rdi
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  int v7; // eax
  int v8; // edx
  int v9; // [rsp+20h] [rbp-18h]
  CInteraction *v10; // [rsp+40h] [rbp+8h] BYREF

  *(_QWORD *)this = &CInteraction::`vftable'{for `CResource'};
  v2 = (int *)((char *)this + 1720);
  *((_QWORD *)this + 9) = &CInteraction::`vftable'{for `IInteractionResource'};
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x4000) != 0 )
  {
    v9 = *v2;
    McTemplateU0xxq_EventWriteTransfer((__int64)this, &INTERACTION_DESTROYED, this, this, v9);
  }
  v3 = *((_QWORD *)this + 217);
  if ( v3 )
  {
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 40LL))(v3, 0LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 217);
  }
  AcquireSRWLockExclusive(&CInteraction::s_InteractionHandleTableLock);
  memset_0((char *)qword_1803DCC28 + (unsigned int)(Size * *v2), 0, (unsigned int)Size);
  *v2 = 0;
  ReleaseSRWLockExclusive(&CInteraction::s_InteractionHandleTableLock);
  ReleaseInterface<ID2D1Geometry>((__int64 *)this + 15);
  SAFE_DELETE<CInputSinkStruct>((char *)this + 112);
  if ( (*((_BYTE *)this + 201) & 2) != 0 )
    _InterlockedDecrement((volatile signed __int32 *)&CCommonRegistryData::m_cForceDisableInteractionOutputPrediction);
  if ( CInteraction::IsDefaultInteractionStateLocked(this) )
  {
    v10 = this;
    v7 = CArray<CInteraction *,CArrayEqualHelper<CInteraction *>>::Find(v4, &v10);
    if ( v7 >= 0 )
    {
      v8 = dword_1803DE4F0;
      if ( v7 + 1 <= dword_1803DE4F0 )
      {
        if ( v7 + 1 != dword_1803DE4F0 )
        {
          memmove_0(
            (char *)CInteraction::s_DefaultStateLockedInteractions + 8 * v7,
            (char *)CInteraction::s_DefaultStateLockedInteractions + 8 * v7 + 8,
            8LL * (dword_1803DE4F0 - v7 - 1));
          v8 = dword_1803DE4F0;
        }
        dword_1803DE4F0 = v8 - 1;
      }
    }
  }
  if ( *((_QWORD *)this + 28) || *((_QWORD *)this + 31) || *((_QWORD *)this + 30) || *((_QWORD *)this + 29) )
    MicrosoftTelemetryAssertTriggeredNoArgs();
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 217);
  CInteractionProcessor::~CInteractionProcessor((CInteraction *)((char *)this + 360));
  v5 = *((_QWORD *)this + 36);
  if ( v5 )
  {
    *((_QWORD *)this + 36) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(v5 + 8) + 16LL))(v5 + 8);
  }
  v6 = *((_QWORD *)this + 35);
  if ( v6 )
  {
    *((_QWORD *)this + 35) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 26);
  CResource::~CResource(this);
}
