/*
 * XREFs of WPUpdateCheckPointSettings @ 0x1402ACAF4
 * Callers:
 *     xxxSetWindowPlacement @ 0x14016FB84 (xxxSetWindowPlacement.c)
 *     ?xxxProcessShowWindowEvent@@YAXPEAUtagWND@@W4QEVENT_SHOWINDOW_MESSAGE_ID@@_K_J@Z @ 0x14016FFF4 (-xxxProcessShowWindowEvent@@YAXPEAUtagWND@@W4QEVENT_SHOWINDOW_MESSAGE_ID@@_K_J@Z.c)
 * Callees:
 *     UpdateCheckpoint @ 0x14009075C (UpdateCheckpoint.c)
 */

struct CHECKPOINT *__fastcall WPUpdateCheckPointSettings(struct tagWND *a1, char a2)
{
  struct CHECKPOINT *result; // rax
  int *v4; // rcx
  int v5; // eax

  result = UpdateCheckpoint(a1);
  if ( result )
  {
    v4 = (int *)((char *)result + 16);
    if ( (a2 & 1) != 0 )
      *v4 |= 1u;
    v5 = *v4;
    if ( (a2 & 2) != 0 )
      result = (struct CHECKPOINT *)(v5 | 2u);
    else
      result = (struct CHECKPOINT *)(v5 & 0xFFFFFFFD);
    *v4 = (int)result;
  }
  return result;
}
