/*
 * XREFs of FirmwareGetInfo @ 0x140005A10
 * Callers:
 *     IoctlFirmwareProcess @ 0x14001B93C (IoctlFirmwareProcess.c)
 * Callees:
 *     GetSrbExtension @ 0x140003A40 (GetSrbExtension.c)
 *     SrbAssignQueueId @ 0x1400047C0 (SrbAssignQueueId.c)
 *     NVMeAllocateDmaBuffer @ 0x140005C10 (NVMeAllocateDmaBuffer.c)
 *     NVMeFreeDmaBuffer @ 0x14000FA50 (NVMeFreeDmaBuffer.c)
 *     NVMeIceConfigureExclusionAddress @ 0x1400315BC (NVMeIceConfigureExclusionAddress.c)
 */

__int64 __fastcall FirmwareGetInfo(__int64 a1, __int64 a2)
{
  bool v3; // zf
  __int64 v4; // rax
  __int64 v6; // rbx
  _DWORD *v7; // rdi
  unsigned int v8; // ecx
  _DWORD *v9; // r14
  __int64 SrbExtension; // rdi
  _OWORD *v11; // r8
  __int64 v12; // rax
  __int64 v13; // rcx
  unsigned int v14; // eax
  __int64 result; // rax
  unsigned int v16; // ebx
  __int64 v17; // [rsp+108h] [rbp+10h] BYREF
  __int64 v18; // [rsp+110h] [rbp+18h] BYREF

  v3 = *(_BYTE *)(a2 + 2) == 40;
  v17 = 0LL;
  v4 = 64LL;
  if ( !v3 )
    v4 = 24LL;
  v6 = 0LL;
  v7 = *(_DWORD **)(v4 + a2);
  v8 = v7[12];
  if ( v8 >= 0x10 )
  {
    v9 = (_DWORD *)((char *)v7 + (unsigned int)v7[11]);
    if ( *v9 != 2 || v9[1] < 0x18u || v8 >= 0x18 )
    {
      v18 = 0LL;
      if ( !(unsigned int)NVMeAllocateDmaBuffer(a1, 512LL, &v17, &v18) )
      {
        if ( (*(_DWORD *)(a1 + 4344) & 4) != 0 && (unsigned int)NVMeIceConfigureExclusionAddress(a1, v18, 512, 0, 1, 1) )
        {
          NVMeFreeDmaBuffer(a1, 512LL, &v17, v18);
          v17 = 0LL;
LABEL_18:
          *(_BYTE *)(a2 + 3) = 4;
          v16 = -1056964605;
          v7[5] = 1;
          goto LABEL_23;
        }
        v6 = v18;
      }
      if ( v17 )
      {
        SrbExtension = GetSrbExtension(a2);
        v12 = 4LL;
        do
        {
          *v11 = 0LL;
          v11[1] = 0LL;
          v11[2] = 0LL;
          v11[3] = 0LL;
          v11[4] = 0LL;
          v11[5] = 0LL;
          v11[6] = 0LL;
          v11 += 8;
          *(v11 - 1) = 0LL;
          --v12;
        }
        while ( v12 );
        *(_BYTE *)(SrbExtension + 4225) |= 3u;
        SrbAssignQueueId(a1, a2);
        v13 = *(_QWORD *)(a1 + 1560);
        *(_BYTE *)(SrbExtension + 4136) = 3;
        v14 = *(_DWORD *)(SrbExtension + 4136) & 0xF07F7FFF;
        *(_BYTE *)(SrbExtension + 4096) = 2;
        *(_DWORD *)(SrbExtension + 4100) = -1;
        *(_DWORD *)(SrbExtension + 4136) = v14 | 0x7F0000;
        if ( (v6 & 0xFFF) == 0 )
        {
          *(_QWORD *)(SrbExtension + 4120) = v6;
          *(_QWORD *)(SrbExtension + 4128) = 0LL;
        }
        *(_WORD *)(SrbExtension + 4142) = 0;
        if ( (*(_BYTE *)(v13 + 261) & 4) != 0 )
        {
          *(_DWORD *)(SrbExtension + 4138) = 127;
          *(_QWORD *)(SrbExtension + 4144) = 0LL;
        }
        *(_BYTE *)(SrbExtension + 4225) |= 4u;
        *(_QWORD *)(SrbExtension + 4192) = NVMeGetLogPageFirmwareSlotCompletion;
        result = 0LL;
        *(_QWORD *)(SrbExtension + 4160) = v17;
        *(_QWORD *)(SrbExtension + 4168) = v6;
        *(_DWORD *)(SrbExtension + 4208) = 512;
        return result;
      }
      goto LABEL_18;
    }
  }
  v7[5] = 3;
  v16 = -1056964602;
  *(_BYTE *)(a2 + 3) = 21;
LABEL_23:
  if ( (*(_BYTE *)(a1 + 21) & 8) != 0 )
    StorPortExtendedFunction(87LL, a1, 0LL, 0LL);
  return v16;
}
