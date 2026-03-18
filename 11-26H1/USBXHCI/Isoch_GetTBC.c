/*
 * XREFs of Isoch_GetTBC @ 0x1400271A0
 * Callers:
 *     Isoch_Stage_MapIntoRing @ 0x14001B410 (Isoch_Stage_MapIntoRing.c)
 * Callees:
 *     Feature_EUSB2__private_IsEnabledDeviceUsageNoInline @ 0x140044C80 (Feature_EUSB2__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall Isoch_GetTBC(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  int v3; // ebp
  int v4; // esi
  int v5; // eax
  unsigned __int16 v6; // ax
  unsigned int v7; // eax

  v2 = *(_QWORD *)(a1 + 56);
  v3 = a2;
  v4 = *(_DWORD *)(v2 + 156);
  if ( (unsigned int)Feature_EUSB2__private_IsEnabledDeviceUsageNoInline(a1, a2)
    && !*(_WORD *)(v2 + 100)
    && *(_BYTE *)(v2 + 39)
    && ((v5 = *(_DWORD *)(v2 + 128), v5 == 5) || v5 == 1) )
  {
    v6 = *(_WORD *)(v2 + 105);
  }
  else
  {
    v6 = *(_WORD *)(v2 + 100) & 0x7FF;
  }
  v7 = ((unsigned int)v6 + v3 - 1) / v6;
  if ( !v7 )
    v7 = 1;
  return (v4 + v7) / (v4 + 1) - 1;
}
