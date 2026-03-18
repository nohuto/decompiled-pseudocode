/*
 * XREFs of ?CreateOutputDuplManager@@YAJIPEAVADAPTER_DISPLAY@@PEAU_LUID@@1PEAPEAVOUTPUTDUPL_MGR@@@Z @ 0x140390A78
 * Callers:
 *     ?CreateRemoteOutputDuplMgr@OUTPUTDUPL_SESSION_MGR@@QEAAJI@Z @ 0x1401ED2DC (-CreateRemoteOutputDuplMgr@OUTPUTDUPL_SESSION_MGR@@QEAAJI@Z.c)
 *     ?Initialize@ADAPTER_DISPLAY@@QEAAJXZ @ 0x14038FCD0 (-Initialize@ADAPTER_DISPLAY@@QEAAJXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400358E0 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0OUTPUTDUPL_MGR_INDIRECT@@QEAA@U_LUID@@0I@Z @ 0x14007F858 (--0OUTPUTDUPL_MGR_INDIRECT@@QEAA@U_LUID@@0I@Z.c)
 *     ??_GOUTPUTDUPL_MGR@@QEAAPEAXI@Z @ 0x14007F998 (--_GOUTPUTDUPL_MGR@@QEAAPEAXI@Z.c)
 *     ?Initialize@OUTPUTDUPL_MGR@@QEAAJXZ @ 0x1401EDB24 (-Initialize@OUTPUTDUPL_MGR@@QEAAJXZ.c)
 */

__int64 __fastcall CreateOutputDuplManager(
        unsigned int a1,
        struct ADAPTER_DISPLAY *a2,
        struct _LUID *a3,
        struct _LUID *a4,
        struct OUTPUTDUPL_MGR **a5)
{
  __int64 result; // rax
  OUTPUTDUPL_MGR_INDIRECT *v10; // rax
  OUTPUTDUPL_MGR_INDIRECT *v11; // rcx
  OUTPUTDUPL_MGR *v12; // rbx
  __int64 v13; // rax
  _QWORD *v14; // rax
  unsigned int v15; // edi

  if ( !a5 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 3888;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid parameter ppOutputDuplMgr = 0x%I64x.",
      0LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  *a5 = 0LL;
  if ( a4 && a3 )
  {
    v10 = (OUTPUTDUPL_MGR_INDIRECT *)operator new(0x88uLL, 0x674D444Fu, 256LL);
    if ( v10 )
      v11 = OUTPUTDUPL_MGR_INDIRECT::OUTPUTDUPL_MGR_INDIRECT(v10, *a4, *a3, a1);
    else
      v11 = 0LL;
    v12 = (OUTPUTDUPL_MGR *)(((unsigned __int64)v11 + 24) & ((unsigned __int128)-(__int128)(unsigned __int64)v11 >> 64));
    if ( !v12 )
      goto LABEL_9;
  }
  else
  {
    v13 = operator new(0x60uLL, 0x674D444Fu, 256LL);
    v12 = (OUTPUTDUPL_MGR *)v13;
    if ( !v13 )
    {
LABEL_9:
      WdLogSingleEntry1(6LL);
      WdLogGlobalForLineNumber = 3905;
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"Failed to allocate memory for output duplication manager on ADAPTER_DISPLAY 0x%I64x.",
        (__int64)a2,
        0LL,
        0LL,
        0LL,
        0LL);
      return 3221225495LL;
    }
    *(_QWORD *)v13 = a2;
    *(_DWORD *)(v13 + 8) = 0;
    *(_QWORD *)(v13 + 16) = 0LL;
    *(_QWORD *)(v13 + 24) = 0LL;
    *(_QWORD *)(v13 + 32) = 0LL;
    *(_DWORD *)(v13 + 40) = 0;
    *(_DWORD *)(v13 + 44) = 38;
    *(_DWORD *)(v13 + 48) = 50;
    *(_DWORD *)(v13 + 72) = 1;
    *(_DWORD *)(v13 + 76) = a1;
    *(_QWORD *)(v13 + 80) = 0LL;
    *(_BYTE *)(v13 + 88) = 0;
    v14 = (_QWORD *)(v13 + 56);
    v14[1] = v14;
    *v14 = v14;
  }
  result = OUTPUTDUPL_MGR::Initialize(v12);
  v15 = result;
  if ( (int)result >= 0 )
  {
    *a5 = v12;
  }
  else
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 3912;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to initialize output duplication manager on ADAPTER_DISPLAY 0x%I64x.",
      (__int64)a2,
      0LL,
      0LL,
      0LL,
      0LL);
    OUTPUTDUPL_MGR::`scalar deleting destructor'(v12);
    return v15;
  }
  return result;
}
