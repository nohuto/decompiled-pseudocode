/*
 * XREFs of Isoch_GetTDPC @ 0x140026E00
 * Callers:
 *     Isoch_Stage_MapIntoRing @ 0x14001B410 (Isoch_Stage_MapIntoRing.c)
 * Callees:
 *     Feature_EUSB2__private_IsEnabledDeviceUsageNoInline @ 0x140044C80 (Feature_EUSB2__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall Isoch_GetTDPC(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  int v3; // esi
  int v4; // eax
  unsigned __int16 v5; // ax
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 56);
  v3 = a2;
  if ( (unsigned int)Feature_EUSB2__private_IsEnabledDeviceUsageNoInline(a1, a2)
    && !*(_WORD *)(v2 + 100)
    && *(_BYTE *)(v2 + 39)
    && ((v4 = *(_DWORD *)(v2 + 128), v4 == 5) || v4 == 1) )
  {
    v5 = *(_WORD *)(v2 + 105);
  }
  else
  {
    v5 = *(_WORD *)(v2 + 100) & 0x7FF;
  }
  result = ((unsigned int)v5 + v3 - 1) / v5;
  if ( !(_DWORD)result )
    return 1LL;
  return result;
}
