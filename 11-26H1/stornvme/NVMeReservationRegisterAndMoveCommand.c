/*
 * XREFs of NVMeReservationRegisterAndMoveCommand @ 0x14001EEA4
 * Callers:
 *     ScsiPersistentReserveOut @ 0x140022838 (ScsiPersistentReserveOut.c)
 * Callees:
 *     GetSrbExtension @ 0x140003A40 (GetSrbExtension.c)
 *     SrbAssignQueueId @ 0x1400047C0 (SrbAssignQueueId.c)
 *     GetSrbDataBuffer @ 0x14000F230 (GetSrbDataBuffer.c)
 *     NVMeAllocateDmaBufferEx @ 0x14001098C (NVMeAllocateDmaBufferEx.c)
 */

__int64 __fastcall NVMeReservationRegisterAndMoveCommand(__int64 a1, __int64 a2, int a3)
{
  unsigned int v6; // edi
  _BYTE *SrbDataBuffer; // rax
  __int64 SrbExtension; // rbx
  __int64 v9; // rdx
  int v10; // ecx
  __int64 v12; // [rsp+30h] [rbp-20h]
  __int64 v13; // [rsp+38h] [rbp-18h]
  __int64 v14; // [rsp+40h] [rbp-10h] BYREF
  __int64 v15; // [rsp+48h] [rbp-8h] BYREF

  v6 = 0;
  SrbDataBuffer = (_BYTE *)GetSrbDataBuffer(a2, &v15);
  v15 = 0LL;
  HIBYTE(v12) = *SrbDataBuffer;
  BYTE6(v12) = SrbDataBuffer[1];
  BYTE5(v12) = SrbDataBuffer[2];
  BYTE4(v12) = SrbDataBuffer[3];
  BYTE3(v12) = SrbDataBuffer[4];
  BYTE2(v12) = SrbDataBuffer[5];
  BYTE1(v12) = SrbDataBuffer[6];
  LOBYTE(v12) = SrbDataBuffer[7];
  HIBYTE(v13) = SrbDataBuffer[8];
  BYTE6(v13) = SrbDataBuffer[9];
  BYTE5(v13) = SrbDataBuffer[10];
  BYTE4(v13) = SrbDataBuffer[11];
  BYTE3(v13) = SrbDataBuffer[12];
  BYTE2(v13) = SrbDataBuffer[13];
  BYTE1(v13) = SrbDataBuffer[14];
  LOBYTE(v13) = SrbDataBuffer[15];
  v14 = 0LL;
  NVMeAllocateDmaBufferEx(a1, 1, 0, 0x10u, &v14, &v15);
  if ( v14 )
  {
    *(_OWORD *)v14 = 0LL;
    *(_QWORD *)v14 = v12;
    *(_QWORD *)(v14 + 8) = v13;
    SrbExtension = GetSrbExtension(a2);
    *(_BYTE *)(SrbExtension + 4225) = *(_BYTE *)(SrbExtension + 4225) & 0xF8 | 6;
    *(_QWORD *)(SrbExtension + 4160) = v14;
    *(_QWORD *)(SrbExtension + 4168) = v15;
    *(_DWORD *)(SrbExtension + 4208) = 16;
    SrbAssignQueueId(a1, a2);
    v9 = *(_QWORD *)(SrbExtension + 4168);
    v10 = *(_DWORD *)(SrbExtension + 4136) & 0x3FFFFFF0;
    *(_BYTE *)(SrbExtension + 4096) = 13;
    *(_DWORD *)(SrbExtension + 4100) = a3;
    *(_DWORD *)(SrbExtension + 4136) = v10 | 2;
    *(_QWORD *)(SrbExtension + 4120) = v9;
    *(_QWORD *)(SrbExtension + 4192) = NVMePersistentReserveOutCompletionRoutine;
  }
  else
  {
    v6 = -1056964605;
    *(_BYTE *)(a2 + 3) = 38;
  }
  return v6;
}
