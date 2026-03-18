/*
 * XREFs of NVMeReservationReleaseCommand @ 0x14001F23C
 * Callers:
 *     ScsiPersistentReserveOut @ 0x140022838 (ScsiPersistentReserveOut.c)
 * Callees:
 *     GetSrbExtension @ 0x140003A40 (GetSrbExtension.c)
 *     SrbAssignQueueId @ 0x1400047C0 (SrbAssignQueueId.c)
 *     GetSrbDataBuffer @ 0x14000F230 (GetSrbDataBuffer.c)
 *     NVMeAllocateDmaBufferEx @ 0x14001098C (NVMeAllocateDmaBufferEx.c)
 */

__int64 __fastcall NVMeReservationReleaseCommand(__int64 a1, __int64 a2, int a3, char a4, unsigned __int8 a5)
{
  unsigned int v9; // edi
  _BYTE *SrbDataBuffer; // rax
  __int64 SrbExtension; // rbx
  __int64 v12; // r8
  unsigned int v13; // edx
  __int64 v15; // [rsp+30h] [rbp-38h]
  _QWORD *v16; // [rsp+38h] [rbp-30h] BYREF
  _QWORD v17[2]; // [rsp+40h] [rbp-28h] BYREF

  v9 = 0;
  SrbDataBuffer = (_BYTE *)GetSrbDataBuffer(a2, v17);
  v17[0] = 0LL;
  BYTE3(v15) = SrbDataBuffer[4];
  BYTE2(v15) = SrbDataBuffer[5];
  HIBYTE(v15) = *SrbDataBuffer;
  LOBYTE(v15) = SrbDataBuffer[7];
  BYTE5(v15) = SrbDataBuffer[2];
  BYTE4(v15) = SrbDataBuffer[3];
  BYTE1(v15) = SrbDataBuffer[6];
  BYTE6(v15) = SrbDataBuffer[1];
  v16 = 0LL;
  NVMeAllocateDmaBufferEx(a1, 1, 0, 8u, (__int64 *)&v16, v17);
  if ( v16 )
  {
    *v16 = 0LL;
    *v16 = v15;
    SrbExtension = GetSrbExtension(a2);
    *(_BYTE *)(SrbExtension + 4225) = *(_BYTE *)(SrbExtension + 4225) & 0xF8 | 6;
    *(_QWORD *)(SrbExtension + 4160) = v16;
    *(_QWORD *)(SrbExtension + 4168) = v17[0];
    *(_DWORD *)(SrbExtension + 4208) = 8;
    SrbAssignQueueId(a1, a2);
    v12 = *(_QWORD *)(SrbExtension + 4168);
    *(_BYTE *)(SrbExtension + 4137) = a4;
    v13 = *(_DWORD *)(SrbExtension + 4136) & 0xFFFFFFF7;
    *(_BYTE *)(SrbExtension + 4096) = 21;
    *(_DWORD *)(SrbExtension + 4100) = a3;
    *(_QWORD *)(SrbExtension + 4120) = v12;
    *(_DWORD *)(SrbExtension + 4136) = v13 ^ (a5 ^ (unsigned __int8)v13) & 7;
    *(_QWORD *)(SrbExtension + 4192) = NVMePersistentReserveOutCompletionRoutine;
  }
  else
  {
    v9 = -1056964605;
    *(_BYTE *)(a2 + 3) = 38;
  }
  return v9;
}
