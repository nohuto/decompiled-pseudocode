/*
 * XREFs of TR_CalculateTDSize @ 0x140026E80
 * Callers:
 *     Control_Transfer_MapIntoRing @ 0x14000F2D0 (Control_Transfer_MapIntoRing.c)
 *     Bulk_Stage_MapIntoRing @ 0x14001A0D0 (Bulk_Stage_MapIntoRing.c)
 *     Isoch_Stage_MapIntoRing @ 0x14001B410 (Isoch_Stage_MapIntoRing.c)
 * Callees:
 *     Feature_EUSB2__private_IsEnabledDeviceUsageNoInline @ 0x140044C80 (Feature_EUSB2__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall TR_CalculateTDSize(__int64 a1, __int64 a2, unsigned int a3, char a4)
{
  int v5; // esi
  __int64 v6; // rdi
  int v7; // eax
  unsigned __int16 v8; // ax
  unsigned int v9; // esi

  v5 = a2;
  if ( !*(_BYTE *)(*(_QWORD *)(a1 + 40) + 720LL) || a4 )
    return 0LL;
  v6 = *(_QWORD *)(a1 + 56);
  if ( (unsigned int)Feature_EUSB2__private_IsEnabledDeviceUsageNoInline(a1, a2)
    && !*(_WORD *)(v6 + 100)
    && *(_BYTE *)(v6 + 39)
    && ((v7 = *(_DWORD *)(v6 + 128), v7 == 5) || v7 == 1) )
  {
    v8 = *(_WORD *)(v6 + 105);
  }
  else
  {
    v8 = *(_WORD *)(v6 + 100) & 0x7FF;
  }
  v9 = v5 - a3 / v8;
  if ( v9 > 0x1F )
    return 31;
  return v9;
}
