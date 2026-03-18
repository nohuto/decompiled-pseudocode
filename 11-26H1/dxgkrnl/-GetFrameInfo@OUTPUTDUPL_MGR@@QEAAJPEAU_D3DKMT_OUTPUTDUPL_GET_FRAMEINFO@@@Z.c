/*
 * XREFs of ?GetFrameInfo@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_GET_FRAMEINFO@@@Z @ 0x14036B558
 * Callers:
 *     _lambda_a555c8f1bf148962729f2402570fc0b4_::_lambda_invoker_cdecl_ @ 0x14036B540 (_lambda_a555c8f1bf148962729f2402570fc0b4_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?WriteDiagnosticEntry@DXGDIAGNOSTICS@@QEBAJPEAU_DXGK_DIAG_HEADER@@@Z @ 0x14000BB9C (-WriteDiagnosticEntry@DXGDIAGNOSTICS@@QEBAJPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     Feature_Win32ProcessCapabilities__private_IsEnabledDeviceUsageNoInline @ 0x14005CD8C (Feature_Win32ProcessCapabilities__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?InitializePacketHeader@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z @ 0x1402B0DC4 (-InitializePacketHeader@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z.c)
 *     ?IsHighFreqLoggingEnabled@OUTPUTDUPL_MGR@@QEAAHXZ @ 0x1402B1A40 (-IsHighFreqLoggingEnabled@OUTPUTDUPL_MGR@@QEAAHXZ.c)
 *     ?LogEtw@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z @ 0x1402B1AD4 (-LogEtw@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z.c)
 *     ?FindContextForProcess@OUTPUTDUPL_MGR@@AEAAPEAPEAVOUTPUTDUPL_CONTEXT@@PEAU_OUTPUTDUPL_CONTEXTLIST@@PEAU_EPROCESS@@PEAI@Z @ 0x14036B6E4 (-FindContextForProcess@OUTPUTDUPL_MGR@@AEAAPEAPEAVOUTPUTDUPL_CONTEXT@@PEAU_OUTPUTDUPL_CONTEXTLIS.c)
 *     ?GetFrameInfo@OUTPUTDUPL_CONTEXT@@QEAAXPEAU_D3DKMT_OUTPUTDUPL_FRAMEINFO@@@Z @ 0x14036B7EC (-GetFrameInfo@OUTPUTDUPL_CONTEXT@@QEAAXPEAU_D3DKMT_OUTPUTDUPL_FRAMEINFO@@@Z.c)
 *     ?CurrentProcessHasCapturePermission@OUTPUTDUPL_MGR@@AEAAHXZ @ 0x14036B95C (-CurrentProcessHasCapturePermission@OUTPUTDUPL_MGR@@AEAAHXZ.c)
 *     ?MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_DESTROY_REASON@@@Z @ 0x14036BD68 (-MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_.c)
 */

__int64 __fastcall OUTPUTDUPL_MGR::GetFrameInfo(DXGDIAGNOSTICS **this, struct _D3DKMT_OUTPUTDUPL_GET_FRAMEINFO *a2)
{
  OUTPUTDUPL_MGR *v4; // rcx
  struct DXGFASTMUTEX *v5; // rbx
  __int64 v6; // rcx
  struct _EPROCESS *CurrentProcess; // rax
  OUTPUTDUPL_CONTEXT **ContextForProcess; // rax
  int v9; // r14d
  OUTPUTDUPL_MGR *v10; // rcx
  OUTPUTDUPL_MGR *v11; // rcx
  __int64 v12; // r8
  __int128 v13; // xmm0
  D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId; // eax
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  DXGDIAGNOSTICS *v17; // rcx
  _BYTE v19[16]; // [rsp+30h] [rbp-59h] BYREF
  _QWORD v20[14]; // [rsp+40h] [rbp-49h] BYREF

  if ( (unsigned int)Feature_Win32ProcessCapabilities__private_IsEnabledDeviceUsageNoInline()
    && !(unsigned int)OUTPUTDUPL_MGR::CurrentProcessHasCapturePermission(v4) )
  {
    OUTPUTDUPL_MGR::MoveContextToPendingDestroyList(this, a2->VidPnSourceId, 0LL, 1LL, 0, 12);
    return 3221225506LL;
  }
  else
  {
    v5 = (DXGDIAGNOSTICS *)((char *)this[2] + 72 * a2->VidPnSourceId);
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v19, v5, 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v19);
    CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(v6);
    ContextForProcess = OUTPUTDUPL_MGR::FindContextForProcess((OUTPUTDUPL_MGR *)this, v5, CurrentProcess, 0LL);
    if ( ContextForProcess )
    {
      OUTPUTDUPL_CONTEXT::GetFrameInfo(*ContextForProcess, &a2->FrameInfo);
      v9 = 0;
    }
    else
    {
      v9 = -1073741275;
    }
    if ( (unsigned int)OUTPUTDUPL_MGR::IsHighFreqLoggingEnabled((OUTPUTDUPL_MGR *)this) && v9 >= 0 )
    {
      memset(v20, 0, 0x68uLL);
      OUTPUTDUPL_MGR::InitializePacketHeader(v10, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v20);
      v13 = *(_OWORD *)&a2->FrameInfo.LastPresentTime.LowPart;
      VidPnSourceId = a2->VidPnSourceId;
      v15 = *(_OWORD *)&a2->FrameInfo.AccumulatedFrames;
      HIDWORD(v20[0]) = 104;
      *(_OWORD *)&v20[7] = v13;
      LODWORD(v20[6]) = 7;
      v16 = *(_OWORD *)&a2->FrameInfo.PointerPosition.Position.y;
      HIDWORD(v20[6]) = VidPnSourceId;
      *(_OWORD *)&v20[9] = v15;
      *(_OWORD *)&v20[11] = v16;
      if ( bTracingEnabled )
        OUTPUTDUPL_MGR::LogEtw(v11, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v20, v12);
      v17 = this[10];
      if ( v17 )
        DXGDIAGNOSTICS::WriteDiagnosticEntry(v17, (struct _DXGK_DIAG_HEADER *)v20);
    }
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v19);
    return (unsigned int)v9;
  }
}
