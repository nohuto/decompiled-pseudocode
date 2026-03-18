/*
 * XREFs of IoctlQueryEnduranceInformation @ 0x14001BD34
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

__int64 __fastcall IoctlQueryEnduranceInformation(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  int v4; // r15d
  __int64 SrbExtension; // rax
  bool v7; // zf
  unsigned __int8 v8; // cl
  __int64 v9; // rbp
  int v10; // r12d
  __int64 SrbDataBuffer; // r13
  _DWORD *v12; // r14
  unsigned int v13; // eax
  __int64 result; // rax
  unsigned int v15; // eax
  unsigned int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rbp
  unsigned int v19; // r8d
  unsigned __int64 v20; // rbx
  void *v21; // [rsp+90h] [rbp+8h] BYREF
  unsigned int *v22; // [rsp+98h] [rbp+10h] BYREF
  unsigned __int64 v23; // [rsp+A0h] [rbp+18h] BYREF
  __int64 v24; // [rsp+A8h] [rbp+20h]

  v2 = 0;
  v22 = 0LL;
  v4 = 0;
  v21 = 0LL;
  SrbExtension = GetSrbExtension(a2);
  v7 = *(_BYTE *)(a2 + 2) == 40;
  v24 = SrbExtension;
  v23 = 0LL;
  if ( v7 )
    v8 = *(_BYTE *)(*(unsigned int *)(a2 + 52) + a2 + 10);
  else
    v8 = *(_BYTE *)(a2 + 7);
  v9 = v8;
  if ( (unsigned int)v8 < *(_DWORD *)(a1 + 224) && *(_QWORD *)(a1 + 8LL * v8 + 1672) )
  {
    _mm_lfence();
    v10 = *(_DWORD *)(*(_QWORD *)(a1 + 8LL * v8 + 1672) + 16LL);
  }
  else
  {
    v10 = 0;
  }
  SrbDataBuffer = GetSrbDataBuffer(a2, &v22);
  v12 = (_DWORD *)(SrbDataBuffer + 28);
  v13 = *v22;
  if ( *v22 >= 0x54 )
  {
    v15 = v13 - 28;
    if ( (v15 & 3) != 0 )
    {
      if ( v15 )
        memset(v12, 0, v15);
    }
    else
    {
      v16 = v15 >> 2;
      if ( v16 )
        memset(v12, 0, 4LL * v16);
    }
    NVMeAllocateDmaBufferEx(a1, 0, 1, 0x200u, (__int64 *)&v21, &v23);
    if ( v21 )
    {
      memset(v21, 0, 0x200uLL);
      *(_BYTE *)(v24 + 4225) |= 3u;
      SrbAssignQueueId(a1, a2);
      v17 = *(_QWORD *)(a1 + 8 * v9 + 1672);
      v18 = v24;
      LOBYTE(v19) = 9;
      v20 = v23;
      BuildGetLogPageCommand(a1, v24, v19, 0x200u, v23, v10, 0LL, *(_WORD *)(v17 + 96));
      *(_BYTE *)(v18 + 4225) |= 4u;
      *(_QWORD *)(v18 + 4192) = QueryEnduranceInfoLogCompletion;
      *(_QWORD *)(v18 + 4160) = v21;
      *(_QWORD *)(v18 + 4168) = v20;
      *(_DWORD *)(v18 + 4208) = 512;
    }
    else
    {
      *(_BYTE *)(a2 + 3) = 4;
      v2 = -1056964605;
    }
  }
  else
  {
    if ( v13 < 0x24 )
    {
      *(_BYTE *)(a2 + 3) = 6;
      return 3238002694LL;
    }
    v4 = 8;
    *(_BYTE *)(a2 + 3) = 1;
  }
  *(_DWORD *)(SrbDataBuffer + 32) = 56;
  *v12 = 56;
  result = v2;
  *(_DWORD *)(SrbDataBuffer + 24) = v4;
  return result;
}
