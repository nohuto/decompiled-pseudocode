/*
 * XREFs of MNCheckButtonDownState @ 0x1402BF3A8
 * Callers:
 *     xxxMenuWindowProc @ 0x140183030 (xxxMenuWindowProc.c)
 *     xxxCallHandleMenuMessages @ 0x14022EC60 (xxxCallHandleMenuMessages.c)
 * Callees:
 *     UnlockMFMWFPWindow @ 0x14026B510 (UnlockMFMWFPWindow.c)
 */

char __fastcall MNCheckButtonDownState(__int64 a1)
{
  int v2; // edx
  char result; // al
  unsigned int v4; // r8d

  v2 = (unsigned __int16)_GetKeyState(*(unsigned int *)(a1 + 76)) >> 15;
  result = 8 * v2;
  v4 = (8 * v2) | *(_DWORD *)(a1 + 8) & 0xFFFFFFF7;
  *(_DWORD *)(a1 + 8) = v4;
  if ( !v2 )
  {
    *(_DWORD *)(a1 + 8) = v4 & 0xFFFFDF7F;
    return UnlockMFMWFPWindow((__int64 *)(a1 + 64));
  }
  return result;
}
