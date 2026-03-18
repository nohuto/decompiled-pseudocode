/*
 * XREFs of ?FreeQEntry@@YAXPEAUtagQMSG@@@Z @ 0x140068030
 * Callers:
 *     ?RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z @ 0x1400677E0 (-RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z.c)
 *     FreeMessageList @ 0x140068600 (FreeMessageList.c)
 *     DestroyThreadsMessages @ 0x1401AC220 (DestroyThreadsMessages.c)
 * Callees:
 *     FreePointerMessageParams @ 0x140069664 (FreePointerMessageParams.c)
 *     IsPointerInputClientMessage @ 0x140143F90 (IsPointerInputClientMessage.c)
 */

void __fastcall FreeQEntry(struct tagQMSG *a1, __int64 a2)
{
  __int64 UserSessionState; // rax

  if ( (*((_DWORD *)a1 + 25) & 8) != 0
    && !*((_DWORD *)a1 + 24)
    && ((unsigned int)(*((_DWORD *)a1 + 6) - 577) <= 3 || (unsigned int)IsPointerInputClientMessage()) )
  {
    FreePointerMessageParams(a1);
  }
  UserSessionState = W32GetUserSessionState(a1, a2);
  Win32FreeToPagedLookasideList(*(_QWORD *)(UserSessionState + 16872), a1);
}
