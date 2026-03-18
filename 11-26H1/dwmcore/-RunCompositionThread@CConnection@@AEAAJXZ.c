/*
 * XREFs of ?RunCompositionThread@CConnection@@AEAAJXZ @ 0x18022C4D4
 * Callers:
 *     ?CompositionThreadEntryPoint@CConnection@@CAKPEAX@Z @ 0x18022C420 (-CompositionThreadEntryPoint@CConnection@@CAKPEAX@Z.c)
 * Callees:
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x180013F60 (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ?MainCompositionThreadLoop@CConnection@@AEAAJXZ @ 0x18002E3F4 (-MainCompositionThreadLoop@CConnection@@AEAAJXZ.c)
 *     MIDL_user_allocate @ 0x18007E170 (MIDL_user_allocate.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E9260 (--2@YAPEAX_K@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180110AD4 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180132948 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ??0CEnergyReporter@@AEAA@XZ @ 0x1801C83DC (--0CEnergyReporter@@AEAA@XZ.c)
 *     ?Initialize@CProcessAttributionReporter@@SAXXZ @ 0x1802085F4 (-Initialize@CProcessAttributionReporter@@SAXXZ.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 *     _anonymous_namespace_::FramesReport::FramesReport @ 0x180210034 (_anonymous_namespace_--FramesReport--FramesReport.c)
 *     _anonymous_namespace_::ScreenOnStudySessionStateTracker::Start @ 0x1802176E8 (_anonymous_namespace_--ScreenOnStudySessionStateTracker--Start.c)
 *     ??3@YAXPEAX_K@Z @ 0x180220694 (--3@YAXPEAX_K@Z.c)
 *     memset_0 @ 0x1802215C0 (memset_0.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18022C75C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _anonymous_namespace_::State::_State @ 0x18022FB64 (_anonymous_namespace_--State--_State.c)
 *     ??1CProcessAttributionReporter@@AEAA@XZ @ 0x180231600 (--1CProcessAttributionReporter@@AEAA@XZ.c)
 *     ??0CProcessResourceAttributionReporter@@AEAA@XZ @ 0x180231778 (--0CProcessResourceAttributionReporter@@AEAA@XZ.c)
 *     ??1CProcessResourceAttributionReporter@@AEAA@XZ @ 0x180231828 (--1CProcessResourceAttributionReporter@@AEAA@XZ.c)
 *     ??1CEnergyReporter@@AEAA@XZ @ 0x180231970 (--1CEnergyReporter@@AEAA@XZ.c)
 *     ??1CProcessAttributionManager@@AEAA@XZ @ 0x1802342C0 (--1CProcessAttributionManager@@AEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CConnection::RunCompositionThread(CConnection *this)
{
  CProcessAttributionManager *v2; // rax
  _QWORD *v3; // rax
  _QWORD *v4; // rbx
  void *v5; // rax
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rax
  _DWORD *v9; // rax
  CEnergyReporter *v10; // rax
  void *v11; // rax
  union _SLIST_HEADER *v12; // rax
  int v13; // eax
  unsigned int v14; // edi
  CProcessResourceAttributionReporter *v15; // rbx
  CProcessAttributionReporter *v16; // rbx
  CEnergyReporter *v17; // rbx
  void *v18; // rbx
  CProcessAttributionManager *v19; // rbx
  int v21; // [rsp+20h] [rbp-18h]
  void *retaddr; // [rsp+38h] [rbp+0h]

  v2 = (CProcessAttributionManager *)DefaultHeap::AllocClear(0x30uLL);
  if ( !v2 )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  *(_QWORD *)v2 = 0LL;
  *((_QWORD *)v2 + 1) = 0LL;
  *((_QWORD *)v2 + 2) = 0LL;
  *((_QWORD *)v2 + 3) = 0LL;
  *((_QWORD *)v2 + 4) = 0LL;
  *((_QWORD *)v2 + 5) = 0LL;
  qword_1803DEAE0 = v2;
  v3 = operator new(0x40uLL);
  v4 = v3;
  if ( v3 )
  {
    *v3 = 0LL;
    v3[1] = 0LL;
    *((_BYTE *)v3 + 16) = 0;
    v3[3] = 0LL;
    v3[4] = 0LL;
    v5 = operator new(0xC0uLL);
    v6 = (__int64)v5;
    if ( v5 )
    {
      memset_0(v5, 0, 0xC0uLL);
      v8 = anonymous_namespace_::FramesReport::FramesReport(v6, v7);
    }
    else
    {
      v8 = 0LL;
    }
    v4[5] = v8;
    anonymous_namespace_::ScreenOnStudySessionStateTracker::Start((__int64)(v4 + 2));
  }
  else
  {
    v4 = 0LL;
  }
  qword_1803DE9E0 = v4;
  v9 = MIDL_user_allocate(0x78uLL);
  if ( v9 )
    v10 = CEnergyReporter::CEnergyReporter(v9);
  else
    v10 = 0LL;
  qword_1803DEA68 = v10;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20000) != 0 )
    CProcessAttributionReporter::Initialize();
  v11 = MIDL_user_allocate(0x50uLL);
  if ( !v11 )
  {
    qword_1803DEA60 = 0LL;
LABEL_30:
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  }
  v12 = (union _SLIST_HEADER *)CProcessResourceAttributionReporter::CProcessResourceAttributionReporter(v11);
  qword_1803DEA60 = (CProcessResourceAttributionReporter *)v12;
  if ( !v12 )
    goto LABEL_30;
  InitializeSListHead(v12 + 1);
  v13 = CConnection::MainCompositionThreadLoop(this);
  v14 = v13;
  if ( v13 < 0 )
    wil::details::in1diag3::_Log_Hr(
      (wil::details::in1diag3 *)retaddr,
      (void *)0x8C,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\connection.cpp",
      (const char *)(unsigned int)v13,
      v21);
  (*(void (__fastcall **)(CConnection *, __int64))(*(_QWORD *)this + 16LL))(this, 2291663905LL);
  v15 = qword_1803DEA60;
  if ( qword_1803DEA60 )
  {
    CProcessResourceAttributionReporter::~CProcessResourceAttributionReporter(qword_1803DEA60);
    operator delete(v15);
  }
  v16 = qword_1803DEA58;
  qword_1803DEA60 = 0LL;
  if ( qword_1803DEA58 )
  {
    CProcessAttributionReporter::~CProcessAttributionReporter(qword_1803DEA58);
    operator delete(v16);
    qword_1803DEA58 = 0LL;
  }
  v17 = qword_1803DEA68;
  if ( qword_1803DEA68 )
  {
    CEnergyReporter::~CEnergyReporter(qword_1803DEA68);
    operator delete(v17);
  }
  v18 = qword_1803DE9E0;
  qword_1803DEA68 = 0LL;
  if ( qword_1803DE9E0 )
  {
    anonymous_namespace_::State::_State(qword_1803DE9E0);
    operator delete(v18);
  }
  v19 = qword_1803DEAE0;
  qword_1803DE9E0 = 0LL;
  if ( qword_1803DEAE0 )
  {
    CProcessAttributionManager::~CProcessAttributionManager(qword_1803DEAE0);
    operator delete(v19);
  }
  qword_1803DEAE0 = 0LL;
  ReleaseInterface<ID2D1Geometry>((__int64 *)&qword_1803DE6D8);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    (void **)&qword_1803DE6F0,
    0LL);
  return v14;
}
