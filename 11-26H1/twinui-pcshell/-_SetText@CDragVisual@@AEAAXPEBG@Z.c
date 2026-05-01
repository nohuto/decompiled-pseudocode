/*
 * XREFs of ?_SetText@CDragVisual@@AEAAXPEBG@Z @ 0x18054412C
 * Callers:
 *     ?SetAppLayout@CDragVisual@@UEAAJPEAUIAppLayout@@PEAUtagRECT@@@Z @ 0x180541BF0 (-SetAppLayout@CDragVisual@@UEAAJPEAUIAppLayout@@PEAUtagRECT@@@Z.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x18005B890 (McGenEventWrite_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

void __fastcall CDragVisual::_SetText(HWND *this, const unsigned __int16 *a2)
{
  __int64 v3; // r8
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-28h] BYREF

  SetWindowTextW(this[19], a2);
  if ( *((_BYTE *)this + 272) )
  {
    if ( (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
      McGenEventWrite_EventWriteTransfer(MICROSOFT_TWINUI_PUBLISHER_Context, &DragVisual_AppChange_Info, v3, 1u, &v4);
  }
}
