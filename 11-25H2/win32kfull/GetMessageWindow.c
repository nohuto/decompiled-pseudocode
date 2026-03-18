/*
 * XREFs of GetMessageWindow @ 0x140062A3C
 * Callers:
 *     xxxCreateWindowEx @ 0x14003997C (xxxCreateWindowEx.c)
 *     NtUserSetParent @ 0x140060E30 (NtUserSetParent.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x140060F60 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     ?IsOleDragDropCaptureWindow@@YAHPEAUtagWND@@@Z @ 0x1400629EC (-IsOleDragDropCaptureWindow@@YAHPEAUtagWND@@@Z.c)
 *     ?ValidateAndAttachQueueToInputWindow@@YAJPEAUHWND__@@PEAVIInputQueue@@@Z @ 0x140063468 (-ValidateAndAttachQueueToInputWindow@@YAJPEAUHWND__@@PEAVIInputQueue@@@Z.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x140063BF8 (zzzUpdateWindowsAfterModeChange.c)
 *     _GetAncestor @ 0x1401302BC (_GetAncestor.c)
 *     NtUserGetAncestor @ 0x140152B50 (NtUserGetAncestor.c)
 *     ?DwmNotifyWindowsMarginsChangeByTheme@@YAXXZ @ 0x14018FD7C (-DwmNotifyWindowsMarginsChangeByTheme@@YAXXZ.c)
 *     HasMessageRootWindow @ 0x1402ACAB4 (HasMessageRootWindow.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetMessageWindow(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 24);
  result = 0LL;
  if ( v1 )
    return *(_QWORD *)(v1 + 112);
  return result;
}
