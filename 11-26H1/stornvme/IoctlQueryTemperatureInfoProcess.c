/*
 * XREFs of IoctlQueryTemperatureInfoProcess @ 0x14001C2B0
 * Callers:
 *     IoctlToNVMe @ 0x1400104F0 (IoctlToNVMe.c)
 * Callees:
 *     GetSrbExtension @ 0x140003A40 (GetSrbExtension.c)
 *     SrbAssignQueueId @ 0x1400047C0 (SrbAssignQueueId.c)
 *     GetSrbDataBuffer @ 0x14000F230 (GetSrbDataBuffer.c)
 *     BuildGetLogPageCommand @ 0x14000F760 (BuildGetLogPageCommand.c)
 *     NVMeAllocateDmaBufferEx @ 0x14001098C (NVMeAllocateDmaBufferEx.c)
 *     memset @ 0x140032A40 (memset.c)
 */

__int64 __fastcall IoctlQueryTemperatureInfoProcess(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  unsigned int v4; // edi
  __int64 SrbExtension; // rax
  __int64 v7; // rbp
  __int64 SrbDataBuffer; // rsi
  unsigned int v9; // eax
  unsigned int v10; // eax
  __int16 v11; // cx
  __int16 v12; // ax
  __int16 v13; // ax
  __int16 v14; // ax
  unsigned __int64 v15; // rbx
  unsigned int v16; // r8d
  void *v18; // [rsp+80h] [rbp+8h] BYREF
  _DWORD *v19; // [rsp+90h] [rbp+18h] BYREF
  unsigned __int64 v20; // [rsp+98h] [rbp+20h] BYREF

  v2 = *(_QWORD *)(a1 + 1560);
  v4 = 0;
  v19 = 0LL;
  v18 = 0LL;
  SrbExtension = GetSrbExtension(a2);
  v20 = 0LL;
  v7 = SrbExtension;
  SrbDataBuffer = GetSrbDataBuffer(a2, &v19);
  if ( *v19 >= 0x44u )
  {
    v9 = *v19 - 28;
    if ( (v9 & 3) != 0 )
    {
      if ( *v19 != 28 )
        memset((void *)(SrbDataBuffer + 28), 0, v9);
    }
    else
    {
      v10 = v9 >> 2;
      if ( v10 )
        memset((void *)(SrbDataBuffer + 28), 0, 4LL * v10);
    }
    *(_DWORD *)(SrbDataBuffer + 32) = 40;
    v11 = 0x8000;
    *(_DWORD *)(SrbDataBuffer + 28) = 40;
    v12 = *(_WORD *)(v2 + 268);
    if ( v12 )
      v13 = v12 - 273;
    else
      v13 = 0x8000;
    *(_WORD *)(SrbDataBuffer + 36) = v13;
    v14 = *(_WORD *)(v2 + 266);
    if ( v14 )
      v11 = v14 - 273;
    *(_WORD *)(SrbDataBuffer + 38) = v11;
    NVMeAllocateDmaBufferEx(a1, 0, 1, 0x200u, (__int64 *)&v18, &v20);
    if ( v18 )
    {
      memset(v18, 0, 0x200uLL);
      *(_BYTE *)(v7 + 4225) |= 3u;
      SrbAssignQueueId(a1, a2);
      v15 = v20;
      LOBYTE(v16) = 2;
      BuildGetLogPageCommand(a1, v7, v16, 0x200u, v20, -1, 0LL, 0);
      *(_BYTE *)(v7 + 4225) |= 4u;
      *(_QWORD *)(v7 + 4192) = QueryTemperatureInfoHealthLogCompletion;
      *(_QWORD *)(v7 + 4160) = v18;
      *(_QWORD *)(v7 + 4168) = v15;
      *(_DWORD *)(v7 + 4208) = 512;
    }
    else
    {
      *(_BYTE *)(a2 + 3) = 4;
      return (unsigned int)-1056964605;
    }
  }
  else
  {
    *(_BYTE *)(a2 + 3) = 21;
    return (unsigned int)-1056964602;
  }
  return v4;
}
