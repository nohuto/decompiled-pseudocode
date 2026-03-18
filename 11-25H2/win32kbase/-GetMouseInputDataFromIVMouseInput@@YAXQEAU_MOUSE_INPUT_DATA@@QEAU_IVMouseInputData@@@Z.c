/*
 * XREFs of ?GetMouseInputDataFromIVMouseInput@@YAXQEAU_MOUSE_INPUT_DATA@@QEAU_IVMouseInputData@@@Z @ 0x140219974
 * Callers:
 *     ?DeliverMouseInputToRIM@@YAXPEBU_IVMouseInputPacket@@PEAURawInputManagerObject@@PEAURIMDEV@@@Z @ 0x140219800 (-DeliverMouseInputToRIM@@YAXPEBU_IVMouseInputPacket@@PEAURawInputManagerObject@@PEAURIMDEV@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall GetMouseInputDataFromIVMouseInput(
        struct _MOUSE_INPUT_DATA *const a1,
        struct _IVMouseInputData *const a2)
{
  a1->UnitId = *(_WORD *)a2;
  a1->Flags = *((_WORD *)a2 + 2);
  a1->ButtonFlags = *((_WORD *)a2 + 4);
  a1->ButtonData = *((_WORD *)a2 + 6);
  a1->RawButtons = *((_DWORD *)a2 + 4);
  a1->LastX = *((_DWORD *)a2 + 5);
  a1->LastY = *((_DWORD *)a2 + 6);
  a1->ExtraInformation = *((_DWORD *)a2 + 7);
}
