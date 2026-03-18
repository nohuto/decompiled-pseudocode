/*
 * XREFs of ?SetPairedRenderAdapter@ADAPTER_DISPLAY@@QEAAXPEAVDXGADAPTER@@PEBU_GUID@@@Z @ 0x1401A4CE8
 * Callers:
 *     ?DxgkCheckPairedRenderAdapterForStopCallBack@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x140198440 (-DxgkCheckPairedRenderAdapterForStopCallBack@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?DxgkCheckAndUpdatePairingForNewAdapter@@YAXPEAVDXGADAPTER@@PEAE@Z @ 0x1401B4454 (-DxgkCheckAndUpdatePairingForNewAdapter@@YAXPEAVDXGADAPTER@@PEAE@Z.c)
 *     DxgkSetIndirectDisplayRenderAdapter @ 0x1401B863C (DxgkSetIndirectDisplayRenderAdapter.c)
 *     ?DxgkpGetIndirectDisplayPairedAdapter@@YAJPEAVDXGADAPTER@@EAEAVDXGADAPTER_REFERENCE@@@Z @ 0x14029F0F4 (-DxgkpGetIndirectDisplayPairedAdapter@@YAJPEAVDXGADAPTER@@EAEAVDXGADAPTER_REFERENCE@@@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x140017080 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline @ 0x14005AA24 (Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline.c)
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x14005B6A4 (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     Feature_SavePairedAdapterInRemoteSession__private_IsEnabledDeviceUsageNoInline @ 0x14006737C (Feature_SavePairedAdapterInRemoteSession__private_IsEnabledDeviceUsageNoInline.c)
 *     TriggerRenderAdapterPairingChangedWnf @ 0x1401D04AC (TriggerRenderAdapterPairingChangedWnf.c)
 *     ?SetPairedRenderAdapterInRemoteSession@DXGSESSIONMGR@@QEAAXKPEAVDXGADAPTER@@@Z @ 0x140204124 (-SetPairedRenderAdapterInRemoteSession@DXGSESSIONMGR@@QEAAXKPEAVDXGADAPTER@@@Z.c)
 *     DxgkIncreaseAdapterUniquenessOnSession @ 0x140205118 (DxgkIncreaseAdapterUniquenessOnSession.c)
 *     DxgkIncreaseSessionAdapterUniqueness @ 0x1403B4FCC (DxgkIncreaseSessionAdapterUniqueness.c)
 */

void __fastcall ADAPTER_DISPLAY::SetPairedRenderAdapter(
        ADAPTER_DISPLAY *this,
        struct DXGADAPTER *a2,
        const struct _GUID *a3)
{
  unsigned __int64 v3; // rbx
  int IsEnabledDeviceUsageNoInline; // eax
  struct _LUID *v8; // rdx
  DXGADAPTER *v9; // rcx
  struct DXGGLOBAL *Global; // rax
  unsigned int v11; // edx
  struct _LUID *v12; // rdx
  DXGADAPTER *v13; // rcx
  struct DXGGLOBAL *v14; // rax
  _BYTE v15[16]; // [rsp+20h] [rbp-10h] BYREF
  unsigned __int64 v16; // [rsp+50h] [rbp+20h] BYREF

  v3 = 0x200000000LL;
  v16 = 0x200000000LL;
  IsEnabledDeviceUsageNoInline = Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline();
  v9 = (DXGADAPTER *)*((_QWORD *)this + 2);
  if ( IsEnabledDeviceUsageNoInline )
  {
    if ( !DXGADAPTER::IsAdapterSessionized(v9, v8, 0LL, &v16) )
    {
      v3 = v16;
      goto LABEL_8;
    }
    Global = DXGGLOBAL::GetGlobal();
    v3 = v16;
    v11 = v16;
  }
  else
  {
    LODWORD(v16) = 0;
    if ( !DXGADAPTER::IsAdapterSessionized(v9, v8, (unsigned int *)&v16, 0LL) )
      goto LABEL_8;
    Global = DXGGLOBAL::GetGlobal();
    v11 = v16;
  }
  DXGSESSIONMGR::SetPairedRenderAdapterInRemoteSession(*((DXGSESSIONMGR **)Global + 123), v11, a2);
LABEL_8:
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v15, (ADAPTER_DISPLAY *)((char *)this + 200), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v15);
  DXGADAPTER_REFERENCE::Assign((ADAPTER_DISPLAY *)((char *)this + 248), a2);
  if ( a3 )
    *(struct _GUID *)((char *)this + 264) = *a3;
  if ( (unsigned int)Feature_SavePairedAdapterInRemoteSession__private_IsEnabledDeviceUsageNoInline() )
  {
    v13 = (DXGADAPTER *)*((_QWORD *)this + 2);
    LODWORD(v16) = 0;
    if ( DXGADAPTER::IsAdapterSessionized(v13, v12, (unsigned int *)&v16, 0LL) )
    {
      v14 = DXGGLOBAL::GetGlobal();
      DXGSESSIONMGR::SetPairedRenderAdapterInRemoteSession(*((DXGSESSIONMGR **)v14 + 123), v16, a2);
    }
  }
  if ( (unsigned int)Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline() )
    DxgkIncreaseAdapterUniquenessOnSession(v3);
  else
    DxgkIncreaseSessionAdapterUniqueness();
  TriggerRenderAdapterPairingChangedWnf(v3);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v15);
}
