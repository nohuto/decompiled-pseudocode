/*
 * XREFs of IoctlSetTemperatureThresholdProcess @ 0x14001C534
 * Callers:
 *     IoctlToNVMe @ 0x1400104F0 (IoctlToNVMe.c)
 * Callees:
 *     GetSrbExtension @ 0x140003A40 (GetSrbExtension.c)
 *     SrbAssignQueueId @ 0x1400047C0 (SrbAssignQueueId.c)
 *     GetSrbDataBuffer @ 0x14000F230 (GetSrbDataBuffer.c)
 */

__int64 __fastcall IoctlSetTemperatureThresholdProcess(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 SrbExtension; // rdi
  __int64 v4; // r8
  __int64 SrbDataBuffer; // rsi
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned __int16 v8; // ax
  __int16 v9; // bp
  char v10; // dl
  int v11; // ecx
  int v12; // r8d
  int v13; // r8d
  unsigned int v14; // r8d
  _DWORD *v16; // [rsp+40h] [rbp+18h] BYREF

  v2 = 0;
  v16 = 0LL;
  SrbExtension = GetSrbExtension(a2);
  SrbDataBuffer = GetSrbDataBuffer(v4, &v16);
  if ( *v16 < 0x2Cu )
  {
    *(_BYTE *)(v6 + 3) = 21;
    return (unsigned int)-1056964602;
  }
  if ( (*(_BYTE *)(SrbDataBuffer + 36) & 1) == 0
    || (v8 = *(_WORD *)(SrbDataBuffer + 38), v8 > 8u)
    || !v8 && !*(_BYTE *)(SrbDataBuffer + 42) && !*(_WORD *)(*(_QWORD *)(v7 + 1560) + 266LL)
    || (v9 = *(_WORD *)(SrbDataBuffer + 40), v9 < -273) )
  {
    *(_BYTE *)(v6 + 3) = 6;
    return (unsigned int)-1056964602;
  }
  *(_BYTE *)(SrbExtension + 4225) = *(_BYTE *)(SrbExtension + 4225) & 0xFC | 1;
  SrbAssignQueueId(v7, v6);
  v10 = *(_BYTE *)(SrbDataBuffer + 42);
  v11 = *(_DWORD *)(SrbExtension + 4140);
  v12 = v11 ^ (*(unsigned __int8 *)(SrbDataBuffer + 38) << 16);
  *(_BYTE *)(SrbExtension + 4096) = 9;
  *(_BYTE *)(SrbExtension + 4136) = 4;
  v13 = v11 ^ v12 & 0xF0000;
  if ( v10 )
    v14 = v13 & 0xFFCFFFFF;
  else
    v14 = v13 & 0xFFCFFFFF | 0x100000;
  *(_DWORD *)(SrbExtension + 4140) = v14;
  *(_WORD *)(SrbExtension + 4140) = v9 + 273;
  *(_BYTE *)(SrbExtension + 4225) &= ~4u;
  return v2;
}
