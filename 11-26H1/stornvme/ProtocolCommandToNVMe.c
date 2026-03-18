/*
 * XREFs of ProtocolCommandToNVMe @ 0x140001290
 * Callers:
 *     NVMeHwBuildIo @ 0x140002CA0 (NVMeHwBuildIo.c)
 * Callees:
 *     GetControllerMaxTransferSize @ 0x140001580 (GetControllerMaxTransferSize.c)
 *     SetPrpFromSrb @ 0x140003380 (SetPrpFromSrb.c)
 *     GetSrbExtension @ 0x140003A40 (GetSrbExtension.c)
 *     SrbAssignQueueId @ 0x1400047C0 (SrbAssignQueueId.c)
 *     NVMeValidateProtocolCommandRequest @ 0x140010EB0 (NVMeValidateProtocolCommandRequest.c)
 *     FillClippedSGL @ 0x14001A2F8 (FillClippedSGL.c)
 *     memset @ 0x140032A40 (memset.c)
 */

__int64 __fastcall ProtocolCommandToNVMe(__int64 a1, __int64 a2)
{
  __int64 v4; // r14
  __int64 SrbExtension; // r13
  bool v6; // zf
  __int64 v7; // rdx
  __int64 v8; // rdi
  __int64 v9; // rdx
  unsigned int v10; // esi
  __int64 v11; // rcx
  unsigned int v12; // r15d
  unsigned int v13; // r12d
  __int64 ScatterGatherList; // rax
  __int64 v15; // r9
  int v16; // r15d
  unsigned __int8 v17; // cl
  int v18; // eax
  int v19; // ecx
  __int64 result; // rax
  __int64 v21; // [rsp+20h] [rbp-48h]
  void *v22; // [rsp+78h] [rbp+10h] BYREF
  __int64 v23; // [rsp+80h] [rbp+18h]

  v4 = 0LL;
  SrbExtension = GetSrbExtension(a2);
  v6 = *(_BYTE *)(a2 + 2) == 40;
  v22 = 0LL;
  v7 = 64LL;
  if ( !v6 )
    v7 = 24LL;
  v8 = *(_QWORD *)(v7 + a2);
  v10 = NVMeValidateProtocolCommandRequest(a1, a2);
  if ( !v10 )
  {
    if ( *(_DWORD *)(v8 + 36) )
    {
      v11 = *(unsigned int *)(v8 + 52);
      v4 = v8 + v11;
    }
    else
    {
      if ( !*(_DWORD *)(v8 + 32) )
        goto LABEL_20;
      v11 = *(unsigned int *)(v8 + 48);
      v4 = v8 + v11;
    }
    v23 = v11;
    if ( v4 )
    {
      if ( (*(_DWORD *)(a1 + 56) & 8) != 0 )
      {
        *(_DWORD *)(SrbExtension + 4176) = v11;
      }
      else
      {
        v12 = (((unsigned int)GetControllerMaxTransferSize(a1, v9) - 1) >> 12) + 2;
        StorPortExtendedFunction(0LL, a1, 24 * v12 + 16, 1701672526LL, &v22);
        if ( !v22 )
        {
          *(_DWORD *)(v8 + 16) = 7;
          v10 = -1056964607;
          *(_BYTE *)(a2 + 3) = 21;
          goto LABEL_30;
        }
        v13 = (24 * v12 + 16) >> 2;
        if ( v13 )
          memset(v22, 0, 4LL * v13);
        ScatterGatherList = StorPortGetScatterGatherList(a1, a2);
        if ( !(unsigned __int8)FillClippedSGL(ScatterGatherList, v22, v12, (unsigned int)v23) )
        {
          if ( v22 )
          {
            StorPortExtendedFunction(1LL, a1, v22, v15, v21);
            v22 = 0LL;
          }
          *(_DWORD *)(v8 + 16) = 3;
          v10 = -1056964607;
          *(_BYTE *)(a2 + 3) = 21;
          goto LABEL_30;
        }
        *(_QWORD *)(SrbExtension + 4176) = v22;
      }
    }
LABEL_20:
    if ( *(int *)(v8 + 12) >= 0 )
    {
      if ( *(_BYTE *)(a2 + 2) == 40 )
        v17 = *(_BYTE *)(*(unsigned int *)(a2 + 52) + a2 + 10);
      else
        v17 = *(_BYTE *)(a2 + 7);
      if ( (unsigned int)v17 < *(_DWORD *)(a1 + 224) && *(_QWORD *)(a1 + 8LL * v17 + 1672) )
      {
        _mm_lfence();
        v16 = *(_DWORD *)(*(_QWORD *)(a1 + 8LL * v17 + 1672) + 16LL);
      }
      else
      {
        v16 = 0;
      }
    }
    else
    {
      v16 = *(_DWORD *)(v8 + 84);
    }
    *(_BYTE *)(SrbExtension + 4225) = (v4 != 0 ? 2 : 0) | *(_BYTE *)(SrbExtension + 4225) & 0xFC | (*(_DWORD *)(v8 + 56) == 1);
    SrbAssignQueueId(a1, a2);
    *(_BYTE *)(SrbExtension + 4096) = *(_BYTE *)(v8 + 80);
    v18 = *(_DWORD *)(SrbExtension + 4096);
    v19 = *(_DWORD *)(v8 + 80) ^ v18;
    *(_DWORD *)(SrbExtension + 4100) = v16;
    *(_DWORD *)(SrbExtension + 4096) = v18 ^ v19 & 0x300;
    *(_DWORD *)(SrbExtension + 4136) = *(_DWORD *)(v8 + 120);
    *(_DWORD *)(SrbExtension + 4140) = *(_DWORD *)(v8 + 124);
    *(_DWORD *)(SrbExtension + 4144) = *(_DWORD *)(v8 + 128);
    *(_DWORD *)(SrbExtension + 4148) = *(_DWORD *)(v8 + 132);
    *(_DWORD *)(SrbExtension + 4152) = *(_DWORD *)(v8 + 136);
    *(_DWORD *)(SrbExtension + 4156) = *(_DWORD *)(v8 + 140);
    *(_QWORD *)(SrbExtension + 4192) = ProtocolCommandCompletion;
  }
LABEL_30:
  if ( *(_BYTE *)(a2 + 3) )
    return v10;
  result = SetPrpFromSrb(a1, a2);
  if ( (_DWORD)result )
  {
    *(_DWORD *)(v8 + 16) = 2;
    *(_BYTE *)(a2 + 3) = 4;
  }
  else
  {
    *(_DWORD *)(v8 + 16) = 0;
  }
  return result;
}
