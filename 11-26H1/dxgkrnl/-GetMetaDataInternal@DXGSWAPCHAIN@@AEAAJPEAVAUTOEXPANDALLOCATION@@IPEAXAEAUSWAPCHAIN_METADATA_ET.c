/*
 * XREFs of ?GetMetaDataInternal@DXGSWAPCHAIN@@AEAAJPEAVAUTOEXPANDALLOCATION@@IPEAXAEAUSWAPCHAIN_METADATA_ETW_INFO@1@DPEAI@Z @ 0x1402FFC3C
 * Callers:
 *     ?GetSetMetaData@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_GETSETSWAPCHAINMETADATA@@IPEAXD@Z @ 0x1402FF7F4 (-GetSetMetaData@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_GETSETSWAPCHAINMETADATA@@IPEAXD@Z.c)
 * Callees:
 *     ?IsOwner@DXGFASTMUTEX@@QEBAEXZ @ 0x14000D800 (-IsOwner@DXGFASTMUTEX@@QEBAEXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     memmove @ 0x1400A5B00 (memmove.c)
 *     RtlCopyToUser @ 0x1401966EC (RtlCopyToUser.c)
 */

__int64 __fastcall DXGSWAPCHAIN::GetMetaDataInternal(
        DXGSWAPCHAIN *this,
        struct AUTOEXPANDALLOCATION *a2,
        unsigned int a3,
        void *a4,
        struct DXGSWAPCHAIN::SWAPCHAIN_METADATA_ETW_INFO *a5,
        char a6,
        unsigned int *a7)
{
  __int64 v10; // rcx
  size_t v11; // rdi
  void *v12; // r14
  size_t v13; // r8
  __int64 v14; // rcx
  __int64 CurrentProcess; // rax
  __int64 v17; // rcx
  __int64 v18; // rax

  if ( !DXGFASTMUTEX::IsOwner(this) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3683;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_SwapChainLock.IsOwner()", 3683LL, 0LL, 0LL, 0LL, 0LL);
  }
  v11 = *((unsigned int *)a2 + 2);
  if ( a3 )
  {
    if ( a3 > (unsigned int)v11 )
      a3 = *((_DWORD *)a2 + 2);
    v12 = *(void **)a2;
    *((_QWORD *)a5 + 1) = a2;
    v13 = 16LL;
    if ( (unsigned int)v11 <= 0x10 )
      v13 = v11;
    memmove((char *)a5 + 24, v12, v13);
    if ( a6 == 1 )
      RtlCopyToUser(a4, v12, a3);
    else
      memmove(a4, v12, a3);
    *((_DWORD *)a5 + 5) = a3;
    *a7 = a3;
    if ( (unsigned int)v11 <= a3 )
      return 0LL;
    CurrentProcess = PsGetCurrentProcess(v14);
    WdLogSingleEntry2(3LL, CurrentProcess, a3);
    WdLogGlobalForLineNumber = 3737;
    return 2147483653LL;
  }
  else
  {
    if ( !a4 )
    {
      *a7 = v11;
      return 0LL;
    }
    PsGetCurrentProcess(v10);
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 3696;
    v18 = PsGetCurrentProcess(v17);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"GetSetMetadata caller (0x%I64x) passed in buffer size of zero",
      v18,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
}
