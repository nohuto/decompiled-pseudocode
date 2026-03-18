/*
 * XREFs of ScsiSecurityProtocolInRequest @ 0x140005300
 * Callers:
 *     ScsiToNVMe @ 0x140002FA0 (ScsiToNVMe.c)
 * Callees:
 *     NVMeSetSenseData @ 0x140002E20 (NVMeSetSenseData.c)
 *     GetSrbExtension @ 0x140003A40 (GetSrbExtension.c)
 *     SrbAssignQueueId @ 0x1400047C0 (SrbAssignQueueId.c)
 */

__int64 __fastcall ScsiSecurityProtocolInRequest(__int64 a1, __int64 a2, _BYTE *a3)
{
  __int64 SrbExtension; // rsi
  __int64 v5; // r10
  __int64 v6; // r11
  unsigned int v7; // edi
  __int64 v8; // rax
  char v9; // al
  unsigned int v10; // ecx
  __int64 result; // rax
  unsigned int v12; // [rsp+40h] [rbp+8h]
  unsigned __int16 v13; // [rsp+40h] [rbp+8h]

  SrbExtension = GetSrbExtension(a2);
  if ( (*(_BYTE *)(*(_QWORD *)(v6 + 1560) + 256LL) & 1) == 0 )
    goto LABEL_10;
  HIBYTE(v12) = a3[6];
  BYTE2(v12) = a3[7];
  BYTE1(v12) = a3[8];
  LOBYTE(v12) = a3[9];
  v7 = v12;
  if ( (char)a3[4] < 0 )
    v7 = v12 << 9;
  HIBYTE(v13) = a3[2];
  LOBYTE(v13) = a3[3];
  v8 = 60LL;
  if ( *(_BYTE *)(v5 + 2) != 40 )
    v8 = 16LL;
  if ( *(_DWORD *)(v8 + v5) >= v7 )
  {
    v9 = 0;
    if ( v7 )
      v9 = 2;
    *(_BYTE *)(SrbExtension + 4225) = v9 | *(_BYTE *)(SrbExtension + 4225) & 0xFC | 1;
    SrbAssignQueueId(v6, v5);
    *(_BYTE *)(SrbExtension + 4139) = a3[1];
    v10 = *(_DWORD *)(SrbExtension + 4136) & 0xFF0000FF | (v13 << 8);
    *(_BYTE *)(SrbExtension + 4096) = -126;
    *(_DWORD *)(SrbExtension + 4136) = v10;
    result = 0LL;
    *(_DWORD *)(SrbExtension + 4140) = v7;
  }
  else
  {
LABEL_10:
    NVMeSetSenseData(v5, 6, 5, 0x24u);
    return 3238002694LL;
  }
  return result;
}
