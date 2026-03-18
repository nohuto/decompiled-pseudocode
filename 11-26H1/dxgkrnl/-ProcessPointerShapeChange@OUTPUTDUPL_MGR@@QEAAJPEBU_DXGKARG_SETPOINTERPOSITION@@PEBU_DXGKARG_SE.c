/*
 * XREFs of ?ProcessPointerShapeChange@OUTPUTDUPL_MGR@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@II@Z @ 0x1403AB8B0
 * Callers:
 *     OutputDuplProcessRemoteSessionSetPointerShape @ 0x1401EF3DC (OutputDuplProcessRemoteSessionSetPointerShape.c)
 * Callees:
 *     ?WriteDiagnosticEntry@DXGDIAGNOSTICS@@QEBAJPEAU_DXGK_DIAG_HEADER@@@Z @ 0x14000BB9C (-WriteDiagnosticEntry@DXGDIAGNOSTICS@@QEBAJPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?LogPointerPositionChangeParams@OUTPUTDUPL_MGR@@AEAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@Z @ 0x1402B0D0C (-LogPointerPositionChangeParams@OUTPUTDUPL_MGR@@AEAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@Z.c)
 *     ?InitializePacketHeader@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z @ 0x1402B0DC4 (-InitializePacketHeader@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z.c)
 *     ?IsHighFreqLoggingEnabled@OUTPUTDUPL_MGR@@QEAAHXZ @ 0x1402B1A40 (-IsHighFreqLoggingEnabled@OUTPUTDUPL_MGR@@QEAAHXZ.c)
 *     ?LogEtw@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z @ 0x1402B1AD4 (-LogEtw@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z.c)
 *     ?ProcessPointerShape@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@@Z @ 0x1403ABAFC (-ProcessPointerShape@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETP.c)
 */

__int64 __fastcall OUTPUTDUPL_MGR::ProcessPointerShapeChange(
        DXGDIAGNOSTICS **this,
        const struct _DXGKARG_SETPOINTERPOSITION *a2,
        const struct _DXGKARG_SETPOINTERSHAPE *a3,
        UINT a4,
        UINT a5)
{
  __int64 VidPnSourceId; // rax
  __m128i v9; // xmm1
  __int64 v10; // xmm0_8
  struct DXGFASTMUTEX *v11; // rbx
  OUTPUTDUPL_CONTEXT **v12; // rbx
  __int64 v13; // r14
  unsigned int v14; // r15d
  int v15; // r12d
  OUTPUTDUPL_CONTEXT *v16; // r9
  OUTPUTDUPL_MGR *v17; // rcx
  OUTPUTDUPL_MGR *v18; // rcx
  __int64 v19; // r8
  DXGDIAGNOSTICS *v20; // rcx
  int v21; // eax
  __int64 result; // rax
  _DXGKARG_SETPOINTERSHAPE v24; // [rsp+58h] [rbp-89h] BYREF
  _BYTE v25[16]; // [rsp+80h] [rbp-61h] BYREF
  _DWORD v26[20]; // [rsp+90h] [rbp-51h] BYREF

  VidPnSourceId = a3->VidPnSourceId;
  if ( (unsigned int)VidPnSourceId >= *((_DWORD *)this + 19) )
  {
    WdLogSingleEntry2(3LL, VidPnSourceId, this);
    result = 3221225473LL;
    WdLogGlobalForLineNumber = 1291;
  }
  else
  {
    v9 = *(__m128i *)&a3->VidPnSourceId;
    *(_OWORD *)&v24.Flags.0 = *(_OWORD *)&a3->Flags.0;
    v24.Height = a5;
    v10 = *(_QWORD *)&a3->XHot;
    *(__m128i *)&v24.VidPnSourceId = v9;
    v24.Width = a4;
    *(_QWORD *)&v24.XHot = v10;
    v11 = (DXGDIAGNOSTICS *)((char *)this[2] + 72 * (unsigned int)_mm_cvtsi128_si32(v9));
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v25, v11, 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v25);
    v12 = (OUTPUTDUPL_CONTEXT **)*((_QWORD *)v11 + 6);
    LODWORD(v13) = 0;
    v14 = 0;
    v15 = 1;
    while ( v14 < *((_DWORD *)this + 2) )
    {
      v16 = *v12;
      if ( *v12 && *((_DWORD *)v16 + 79) )
      {
        if ( v15 )
        {
          if ( (unsigned int)OUTPUTDUPL_MGR::IsHighFreqLoggingEnabled((OUTPUTDUPL_MGR *)this) )
          {
            memset(v26, 0, sizeof(v26));
            OUTPUTDUPL_MGR::InitializePacketHeader(v17, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v26);
            v26[13] = a3->VidPnSourceId;
            v26[14] = a3->Flags.Value;
            v26[15] = a4;
            v26[16] = a5;
            v26[17] = a3->Pitch;
            v26[18] = a3->XHot;
            v26[19] = a3->YHot;
            v26[1] = 80;
            v26[12] = 3;
            if ( bTracingEnabled )
              OUTPUTDUPL_MGR::LogEtw(v18, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v26, v19);
            v20 = this[10];
            if ( v20 )
              DXGDIAGNOSTICS::WriteDiagnosticEntry(v20, (struct _DXGK_DIAG_HEADER *)v26);
            OUTPUTDUPL_MGR::LogPointerPositionChangeParams((OUTPUTDUPL_MGR *)this, a2);
            v16 = *v12;
          }
          v15 = 0;
        }
        v21 = OUTPUTDUPL_CONTEXT::ProcessPointerShape(v16, a2, &v24);
        v13 = v21;
        if ( v21 < 0 )
        {
          WdLogSingleEntry3(2LL, v24.VidPnSourceId, v14, v21);
          WdLogGlobalForLineNumber = 1341;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Process pointer shape failed in vidpn: 0x%I64x, idx: 0x%I64x, status: 0x%I64x",
            v24.VidPnSourceId,
            v14,
            v13,
            0LL,
            0LL);
          break;
        }
      }
      ++v14;
      ++v12;
    }
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v25);
    return (unsigned int)v13;
  }
  return result;
}
