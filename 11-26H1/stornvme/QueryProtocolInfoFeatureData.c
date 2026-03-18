/*
 * XREFs of QueryProtocolInfoFeatureData @ 0x140021090
 * Callers:
 *     IoctlQueryProtocolInfoProcess @ 0x14001BF38 (IoctlQueryProtocolInfoProcess.c)
 * Callees:
 *     GetSrbExtension @ 0x140003A40 (GetSrbExtension.c)
 *     SrbAssignQueueId @ 0x1400047C0 (SrbAssignQueueId.c)
 *     GetSrbDataBuffer @ 0x14000F230 (GetSrbDataBuffer.c)
 *     NVMeAllocateDmaBufferEx @ 0x14001098C (NVMeAllocateDmaBufferEx.c)
 *     memset @ 0x140032A40 (memset.c)
 */

__int64 __fastcall QueryProtocolInfoFeatureData(__int64 a1, __int64 a2)
{
  __int64 SrbExtension; // rax
  __int64 v5; // r8
  __int64 v6; // r14
  int v7; // esi
  _DWORD *SrbDataBuffer; // rax
  _DWORD *v9; // r8
  _DWORD *v10; // r12
  unsigned int v11; // ecx
  _DWORD *v12; // rdi
  unsigned int v13; // ebx
  int v14; // eax
  __int64 result; // rax
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  char v19; // dl
  __int64 v20; // rax
  unsigned __int8 v21; // cl
  __int64 v22; // rax
  int v23; // edx
  __int64 v24; // rax
  char v25; // cl
  __int64 v26; // [rsp+30h] [rbp-10h] BYREF
  __int64 v27; // [rsp+90h] [rbp+50h] BYREF
  void *v28; // [rsp+98h] [rbp+58h] BYREF

  v28 = 0LL;
  SrbExtension = GetSrbExtension(a2);
  v26 = v5;
  v6 = SrbExtension;
  v7 = v5;
  SrbDataBuffer = (_DWORD *)GetSrbDataBuffer(a2, &v27);
  v10 = SrbDataBuffer + 7;
  v11 = SrbDataBuffer[11];
  if ( v11 >= 0x800 )
    goto LABEL_43;
  if ( SrbDataBuffer[10] == 5 )
  {
    if ( (unsigned __int8)v11 < 0xC0u )
      goto LABEL_43;
    v12 = SrbDataBuffer + 7;
  }
  else
  {
    v12 = v9;
    if ( (unsigned __int8)v11 <= 0x80u )
    {
      if ( (unsigned __int8)v11 != 128 )
      {
        if ( (unsigned __int8)v11 > 9u )
        {
          if ( (unsigned __int8)v11 != 10
            && (unsigned __int8)v11 != 11
            && (unsigned __int8)v11 != 12
            && (unsigned __int8)v11 != 13
            && (unsigned __int8)v11 != 14
            && (unsigned int)(unsigned __int8)v11 - 16 >= 2 )
          {
LABEL_32:
            if ( (unsigned __int8)v11 > 0x7Du )
              goto LABEL_14;
            if ( (unsigned __int8)v11 == 125 )
              goto LABEL_65;
            if ( (unsigned __int8)v11 > 9u )
            {
              switch ( (unsigned __int8)v11 )
              {
                case 0xAu:
                case 0xBu:
                  goto LABEL_59;
                case 0xCu:
                  v13 = 256;
                  goto LABEL_60;
                case 0xDu:
                  goto LABEL_65;
                case 0xEu:
                  v13 = 8;
                  goto LABEL_60;
              }
              v14 = (unsigned __int8)v11 - 16;
              if ( (unsigned __int8)v11 == 16 )
                goto LABEL_59;
LABEL_58:
              if ( v14 != 1 )
              {
LABEL_19:
                if ( v12 )
                {
                  v13 = v12[7];
                  goto LABEL_67;
                }
                goto LABEL_66;
              }
              goto LABEL_59;
            }
            if ( (unsigned __int8)v11 == 9 )
              goto LABEL_59;
LABEL_36:
            switch ( (unsigned __int8)v11 )
            {
              case 1u:
              case 2u:
                goto LABEL_59;
              case 3u:
                goto LABEL_66;
              case 4u:
              case 5u:
              case 6u:
                goto LABEL_59;
            }
            v14 = (unsigned __int8)v11 - 7;
            if ( (unsigned __int8)v11 == 7 )
              goto LABEL_43;
            goto LABEL_58;
          }
        }
        else if ( (unsigned __int8)v11 != 9
               && (unsigned __int8)v11 != 1
               && (unsigned __int8)v11 != 2
               && (unsigned __int8)v11 != 3
               && (unsigned __int8)v11 != 5
               && (unsigned __int8)v11 != 6
               && (unsigned int)(unsigned __int8)v11 - 7 > 1 )
        {
          goto LABEL_36;
        }
      }
LABEL_31:
      if ( SrbDataBuffer[12] != (_DWORD)v9 )
        goto LABEL_43;
      goto LABEL_32;
    }
  }
  if ( (unsigned __int8)v11 == 130 || (unsigned __int8)v11 == 131 )
    goto LABEL_31;
  if ( ((unsigned __int8)v11 == 192
     || (unsigned __int8)v11 == 194
     || (unsigned __int8)v11 == 196
     || (unsigned int)(unsigned __int8)v11 - 198 <= 1)
    && (*(_DWORD *)(a1 + 12) & 1) != 0
    && !v12
    && SrbDataBuffer[12] != (_DWORD)v9 )
  {
    goto LABEL_43;
  }
LABEL_14:
  if ( (unsigned __int8)v11 == 126 )
  {
LABEL_65:
    v7 = -1;
    goto LABEL_66;
  }
  if ( (unsigned __int8)v11 != 127 )
  {
    if ( (unsigned __int8)v11 != 128 )
    {
      if ( (unsigned __int8)v11 != 129 )
      {
        if ( (unsigned int)(unsigned __int8)v11 - 130 < 2 )
        {
          v13 = (unsigned int)v9;
          goto LABEL_67;
        }
        goto LABEL_19;
      }
      v13 = 16;
LABEL_60:
      v7 = -1;
      goto LABEL_67;
    }
LABEL_59:
    v13 = (unsigned int)v9;
    goto LABEL_60;
  }
LABEL_66:
  v13 = 4096;
LABEL_67:
  if ( (*(_DWORD *)(a1 + 12) & 1) == 0 )
    goto LABEL_74;
  v16 = (unsigned __int8)v11 - 192;
  if ( v16 )
  {
    v17 = v16 - 2;
    if ( !v17 || (v18 = v17 - 2) == 0 || (unsigned int)(v18 - 2) <= 1 )
    {
      v13 = (unsigned int)v9;
      v7 = (int)v9;
      goto LABEL_76;
    }
LABEL_74:
    if ( !v13 )
      goto LABEL_76;
    goto LABEL_75;
  }
  v13 = 4096;
  v7 = -(*(_BYTE *)(a1 + 9) != 0);
LABEL_75:
  if ( v10[6] < 0x28u )
  {
LABEL_77:
    *(_BYTE *)(a2 + 3) = 21;
    return 3238002694LL;
  }
LABEL_76:
  if ( v10[7] < v13 )
    goto LABEL_77;
  if ( v12 )
  {
    v19 = *(_BYTE *)(a2 + 2);
    v20 = 24LL;
    v7 = v12[13];
    if ( v19 != 40 )
      v20 = 12LL;
    if ( (*(_DWORD *)(v20 + a2) & 1) != 0 )
    {
      if ( (unsigned int)(v7 - 1) > 0xFFFFFFFD )
        goto LABEL_98;
LABEL_43:
      *(_BYTE *)(a2 + 3) = 6;
      return 3238002694LL;
    }
    if ( v7 )
      goto LABEL_43;
  }
  else
  {
    if ( (*(_DWORD *)(a1 + 12) & 1) != 0 || v7 == -1 )
      goto LABEL_98;
    v19 = *(_BYTE *)(a2 + 2);
    v22 = 24LL;
    if ( v19 != 40 )
      v22 = 12LL;
    if ( (*(_DWORD *)(v22 + a2) & 1) != 0 )
    {
      v7 = -1;
      goto LABEL_98;
    }
  }
  if ( v19 == 40 )
    v21 = *(_BYTE *)(*(unsigned int *)(a2 + 52) + a2 + 10);
  else
    v21 = *(_BYTE *)(a2 + 7);
  if ( (unsigned int)v21 >= *(_DWORD *)(a1 + 224) || *(_DWORD **)(a1 + 8LL * v21 + 1672) == v9 )
  {
    v7 = (int)v9;
  }
  else
  {
    _mm_lfence();
    v7 = *(_DWORD *)(*(_QWORD *)(a1 + 8LL * v21 + 1672) + 16LL);
  }
LABEL_98:
  if ( v13 )
  {
    NVMeAllocateDmaBufferEx(a1, 0, 1, v13, (__int64 *)&v28, &v26);
    LODWORD(v9) = 0;
    if ( !v28 )
    {
      *(_BYTE *)(a2 + 3) = 4;
      return 3238002691LL;
    }
    if ( (v13 & 3) != 0 )
    {
      memset(v28, 0, v13);
      goto LABEL_105;
    }
    if ( v13 >> 2 )
    {
      memset(v28, 0, 4LL * (v13 >> 2));
LABEL_105:
      LODWORD(v9) = 0;
    }
  }
  *(_BYTE *)(v6 + 4225) = *(_BYTE *)(v6 + 4225) & 0xFD | ((unsigned int)v9 < v13 ? 2 : 0) | 1;
  SrbAssignQueueId(a1, a2);
  v23 = v10[5];
  v24 = v26;
  *(_DWORD *)(v6 + 4136) = v10[4];
  *(_BYTE *)(v6 + 4096) = 10;
  *(_DWORD *)(v6 + 4100) = v7;
  *(_QWORD *)(v6 + 4120) = v24;
  *(_DWORD *)(v6 + 4140) = v23;
  if ( v12 )
  {
    *(_DWORD *)(v6 + 4136) = v12[4];
    *(_DWORD *)(v6 + 4140) = v12[5];
    *(_DWORD *)(v6 + 4144) = v12[9];
    *(_DWORD *)(v6 + 4148) = v12[10];
    *(_DWORD *)(v6 + 4152) = v12[11];
    *(_DWORD *)(v6 + 4156) = v12[12];
  }
  v25 = *(_BYTE *)(v6 + 4225) & 0xFB | (v13 != 0 ? 4 : 0);
  *(_QWORD *)(v6 + 4192) = QueryProtocolInfoCompletion;
  *(_BYTE *)(v6 + 4225) = v25;
  *(_QWORD *)(v6 + 4160) = v28;
  *(_QWORD *)(v6 + 4168) = v26;
  result = 0LL;
  *(_DWORD *)(v6 + 4208) = v13;
  return result;
}
