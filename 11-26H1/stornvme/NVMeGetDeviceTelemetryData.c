/*
 * XREFs of NVMeGetDeviceTelemetryData @ 0x14001DA38
 * Callers:
 *     ScsiToNVMe @ 0x140002FA0 (ScsiToNVMe.c)
 * Callees:
 *     GetSrbExtension @ 0x140003A40 (GetSrbExtension.c)
 *     SrbAssignQueueId @ 0x1400047C0 (SrbAssignQueueId.c)
 *     GetSrbDataBuffer @ 0x14000F230 (GetSrbDataBuffer.c)
 *     NVMeAllocateDmaBufferEx @ 0x14001098C (NVMeAllocateDmaBufferEx.c)
 *     BuildGetLogPageCommandForTelemetryLog @ 0x140019C28 (BuildGetLogPageCommandForTelemetryLog.c)
 *     memset @ 0x140032A40 (memset.c)
 */

__int64 __fastcall NVMeGetDeviceTelemetryData(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  unsigned int v6; // esi
  _BYTE *v7; // r8
  char v8; // r9
  void *SrbDataBuffer; // r12
  unsigned int v10; // ecx
  int v11; // edi
  unsigned int v12; // edi
  unsigned int v13; // r8d
  unsigned __int64 PhysicalAddress; // rbx
  __int64 SrbExtension; // r13
  unsigned int v16; // r8d
  __int64 result; // rax
  int v18; // [rsp+28h] [rbp-48h]
  __int64 v19; // [rsp+50h] [rbp-20h] BYREF
  unsigned int v20; // [rsp+58h] [rbp-18h] BYREF
  void *v21; // [rsp+60h] [rbp-10h] BYREF
  unsigned __int64 v22; // [rsp+68h] [rbp-8h] BYREF
  unsigned __int8 v23; // [rsp+B0h] [rbp+40h]

  v6 = 0;
  v19 = 0LL;
  SrbDataBuffer = (void *)GetSrbDataBuffer(a2, &v19);
  v21 = 0LL;
  v22 = 0LL;
  v20 = 0;
  v23 = 1;
  if ( !SrbDataBuffer || *(_DWORD *)v19 < 0x200u )
  {
    *(_BYTE *)(a2 + 3) = 21;
    return 3238002694LL;
  }
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 1560) + 261LL) & 8) == 0
    || (v10 = *(_DWORD *)((-(__int64)(v8 != 0) & 0xFFFFFFFFFFFFFFFCuLL) + a1 + 4048)) == 0 )
  {
    result = 3238002690LL;
    goto LABEL_31;
  }
  BYTE3(v19) = v7[10];
  BYTE2(v19) = v7[11];
  BYTE1(v19) = v7[12];
  LOBYTE(v19) = v7[13];
  v11 = v19;
  HIBYTE(v19) = v7[2];
  BYTE6(v19) = v7[3];
  BYTE5(v19) = v7[4];
  BYTE4(v19) = v7[5];
  BYTE3(v19) = v7[6];
  BYTE2(v19) = v7[7];
  BYTE1(v19) = v7[8];
  LOBYTE(v19) = v7[9];
  v12 = v11 << 9;
  if ( (unsigned int)v19 >= v10 || (v19 & 0x1FF) != 0 )
  {
    result = 3238002695LL;
LABEL_31:
    *(_BYTE *)(a2 + 3) = 6;
    return result;
  }
  v13 = v12;
  if ( v12 + (unsigned int)v19 > v10 )
  {
    v12 = v10 - v19;
    v13 = v10 - v19;
  }
  if ( !v8 && v13 + (_DWORD)v19 == *(_DWORD *)(a1 + 4048) )
    v23 = (*(_BYTE *)(a1 + 148) & 2) != 0;
  if ( *(_BYTE *)(a1 + 20) )
  {
    PhysicalAddress = StorPortGetPhysicalAddress(a1, 0LL, SrbDataBuffer, &v20);
    if ( !PhysicalAddress || !v20 )
    {
      *(_BYTE *)(a2 + 3) = 4;
      return 3238002691LL;
    }
    v21 = SrbDataBuffer;
    if ( v12 >= v20 )
      v12 = v20;
    v12 &= 0xFFFFFE00;
  }
  else
  {
    NVMeAllocateDmaBufferEx(a1, 0, 1, v12, (__int64 *)&v21, &v22);
    SrbDataBuffer = v21;
    PhysicalAddress = v22;
  }
  if ( SrbDataBuffer )
  {
    SrbExtension = GetSrbExtension(a2);
    if ( (v12 & 3) != 0 )
    {
      if ( v12 )
        memset(SrbDataBuffer, 0, v12);
    }
    else if ( v12 >> 2 )
    {
      memset(SrbDataBuffer, 0, 4LL * (v12 >> 2));
    }
    *(_BYTE *)(SrbExtension + 4225) |= 3u;
    SrbAssignQueueId(a1, a2);
    LOBYTE(v16) = 8 - (a4 != 0);
    BuildGetLogPageCommandForTelemetryLog(a1, SrbExtension, v16, v12, PhysicalAddress, v18, v19, 0, v23);
    *(_BYTE *)(SrbExtension + 4225) |= 4u;
    *(_QWORD *)(SrbExtension + 4192) = NVMeGetLogPageTelemetryDataCompletion;
    *(_QWORD *)(SrbExtension + 4160) = v21;
    *(_QWORD *)(SrbExtension + 4200) = (unsigned int)v19;
    *(_QWORD *)(SrbExtension + 4168) = PhysicalAddress;
    *(_DWORD *)(SrbExtension + 4208) = v12;
  }
  else
  {
    *(_BYTE *)(a2 + 3) = 4;
    return (unsigned int)-1056964605;
  }
  return v6;
}
