/*
 * XREFs of NVMeReservationReportStatus @ 0x14001F5D4
 * Callers:
 *     NVMeReservationReportStatusCompletion @ 0x14001F800 (NVMeReservationReportStatusCompletion.c)
 *     ScsiPersistentReserveIn @ 0x140022748 (ScsiPersistentReserveIn.c)
 * Callees:
 *     GetSrbExtension @ 0x140003A40 (GetSrbExtension.c)
 *     SrbAssignQueueId @ 0x1400047C0 (SrbAssignQueueId.c)
 *     SetPrpFromBuffer @ 0x14000FAB0 (SetPrpFromBuffer.c)
 *     NVMeAllocateDmaBufferEx @ 0x14001098C (NVMeAllocateDmaBufferEx.c)
 *     NVMeFreeDmaBufferEx @ 0x140010C58 (NVMeFreeDmaBufferEx.c)
 *     memset @ 0x140032A40 (memset.c)
 */

__int64 __fastcall NVMeReservationReportStatus(__int64 a1, __int64 a2, unsigned __int8 a3, __int16 a4, unsigned int a5)
{
  unsigned int v5; // ebx
  unsigned __int8 v9; // cl
  int v10; // r12d
  __int64 SrbExtension; // rax
  unsigned int v12; // edi
  __int64 v13; // rbp
  _QWORD *v14; // r15
  unsigned int v15; // eax
  void *v16; // rax
  char v17; // cl
  unsigned __int64 v18; // r8
  bool v19; // zf
  int v20; // ecx
  __int64 v21; // rcx
  void *v23; // [rsp+70h] [rbp+8h] BYREF
  __int64 v24; // [rsp+78h] [rbp+10h] BYREF
  unsigned __int8 v25; // [rsp+80h] [rbp+18h]

  v25 = a3;
  v5 = 0;
  if ( *(_BYTE *)(a2 + 2) == 40 )
    v9 = *(_BYTE *)(*(unsigned int *)(a2 + 52) + a2 + 10);
  else
    v9 = *(_BYTE *)(a2 + 7);
  if ( (unsigned int)v9 < *(_DWORD *)(a1 + 224) && *(_QWORD *)(a1 + 8LL * v9 + 1672) )
  {
    _mm_lfence();
    v10 = *(_DWORD *)(*(_QWORD *)(a1 + 8LL * v9 + 1672) + 16LL);
  }
  else
  {
    v10 = 0;
  }
  SrbExtension = GetSrbExtension(a2);
  v12 = a5;
  v13 = SrbExtension;
  v14 = (_QWORD *)(SrbExtension + 4160);
  if ( a5 <= 0x30 )
    v12 = 48;
  if ( *v14 )
  {
    v15 = *(_DWORD *)(SrbExtension + 4208);
    if ( v15 >= v12 )
    {
LABEL_22:
      *(_BYTE *)(v13 + 4225) = *(_BYTE *)(v13 + 4225) & 0xFC | 2;
      SrbAssignQueueId(a1, a2);
      v17 = *(_BYTE *)(a1 + 4024);
      v18 = *(_QWORD *)(v13 + 4168);
      LOWORD(a5) = v25;
      HIWORD(a5) = a4;
      v19 = (v17 & 8) == 0;
      *(_BYTE *)(v13 + 4096) = 14;
      v20 = *(_DWORD *)(v13 + 4140);
      *(_DWORD *)(v13 + 4100) = v10;
      *(_DWORD *)(v13 + 4136) = (v12 >> 2) - 1;
      *(_DWORD *)(v13 + 4140) = v20 & 0xFFFFFFFE | !v19;
      SetPrpFromBuffer(a1, v13, v18, v12);
      v21 = a5;
      *(_BYTE *)(v13 + 4225) |= 4u;
      *(_QWORD *)(v13 + 4192) = NVMeReservationReportStatusCompletion;
      *(_QWORD *)(v13 + 4200) = v21;
      return v5;
    }
    NVMeFreeDmaBufferEx(a1, 0, 1, v15, (__int64 *)(v13 + 4160), *(_QWORD *)(v13 + 4168));
    *(_DWORD *)(v13 + 4208) = 0;
  }
  v23 = 0LL;
  v24 = 0LL;
  NVMeAllocateDmaBufferEx(a1, 0, 1, v12, (__int64 *)&v23, &v24);
  v16 = v23;
  if ( v23 )
  {
    if ( (v12 & 3) != 0 )
    {
      if ( v12 )
      {
        memset(v23, 0, v12);
        goto LABEL_20;
      }
    }
    else if ( v12 >> 2 )
    {
      memset(v23, 0, 4LL * (v12 >> 2));
LABEL_20:
      v16 = v23;
    }
    *v14 = v16;
    *(_QWORD *)(v13 + 4168) = v24;
    *(_DWORD *)(v13 + 4208) = v12;
    goto LABEL_22;
  }
  v5 = -1056964605;
  *(_BYTE *)(a2 + 3) = 38;
  return v5;
}
