/*
 * XREFs of ?ShouldCoalesceMouseInputData@CMouseProcessor@@AEBA_NPEBVMouseInputDataEx@1@PEBU_MOUSE_INPUT_DATA@@PEBUMouseInputProcessingState@@@Z @ 0x1401B0E7C
 * Callers:
 *     ?ProcessMouseInputData@CMouseProcessor@@AEAAXPEAVMouseInputDataEx@1@PEAUMouseInputProcessingState@@AEAU_MousePacketPerf@@PEBU_MOUSE_INPUT_DATA@@PEBUtagUIPI_INFO_INT@@@Z @ 0x14009F170 (-ProcessMouseInputData@CMouseProcessor@@AEAAXPEAVMouseInputDataEx@1@PEAUMouseInputProcessingStat.c)
 * Callees:
 *     ApiSetEditionRawInputRequestedForMouse @ 0x140199B60 (ApiSetEditionRawInputRequestedForMouse.c)
 */

char __fastcall CMouseProcessor::ShouldCoalesceMouseInputData(
        CMouseProcessor *this,
        const struct CMouseProcessor::MouseInputDataEx *a2,
        const struct _MOUSE_INPUT_DATA *a3,
        const struct MouseInputProcessingState *a4)
{
  char v7; // bl
  __int64 v8; // rcx
  int v9; // r9d
  int v10; // r8d
  LONG LastX; // edx
  int v12; // edx
  char v13; // r9
  LONG LastY; // edx
  char v15; // al

  if ( !a3 || *((_WORD *)a2 + 2) || a3->ButtonFlags || !a3->LastX && !a3->LastY )
    return 0;
  v8 = *((unsigned __int16 *)a2 + 1);
  v7 = 1;
  LOWORD(v8) = *((_WORD *)a2 + 1) & 1;
  if ( (_BYTE)v8 != (a3->Flags & 1) )
    return 0;
  if ( !(_WORD)v8 && (unsigned int)ApiSetEditionRawInputRequestedForMouse(v8) )
  {
    v9 = *((_DWORD *)a4 + 2) + *((_DWORD *)a2 + 3);
    v10 = *((_DWORD *)a4 + 3) + *((_DWORD *)a2 + 4);
    LastX = a3->LastX;
    if ( v9 <= 0 == LastX <= 0 || (v12 = ~v9 ^ ~LastX, v13 = 0, v12 >= 0) )
      v13 = 1;
    LastY = a3->LastY;
    if ( v10 <= 0 == LastY <= 0 || (v15 = 0, (~v10 ^ ~LastY) >= 0) )
      v15 = 1;
    if ( !v13 || !v15 )
      return 0;
  }
  return v7;
}
