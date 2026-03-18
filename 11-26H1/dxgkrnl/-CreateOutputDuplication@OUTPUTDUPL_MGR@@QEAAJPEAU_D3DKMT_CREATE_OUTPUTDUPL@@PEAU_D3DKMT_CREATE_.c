/*
 * XREFs of ?CreateOutputDuplication@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_OUTPUTDUPL_FLAGS@@@Z @ 0x14040F02C
 * Callers:
 *     ?DxgkCreateOutputDuplInternal@@YAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_OUTPUTDUPL_FLAGS@@@Z @ 0x1404032E0 (-DxgkCreateOutputDuplInternal@@YAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_OUTPUTDUPL_F.c)
 * Callees:
 *     ?WriteDiagnosticEntry@DXGDIAGNOSTICS@@QEBAJPEAU_DXGK_DIAG_HEADER@@@Z @ 0x14000BB9C (-WriteDiagnosticEntry@DXGDIAGNOSTICS@@QEBAJPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400358E0 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_GOUTPUTDUPL_CONTEXT@@QEAAPEAXI@Z @ 0x14007F970 (--_GOUTPUTDUPL_CONTEXT@@QEAAPEAXI@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?IsOutputDuplAllowedForVidPn@OUTPUTDUPL_MGR@@AEAAJIHHPEAW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@@Z @ 0x14018FE94 (-IsOutputDuplAllowedForVidPn@OUTPUTDUPL_MGR@@AEAAJIHHPEAW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@@Z.c)
 *     ?InitializeDiagnosticBuffers@OUTPUTDUPL_MGR@@AEAAXXZ @ 0x140195210 (-InitializeDiagnosticBuffers@OUTPUTDUPL_MGR@@AEAAXXZ.c)
 *     ??0OUTPUTDUPL_CONTEXT@@QEAA@PEAVOUTPUTDUPL_MGR@@IHHH@Z @ 0x1401EF438 (--0OUTPUTDUPL_CONTEXT@@QEAA@PEAVOUTPUTDUPL_MGR@@IHHH@Z.c)
 *     ?InitializePacketHeader@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z @ 0x1402B0DC4 (-InitializePacketHeader@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z.c)
 *     ?LogEtwAndDiagnostics@OUTPUTDUPL_MGR@@QEAAXHPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@H@Z @ 0x1402B1A60 (-LogEtwAndDiagnostics@OUTPUTDUPL_MGR@@QEAAXHPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@H@Z.c)
 *     ?LogEtw@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z @ 0x1402B1AD4 (-LogEtw@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z.c)
 *     ?FindContextForProcess@OUTPUTDUPL_MGR@@AEAAPEAPEAVOUTPUTDUPL_CONTEXT@@PEAU_OUTPUTDUPL_CONTEXTLIST@@PEAU_EPROCESS@@PEAI@Z @ 0x14036B6E4 (-FindContextForProcess@OUTPUTDUPL_MGR@@AEAAPEAPEAVOUTPUTDUPL_CONTEXT@@PEAU_OUTPUTDUPL_CONTEXTLIS.c)
 *     ?Initialize@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z @ 0x140406CCC (-Initialize@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z.c)
 */

__int64 __fastcall OUTPUTDUPL_MGR::CreateOutputDuplication(
        OUTPUTDUPL_MGR *this,
        struct _D3DKMT_CREATE_OUTPUTDUPL *a2,
        struct _D3DKMT_CREATE_OUTPUTDUPL_FLAGS *a3)
{
  OUTPUTDUPL_MGR *v6; // rcx
  unsigned int v7; // r8d
  struct _D3DKMT_OUTPUTDUPLCREATIONFLAGS::$2AC88DCDFD0D040EA0D625572809A630::$3AD2520B051062E66F8E36EF65C6D209 Value; // r9d
  D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId; // edx
  bool v10; // cf
  unsigned int v11; // r15d
  OUTPUTDUPL_MGR *v12; // rcx
  int IsOutputDuplAllowedForVidPn; // ebx
  __int64 v14; // r8
  struct DXGFASTMUTEX *v15; // rbx
  __int64 v16; // rcx
  struct _EPROCESS *CurrentProcess; // rax
  __int64 v18; // rcx
  D3DDDI_VIDEO_PRESENT_SOURCE_ID v19; // ebx
  __int64 v20; // rax
  __int64 v21; // rbx
  __int64 v22; // rcx
  __int64 v23; // rax
  struct OUTPUTDUPL_CONTEXT **ContextForProcess; // rax
  OUTPUTDUPL_CONTEXT **v25; // rsi
  OUTPUTDUPL_CONTEXT *v26; // rax
  __int64 v27; // rcx
  OUTPUTDUPL_CONTEXT *v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rax
  UINT v36; // eax
  DXGDIAGNOSTICS *v37; // rcx
  unsigned int v39; // [rsp+50h] [rbp-49h] BYREF
  _D3DKMT_VIDPNSOURCEOWNER_TYPE v40; // [rsp+54h] [rbp-45h] BYREF
  _BYTE v41[24]; // [rsp+58h] [rbp-41h] BYREF
  _DWORD v42[16]; // [rsp+70h] [rbp-29h] BYREF

  OUTPUTDUPL_MGR::InitializeDiagnosticBuffers(this);
  memset(v42, 0, sizeof(v42));
  OUTPUTDUPL_MGR::InitializePacketHeader(v6, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v42);
  v7 = *(_DWORD *)a3;
  Value = (struct _D3DKMT_OUTPUTDUPLCREATIONFLAGS::$2AC88DCDFD0D040EA0D625572809A630::$3AD2520B051062E66F8E36EF65C6D209)a2->Flags.Value;
  VidPnSourceId = a2->VidPnSourceId;
  v10 = (*(_DWORD *)a3 & 0x10) != 0;
  v42[1] = 64;
  v42[13] = VidPnSourceId;
  v11 = -1;
  v42[12] = v10 ? 0xB : 0;
  v39 = -1;
  v40 = D3DKMT_VIDPNSOURCEOWNER_UNOWNED;
  IsOutputDuplAllowedForVidPn = OUTPUTDUPL_MGR::IsOutputDuplAllowedForVidPn(
                                  (ADAPTER_DISPLAY **)this,
                                  VidPnSourceId,
                                  (v7 >> 5) & 1,
                                  *(_BYTE *)&Value & 1,
                                  &v40);
  if ( IsOutputDuplAllowedForVidPn < 0 )
    goto LABEL_18;
  v15 = (struct DXGFASTMUTEX *)(*((_QWORD *)this + 2) + 72LL * a2->VidPnSourceId);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v41, v15, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v41);
  CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(v16);
  if ( OUTPUTDUPL_MGR::FindContextForProcess(this, v15, CurrentProcess, &v42[14]) )
  {
    v19 = a2->VidPnSourceId;
    v20 = PsGetCurrentProcess(v18);
    WdLogSingleEntry2(2LL, v20, v19);
    v21 = a2->VidPnSourceId;
    WdLogGlobalForLineNumber = 1529;
    v23 = PsGetCurrentProcess(v22);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Process 0x%I64x is already duplicating output 0x%I64x",
      v23,
      v21,
      0LL,
      0LL,
      0LL);
    IsOutputDuplAllowedForVidPn = -1073740008;
    v42[15] = -1073740008;
    OUTPUTDUPL_MGR::LogEtwAndDiagnostics((DXGDIAGNOSTICS **)this, 1, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v42, 1);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v41);
    return (unsigned int)IsOutputDuplAllowedForVidPn;
  }
  ContextForProcess = OUTPUTDUPL_MGR::FindContextForProcess(this, v15, 0LL, &v39);
  v11 = v39;
  v25 = ContextForProcess;
  IsOutputDuplAllowedForVidPn = -1073741653;
  if ( ContextForProcess )
  {
    if ( (*(_DWORD *)a3 & 0x10) != 0 )
    {
      v36 = 3;
      IsOutputDuplAllowedForVidPn = 0;
      if ( v40 == D3DKMT_VIDPNSOURCEOWNER_SHARED )
        v36 = 1;
      a2->RequiredKeyedMutexCount = v36;
      goto LABEL_17;
    }
    v26 = (OUTPUTDUPL_CONTEXT *)operator new(0x150uLL, 0x674D444Fu, 256LL);
    if ( v26 )
    {
      v28 = OUTPUTDUPL_CONTEXT::OUTPUTDUPL_CONTEXT(
              v26,
              this,
              v11,
              (*(_DWORD *)a3 >> 1) & 1,
              (*(_DWORD *)a3 >> 3) & 1,
              (*(_DWORD *)a3 >> 2) & 1);
      *v25 = v28;
      if ( v28 )
      {
        IsOutputDuplAllowedForVidPn = OUTPUTDUPL_CONTEXT::Initialize(v28, a2);
        if ( IsOutputDuplAllowedForVidPn < 0 )
        {
          v30 = PsGetCurrentProcess(v29);
          WdLogSingleEntry2(2LL, a2->VidPnSourceId, v30);
          WdLogGlobalForLineNumber = 1553;
          v32 = PsGetCurrentProcess(v31);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Failed to initialize OUTPUTDUPL_CONTEXT class for VidPn 0x%I64x, process 0x%I64x.",
            a2->VidPnSourceId,
            v32,
            0LL,
            0LL,
            0LL);
          if ( *v25 )
            OUTPUTDUPL_CONTEXT::`scalar deleting destructor'(*v25);
          *v25 = 0LL;
        }
        goto LABEL_17;
      }
    }
    else
    {
      *v25 = 0LL;
    }
    v33 = PsGetCurrentProcess(v27);
    WdLogSingleEntry2(6LL, a2->VidPnSourceId, v33);
    WdLogGlobalForLineNumber = 1560;
    v35 = PsGetCurrentProcess(v34);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to allocate OUTPUTDUPL_CONTEXT class for VidPn 0x%I64x, process 0x%I64x.",
      a2->VidPnSourceId,
      v35,
      0LL,
      0LL,
      0LL);
    IsOutputDuplAllowedForVidPn = -1073741801;
  }
LABEL_17:
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v41);
LABEL_18:
  v42[14] = v11;
  v42[15] = IsOutputDuplAllowedForVidPn;
  if ( bTracingEnabled )
    OUTPUTDUPL_MGR::LogEtw(v12, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v42, v14);
  v37 = (DXGDIAGNOSTICS *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 122);
  if ( v37 )
    DXGDIAGNOSTICS::WriteDiagnosticEntry(v37, (struct _DXGK_DIAG_HEADER *)v42);
  return (unsigned int)IsOutputDuplAllowedForVidPn;
}
