/*
 * XREFs of FirmwareActivate @ 0x14001A3D8
 * Callers:
 *     IoctlFirmwareProcess @ 0x14001B93C (IoctlFirmwareProcess.c)
 *     NVMeFirmwareActivateCompletion @ 0x14001D5A0 (NVMeFirmwareActivateCompletion.c)
 * Callees:
 *     GetSrbExtension @ 0x140003A40 (GetSrbExtension.c)
 *     SrbAssignQueueId @ 0x1400047C0 (SrbAssignQueueId.c)
 *     GetSrbDataBuffer @ 0x14000F230 (GetSrbDataBuffer.c)
 *     IsFirmwareActivateWithoutResetEnabled @ 0x14001CD3C (IsFirmwareActivateWithoutResetEnabled.c)
 */

__int64 __fastcall FirmwareActivate(__int64 a1, __int64 a2)
{
  int v2; // ebx
  unsigned int v3; // esi
  __int64 SrbExtension; // rbp
  _DWORD *SrbDataBuffer; // rdi
  __int64 v7; // r8
  __int64 v8; // r11
  __int64 v9; // r15
  char v10; // r10
  int v11; // eax
  int v12; // edx
  unsigned int v13; // ecx
  __int64 v15; // [rsp+100h] [rbp+8h] BYREF

  v2 = 0;
  v3 = 0;
  SrbExtension = GetSrbExtension(a2);
  SrbDataBuffer = (_DWORD *)GetSrbDataBuffer(a2, &v15);
  v9 = (unsigned int)SrbDataBuffer[11];
  if ( SrbDataBuffer[12] < 0xCu )
  {
    v10 = 21;
    goto LABEL_5;
  }
  if ( *((_BYTE *)SrbDataBuffer + v9 + 8) > (unsigned int)((*(_BYTE *)(v7 + 260) >> 1) & 7) )
  {
    v10 = 40;
LABEL_5:
    v3 = -1056964602;
    SrbDataBuffer[5] = 3;
    *(_BYTE *)(a2 + 3) = v10;
    if ( (*(_BYTE *)(v8 + 21) & 2) != 0 )
      StorPortExtendedFunction(87LL, v8, 0LL, 1LL);
    return v3;
  }
  v11 = SrbDataBuffer[10];
  if ( (v11 & 0x40000000) != 0 )
  {
    *(_DWORD *)(v8 + 24) |= 0x10000u;
  }
  else if ( v11 >= 0 )
  {
    if ( ((v11 & 0x10000000) == 0 || _bittest((const signed __int32 *)(v8 + 24), 0xAu))
      && (!(unsigned __int8)IsFirmwareActivateWithoutResetEnabled(v8)
       || _bittest((const signed __int32 *)(v8 + 24), 0xAu)) )
    {
      v2 = 8;
    }
    else
    {
      v2 = 24;
    }
  }
  else
  {
    v2 = 16;
  }
  *(_BYTE *)(SrbExtension + 4225) = *(_BYTE *)(SrbExtension + 4225) & 0xFC | 1;
  SrbAssignQueueId(v8, a2);
  v12 = *((_BYTE *)SrbDataBuffer + v9 + 8) & 7;
  v13 = *(_DWORD *)(SrbExtension + 4136) & 0xFFFFFFF8;
  *(_BYTE *)(SrbExtension + 4096) = 16;
  *(_DWORD *)(SrbExtension + 4136) = v2 | (v13 ^ v12) & 0xFFFFFFC7;
  *(_QWORD *)(SrbExtension + 4192) = NVMeFirmwareActivateCompletion;
  return v3;
}
