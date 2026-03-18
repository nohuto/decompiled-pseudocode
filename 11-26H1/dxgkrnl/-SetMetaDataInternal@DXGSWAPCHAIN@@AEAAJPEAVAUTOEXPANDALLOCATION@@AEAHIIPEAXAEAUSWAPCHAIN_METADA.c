/*
 * XREFs of ?SetMetaDataInternal@DXGSWAPCHAIN@@AEAAJPEAVAUTOEXPANDALLOCATION@@AEAHIIPEAXAEAUSWAPCHAIN_METADATA_ETW_INFO@1@D@Z @ 0x1402FFE44
 * Callers:
 *     ?GetSetMetaData@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_GETSETSWAPCHAINMETADATA@@IPEAXD@Z @ 0x1402FF7F4 (-GetSetMetaData@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_GETSETSWAPCHAINMETADATA@@IPEAXD@Z.c)
 *     ?ReleaseBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXDH@Z @ 0x140301D84 (-ReleaseBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXDH@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?IsOwner@DXGFASTMUTEX@@QEBAEXZ @ 0x14000D800 (-IsOwner@DXGFASTMUTEX@@QEBAEXZ.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     memmove @ 0x1400A5B00 (memmove.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?MarkAbandoned@DXGSWAPCHAIN@@QEAAX_N@Z @ 0x140300290 (-MarkAbandoned@DXGSWAPCHAIN@@QEAAX_N@Z.c)
 */

__int64 __fastcall DXGSWAPCHAIN::SetMetaDataInternal(
        DXGSWAPCHAIN *this,
        struct AUTOEXPANDALLOCATION *a2,
        int *a3,
        unsigned int a4,
        size_t Size,
        void *Src,
        struct DXGSWAPCHAIN::SWAPCHAIN_METADATA_ETW_INFO *a7,
        char a8)
{
  __int64 v8; // r13
  DXGSWAPCHAIN *v11; // r14
  __int64 v12; // rcx
  __int64 v13; // rbx
  unsigned int v14; // eax
  size_t v15; // rsi
  __int64 v16; // rbx
  void *v17; // rsi
  size_t v18; // rbx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  bool v23; // dl
  unsigned int v24; // ebx
  void *v25; // rax
  void *v26; // r14
  int v27; // eax
  __int64 v28; // rcx
  __int64 CurrentProcess; // rax
  void *v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rax
  bool v33; // dl

  v8 = a4;
  v11 = this;
  if ( !DXGFASTMUTEX::IsOwner(this) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3773;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_SwapChainLock.IsOwner()", 3773LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !(_DWORD)Size )
  {
    PsGetCurrentProcess(v12);
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 3778;
    CurrentProcess = PsGetCurrentProcess(v28);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"SetMetaDataInternal caller (0x%I64x) passed in buffer size of zero",
      CurrentProcess,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  if ( (int)Size + (int)v8 < (unsigned int)v8 )
  {
    PsGetCurrentProcess(v12);
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 3786;
    v32 = PsGetCurrentProcess(v31);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"SetMetaDataInternal caller (0x%I64x) overflow when calc used size",
      v32,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGSWAPCHAIN::MarkAbandoned(v11, v33);
    return 3221225485LL;
  }
  v13 = (unsigned int)(Size + v8);
  v14 = *((_DWORD *)a2 + 2);
  if ( (unsigned int)v13 <= v14 )
    v13 = v14;
  if ( (unsigned int)v13 > 0x2000 )
  {
    v20 = PsGetCurrentProcess(v12);
    WdLogSingleEntry3(2LL, v20, v13, 0x2000LL);
    WdLogGlobalForLineNumber = 3795;
    v22 = PsGetCurrentProcess(v21);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"SetMetaDataInternal caller (0x%I64x) provided metadata of size 0x%I64x which is bigger than max 0x%I64x",
      v22,
      v13,
      0x2000LL,
      0LL,
      0LL);
    v24 = -1073741811;
LABEL_21:
    DXGSWAPCHAIN::MarkAbandoned(v11, v23);
    return v24;
  }
  if ( *((_DWORD *)a2 + 3) >= (unsigned int)v13 )
  {
    *((_DWORD *)a2 + 2) = v13;
    v15 = (unsigned int)v13;
    goto LABEL_10;
  }
  if ( *a3 )
  {
    v15 = (unsigned int)v13;
    v30 = (void *)operator new[]((unsigned int)v13, 0x674D444Fu, 256LL);
    v26 = v30;
    if ( v30 )
    {
      memmove(v30, *(const void **)a2, *((unsigned int *)a2 + 2));
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*(void **)a2);
      goto LABEL_27;
    }
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*(void **)a2);
    goto LABEL_32;
  }
  if ( *(_QWORD *)a2 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*(void **)a2);
  v15 = (unsigned int)v13;
  v25 = (void *)operator new[]((unsigned int)v13, 0x674D444Fu, 256LL);
  v26 = v25;
  if ( !v25 )
  {
LABEL_32:
    v26 = 0LL;
    goto LABEL_27;
  }
  memset(v25, 0, (unsigned int)v13);
LABEL_27:
  *(_QWORD *)a2 = v26;
  v27 = v26 != 0LL ? v13 : 0;
  *((_DWORD *)a2 + 2) = v27;
  *((_DWORD *)a2 + 3) = v27;
  v11 = this;
LABEL_10:
  v16 = *(_QWORD *)a2;
  if ( !*(_QWORD *)a2 )
  {
    WdLogSingleEntry1(6LL);
    WdLogGlobalForLineNumber = 3804;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to expand metadata buffer size to 0x%lx",
      v15,
      0LL,
      0LL,
      0LL,
      0LL);
    v24 = -1073741801;
    goto LABEL_21;
  }
  if ( !*a3 && (_DWORD)v8 )
    memset(*(void **)a2, 0, v15);
  v17 = (void *)(v16 + v8);
  v18 = (unsigned int)Size;
  if ( a8 == 1 )
    RtlCopyFromUser(v17, Src, (unsigned int)Size);
  else
    memmove(v17, Src, (unsigned int)Size);
  *a3 = 1;
  *((_DWORD *)a7 + 5) = Size;
  *((_QWORD *)a7 + 1) = a2;
  *((_DWORD *)a7 + 4) = v8;
  if ( (unsigned int)Size > 0x10 )
    v18 = 16LL;
  memmove((char *)a7 + 24, v17, v18);
  return 0LL;
}
