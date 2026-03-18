/*
 * XREFs of ?ivHandleKeyboardInputPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x14021EC40
 * Callers:
 *     ?ivOnPacketReceived@CBaseInput@@KA_NPEBXKKPEAX1@Z @ 0x14021F6F0 (-ivOnPacketReceived@CBaseInput@@KA_NPEBXKKPEAX1@Z.c)
 * Callees:
 *     RIMUnlockExclusive @ 0x14005A690 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x14005A6D0 (RIMLockExclusive.c)
 *     ?DeliverKeyboardInputToRim@@YAXPEAU_IVKeyboardInputPacket@@PEAURawInputManagerObject@@PEAURIMDEV@@@Z @ 0x14021E188 (-DeliverKeyboardInputToRim@@YAXPEAU_IVKeyboardInputPacket@@PEAURawInputManagerObject@@PEAURIMDEV.c)
 *     FindRimDevByName @ 0x14021F9A4 (FindRimDevByName.c)
 *     IsRimObjectUnregistered @ 0x14021FBF4 (IsRimObjectUnregistered.c)
 */

__int64 __fastcall CBaseInput::ivHandleKeyboardInputPacket(
        __int64 a1,
        UNICODE_STRING *a2,
        struct RawInputManagerObject *a3)
{
  unsigned int v5; // ebx
  struct RIMDEV *RimDevByName; // rax

  a2->Buffer = (USHORT *)((char *)&a2->Length + ((unsigned __int64)a2->Buffer & 0xFFFFFFFFFFFFFFFEuLL));
  v5 = 1;
  RIMLockExclusive((__int64)a3 + 104);
  if ( (unsigned __int8)IsRimObjectUnregistered(a3) )
  {
    v5 = 2;
  }
  else
  {
    RimDevByName = (struct RIMDEV *)FindRimDevByName(a2);
    if ( RimDevByName )
      DeliverKeyboardInputToRim((struct _IVKeyboardInputPacket *)a2, a3, RimDevByName);
    else
      v5 = 0;
  }
  RIMUnlockExclusive((__int64)a3 + 104);
  return v5;
}
