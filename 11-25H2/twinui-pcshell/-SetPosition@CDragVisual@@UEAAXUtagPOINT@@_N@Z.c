/*
 * XREFs of ?SetPosition@CDragVisual@@UEAAXUtagPOINT@@_N@Z @ 0x18051F860
 * Callers:
 *     <none>
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x1800D86F4 (McGenEventWrite_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?_ClearVisualFeedback@CDragVisual@@AEAAXXZ @ 0x18051FED0 (-_ClearVisualFeedback@CDragVisual@@AEAAXXZ.c)
 *     ?_UpdateThumbnail@CDragVisual@@AEAAXW4DCompThumbnailAnimation@@W4DirtyBitFlags@@W4UpdateThumbnailOptions@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x180521524 (-_UpdateThumbnail@CDragVisual@@AEAAXW4DCompThumbnailAnimation@@W4DirtyBitFlags@@W4UpdateThumbnai.c)
 *     ?_UpdateThumbnailRect@CDragVisual@@AEAA_NW4DragVisualMode@@@Z @ 0x180521828 (-_UpdateThumbnailRect@CDragVisual@@AEAA_NW4DragVisualMode@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CDragVisual::SetPosition(CDragVisual *this, struct tagPOINT a2, char a3)
{
  __int64 v5; // r8
  __int64 v6; // rdx
  bool v7; // zf
  __int64 v8; // rcx
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+30h] [rbp-28h] BYREF

  if ( *((_QWORD *)this + 39) != a2 )
  {
    v9.Ptr = (ULONGLONG)a2;
    *((struct tagPOINT *)this + 39) = a2;
    if ( (unsigned __int8)CDragVisual::_UpdateThumbnailRect((char *)this - 24) )
    {
      if ( *((_BYTE *)this + 250) || *((_DWORD *)this + 31) == 6 && !*((_BYTE *)this + 300) && !*((_BYTE *)this + 301) )
        v6 = 1LL;
      else
        v6 = 5LL;
      CDragVisual::_UpdateThumbnail((char *)this - 24, v6, 1LL);
    }
    v7 = *((_DWORD *)this + 31) == 6;
    *((_BYTE *)this + 250) = 0;
    if ( v7 && !*((_BYTE *)this + 300) && !*((_BYTE *)this + 301) )
    {
      CDragVisual::_ClearVisualFeedback((CDragVisual *)((char *)this - 24));
      *((_BYTE *)this + 302) = 1;
    }
    if ( *((_BYTE *)this + 256) && SetWindowRgn(*((HWND *)this + 16), 0LL, 1) )
      *((_BYTE *)this + 256) = 0;
    v8 = *((_QWORD *)this + 9);
    if ( v8 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 48LL))(v8);
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 9) + 72LL))(*((_QWORD *)this + 9));
    }
    if ( a3 && *((_BYTE *)this + 248) && (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
      McGenEventWrite_EventWriteTransfer(
        MICROSOFT_TWINUI_PUBLISHER_Context,
        &DragVisual_TargetChanged_Info,
        v5,
        1u,
        &v9);
  }
}
