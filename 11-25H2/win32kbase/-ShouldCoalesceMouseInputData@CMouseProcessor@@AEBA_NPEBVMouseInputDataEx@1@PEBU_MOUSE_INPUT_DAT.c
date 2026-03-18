/*
 * XREFs of ?ShouldCoalesceMouseInputData@CMouseProcessor@@AEBA_NPEBVMouseInputDataEx@1@PEBU_MOUSE_INPUT_DATA@@PEBUMouseInputProcessingState@@@Z @ 0x14019275C
 * Callers:
 *     ?ProcessMouseInputData@CMouseProcessor@@AEAAXPEAVMouseInputDataEx@1@PEAUMouseInputProcessingState@@AEAU_MousePacketPerf@@PEBU_MOUSE_INPUT_DATA@@PEBUtagUIPI_INFO_INT@@@Z @ 0x14005ECCC (-ProcessMouseInputData@CMouseProcessor@@AEAAXPEAVMouseInputDataEx@1@PEAUMouseInputProcessingStat.c)
 * Callees:
 *     Feature_AssertionFixes__private_IsEnabledDeviceUsageNoInline @ 0x1401F0DE0 (Feature_AssertionFixes__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_FixMouseCoalescing__private_IsEnabledDeviceUsageNoInline @ 0x140222C98 (Feature_FixMouseCoalescing__private_IsEnabledDeviceUsageNoInline.c)
 *     ApiSetEditionRawInputRequestedForMouse @ 0x140225D24 (ApiSetEditionRawInputRequestedForMouse.c)
 */

char __fastcall CMouseProcessor::ShouldCoalesceMouseInputData(
        CMouseProcessor *this,
        const struct CMouseProcessor::MouseInputDataEx *a2,
        const struct _MOUSE_INPUT_DATA *a3,
        const struct MouseInputProcessingState *a4)
{
  __int16 v8; // cx
  char v9; // bl
  int v10; // r9d
  int v11; // r8d
  int v12; // ecx
  LONG LastX; // edx
  int v14; // edx
  char v15; // r9
  LONG LastY; // edx
  char v17; // al

  if ( (unsigned int)Feature_AssertionFixes__private_IsEnabledDeviceUsageNoInline(this) )
  {
    if ( !a3 || *((_WORD *)a2 + 2) || a3->ButtonFlags || !a3->LastX && !a3->LastY )
      return 0;
  }
  else if ( !a3 || *((_WORD *)a2 + 2) || a3->ButtonFlags )
  {
    return 0;
  }
  v8 = *((_WORD *)a2 + 1);
  v9 = 1;
  if ( ((LOBYTE(a3->Flags) ^ (unsigned __int8)v8) & 1) != 0 )
    return 0;
  if ( (v8 & 1) == 0 )
  {
    if ( !(unsigned int)Feature_FixMouseCoalescing__private_IsEnabledDeviceUsageNoInline() )
    {
      v12 = *((_DWORD *)a2 + 3);
      v10 = v12 + *((_DWORD *)a4 + 2);
      v11 = v12 + *((_DWORD *)a4 + 3);
LABEL_17:
      LastX = a3->LastX;
      if ( v10 <= 0 == LastX <= 0 || (v14 = ~v10 ^ ~LastX, v15 = 0, v14 >= 0) )
        v15 = 1;
      LastY = a3->LastY;
      if ( v11 <= 0 == LastY <= 0 || (v17 = 0, (~v11 ^ ~LastY) >= 0) )
        v17 = 1;
      if ( !v15 || !v17 )
        return 0;
      return v9;
    }
    if ( (unsigned int)ApiSetEditionRawInputRequestedForMouse() )
    {
      v10 = *((_DWORD *)a4 + 2) + *((_DWORD *)a2 + 3);
      v11 = *((_DWORD *)a4 + 3) + *((_DWORD *)a2 + 4);
      goto LABEL_17;
    }
  }
  return v9;
}
