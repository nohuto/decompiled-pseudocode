/*
 * XREFs of ?PostActivateLivePreview@CDesktopManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_ACTIVATELIVEPREVIEW@@@Z @ 0x1800353F4
 * Callers:
 *     ?ShellWindowChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSHELLWINDOWCHANGE@@@Z @ 0x180035D70 (-ShellWindowChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSHELLWINDOWCHANGE@@@Z.c)
 *     ?PostActivateLivePreview@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_ACTIVATELIVEPREVIEW@@@Z @ 0x1800E22C0 (-PostActivateLivePreview@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_ACTIVATELIVEPREVIEW@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x180084D50 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180086130 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     memcpy_0 @ 0x18008EF24 (memcpy_0.c)
 */

__int64 __fastcall CDesktopManager::PostActivateLivePreview(
        CDesktopManager *this,
        const struct MILCMD_DWM_REDIRECTION_ACTIVATELIVEPREVIEW *a2)
{
  char *v2; // rdi
  signed int v5; // ebx
  __int16 v6; // cx
  __int16 v7; // ax
  char *v8; // rax
  char *v9; // rbp
  signed int LastError; // eax
  unsigned int v12; // [rsp+20h] [rbp-18h]

  v2 = 0LL;
  if ( !*((_DWORD *)this + 282) )
  {
    v5 = -2147467259;
    v12 = 2684;
LABEL_3:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, v12, 0LL);
    goto LABEL_18;
  }
  v6 = *((_WORD *)a2 + 4);
  v7 = 8 * (v6 + 4);
  if ( *((_DWORD *)a2 + 7) )
    v7 += 16 * v6;
  v8 = (char *)DefaultHeap::Alloc(v7);
  v2 = v8;
  if ( v8 )
  {
    v9 = v8 + 32;
    *(_DWORD *)v8 = *((_DWORD *)a2 + 1);
    *((_DWORD *)v8 + 1) = *((_DWORD *)a2 + 2);
    *((_QWORD *)v8 + 1) = *(_QWORD *)((char *)a2 + 12);
    *((_DWORD *)v8 + 4) = *((_DWORD *)a2 + 5);
    *((_DWORD *)v8 + 5) = *((_DWORD *)a2 + 6);
    *((_DWORD *)v8 + 6) = 0;
    *((_DWORD *)v8 + 7) = *((_DWORD *)a2 + 7);
    memcpy_0(v8 + 32, (char *)a2 + 32, (unsigned int)(8 * *((_DWORD *)a2 + 2)));
    if ( *((_DWORD *)a2 + 7) )
      memcpy_0(
        &v9[8 * *((unsigned int *)a2 + 2)],
        (char *)a2 + 8 * *((unsigned int *)a2 + 2) + 32,
        (unsigned int)(16 * *((_DWORD *)a2 + 2)));
    SetLastError(0);
    if ( !PostThreadMessageW(*((_DWORD *)this + 282), 0x405u, (WPARAM)v2, 0LL) )
    {
      LastError = GetLastError();
      v5 = LastError;
      if ( LastError > 0 )
        v5 = (unsigned __int16)LastError | 0x80070000;
      v12 = 2722;
      if ( v5 >= 0 )
        v5 = -2003304445;
      goto LABEL_3;
    }
    v2 = 0LL;
    v5 = 0;
  }
  else
  {
    v5 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0xA87u, 0LL);
  }
LABEL_18:
  DefaultHeap::Free(v2);
  return (unsigned int)v5;
}
