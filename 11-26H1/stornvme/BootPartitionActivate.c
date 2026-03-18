/*
 * XREFs of BootPartitionActivate @ 0x140019528
 * Callers:
 *     IoctlFirmwareProcess @ 0x14001B93C (IoctlFirmwareProcess.c)
 * Callees:
 *     GetSrbExtension @ 0x140003A40 (GetSrbExtension.c)
 *     SrbAssignQueueId @ 0x1400047C0 (SrbAssignQueueId.c)
 *     GetSrbDataBuffer @ 0x14000F230 (GetSrbDataBuffer.c)
 */

__int64 __fastcall BootPartitionActivate(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebx
  __int64 SrbExtension; // rsi
  _DWORD *SrbDataBuffer; // r8
  __int64 v6; // r11
  int v7; // eax
  char v8; // r10
  int v9; // edx
  _BYTE *v10; // r14
  int v11; // edi
  int v12; // edx
  __int64 v14; // [rsp+100h] [rbp+18h] BYREF

  v3 = 0;
  SrbExtension = GetSrbExtension(a2);
  SrbDataBuffer = (_DWORD *)GetSrbDataBuffer(a2, &v14);
  v7 = SrbDataBuffer[10];
  if ( SrbDataBuffer[12] >= 0xCu )
  {
    v10 = (char *)SrbDataBuffer + (unsigned int)SrbDataBuffer[11] + 8;
    if ( *v10 <= 1u )
    {
      if ( (v7 & 0x40000000) != 0 )
      {
        *(_DWORD *)(v6 + 24) |= 0x10000u;
        v11 = 48;
      }
      else
      {
        if ( v7 >= 0 )
          return v3;
        v11 = 56;
      }
      *(_BYTE *)(SrbExtension + 4225) = *(_BYTE *)(SrbExtension + 4225) & 0xFC | 1;
      SrbAssignQueueId(v6, a2);
      v12 = *(_DWORD *)(SrbExtension + 4136) & 0x7FFFFFC7 | ((unsigned __int8)*v10 << 31);
      *(_BYTE *)(SrbExtension + 4096) = 16;
      *(_DWORD *)(SrbExtension + 4136) = v11 | v12 & 0xFFFFFFC7;
      *(_QWORD *)(SrbExtension + 4192) = NVMeFirmwareActivateCompletion;
      return v3;
    }
    v9 = 6;
    v8 = 40;
  }
  else
  {
    v8 = 21;
    v9 = 3;
  }
  v3 = -1056964602;
  SrbDataBuffer[5] = v9;
  *(_BYTE *)(a2 + 3) = v8;
  if ( (*(_BYTE *)(v6 + 21) & 2) != 0 )
    StorPortExtendedFunction(87LL, v6, 0LL, 1LL);
  return v3;
}
