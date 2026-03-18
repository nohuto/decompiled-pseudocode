/*
 * XREFs of ?GetMetaData@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_METADATA@@@Z @ 0x14029C7F8
 * Callers:
 *     _lambda_2348832400fa9218d4247e5b02438479_::_lambda_invoker_cdecl_ @ 0x14029CB00 (_lambda_2348832400fa9218d4247e5b02438479_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?WriteDiagnosticEntry@DXGDIAGNOSTICS@@QEBAJPEAU_DXGK_DIAG_HEADER@@@Z @ 0x14000BB9C (-WriteDiagnosticEntry@DXGDIAGNOSTICS@@QEBAJPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?IsOwner@DXGFASTMUTEX@@QEBAEXZ @ 0x14000D800 (-IsOwner@DXGFASTMUTEX@@QEBAEXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     memmove @ 0x1400A5B00 (memmove.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x14029C71C (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
 *     ?InitializePacketHeader@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z @ 0x1402B0DC4 (-InitializePacketHeader@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z.c)
 *     ?IsHighFreqLoggingEnabled@OUTPUTDUPL_MGR@@QEAAHXZ @ 0x1402B1A40 (-IsHighFreqLoggingEnabled@OUTPUTDUPL_MGR@@QEAAHXZ.c)
 *     ?LogEtw@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z @ 0x1402B1AD4 (-LogEtw@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z.c)
 *     ?GetDirtyRects@OUTPUTDUPL_CONTEXT@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_METADATA@@@Z @ 0x1402B5AF4 (-GetDirtyRects@OUTPUTDUPL_CONTEXT@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_METADATA@@@Z.c)
 */

__int64 __fastcall OUTPUTDUPL_MGR::GetMetaData(OUTPUTDUPL_MGR *this, struct _D3DKMT_OUTPUTDUPL_METADATA *a2)
{
  __int64 v4; // r15
  __int64 v5; // rcx
  __int64 CurrentProcess; // r14
  OUTPUTDUPL_CONTEXT *v7; // rcx
  OUTPUTDUPL_CONTEXT **v8; // rdi
  unsigned int i; // esi
  __int64 v10; // rax
  bool v11; // zf
  D3DKMT_OUTPUTDUPL_METADATATYPE Type; // edx
  int DirtyRects; // esi
  char *Buffer; // rax
  char *v15; // rdi
  OUTPUTDUPL_MGR *v16; // rcx
  OUTPUTDUPL_MGR *v17; // rcx
  UINT v18; // eax
  DXGDIAGNOSTICS *v19; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  void *v23; // rdx
  __int64 v24; // [rsp+20h] [rbp-58h]
  _BYTE v25[16]; // [rsp+50h] [rbp-28h] BYREF

  v4 = *((_QWORD *)this + 2) + 72LL * a2->VidPnSourceId;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v25, (struct DXGFASTMUTEX *const)v4, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v25);
  CurrentProcess = PsGetCurrentProcess(v5);
  if ( !DXGFASTMUTEX::IsOwner((DXGFASTMUTEX *)v4) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1735;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pContextList->Mutex.IsOwner()", 1735LL, 0LL, 0LL, 0LL, 0LL);
  }
  v8 = *(OUTPUTDUPL_CONTEXT ***)(v4 + 48);
  for ( i = 0; ; ++i )
  {
    if ( i >= *((_DWORD *)this + 2) )
      goto LABEL_11;
    if ( *v8 )
    {
      v10 = PsGetCurrentProcess(v7);
      v7 = *v8;
      v11 = *((_QWORD *)*v8 + 3) == v10;
    }
    else
    {
      v11 = CurrentProcess == 0;
    }
    if ( v11 )
      break;
    ++v8;
  }
  if ( !v8 )
  {
LABEL_11:
    DirtyRects = -1073741275;
    goto LABEL_12;
  }
  Type = a2->Type;
  if ( Type == D3DKMT_OUTPUTDUPL_METADATATYPE_DIRTY_RECTS )
  {
    DirtyRects = OUTPUTDUPL_CONTEXT::GetDirtyRects(*v8, a2);
    goto LABEL_12;
  }
  if ( Type == D3DKMT_OUTPUTDUPL_METADATATYPE_MOVE_RECTS )
  {
    v21 = *((_QWORD *)*v8 + 33);
    if ( *(_DWORD *)(v21 + 16) != 2 )
    {
      a2->BufferSizeRequired = 0;
      goto LABEL_26;
    }
    v22 = *(_QWORD *)(v21 + 8);
    v23 = **(void ***)(v22 + 48);
    LODWORD(v22) = 24 * *(_DWORD *)(v22 + 44);
    a2->BufferSizeRequired = v22;
    if ( a2->BufferSizeSupplied >= (unsigned int)v22 )
    {
      a2->pBuffer = v23;
LABEL_26:
      DirtyRects = 0;
      goto LABEL_12;
    }
    DirtyRects = -1073741789;
  }
  else
  {
    WdLogSingleEntry1(2LL);
    v24 = a2->Type;
    WdLogGlobalForLineNumber = 1908;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid output duplication meta data type: ",
      v24,
      0LL,
      0LL,
      0LL,
      0LL);
    DirtyRects = -1073741811;
  }
LABEL_12:
  if ( (unsigned int)OUTPUTDUPL_MGR::IsHighFreqLoggingEnabled(this) )
  {
    Buffer = (char *)AUTOEXPANDALLOCATION::GetBuffer(
                       *(AUTOEXPANDALLOCATION **)(v4 + 56),
                       a2->BufferSizeRequired + 72,
                       0);
    v15 = Buffer;
    if ( Buffer )
    {
      memset(Buffer, 0, 0x48uLL);
      OUTPUTDUPL_MGR::InitializePacketHeader(v16, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v15);
      v18 = a2->BufferSizeRequired + 72;
      *((_DWORD *)v15 + 12) = 8;
      *((_DWORD *)v15 + 1) = v18;
      *((_DWORD *)v15 + 13) = a2->VidPnSourceId;
      *((_DWORD *)v15 + 14) = a2->Type;
      *((_DWORD *)v15 + 15) = a2->BufferSizeSupplied;
      *((_DWORD *)v15 + 16) = a2->BufferSizeRequired;
      *((_DWORD *)v15 + 17) = DirtyRects;
      if ( DirtyRects >= 0 )
        memmove(v15 + 72, a2->pBuffer, a2->BufferSizeRequired);
      if ( bTracingEnabled )
        OUTPUTDUPL_MGR::LogEtw(v17, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v15);
      v19 = (DXGDIAGNOSTICS *)*((_QWORD *)this + 10);
      if ( v19 )
        DXGDIAGNOSTICS::WriteDiagnosticEntry(v19, (struct _DXGK_DIAG_HEADER *)v15);
    }
    else
    {
      WdLogSingleEntry0(6LL);
      WdLogGlobalForLineNumber = 1928;
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"Failed to expand tmp buffer for meta data logging packet.",
        1928LL,
        0LL,
        0LL,
        0LL,
        0LL);
      DirtyRects = -1073741801;
    }
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v25);
  return (unsigned int)DirtyRects;
}
