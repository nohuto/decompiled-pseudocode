/*
 * XREFs of NVMeReservationAcquireCommand @ 0x14001ECE4
 * Callers:
 *     ScsiPersistentReserveOut @ 0x140022838 (ScsiPersistentReserveOut.c)
 * Callees:
 *     GetSrbExtension @ 0x140003A40 (GetSrbExtension.c)
 *     SrbAssignQueueId @ 0x1400047C0 (SrbAssignQueueId.c)
 *     GetSrbDataBuffer @ 0x14000F230 (GetSrbDataBuffer.c)
 *     NVMeAllocateDmaBufferEx @ 0x14001098C (NVMeAllocateDmaBufferEx.c)
 */

__int64 __fastcall NVMeReservationAcquireCommand(__int64 a1, __int64 a2, int a3, char a4, unsigned __int8 a5)
{
  unsigned int v9; // edi
  _BYTE *SrbDataBuffer; // rax
  __int64 SrbExtension; // rbx
  __int64 v12; // r8
  unsigned int v13; // edx
  __int64 v15; // [rsp+30h] [rbp-20h]
  __int64 v16; // [rsp+38h] [rbp-18h]
  __int64 v17; // [rsp+40h] [rbp-10h] BYREF
  __int64 v18; // [rsp+48h] [rbp-8h] BYREF

  v9 = 0;
  SrbDataBuffer = (_BYTE *)GetSrbDataBuffer(a2, &v18);
  v18 = 0LL;
  HIBYTE(v15) = *SrbDataBuffer;
  BYTE6(v15) = SrbDataBuffer[1];
  BYTE5(v15) = SrbDataBuffer[2];
  BYTE4(v15) = SrbDataBuffer[3];
  BYTE3(v15) = SrbDataBuffer[4];
  BYTE2(v15) = SrbDataBuffer[5];
  BYTE1(v15) = SrbDataBuffer[6];
  LOBYTE(v15) = SrbDataBuffer[7];
  HIBYTE(v16) = SrbDataBuffer[8];
  BYTE6(v16) = SrbDataBuffer[9];
  BYTE5(v16) = SrbDataBuffer[10];
  BYTE4(v16) = SrbDataBuffer[11];
  BYTE3(v16) = SrbDataBuffer[12];
  BYTE2(v16) = SrbDataBuffer[13];
  BYTE1(v16) = SrbDataBuffer[14];
  LOBYTE(v16) = SrbDataBuffer[15];
  v17 = 0LL;
  NVMeAllocateDmaBufferEx(a1, 1, 0, 0x10u, &v17, &v18);
  if ( v17 )
  {
    *(_OWORD *)v17 = 0LL;
    *(_QWORD *)v17 = v15;
    *(_QWORD *)(v17 + 8) = v16;
    SrbExtension = GetSrbExtension(a2);
    *(_BYTE *)(SrbExtension + 4225) = *(_BYTE *)(SrbExtension + 4225) & 0xF8 | 6;
    *(_QWORD *)(SrbExtension + 4160) = v17;
    *(_QWORD *)(SrbExtension + 4168) = v18;
    *(_DWORD *)(SrbExtension + 4208) = 16;
    SrbAssignQueueId(a1, a2);
    v12 = *(_QWORD *)(SrbExtension + 4168);
    *(_BYTE *)(SrbExtension + 4137) = a4;
    v13 = *(_DWORD *)(SrbExtension + 4136) & 0xFFFFFFF7;
    *(_BYTE *)(SrbExtension + 4096) = 17;
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
