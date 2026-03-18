/*
 * XREFs of NVMeGetDeviceTelemetryHeader @ 0x14001DCFC
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

__int64 __fastcall NVMeGetDeviceTelemetryHeader(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // edi
  __int64 SrbDataBuffer; // rax
  void *v7; // r14
  unsigned __int64 PhysicalAddress; // rbx
  size_t v10; // r8
  __int64 SrbExtension; // r13
  __int64 v12; // r8
  unsigned int v13; // r8d
  int v14; // [rsp+28h] [rbp-38h]
  _DWORD *v15; // [rsp+50h] [rbp-10h] BYREF
  unsigned __int64 v16; // [rsp+58h] [rbp-8h] BYREF
  unsigned int v17; // [rsp+A0h] [rbp+40h]
  __int64 v18; // [rsp+B0h] [rbp+50h] BYREF
  void *v19; // [rsp+B8h] [rbp+58h] BYREF

  v18 = a3;
  v5 = 0;
  v15 = 0LL;
  SrbDataBuffer = GetSrbDataBuffer(a2, &v15);
  v19 = 0LL;
  LODWORD(v18) = 512;
  v7 = (void *)SrbDataBuffer;
  v16 = 0LL;
  HIWORD(v17) = 0;
  if ( SrbDataBuffer && *v15 >= 0x30u )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 1560) + 261LL) & 8) == 0 )
    {
      *(_BYTE *)(a2 + 3) = 6;
      return 3238002690LL;
    }
    if ( *(_BYTE *)(a1 + 20) )
    {
      PhysicalAddress = StorPortGetPhysicalAddress(a1, 0LL, SrbDataBuffer, &v18);
      if ( !PhysicalAddress || (unsigned int)v18 < 0x200 )
      {
        *(_BYTE *)(a2 + 3) = 4;
        return 3238002691LL;
      }
      v19 = v7;
      if ( (unsigned int)v18 > 0x200 )
        LODWORD(v18) = 512;
    }
    else
    {
      NVMeAllocateDmaBufferEx(a1, 0, 1, 0x200u, (__int64 *)&v19, &v16);
      v7 = v19;
      PhysicalAddress = v16;
    }
    if ( v7 )
    {
      SrbExtension = GetSrbExtension(a2);
      if ( (v10 & 3) != 0 )
      {
        if ( (_DWORD)v10 )
          memset(v7, 0, v10);
      }
      else
      {
        v12 = (unsigned int)v10 >> 2;
        if ( (_DWORD)v12 )
          memset(v7, 0, 4 * v12);
      }
      *(_BYTE *)(SrbExtension + 4225) |= 3u;
      SrbAssignQueueId(a1, a2);
      LOBYTE(v13) = 7;
      BuildGetLogPageCommandForTelemetryLog(a1, SrbExtension, v13, v18, PhysicalAddress, v14, 0LL, 1, 1u);
      *(_BYTE *)(SrbExtension + 4225) |= 4u;
      *(_QWORD *)(SrbExtension + 4192) = NVMeGetLogPageTelemetryHeaderCompletion;
      *(_QWORD *)(SrbExtension + 4160) = v19;
      *(_QWORD *)(SrbExtension + 4168) = PhysicalAddress;
      LOWORD(v17) = 7;
      *(_DWORD *)(SrbExtension + 4208) = v18;
      *(_QWORD *)(SrbExtension + 4200) = v17;
    }
    else
    {
      *(_BYTE *)(a2 + 3) = 4;
      return (unsigned int)-1056964605;
    }
    return v5;
  }
  else
  {
    *(_BYTE *)(a2 + 3) = 21;
    return 3238002694LL;
  }
}
