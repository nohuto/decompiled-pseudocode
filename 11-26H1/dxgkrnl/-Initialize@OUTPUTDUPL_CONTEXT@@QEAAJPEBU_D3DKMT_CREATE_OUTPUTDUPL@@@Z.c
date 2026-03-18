/*
 * XREFs of ?Initialize@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z @ 0x140406CCC
 * Callers:
 *     ?CreateOutputDuplication@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_OUTPUTDUPL_FLAGS@@@Z @ 0x14040F02C (-CreateOutputDuplication@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0pxqt_EtwWriteTransfer @ 0x140013530 (McTemplateK0pxqt_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400358E0 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?Initialize@DDAMetaData@@QEAAHII@Z @ 0x1401939C0 (-Initialize@DDAMetaData@@QEAAHII@Z.c)
 *     ?GetAdapterLuid@OUTPUTDUPL_MGR@@QEAA?AU_LUID@@XZ @ 0x1401ED818 (-GetAdapterLuid@OUTPUTDUPL_MGR@@QEAA-AU_LUID@@XZ.c)
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x14029C71C (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
 *     ?OpenLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAJW4_OUTPUTDUPL_MUTEX_TYPE@@@Z @ 0x1402B04D0 (-OpenLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAJW4_OUTPUTDUPL_MUTEX_TYPE@@@Z.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1402C6C90 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?Initialize@DXGDXGIKEYEDMUTEX@@QEAAJPEAX@Z @ 0x140407188 (-Initialize@DXGDXGIKEYEDMUTEX@@QEAAJPEAX@Z.c)
 *     ?AddRef@OUTPUTDUPL_SESSION_MGR@@QEAAHPEAU_EPROCESS@@PEAU_D3DKMT_OUTPUTDUPL_ACTIVE_CTX@@@Z @ 0x1404072AC (-AddRef@OUTPUTDUPL_SESSION_MGR@@QEAAHPEAU_EPROCESS@@PEAU_D3DKMT_OUTPUTDUPL_ACTIVE_CTX@@@Z.c)
 */

__int64 __fastcall OUTPUTDUPL_CONTEXT::Initialize(OUTPUTDUPL_CONTEXT *this, const struct _D3DKMT_CREATE_OUTPUTDUPL *a2)
{
  DXGGLOBAL *Global; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  struct DXGSESSIONDATA *SessionData; // rax
  __int64 v9; // rax
  const wchar_t *v10; // r9
  OUTPUTDUPL_SESSION_MGR *v11; // rbx
  struct _D3DKMT_OUTPUTDUPL_ACTIVE_CTX *v12; // r8
  __int64 *AdapterLuid; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned int v17; // ebp
  __int64 v18; // rax
  DXGDXGIKEYEDMUTEX *v19; // rbx
  int v20; // ebx
  __int64 v21; // rax
  const wchar_t *v22; // r9
  const wchar_t *v23; // r9
  struct DXGPROCESS *Current; // rax
  __int64 v25; // r8
  unsigned int i; // ebp
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rbx
  struct DXGPROCESS *v30; // rax
  __int64 v31; // rax
  __int64 v32; // r14
  _QWORD *v33; // rax
  _QWORD *v34; // rbx
  __int64 VidPnSourceId; // [rsp+28h] [rbp-60h]
  __int128 v36; // [rsp+50h] [rbp-38h] BYREF
  __int64 v37; // [rsp+60h] [rbp-28h]
  __int64 v38; // [rsp+A0h] [rbp+18h] BYREF

  Global = DXGGLOBAL::GetGlobal();
  SessionData = DXGGLOBAL::GetSessionData(Global, v5, v6, v7);
  if ( !SessionData )
  {
    WdLogSingleEntry0(2LL);
    v9 = 1232LL;
    v10 = L"DXGSESSIONDATA is NULL";
LABEL_50:
    WdLogGlobalForLineNumber = v9;
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v10, v9, 0LL, 0LL, 0LL, 0LL);
    return 3221225485LL;
  }
  v11 = (OUTPUTDUPL_SESSION_MGR *)*((_QWORD *)SessionData + 1);
  if ( !v11 )
  {
    WdLogSingleEntry0(2LL);
    v9 = 1239LL;
    v10 = L"OUTPUTDUPL_SESSION_MGR is NULL";
    goto LABEL_50;
  }
  *((_DWORD *)this + 4) = a2->VidPnSourceId;
  v12 = 0LL;
  v36 = 0LL;
  v37 = 0LL;
  if ( *((_DWORD *)this + 81) && !*((_DWORD *)this + 82) )
  {
    AdapterLuid = (__int64 *)OUTPUTDUPL_MGR::GetAdapterLuid(*((ADAPTER_DISPLAY ***)this + 37), &v38);
    v12 = (struct _D3DKMT_OUTPUTDUPL_ACTIVE_CTX *)&v36;
    v14 = *AdapterLuid;
    LODWORD(v37) = *((_DWORD *)this + 4);
    *(_QWORD *)&v36 = *((_QWORD *)this + 4);
    *((_QWORD *)&v36 + 1) = v14;
  }
  if ( !(unsigned int)OUTPUTDUPL_SESSION_MGR::AddRef(v11, *((struct _EPROCESS **)this + 3), v12) )
    return 3221225643LL;
  *((_DWORD *)this + 76) = 1;
  v17 = 0;
  *((_DWORD *)this + 10) = a2->KeyedMutexCount;
  while ( v17 < *((_DWORD *)this + 10) )
  {
    v18 = operator new(0x90uLL, 0x674D444Fu, 256LL);
    v19 = (DXGDXGIKEYEDMUTEX *)v18;
    if ( v18 )
    {
      *(_QWORD *)v18 = 0LL;
      *(_QWORD *)(v18 + 8) = 0LL;
      *(_QWORD *)(v18 + 88) = 0LL;
      *(_DWORD *)(v18 + 96) = 0;
      *(_QWORD *)(v18 + 104) = 0LL;
      *(_QWORD *)(v18 + 112) = 0LL;
      *(_QWORD *)(v18 + 120) = 0LL;
      *(_DWORD *)(v18 + 128) = 0;
      memset((void *)(v18 + 16), 0, 0x48uLL);
    }
    else
    {
      v19 = 0LL;
    }
    *((_QWORD *)this + v17 + 6) = v19;
    if ( !v19 )
    {
      WdLogSingleEntry1(6LL);
      v23 = L"Failed to create Dxgi Keyed Mutex list for VidPn source 0x%I64x.";
      WdLogGlobalForLineNumber = 1276;
LABEL_23:
      DxgkLogInternalTriageEvent(0LL, 262145, -1, (__int64)v23, a2->VidPnSourceId, 0LL, 0LL, 0LL, 0LL);
      return 3221225495LL;
    }
    v20 = DXGDXGIKEYEDMUTEX::Initialize(v19, a2->KeyedMutexs[v17].hSharedSurfaceNt);
    if ( v20 < 0 )
    {
      WdLogSingleEntry0(2LL);
      v21 = 1283LL;
      v22 = L"Failed to open surface NT handle for consumer process.";
      goto LABEL_21;
    }
    v20 = DXGDXGIKEYEDMUTEX::OpenLocalMutex(*((_QWORD *)this + v17 + 6), 1);
    if ( v20 < 0 )
    {
      WdLogSingleEntry0(2LL);
      v21 = 1290LL;
      v22 = L"Failed to open local keyed mutex for consumer process.";
LABEL_21:
      WdLogGlobalForLineNumber = v21;
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v22, v21, 0LL, 0LL, 0LL, 0LL);
      return (unsigned int)v20;
    }
    ++v17;
  }
  Current = DXGPROCESS::GetCurrent(v15);
  if ( !Current || !*((_QWORD *)Current + 11) )
  {
    WdLogSingleEntry0(2LL);
    v9 = 1299LL;
    v10 = L"Could not get Win32k functions!!";
    goto LABEL_50;
  }
  for ( i = 0; i < 2; ++i )
  {
    v27 = operator new(0x50uLL, 0x674D444Fu, 256LL);
    v29 = v27;
    if ( v27 )
    {
      *(_DWORD *)(v27 + 20) = 128;
      *(_QWORD *)(v27 + 32) = 0LL;
      *(_DWORD *)(v27 + 40) = 64;
      *(_QWORD *)(v27 + 48) = 0LL;
      v30 = DXGPROCESS::GetCurrent(v28);
      if ( v30 )
        v31 = *((_QWORD *)v30 + 11);
      else
        v31 = 0LL;
      *(_QWORD *)(v29 + 56) = v31;
      *(_QWORD *)(v29 + 64) = 0LL;
      *(_QWORD *)(v29 + 72) = 0LL;
      *(_QWORD *)v29 = 0LL;
      *(_QWORD *)(v29 + 8) = 0LL;
      *(_DWORD *)(v29 + 16) = 0;
      *(_DWORD *)(v29 + 24) = 0;
      *(_DWORD *)(v29 + 44) = 0;
    }
    else
    {
      v29 = 0LL;
    }
    v32 = 96LL * i;
    *(_QWORD *)((char *)this + v32 + 80) = v29;
    if ( !v29 )
    {
      WdLogSingleEntry1(6LL);
      v23 = L"Failed to allocate DDAMeta for VidPn source 0x%I64x.";
      WdLogGlobalForLineNumber = 1310;
      goto LABEL_23;
    }
    if ( !(unsigned int)DDAMetaData::Initialize((DDAMetaData *)v29) )
    {
      WdLogSingleEntry1(6LL);
      v23 = L"Failed to Initialize DDAMeta for VidPn source 0x%I64x.";
      WdLogGlobalForLineNumber = 1315;
      goto LABEL_23;
    }
    v33 = (_QWORD *)operator new(0x10uLL, 0x674D444Fu, 256LL);
    v34 = v33;
    if ( v33 )
    {
      *v33 = 0LL;
      v33[1] = 0LL;
      AUTOEXPANDALLOCATION::GetBuffer((AUTOEXPANDALLOCATION *)v33, 0x4000u, 0);
    }
    else
    {
      v34 = 0LL;
    }
    *(_QWORD *)((char *)this + v32 + 160) = v34;
    if ( !v34 || !*v34 )
    {
      WdLogSingleEntry2(6LL, 0x4000LL, a2->VidPnSourceId);
      VidPnSourceId = a2->VidPnSourceId;
      WdLogGlobalForLineNumber = 1323;
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"Failed to allocate 0x%I64x bytes for new pointer shape on source 0x%I64x at initialization",
        0x4000LL,
        VidPnSourceId,
        0LL,
        0LL,
        0LL);
      return 3221225495LL;
    }
  }
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    McTemplateK0pxqt_EtwWriteTransfer(
      a2->hAdapter,
      &EventOutputDuplicationCreate,
      v25,
      this,
      a2->hAdapter,
      a2->VidPnSourceId,
      a2->KeyedMutexCount);
  return 0LL;
}
