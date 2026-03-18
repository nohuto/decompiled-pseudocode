/*
 * XREFs of SetProtocolInfoFeatureData @ 0x140022C1C
 * Callers:
 *     IoctlSetProtocolInfoProcess @ 0x14001C474 (IoctlSetProtocolInfoProcess.c)
 * Callees:
 *     GetSrbExtension @ 0x140003A40 (GetSrbExtension.c)
 *     SrbAssignQueueId @ 0x1400047C0 (SrbAssignQueueId.c)
 *     GetSrbDataBuffer @ 0x14000F230 (GetSrbDataBuffer.c)
 *     NVMeAllocateDmaBufferEx @ 0x14001098C (NVMeAllocateDmaBufferEx.c)
 *     memmove @ 0x140032740 (memmove.c)
 *     memset @ 0x140032A40 (memset.c)
 */

__int64 __fastcall SetProtocolInfoFeatureData(__int64 a1, __int64 a2)
{
  __int64 SrbExtension; // rax
  __int64 v5; // rbx
  __int64 v6; // r13
  int v7; // esi
  char v8; // r8
  _DWORD *SrbDataBuffer; // r15
  int v10; // ecx
  __int64 result; // rax
  bool v12; // zf
  int v13; // eax
  unsigned int v14; // edi
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  char v21; // dl
  __int64 v22; // rax
  unsigned __int8 v23; // cl
  __int64 v24; // rax
  void *v25; // rcx
  int v26; // ecx
  int v27; // r10d
  int v28; // r9d
  int v29; // r8d
  int v30; // edx
  __int64 v31[9]; // [rsp+30h] [rbp-48h] BYREF
  void *v32; // [rsp+90h] [rbp+18h] BYREF
  __int64 v33; // [rsp+98h] [rbp+20h] BYREF

  v32 = 0LL;
  SrbExtension = GetSrbExtension(a2);
  v5 = 0LL;
  v33 = 0LL;
  v6 = SrbExtension;
  v7 = 0;
  SrbDataBuffer = (_DWORD *)GetSrbDataBuffer(a2, v31);
  v10 = SrbDataBuffer[11];
  if ( (v10 & 0x7FFFFF00) != 0 )
    goto LABEL_8;
  if ( SrbDataBuffer[10] != 5 )
  {
    if ( (unsigned __int8)v10 <= 0x80u )
    {
      if ( (unsigned __int8)v10 == 128 || (unsigned __int8)v10 <= 9u || (unsigned __int8)v10 != 16 )
        goto LABEL_8;
      goto LABEL_21;
    }
    if ( (unsigned __int8)v10 > 0xC2u )
    {
      if ( (unsigned __int8)v10 == 195 || (unsigned __int8)v10 == 196 || (unsigned __int8)v10 == 197 )
        goto LABEL_20;
      v13 = (unsigned __int8)v10 - 198;
      v12 = (unsigned __int8)v10 == 198;
    }
    else
    {
      if ( (unsigned __int8)v10 == 194 )
        goto LABEL_20;
      if ( (unsigned __int8)v10 == 129 || (unsigned __int8)v10 == 130 || (unsigned __int8)v10 == 131 )
        goto LABEL_21;
      v13 = (unsigned __int8)v10 - 192;
      v12 = (unsigned __int8)v10 == 192;
    }
    if ( !v12 && v13 != 1 )
      goto LABEL_8;
LABEL_20:
    if ( (*(_DWORD *)(a1 + 12) & 1) == 0 )
      goto LABEL_8;
    goto LABEL_21;
  }
  if ( (unsigned __int8)v10 < 0xC0u )
    goto LABEL_8;
  v8 = 1;
LABEL_21:
  v14 = 16;
  if ( (unsigned __int8)v10 == 16 )
  {
    v7 = -1;
  }
  else
  {
    if ( (unsigned __int8)v10 == 129 )
    {
      v7 = -1;
      goto LABEL_38;
    }
    if ( (unsigned int)(unsigned __int8)v10 - 130 >= 2 )
    {
      if ( v8 )
      {
        v14 = SrbDataBuffer[14];
        goto LABEL_26;
      }
      v14 = 4096;
      goto LABEL_39;
    }
  }
  v14 = 0;
LABEL_38:
  if ( v8 )
    goto LABEL_26;
LABEL_39:
  if ( (*(_DWORD *)(a1 + 12) & 1) == 0 )
    goto LABEL_26;
  v15 = (unsigned __int8)v10 - 192;
  if ( v15 )
  {
    v16 = v15 - 1;
    if ( !v16 )
      goto LABEL_47;
    v17 = v16 - 1;
    if ( !v17 )
      goto LABEL_47;
    v18 = v17 - 1;
    if ( !v18 )
      goto LABEL_47;
    v19 = v18 - 1;
    if ( !v19 )
      goto LABEL_47;
    v20 = v19 - 1;
    if ( v20 )
    {
      if ( (unsigned int)(v20 - 1) <= 1 )
      {
LABEL_47:
        v14 = 0;
        v7 = 0;
        goto LABEL_28;
      }
LABEL_26:
      if ( !v14 )
        goto LABEL_28;
      goto LABEL_27;
    }
    v14 = 4096;
    v7 = 0;
  }
  else
  {
    v14 = 4096;
    v7 = -(*(_BYTE *)(a1 + 9) != 0);
  }
LABEL_27:
  if ( SrbDataBuffer[13] < 0x40u )
  {
LABEL_29:
    *(_BYTE *)(a2 + 3) = 21;
    return 3238002694LL;
  }
LABEL_28:
  if ( SrbDataBuffer[14] < v14 )
    goto LABEL_29;
  if ( v8 )
  {
    v21 = *(_BYTE *)(a2 + 2);
    v22 = 24LL;
    v7 = SrbDataBuffer[20];
    if ( v21 != 40 )
      v22 = 12LL;
    if ( (*(_DWORD *)(v22 + a2) & 1) != 0 )
    {
      if ( (unsigned int)(v7 - 1) > 0xFFFFFFFD )
        goto LABEL_70;
LABEL_8:
      *(_BYTE *)(a2 + 3) = 6;
      return 3238002694LL;
    }
    if ( v7 )
      goto LABEL_8;
  }
  else
  {
    if ( (*(_DWORD *)(a1 + 12) & 1) != 0 || v7 == -1 )
      goto LABEL_70;
    v21 = *(_BYTE *)(a2 + 2);
    v24 = 24LL;
    if ( v21 != 40 )
      v24 = 12LL;
    if ( (*(_DWORD *)(v24 + a2) & 1) != 0 )
    {
      v7 = -1;
      goto LABEL_70;
    }
  }
  if ( v21 == 40 )
    v23 = *(_BYTE *)(*(unsigned int *)(a2 + 52) + a2 + 10);
  else
    v23 = *(_BYTE *)(a2 + 7);
  if ( (unsigned int)v23 < *(_DWORD *)(a1 + 224) && *(_QWORD *)(a1 + 8LL * v23 + 1672) )
  {
    _mm_lfence();
    v7 = *(_DWORD *)(*(_QWORD *)(a1 + 8LL * v23 + 1672) + 16LL);
  }
  else
  {
    v7 = 0;
  }
LABEL_70:
  if ( v14 )
  {
    NVMeAllocateDmaBufferEx(a1, 1, 0, v14, (__int64 *)&v32, &v33);
    v25 = v32;
    if ( !v32 )
    {
      *(_BYTE *)(a2 + 3) = 4;
      return 3238002691LL;
    }
    if ( (v14 & 3) != 0 )
    {
      memset(v32, 0, v14);
    }
    else
    {
      if ( !(v14 >> 2) )
      {
LABEL_78:
        memmove(v25, (char *)SrbDataBuffer + (unsigned int)SrbDataBuffer[13] + 36, v14);
        v5 = v33;
        goto LABEL_79;
      }
      memset(v32, 0, 4LL * (v14 >> 2));
    }
    v25 = v32;
    goto LABEL_78;
  }
LABEL_79:
  *(_BYTE *)(v6 + 4225) = *(_BYTE *)(v6 + 4225) & 0xFD | (v14 != 0 ? 2 : 0) | 1;
  SrbAssignQueueId(a1, a2);
  v26 = SrbDataBuffer[12];
  v27 = SrbDataBuffer[19];
  v28 = SrbDataBuffer[18];
  v29 = SrbDataBuffer[17];
  v30 = SrbDataBuffer[16];
  *(_DWORD *)(v6 + 4136) = SrbDataBuffer[11];
  *(_DWORD *)(v6 + 4140) = v26;
  *(_BYTE *)(v6 + 4096) = 9;
  *(_DWORD *)(v6 + 4100) = v7;
  *(_QWORD *)(v6 + 4120) = v5;
  *(_DWORD *)(v6 + 4144) = v30;
  *(_DWORD *)(v6 + 4148) = v29;
  *(_DWORD *)(v6 + 4152) = v28;
  *(_DWORD *)(v6 + 4156) = v27;
  LOBYTE(v26) = *(_BYTE *)(v6 + 4225) & 0xFB | (v14 != 0 ? 4 : 0);
  *(_QWORD *)(v6 + 4192) = SetProtocolInfoCompletion;
  *(_BYTE *)(v6 + 4225) = v26;
  *(_QWORD *)(v6 + 4160) = v32;
  result = 0LL;
  *(_QWORD *)(v6 + 4168) = v5;
  *(_DWORD *)(v6 + 4208) = v14;
  return result;
}
