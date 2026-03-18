/*
 * XREFs of HmgIncProcessHandleCount @ 0x1400C5A0C
 * Callers:
 *     GreSelectVisRgn @ 0x140016B80 (GreSelectVisRgn.c)
 *     GreSelectVisRgnShared @ 0x140017500 (GreSelectVisRgnShared.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x140017FB0 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     SetOrCreateRectRgnIndirectPublic @ 0x14001DA20 (SetOrCreateRectRgnIndirectPublic.c)
 *     GreSetRegionOwner @ 0x14001EE60 (GreSetRegionOwner.c)
 *     HmgSetOwner @ 0x140026FC0 (HmgSetOwner.c)
 *     GreSetBrushOwner @ 0x140035090 (GreSetBrushOwner.c)
 * Callees:
 *     HmgIncProcessHandleCountEx @ 0x1400C5508 (HmgIncProcessHandleCountEx.c)
 */

__int64 __fastcall HmgIncProcessHandleCount(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 SessionState; // rax

  v1 = a1;
  SessionState = W32GetSessionState(a1);
  return HmgIncProcessHandleCountEx(*(_QWORD *)(SessionState + 88), v1, 0);
}
