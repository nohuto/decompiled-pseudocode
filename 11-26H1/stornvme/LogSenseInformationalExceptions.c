/*
 * XREFs of LogSenseInformationalExceptions @ 0x14001CD6C
 * Callers:
 *     ScsiLogSenseRequest @ 0x140010E30 (ScsiLogSenseRequest.c)
 * Callees:
 *     NVMeSetSenseData @ 0x140002E20 (NVMeSetSenseData.c)
 *     GetSrbExtension @ 0x140003A40 (GetSrbExtension.c)
 *     SrbAssignQueueId @ 0x1400047C0 (SrbAssignQueueId.c)
 *     GetSrbDataBuffer @ 0x14000F230 (GetSrbDataBuffer.c)
 *     BuildGetLogPageCommand @ 0x14000F760 (BuildGetLogPageCommand.c)
 *     NVMeAllocateDmaBufferEx @ 0x14001098C (NVMeAllocateDmaBufferEx.c)
 *     memset @ 0x140032A40 (memset.c)
 */

__int64 __fastcall LogSenseInformationalExceptions(__int64 a1, __int64 a2)
{
  _DWORD *SrbDataBuffer; // rbx
  unsigned int v5; // ecx
  unsigned int v6; // ecx
  char v7; // al
  __int64 SrbExtension; // rdi
  void *v9; // r9
  unsigned __int64 v10; // rbx
  unsigned int v11; // r8d
  unsigned __int64 v13[5]; // [rsp+40h] [rbp-28h] BYREF
  __int64 v14; // [rsp+80h] [rbp+18h] BYREF
  unsigned int *v15; // [rsp+88h] [rbp+20h] BYREF

  v15 = 0LL;
  v14 = 0LL;
  v13[0] = 0LL;
  SrbDataBuffer = (_DWORD *)GetSrbDataBuffer(a2, &v15);
  if ( SrbDataBuffer && (v5 = *v15, *v15 >= 0xC) )
  {
    if ( (v5 & 3) != 0 )
    {
      memset(SrbDataBuffer, 0, *v15);
    }
    else
    {
      v6 = v5 >> 2;
      if ( v6 )
        memset(SrbDataBuffer, 0, 4LL * v6);
    }
    v7 = *((_BYTE *)SrbDataBuffer + 6) & 0x40;
    *SrbDataBuffer = 134217775;
    *((_WORD *)SrbDataBuffer + 2) = 0;
    *((_BYTE *)SrbDataBuffer + 6) = v7 | 0x23;
    *(_DWORD *)((char *)SrbDataBuffer + 7) = -16777212;
    NVMeAllocateDmaBufferEx(a1, 0, 1, 0x200u, &v14, v13);
    if ( v14 )
    {
      SrbExtension = GetSrbExtension(a2);
      memset(v9, 0, 0x200uLL);
      *(_BYTE *)(SrbExtension + 4225) |= 3u;
      SrbAssignQueueId(a1, a2);
      v10 = v13[0];
      LOBYTE(v11) = 2;
      BuildGetLogPageCommand(a1, SrbExtension, v11, 0x200u, v13[0], -1, 0LL, 0);
      *(_BYTE *)(SrbExtension + 4225) |= 4u;
      *(_QWORD *)(SrbExtension + 4192) = NVMeGetLogPageHealthInfoCompletion;
      *(_QWORD *)(SrbExtension + 4160) = v14;
      *(_QWORD *)(SrbExtension + 4168) = v10;
      *(_DWORD *)(SrbExtension + 4208) = 512;
      *(_QWORD *)(SrbExtension + 4200) = 47LL;
    }
    else
    {
      *(_BYTE *)(a2 + 3) = 4;
    }
    return 0LL;
  }
  else
  {
    NVMeSetSenseData(a2, 6, 5, 0x24u);
    return 3238002694LL;
  }
}
