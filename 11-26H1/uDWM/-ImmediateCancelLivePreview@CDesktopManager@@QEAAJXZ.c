/*
 * XREFs of ?ImmediateCancelLivePreview@CDesktopManager@@QEAAJXZ @ 0x1800ABA40
 * Callers:
 *     ?ScheduleStartAnimation@CStoryboard@@QEAAJXZ @ 0x18003CB38 (-ScheduleStartAnimation@CStoryboard@@QEAAJXZ.c)
 *     ?SwitchDesktop@CWindowList@@UEAAJK_K@Z @ 0x1800814E0 (-SwitchDesktop@CWindowList@@UEAAJK_K@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x180084D50 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180086130 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 */

__int64 __fastcall CDesktopManager::ImmediateCancelLivePreview(CDesktopManager *this)
{
  signed int v2; // ebx
  _QWORD *v3; // rax
  void *v4; // rdi
  signed int LastError; // eax
  unsigned int v7; // [rsp+20h] [rbp-18h]

  v2 = 0;
  v3 = DefaultHeap::Alloc(0x20uLL);
  v4 = v3;
  if ( v3 )
  {
    *v3 = 0LL;
    v3[1] = 0LL;
    *((_DWORD *)v3 + 4) = 1;
    v3[3] = 1LL;
    SetLastError(0);
    if ( PostThreadMessageW(*((_DWORD *)this + 282), 0x405u, (WPARAM)v4, 0LL) )
    {
      v4 = 0LL;
      goto LABEL_11;
    }
    LastError = GetLastError();
    v2 = LastError;
    if ( LastError > 0 )
      v2 = (unsigned __int16)LastError | 0x80070000;
    v7 = 2749;
    if ( v2 >= 0 )
      v2 = -2003304445;
  }
  else
  {
    v2 = -2147024882;
    v7 = 2735;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, v7, 0LL);
LABEL_11:
  DefaultHeap::Free(v4);
  return (unsigned int)v2;
}
