/*
 * XREFs of ?GetShadowBufferDirtyRect@@YAEPEAUtagRECT@@II@Z @ 0x140064698
 * Callers:
 *     ?PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z @ 0x1402BA700 (-PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z.c)
 * Callees:
 *     ?IsOwner@DXGFASTMUTEX@@QEBAEXZ @ 0x14000D800 (-IsOwner@DXGFASTMUTEX@@QEBAEXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 */

char __fastcall GetShadowBufferDirtyRect(struct tagRECT *a1, unsigned int a2, unsigned int a3)
{
  struct DXGGLOBAL *Global; // rax
  char v7; // di
  __int64 v8; // rbp
  KIRQL v10; // r8
  LONG v11; // edx
  LONG v12; // eax
  unsigned int right; // ecx
  unsigned int bottom; // eax

  Global = DXGGLOBAL::GetGlobal();
  v7 = 1;
  if ( !DXGFASTMUTEX::IsOwner((struct DXGGLOBAL *)((char *)Global + 1616)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4749;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"DXGGLOBAL::GetGlobal()->GetVirtualFrameBufferAccessLock()->IsOwner()",
      4749LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v8 = *((_QWORD *)DXGGLOBAL::GetGlobal() + 201);
  if ( !v8 )
    return 0;
  v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v8 + 24));
  v11 = *(_DWORD *)(v8 + 12);
  v12 = *(_DWORD *)(v8 + 16);
  a1->left = *(_DWORD *)(v8 + 4);
  a1->right = *(_DWORD *)(v8 + 8);
  a1->top = v11;
  a1->bottom = v12;
  *(_DWORD *)(v8 + 4) = -1;
  *(_DWORD *)(v8 + 12) = -1;
  *(_DWORD *)(v8 + 8) = 0;
  *(_DWORD *)(v8 + 16) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(v8 + 24), v10);
  right = a1->right;
  if ( a1->left >= right )
    return 0;
  bottom = a1->bottom;
  if ( a1->top >= bottom || right > a2 || bottom > a3 )
    return 0;
  return v7;
}
