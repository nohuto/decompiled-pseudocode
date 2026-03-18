/*
 * XREFs of ?SetPostCompositionConfigUnsafe@DISPLAY_SOURCE@@QEAAXEPEBUtagRECT@@0@Z @ 0x14032E9CC
 * Callers:
 *     ?CheckAndUpdateMultiPlaneOverlayFromInternalState@@YA_NIIPEAVCIFlipPresentHistoryTokenData@@_NPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAUtagRECT@@@Z @ 0x14042A0A4 (-CheckAndUpdateMultiPlaneOverlayFromInternalState@@YA_NIIPEAVCIFlipPresentHistoryTokenData@@_NPE.c)
 * Callees:
 *     ?IsOwner@DXGFASTMUTEX@@QEBAEXZ @ 0x14000D800 (-IsOwner@DXGFASTMUTEX@@QEBAEXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?CreateNewPostCompositionConfig@DISPLAY_SOURCE@@AEAAXEPEBUtagRECT@@0@Z @ 0x14032EB8C (-CreateNewPostCompositionConfig@DISPLAY_SOURCE@@AEAAXEPEBUtagRECT@@0@Z.c)
 */

void __fastcall DISPLAY_SOURCE::SetPostCompositionConfigUnsafe(
        DISPLAY_SOURCE *this,
        unsigned __int8 a2,
        const struct tagRECT *a3,
        const struct tagRECT *a4)
{
  __int64 v8; // rax
  char *v9; // rdx
  bool v10; // zf

  if ( !DXGFASTMUTEX::IsOwner((DXGFASTMUTEX *)(*((_QWORD *)this + 1) + 624LL)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 9760;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"m_DisplayCore->IsDisplayStateMutexOwner()",
      9760LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( *((_DWORD *)this + 712) == -1 && *((_DWORD *)this + 713) != -1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 9455;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"(pQueue->HeadIndex != CONFIG_INDEX_INVALID) || (pQueue->TailIndex == CONFIG_INDEX_INVALID)",
      9455LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v8 = *((int *)this + 712);
  if ( (_DWORD)v8 == -1 || (v9 = (char *)this + 32 * v8 + 4 * v8 + 2856) == 0LL )
  {
    v10 = a2 == 0;
  }
  else
  {
    if ( a2 )
    {
      if ( *((_DWORD *)v9 + 1) == a3->left
        && *((_DWORD *)v9 + 3) == a3->right
        && *((_DWORD *)v9 + 2) == a3->top
        && *((_DWORD *)v9 + 4) == a3->bottom
        && *((_DWORD *)v9 + 5) == a4->left
        && *((_DWORD *)v9 + 7) == a4->right
        && *((_DWORD *)v9 + 6) == a4->top
        && *((_DWORD *)v9 + 8) == a4->bottom )
      {
LABEL_18:
        *((_BYTE *)this + 3792) = 1;
        return;
      }
LABEL_17:
      DISPLAY_SOURCE::CreateNewPostCompositionConfig(this, a2, a3, a4);
      if ( !a2 )
        return;
      goto LABEL_18;
    }
    v10 = *v9 == 0;
  }
  if ( !v10 )
    goto LABEL_17;
}
