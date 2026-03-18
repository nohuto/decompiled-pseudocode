/*
 * XREFs of ?InternalUpdateDXGIFactory@CDisplayManager@@AEAAJXZ @ 0x1802130E4
 * Callers:
 *     ?UpdateDXGIFactory@CDisplayManager@@IEAAJXZ @ 0x1801D9E90 (-UpdateDXGIFactory@CDisplayManager@@IEAAJXZ.c)
 *     ?Initialize@CDisplayManager@@IEAAJXZ @ 0x18021AD50 (-Initialize@CDisplayManager@@IEAAJXZ.c)
 * Callees:
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x180013F60 (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     McTemplateU0qqq_EventWriteTransfer @ 0x180036278 (McTemplateU0qqq_EventWriteTransfer.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x1800D5790 (-GetCurrentFrameId@@YA_KXZ.c)
 *     ??4?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAAAEAV01@$$T@Z @ 0x18013221C (--4-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1801785D0 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ??$?9V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@YA_NAEBV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@0@$$T@Z @ 0x18018F3C4 (--$-9V-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@w.c)
 *     ?ResetTokenThread@CComposition@@QEAAJXZ @ 0x1801CC82C (-ResetTokenThread@CComposition@@QEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDisplayManager::InternalUpdateDXGIFactory(CDisplayManager *this)
{
  int CurrentFrameId; // eax
  __int64 v2; // rcx
  HRESULT v3; // eax
  unsigned int v4; // ebx
  int v5; // eax
  __int64 v6; // r8
  CComposition *v7; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+8h]
  CDisplayManager *v10; // [rsp+40h] [rbp+10h] BYREF
  void *ppFactory; // [rsp+48h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v12; // [rsp+50h] [rbp+20h] BYREF

  v10 = this;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
  {
    CurrentFrameId = (unsigned int)GetCurrentFrameId();
    McTemplateU0qqq_EventWriteTransfer(v2, &EVTDESC_SCHEDULE_DERIVEDISPLAYSET, 0LL, CurrentFrameId, 0);
  }
  ppFactory = 0LL;
  v3 = CreateDXGIFactory1(&GUID_a4966eed_76db_44da_84c1_ee9a7afb20a8, &ppFactory);
  v4 = v3;
  if ( v3 >= 0 )
  {
    LODWORD(v10) = 0;
    v5 = (*(__int64 (__fastcall **)(void *, __int64, CDisplayManager **))(*(_QWORD *)ppFactory + 240LL))(
           ppFactory,
           qword_1803DE6E8,
           &v10);
    v4 = v5;
    if ( v5 >= 0 )
    {
      v12 = &g_DisplayManager;
      EnterCriticalSection(&g_DisplayManager);
      if ( qword_1803DE6D8 )
      {
        if ( (_DWORD)qword_1803DE6F8 )
        {
          (*(void (__fastcall **)(CDisplayManager *))(*(_QWORD *)qword_1803DE6D8 + 248LL))(qword_1803DE6D8);
          LODWORD(qword_1803DE6F8) = 0;
        }
        if ( wil::operator!=<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>(&qword_1803DE6F0)
          && !byte_1803DE702 )
        {
          (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 184LL))(v6, HIDWORD(qword_1803DE6F8));
          HIDWORD(qword_1803DE6F8) = 0;
        }
      }
      LODWORD(qword_1803DE6F8) = (_DWORD)v10;
      wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::operator=((__int64)&qword_1803DE6F0);
      ReleaseInterface<ID2D1Geometry>((__int64 *)&qword_1803DE6D8);
      qword_1803DE6D8 = (CDisplayManager *)ppFactory;
      ppFactory = 0LL;
      LOBYTE(word_1803DE700) = 0;
      byte_1803DE702 = GetSystemMetrics(4096) != 0;
      CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v12);
      QueryPerformanceCounter(&PerformanceCount);
      CComposition::ResetTokenThread(v7);
      v4 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x199,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\displaymanager.cpp",
        (const char *)(unsigned int)v5);
    }
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&ppFactory);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x195,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\displaymanager.cpp",
      (const char *)(unsigned int)v3);
    if ( ppFactory )
      (*(void (__fastcall **)(void *))(*(_QWORD *)ppFactory + 16LL))(ppFactory);
  }
  return v4;
}
