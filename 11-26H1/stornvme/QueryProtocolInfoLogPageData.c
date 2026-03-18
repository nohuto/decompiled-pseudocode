/*
 * XREFs of QueryProtocolInfoLogPageData @ 0x140021888
 * Callers:
 *     IoctlQueryProtocolInfoProcess @ 0x14001BF38 (IoctlQueryProtocolInfoProcess.c)
 * Callees:
 *     GetControllerMaxTransferSize @ 0x140001580 (GetControllerMaxTransferSize.c)
 *     GetSrbExtension @ 0x140003A40 (GetSrbExtension.c)
 *     SrbAssignQueueId @ 0x1400047C0 (SrbAssignQueueId.c)
 *     GetSrbDataBuffer @ 0x14000F230 (GetSrbDataBuffer.c)
 *     BuildGetLogPageCommand @ 0x14000F760 (BuildGetLogPageCommand.c)
 *     NVMeControllerSupportsUUIDList @ 0x14000FE50 (NVMeControllerSupportsUUIDList.c)
 *     NVMeAllocateDmaBufferEx @ 0x14001098C (NVMeAllocateDmaBufferEx.c)
 *     NVMeFreeDmaBufferEx @ 0x140010C58 (NVMeFreeDmaBufferEx.c)
 *     NVMeVersionCheck2 @ 0x140011480 (NVMeVersionCheck2.c)
 *     CopyCachedLogPage @ 0x140019D60 (CopyCachedLogPage.c)
 *     memset @ 0x140032A40 (memset.c)
 */

__int64 __fastcall QueryProtocolInfoLogPageData(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  __int64 SrbExtension; // rax
  __int64 v6; // r14
  int v7; // r15d
  bool v8; // r12
  __int64 SrbDataBuffer; // rax
  __int64 v10; // r9
  __int64 v11; // r10
  __int64 v12; // rdx
  _DWORD *v13; // r13
  unsigned int v15; // r14d
  bool v16; // cf
  char v17; // cl
  unsigned __int8 v18; // al
  bool v19; // zf
  char v20; // cl
  __int64 v21; // rax
  __int64 v22; // rax
  unsigned __int8 v23; // cl
  unsigned __int64 v24; // r12
  unsigned int v25; // r13d
  __int64 v26; // rbx
  unsigned int v27; // r8d
  _DWORD *v28; // rdx
  __int64 v29; // r11
  int v30; // ecx
  __int64 v31; // r10
  int v32; // ecx
  __int64 v33; // r10
  __int64 v34; // rax
  __int64 v35; // rdx
  const void *v36; // rdx
  __int64 v37; // [rsp+70h] [rbp-29h]
  void *v38; // [rsp+78h] [rbp-21h] BYREF
  __int64 v39; // [rsp+80h] [rbp-19h]
  _DWORD *v40; // [rsp+88h] [rbp-11h]
  __int64 v41; // [rsp+90h] [rbp-9h]
  unsigned __int64 v42; // [rsp+98h] [rbp-1h]
  unsigned __int64 v43[10]; // [rsp+A0h] [rbp+7h] BYREF
  __int64 v44; // [rsp+100h] [rbp+67h] BYREF
  __int64 v45; // [rsp+108h] [rbp+6Fh]
  size_t Size; // [rsp+110h] [rbp+77h]
  __int64 v47; // [rsp+118h] [rbp+7Fh]

  v45 = a2;
  v2 = 0;
  v38 = 0LL;
  v40 = 0LL;
  SrbExtension = GetSrbExtension(a2);
  v6 = *(_QWORD *)(a1 + 1560);
  v37 = v6;
  v7 = 0;
  v39 = SrbExtension;
  v8 = 1;
  v43[0] = 0LL;
  v47 = 0LL;
  LODWORD(Size) = GetControllerMaxTransferSize((_DWORD *)a1);
  v42 = 0LL;
  SrbDataBuffer = GetSrbDataBuffer(a2, &v44);
  v11 = SrbDataBuffer + 28;
  v19 = *(_DWORD *)(SrbDataBuffer + 40) == 4;
  v12 = *(unsigned __int8 *)(SrbDataBuffer + 44);
  LOBYTE(v44) = *(_BYTE *)(SrbDataBuffer + 44);
  v41 = SrbDataBuffer + 28;
  if ( v19 )
  {
    if ( (unsigned __int8)v12 < 0xC0u )
    {
      if ( (*(_BYTE *)(a1 + 21) & 8) != 0 )
        goto LABEL_106;
      goto LABEL_101;
    }
    v10 = SrbDataBuffer + 28;
    v40 = (_DWORD *)(SrbDataBuffer + 28);
  }
  v13 = *(_DWORD **)(a1 + 4240);
  if ( v13 && (v13[v12] & 1) == 0 )
  {
    if ( (*(_BYTE *)(a1 + 21) & 8) != 0 )
      goto LABEL_13;
    goto LABEL_14;
  }
  if ( v10 && (*(_DWORD *)(v10 + 44) & 0x800000) != 0 )
  {
    if ( (*(_BYTE *)(a1 + 21) & 8) != 0 )
LABEL_13:
      StorPortExtendedFunction(85LL, a1, 0LL, 0LL);
LABEL_14:
    *(_BYTE *)(a2 + 3) = 6;
    return 3238002690LL;
  }
  if ( (unsigned int)v12 > 0x12 )
  {
    if ( (unsigned int)v12 > 0xC1 )
    {
      if ( (_DWORD)v12 == 194 || (_DWORD)v12 == 196 || (_DWORD)v12 == 197 || (_DWORD)v12 == 200 )
        goto LABEL_66;
      v19 = (_DWORD)v12 == 201;
    }
    else
    {
      switch ( (_DWORD)v12 )
      {
        case 0xC1:
          goto LABEL_66;
        case 0x13:
          v15 = *(_DWORD *)(SrbDataBuffer + 56);
          v16 = v15 < 0x1000;
          goto LABEL_53;
        case 0x15:
          v15 = *(_DWORD *)(SrbDataBuffer + 56);
          v7 = -1;
          v8 = v15 >= 0x14;
          goto LABEL_68;
        case 0x80:
          v15 = 64;
          goto LABEL_55;
        case 0x81:
          v15 = 512;
          goto LABEL_55;
      }
      v19 = (_DWORD)v12 == 192;
    }
    if ( !v19 )
      goto LABEL_67;
LABEL_66:
    v7 = -1;
    goto LABEL_67;
  }
  if ( (_DWORD)v12 == 18 )
  {
    v16 = *(_DWORD *)(SrbDataBuffer + 56) < 0x400u;
    v15 = 1024;
LABEL_53:
    v8 = !v16;
    v17 = *(_BYTE *)(v37 + 261) >> 5;
    goto LABEL_54;
  }
  if ( (unsigned int)v12 > 5 )
  {
    switch ( (_DWORD)v12 )
    {
      case 6:
        v15 = 564;
        goto LABEL_24;
      case 7:
      case 8:
        v7 = -1;
        v15 = *(_DWORD *)(SrbDataBuffer + 56);
        v8 = v15 >= 0x200;
        v17 = *(_BYTE *)(v37 + 261) >> 3;
        goto LABEL_54;
      case 9:
        goto LABEL_25;
      case 0xD:
        v18 = *(_BYTE *)(v6 + 261);
        v15 = *(_DWORD *)(v11 + 28);
        v17 = v18 >> 4;
        v8 = v15 >= 0x200;
        if ( (v18 & 0x10) != 0 )
          v42 = (unsigned __int64)*(unsigned int *)(v37 + 352) << 16;
        v7 = -1;
LABEL_54:
        if ( (v17 & 1) == 0 )
          goto LABEL_14;
        goto LABEL_55;
    }
LABEL_67:
    v15 = *(_DWORD *)(SrbDataBuffer + 56);
    goto LABEL_68;
  }
  if ( (_DWORD)v12 == 5 )
  {
    v7 = -1;
    v15 = 4096;
    v17 = *(_BYTE *)(v37 + 261) >> 1;
    goto LABEL_54;
  }
  if ( !(_BYTE)v12 )
  {
    if ( !NVMeVersionCheck2(a1, 2LL, 0LL, v10) )
      goto LABEL_14;
    v10 = (__int64)v40;
    LOBYTE(v12) = v44;
    v16 = *(_DWORD *)(v11 + 28) < 0x400u;
    v15 = 1024;
    goto LABEL_53;
  }
  switch ( (_DWORD)v12 )
  {
    case 1:
      v15 = *(_DWORD *)(SrbDataBuffer + 56);
      v7 = -1;
      v8 = v15 >= 0x40;
      break;
    case 2:
      v15 = 512;
      v7 = -((*(_BYTE *)(v37 + 261) & 1) == 0);
      break;
    case 3:
LABEL_25:
      v15 = 512;
      goto LABEL_24;
    default:
      v15 = 4096;
LABEL_24:
      v7 = -1;
      break;
  }
LABEL_55:
  if ( *(_DWORD *)(v11 + 28) < v15 )
    goto LABEL_56;
LABEL_68:
  if ( !v15 || !v8 )
  {
LABEL_56:
    if ( (*(_BYTE *)(a1 + 21) & 8) != 0 )
      StorPortExtendedFunction(85LL, a1, 0LL, 0LL);
    *(_BYTE *)(a2 + 3) = 21;
    return 3238002694LL;
  }
  switch ( (_BYTE)v12 )
  {
    case 0:
      v36 = v13;
      return (unsigned int)CopyCachedLogPage(v11, v36, v15, a2);
    case 5:
      v36 = *(const void **)(a1 + 3712);
      return (unsigned int)CopyCachedLogPage(v11, v36, v15, a2);
    case 0x12:
      v36 = *(const void **)(a1 + 4256);
      return (unsigned int)CopyCachedLogPage(v11, v36, v15, a2);
  }
  if ( !v10 )
  {
    if ( v7 == -1 )
      goto LABEL_95;
    v20 = *(_BYTE *)(a2 + 2);
    v22 = 24LL;
    if ( v20 != 40 )
      v22 = 12LL;
    if ( (*(_DWORD *)(v22 + a2) & 1) != 0 )
    {
      v7 = -1;
      goto LABEL_95;
    }
    goto LABEL_88;
  }
  v20 = *(_BYTE *)(a2 + 2);
  v21 = 24LL;
  v7 = *(_DWORD *)(v10 + 52);
  if ( v20 != 40 )
    v21 = 12LL;
  if ( (*(_DWORD *)(v21 + a2) & 1) == 0 )
  {
    if ( v7 )
    {
      if ( (*(_BYTE *)(a1 + 21) & 8) != 0 )
        goto LABEL_105;
      goto LABEL_101;
    }
LABEL_88:
    if ( v20 == 40 )
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
    goto LABEL_95;
  }
  if ( (unsigned int)(v7 - 1) <= 0xFFFFFFFD )
  {
    if ( (*(_BYTE *)(a1 + 21) & 8) != 0 )
      goto LABEL_105;
    goto LABEL_101;
  }
LABEL_95:
  if ( (*(_BYTE *)(v37 + 261) & 4) != 0 )
  {
    if ( v10 )
    {
      v24 = *(_QWORD *)(v11 + 36);
      goto LABEL_103;
    }
    v24 = *(unsigned int *)(v11 + 20) | ((unsigned __int64)*(unsigned int *)(v11 + 36) << 32);
  }
  else
  {
    v24 = 0LL;
    if ( v10 )
    {
LABEL_103:
      if ( 4 * (*(unsigned __int16 *)(v10 + 18) | ((unsigned __int64)(unsigned __int16)*(_DWORD *)(v10 + 20) << 16)) + 4 > v15 )
      {
        if ( (*(_BYTE *)(a1 + 21) & 8) != 0 )
        {
LABEL_105:
          v10 = 0LL;
LABEL_106:
          StorPortExtendedFunction(85LL, a1, 0LL, v10);
        }
LABEL_101:
        *(_BYTE *)(a2 + 3) = 6;
        return 3238002694LL;
      }
    }
  }
  if ( v42 )
  {
    if ( v24 >= v42 )
      goto LABEL_101;
    if ( v15 > (int)v42 - (int)v24 )
      v15 = v42 - v24;
  }
  v25 = v15;
  if ( v15 > (unsigned int)Size )
    v25 = Size;
  NVMeAllocateDmaBufferEx(a1, 0, 1, v25, (__int64 *)&v38, v43);
  if ( !v38 )
  {
    *(_BYTE *)(a2 + 3) = 4;
    return 3238002691LL;
  }
  if ( (v25 & 3) != 0 )
  {
    if ( v25 )
      memset(v38, 0, v25);
  }
  else if ( v25 >> 2 )
  {
    memset(v38, 0, 4LL * (v25 >> 2));
  }
  *(_BYTE *)(v39 + 4225) |= 3u;
  SrbAssignQueueId(a1, a2);
  v26 = v43[0];
  LOBYTE(v27) = v44;
  BuildGetLogPageCommand(a1, v39, v27, v25, v43[0], v7, v24, *(_DWORD *)(v41 + 40));
  v28 = v40;
  v29 = v39;
  if ( v40 )
  {
    *(_DWORD *)(v39 + 4136) = v40[4];
    v30 = (v25 >> 2) - 1;
    *(_WORD *)(v29 + 4138) = v30;
    *(_DWORD *)(v29 + 4140) = v28[5];
    *(_WORD *)(v29 + 4140) = HIWORD(v30);
    *(_DWORD *)(v29 + 4144) = v28[9];
    *(_DWORD *)(v29 + 4148) = v28[10];
    *(_QWORD *)(v29 + 4152) = (unsigned int)v28[11];
    *(_DWORD *)(v29 + 4100) = v7;
  }
  else
  {
    v31 = v41;
    v32 = *(_DWORD *)(v39 + 4136) ^ ((unsigned __int16)*(_DWORD *)(v39 + 4136) ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)(v41 + 44) << 15)) & 0x8000;
    *(_DWORD *)(v39 + 4136) = v32;
    *(_DWORD *)(v29 + 4136) = v32 ^ ((unsigned __int16)v32 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)(v31 + 44) << 7)) & 0xF00;
    if ( NVMeControllerSupportsUUIDList(a1) && (*(_DWORD *)(v33 + 44) & 0x7F00) != 0 && (unsigned __int8)v44 >= 0xC0u )
      *(_DWORD *)(v29 + 4152) ^= ((unsigned __int8)*(_DWORD *)(v29 + 4152) ^ (unsigned __int8)BYTE1(*(_DWORD *)(v33 + 44))) & 0x7F;
  }
  *(_BYTE *)(v29 + 4225) |= 4u;
  *(_QWORD *)(v29 + 4192) = QueryProtocolInfoCompletion;
  *(_QWORD *)(v29 + 4160) = v38;
  *(_QWORD *)(v29 + 4168) = v26;
  *(_DWORD *)(v29 + 4208) = v25;
  if ( v15 > (unsigned int)Size )
  {
    StorPortExtendedFunction(0LL, a1, 56LL, 1701672526LL);
    v34 = v47;
    if ( !v47 )
    {
      *(_BYTE *)(v45 + 3) = 4;
      if ( v38 )
        NVMeFreeDmaBufferEx(a1, 0, 1, v25, (__int64 *)&v38, v26);
      return 3238002691LL;
    }
    v35 = v41;
    v29 = v39;
    *(_OWORD *)v47 = 0LL;
    *(_OWORD *)(v34 + 16) = 0LL;
    *(_OWORD *)(v34 + 32) = 0LL;
    *(_QWORD *)(v34 + 48) = 0LL;
    *(_DWORD *)(v47 + 4) = 1;
    *(_QWORD *)(v47 + 32) = v24;
    *(_DWORD *)(v47 + 44) = 0;
    *(_QWORD *)(v47 + 16) = v38;
    *(_QWORD *)(v47 + 24) = v26;
    *(_DWORD *)(v47 + 12) = v25;
    *(_DWORD *)v47 = *(_DWORD *)(v35 + 16);
    *(_DWORD *)(v47 + 8) = v7;
    *(_DWORD *)(v47 + 40) = *(_DWORD *)(v35 + 28);
    *(_QWORD *)(v47 + 48) = v42;
  }
  *(_QWORD *)(v29 + 4200) = v47;
  return v2;
}
