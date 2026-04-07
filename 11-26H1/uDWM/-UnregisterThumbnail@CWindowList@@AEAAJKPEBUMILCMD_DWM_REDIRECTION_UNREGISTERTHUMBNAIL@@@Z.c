/*
 * XREFs of ?UnregisterThumbnail@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_UNREGISTERTHUMBNAIL@@@Z @ 0x180026B48
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x1800E23B0 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?UnregisterThumbnail@CWindowList@@AEAAJPEAVCThumbnailData@@@Z @ 0x180025680 (-UnregisterThumbnail@CWindowList@@AEAAJPEAVCThumbnailData@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::UnregisterThumbnail(
        CWindowList *this,
        int a2,
        const struct MILCMD_DWM_REDIRECTION_UNREGISTERTHUMBNAIL *a3)
{
  unsigned int v6; // r10d
  __int64 v7; // r9
  struct CThumbnailData *v8; // rdx
  unsigned int v9; // ebx

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v6 = *((_DWORD *)this + 102);
  v7 = 0LL;
  if ( v6 )
  {
    while ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 48) + 8 * v7) + 8LL) != *(_QWORD *)((char *)a3 + 4) )
    {
      v7 = (unsigned int)(v7 + 1);
      if ( (unsigned int)v7 >= v6 )
        goto LABEL_4;
    }
  }
  else
  {
LABEL_4:
    if ( (unsigned int)v7 >= v6 )
    {
LABEL_9:
      v9 = -2147024809;
      goto LABEL_8;
    }
  }
  v8 = *(struct CThumbnailData **)(*((_QWORD *)this + 48) + 8 * v7);
  if ( !v8 || a2 != *((_DWORD *)a3 + 2) )
    goto LABEL_9;
  v9 = CWindowList::UnregisterThumbnail(this, v8);
LABEL_8:
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v9;
}
