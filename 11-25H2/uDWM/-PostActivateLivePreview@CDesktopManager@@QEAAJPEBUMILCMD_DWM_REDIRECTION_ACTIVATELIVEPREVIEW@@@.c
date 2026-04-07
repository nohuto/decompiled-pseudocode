/*
 * XREFs of ?PostActivateLivePreview@CDesktopManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_ACTIVATELIVEPREVIEW@@@Z @ 0x180093734
 * Callers:
 *     ?ShellWindowChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSHELLWINDOWCHANGE@@@Z @ 0x18007E364 (-ShellWindowChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSHELLWINDOWCHANGE@@@Z.c)
 *     ?PostActivateLivePreview@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_ACTIVATELIVEPREVIEW@@@Z @ 0x1800E6AF0 (-PostActivateLivePreview@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_ACTIVATELIVEPREVIEW@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x1800938B4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180094280 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     memcpy_0 @ 0x1800EB118 (memcpy_0.c)
 */

__int64 __fastcall CDesktopManager::PostActivateLivePreview(
        CDesktopManager *this,
        const struct MILCMD_DWM_REDIRECTION_ACTIVATELIVEPREVIEW *a2)
{
  _DWORD *v2; // rdi
  signed int v5; // ebx
  __int16 v6; // cx
  __int16 v7; // ax
  _DWORD *v8; // rax
  char *v9; // rbp
  void *v10; // rcx
  int v11; // eax
  signed int LastError; // eax

  v2 = 0LL;
  if ( *((_DWORD *)this + 280) )
  {
    v6 = *((_WORD *)a2 + 4);
    v7 = 8 * (v6 + 4);
    if ( *((_DWORD *)a2 + 7) )
      v7 += 16 * v6;
    v8 = DefaultHeap::Alloc(v7);
    v2 = v8;
    if ( v8 )
    {
      v9 = (char *)(v8 + 8);
      *v8 = *((_DWORD *)a2 + 1);
      v10 = v8 + 8;
      v8[1] = *((_DWORD *)a2 + 2);
      *((_QWORD *)v8 + 1) = *(_QWORD *)((char *)a2 + 12);
      v8[4] = *((_DWORD *)a2 + 5);
      v11 = *((_DWORD *)a2 + 6);
      v2[6] = 0;
      v2[5] = v11;
      v2[7] = *((_DWORD *)a2 + 7);
      memcpy_0(v10, (char *)a2 + 32, (unsigned int)(8 * *((_DWORD *)a2 + 2)));
      if ( *((_DWORD *)a2 + 7) )
        memcpy_0(
          &v9[8 * *((unsigned int *)a2 + 2)],
          (char *)a2 + 8 * *((unsigned int *)a2 + 2) + 32,
          (unsigned int)(16 * *((_DWORD *)a2 + 2)));
      SetLastError(0);
      if ( PostThreadMessageW(*((_DWORD *)this + 280), 0x405u, (WPARAM)v2, 0LL) )
      {
        v2 = 0LL;
        v5 = 0;
      }
      else
      {
        LastError = GetLastError();
        v5 = LastError;
        if ( LastError > 0 )
          v5 = (unsigned __int16)LastError | 0x80070000;
        if ( v5 >= 0 )
          v5 = -2003304445;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0xAADu, 0LL);
      }
    }
    else
    {
      v5 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0xA92u, 0LL);
    }
  }
  else
  {
    v5 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147467259, 0xA87u, 0LL);
  }
  DefaultHeap::Free(v2);
  return (unsigned int)v5;
}
