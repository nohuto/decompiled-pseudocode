/*
 * XREFs of TR_GetPacketCount @ 0x140026D10
 * Callers:
 *     Bulk_Stage_MapIntoRing @ 0x14001A0D0 (Bulk_Stage_MapIntoRing.c)
 *     Isoch_Stage_MapIntoRing @ 0x14001B410 (Isoch_Stage_MapIntoRing.c)
 * Callees:
 *     Feature_EUSB2__private_IsEnabledDeviceUsageNoInline @ 0x140044C80 (Feature_EUSB2__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall TR_GetPacketCount(__int64 a1, __int64 a2)
{
  int v2; // r14d
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // eax
  unsigned __int16 v8; // si
  __int64 v9; // rdi
  int v10; // eax
  unsigned __int16 v11; // cx

  v2 = a2;
  if ( !*(_BYTE *)(*(_QWORD *)(a1 + 40) + 720LL) )
    return 0LL;
  v4 = *(_QWORD *)(a1 + 56);
  if ( (unsigned int)Feature_EUSB2__private_IsEnabledDeviceUsageNoInline(a1, a2)
    && !*(_WORD *)(v4 + 100)
    && *(_BYTE *)(v4 + 39)
    && ((v7 = *(_DWORD *)(v4 + 128), v7 == 5) || v7 == 1) )
  {
    v8 = *(_WORD *)(v4 + 105);
  }
  else
  {
    v8 = *(_WORD *)(v4 + 100) & 0x7FF;
  }
  v9 = *(_QWORD *)(a1 + 56);
  if ( (unsigned int)Feature_EUSB2__private_IsEnabledDeviceUsageNoInline(v6, v5)
    && !*(_WORD *)(v9 + 100)
    && *(_BYTE *)(v9 + 39)
    && ((v10 = *(_DWORD *)(v9 + 128), v10 == 5) || v10 == 1) )
  {
    v11 = *(_WORD *)(v9 + 105);
  }
  else
  {
    v11 = *(_WORD *)(v9 + 100) & 0x7FF;
  }
  return (v2 + (unsigned int)v8 - 1) / v11;
}
