/*
 * XREFs of QueryProtocolInfoIdentifyData @ 0x140021554
 * Callers:
 *     IoctlQueryProtocolInfoProcess @ 0x14001BF38 (IoctlQueryProtocolInfoProcess.c)
 * Callees:
 *     GetSrbExtension @ 0x140003A40 (GetSrbExtension.c)
 *     SrbAssignQueueId @ 0x1400047C0 (SrbAssignQueueId.c)
 *     GetSrbDataBuffer @ 0x14000F230 (GetSrbDataBuffer.c)
 *     NVMeAllocateDmaBufferEx @ 0x14001098C (NVMeAllocateDmaBufferEx.c)
 *     BuildIdentifyCommandGeneric @ 0x140019CBC (BuildIdentifyCommandGeneric.c)
 *     SetCommandUUIDIndex @ 0x140022B04 (SetCommandUUIDIndex.c)
 *     memset @ 0x140032A40 (memset.c)
 */

__int64 __fastcall QueryProtocolInfoIdentifyData(__int64 a1, __int64 a2)
{
  __int64 SrbExtension; // rax
  __int64 v5; // r9
  __int64 v6; // r13
  bool v7; // r15
  int v8; // ebx
  int v9; // r12d
  __int64 SrbDataBuffer; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  char v13; // r10
  _DWORD *v14; // r14
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  __int64 result; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rbx
  __int64 v27; // r9
  int v28; // [rsp+20h] [rbp-40h]
  int v29; // [rsp+38h] [rbp-28h]
  __int64 v30; // [rsp+50h] [rbp-10h] BYREF
  int v31; // [rsp+A8h] [rbp+48h] BYREF
  __int64 v32; // [rsp+B0h] [rbp+50h] BYREF
  void *v33; // [rsp+B8h] [rbp+58h] BYREF

  v33 = 0LL;
  SrbExtension = GetSrbExtension(a2);
  v30 = v5;
  v6 = SrbExtension;
  v7 = v5;
  v8 = v5;
  LOBYTE(v9) = v5;
  v31 = v5;
  SrbDataBuffer = GetSrbDataBuffer(a2, &v32);
  v14 = (_DWORD *)(SrbDataBuffer + 28);
  v15 = *(_DWORD *)(SrbDataBuffer + 44);
  LODWORD(v32) = v15;
  if ( !v15 )
  {
    v25 = 24LL;
    if ( *(_BYTE *)(a2 + 2) != v13 )
      v25 = 12LL;
    if ( (*(_DWORD *)(v25 + a2) & 1) != 0 )
    {
      v8 = v14[5];
      v7 = v8 == 0;
      if ( !v8 )
        v8 = v12;
    }
    else if ( (unsigned int)v11 < *(_DWORD *)(a1 + 224) && *(_QWORD *)(a1 + 8 * v11 + 1672) != v12 )
    {
      _mm_lfence();
      v8 = *(_DWORD *)(*(_QWORD *)(a1 + 8 * v11 + 1672) + 16LL);
    }
    SetCommandUUIDIndex(a1, v14, &v31);
LABEL_51:
    if ( v7 )
    {
      result = 3238002694LL;
      goto LABEL_53;
    }
    goto LABEL_12;
  }
  v16 = v15 - 1;
  if ( !v16 )
  {
    SetCommandUUIDIndex(a1, v14, &v31);
    goto LABEL_12;
  }
  v17 = v16 - 1;
  if ( !v17 )
  {
    v24 = 24LL;
    if ( *(_BYTE *)(a2 + 2) != v13 )
      v24 = 12LL;
    if ( (*(_DWORD *)(v24 + a2) & 1) != 0 )
    {
      v8 = v14[5];
    }
    else if ( (unsigned int)v11 < *(_DWORD *)(a1 + 224) && *(_QWORD *)(a1 + 8 * v11 + 1672) != v12 )
    {
      _mm_lfence();
      v8 = *(_DWORD *)(*(_QWORD *)(a1 + 8 * v11 + 1672) + 16LL);
    }
    goto LABEL_12;
  }
  v18 = v17 - 1;
  if ( !v18 )
  {
    v23 = 24LL;
    if ( *(_BYTE *)(a2 + 2) != v13 )
      v23 = 12LL;
    if ( (*(_DWORD *)(v23 + a2) & 1) != 0 )
    {
      v8 = v14[5];
      v7 = v8 == 0;
      if ( !v8 )
        v8 = v12;
    }
    else if ( (unsigned int)v11 < *(_DWORD *)(a1 + 224) && *(_QWORD *)(a1 + 8 * v11 + 1672) != v12 )
    {
      _mm_lfence();
      v8 = *(_DWORD *)(*(_QWORD *)(a1 + 8 * v11 + 1672) + 16LL);
    }
    goto LABEL_51;
  }
  v19 = v18 - 2;
  if ( !v19 )
  {
    v22 = 24LL;
    if ( *(_BYTE *)(a2 + 2) != v13 )
      v22 = 12LL;
    if ( (*(_DWORD *)(v22 + a2) & 1) != 0 )
    {
      v8 = v14[5];
      v7 = v8 == 0;
      if ( !v8 )
        v8 = v12;
    }
    else if ( (unsigned int)v11 < *(_DWORD *)(a1 + 224) && *(_QWORD *)(a1 + 8 * v11 + 1672) != v12 )
    {
      _mm_lfence();
      v8 = *(_DWORD *)(*(_QWORD *)(a1 + 8 * v11 + 1672) + 16LL);
    }
    v9 = v14[11];
    goto LABEL_51;
  }
  v20 = v19 - 1;
  if ( v20 )
  {
    if ( v20 != 17 )
    {
      result = 3238002690LL;
LABEL_53:
      *(_BYTE *)(a2 + 3) = 6;
      return result;
    }
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 1560) + 96LL) & 0x200) == 0 )
    {
      result = 3238002695LL;
      goto LABEL_53;
    }
  }
  else
  {
    v9 = v14[11];
  }
LABEL_12:
  if ( v14[7] >= 0x1000u )
  {
    NVMeAllocateDmaBufferEx(a1, 0, 1, 0x1000u, (__int64 *)&v33, &v30);
    if ( v33 )
    {
      memset(v33, 0, 0x1000uLL);
      *(_BYTE *)(v6 + 4225) |= 3u;
      SrbAssignQueueId(a1, a2);
      v29 = v8;
      v26 = v30;
      BuildIdentifyCommandGeneric(a1, v6 + 4096, v32, v27, v28, v9, v30, v29, v31);
      *(_BYTE *)(v6 + 4225) |= 4u;
      *(_QWORD *)(v6 + 4192) = QueryProtocolInfoCompletion;
      *(_QWORD *)(v6 + 4160) = v33;
      result = 0LL;
      *(_QWORD *)(v6 + 4168) = v26;
      *(_DWORD *)(v6 + 4208) = 4096;
    }
    else
    {
      *(_BYTE *)(a2 + 3) = 4;
      return 3238002691LL;
    }
  }
  else
  {
    *(_BYTE *)(a2 + 3) = 21;
    return 3238002694LL;
  }
  return result;
}
