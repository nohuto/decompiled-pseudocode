/*
 * XREFs of ?DeliverKeyboardInputToRim@@YAXPEAU_IVKeyboardInputPacket@@PEAURawInputManagerObject@@PEAURIMDEV@@@Z @ 0x14021E188
 * Callers:
 *     ?ivHandleKeyboardInputPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x14021EC40 (-ivHandleKeyboardInputPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@.c)
 * Callees:
 *     RIMUnlockExclusive @ 0x14005A690 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x14005A6D0 (RIMLockExclusive.c)
 *     RIMQueueKeyboardInput @ 0x1402098CC (RIMQueueKeyboardInput.c)
 */

void __fastcall DeliverKeyboardInputToRim(
        struct _IVKeyboardInputPacket *a1,
        struct RawInputManagerObject *a2,
        struct RIMDEV *a3)
{
  char *v3; // rdi
  __int64 v7; // [rsp+20h] [rbp-18h] BYREF
  int v8; // [rsp+28h] [rbp-10h]

  v3 = (char *)a2 + 760;
  RIMLockExclusive((__int64)a2 + 760);
  LOWORD(v7) = *((_WORD *)a1 + 8);
  WORD1(v7) = *((_WORD *)a1 + 10);
  WORD2(v7) = *((_WORD *)a1 + 12);
  HIWORD(v7) = *((_WORD *)a1 + 14);
  v8 = *((_DWORD *)a1 + 8);
  RIMQueueKeyboardInput(a2, a3, &v7, 1u);
  RIMUnlockExclusive((__int64)v3);
}
