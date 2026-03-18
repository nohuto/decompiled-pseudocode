/*
 * XREFs of QueryProtocolInfoCompletion @ 0x140020C50
 * Callers:
 *     <none>
 * Callees:
 *     ProcessNvmeHealthInfoLog @ 0x140002180 (ProcessNvmeHealthInfoLog.c)
 *     GetSrbExtension @ 0x140003A40 (GetSrbExtension.c)
 *     SrbAssignQueueId @ 0x1400047C0 (SrbAssignQueueId.c)
 *     ProcessCommand @ 0x14000A680 (ProcessCommand.c)
 *     BuildGetLogPageCommand @ 0x14000F760 (BuildGetLogPageCommand.c)
 *     NVMeControllerSupportsUUIDList @ 0x14000FE50 (NVMeControllerSupportsUUIDList.c)
 *     NVMeFreeDmaBufferEx @ 0x140010C58 (NVMeFreeDmaBufferEx.c)
 *     memmove @ 0x140032740 (memmove.c)
 */

__int16 __fastcall QueryProtocolInfoCompletion(__int64 a1, __int64 a2)
{
  __int64 SrbExtension; // rbx
  __int64 v5; // r8
  __int64 v6; // r9
  _DWORD *v7; // r13
  char v8; // dl
  char v9; // bp
  __int64 v10; // rdi
  size_t v11; // r14
  unsigned __int64 v12; // rax
  _DWORD *v13; // rsi
  int v14; // ecx
  __int64 v15; // r8
  const void *v16; // rdx
  const void *v17; // rdx
  unsigned __int64 v18; // rcx
  unsigned int v19; // ebp
  unsigned int v20; // ebp
  int v21; // edx
  __int64 v22; // r8
  int v23; // ecx
  unsigned int v24; // edx
  bool v25; // zf
  unsigned int v26; // eax
  unsigned int v27; // ecx
  int v28; // ecx
  int v29; // ecx
  __int64 v31; // [rsp+30h] [rbp-38h]

  SrbExtension = GetSrbExtension(a2);
  v7 = 0LL;
  v8 = 0;
  v9 = 0;
  v10 = *(_QWORD *)(SrbExtension + 4200);
  v11 = *(unsigned int *)(SrbExtension + 4208);
  v12 = 64LL;
  if ( *(_BYTE *)(a2 + 2) != 40 )
    v12 = 24LL;
  v13 = (_DWORD *)(*(_QWORD *)(v12 + a2) + 28LL);
  v14 = *(_DWORD *)(*(_QWORD *)(v12 + a2) + 40LL);
  LOWORD(v12) = v14 - 2;
  if ( v14 == 2 )
    goto LABEL_8;
  LOWORD(v12) = v14 - 3;
  if ( v14 == 3 )
  {
LABEL_7:
    v8 = 1;
    goto LABEL_9;
  }
  LOWORD(v12) = v14 - 4;
  if ( v14 == 4 )
  {
LABEL_8:
    v9 = 1;
    goto LABEL_9;
  }
  if ( v14 == 5 )
    goto LABEL_7;
LABEL_9:
  if ( (unsigned int)(v14 - 4) <= 1 )
    v7 = v13;
  if ( !v5 )
    goto LABEL_12;
  if ( *(_BYTE *)(a2 + 3) != 1 )
  {
    if ( v9 )
    {
      if ( v10 )
      {
        LODWORD(v12) = *(_DWORD *)(v10 + 4);
        if ( (v12 & 1) == 0 )
        {
          LOWORD(v12) = *(_WORD *)(v5 + 14);
          if ( (v12 & 0xE00) == 0 )
          {
            LOWORD(v12) = v12 & 0x1FE;
            if ( (_WORD)v12 == 4 )
            {
              *(_BYTE *)(a2 + 3) = 1;
              goto LABEL_14;
            }
          }
        }
      }
    }
    goto LABEL_13;
  }
  if ( !v10 )
  {
    if ( v8 )
      v13[8] = *(_DWORD *)v5;
    v13[7] = *(_DWORD *)(SrbExtension + 4208);
    LODWORD(v12) = *(_DWORD *)(SrbExtension + 4208);
    if ( (_DWORD)v12 )
    {
      v16 = *(const void **)(SrbExtension + 4160);
      if ( v16 )
      {
        LOWORD(v12) = (unsigned __int16)memmove((char *)v13 + (unsigned int)v13[6] + 8, v16, (unsigned int)v12);
        if ( v9 )
        {
          if ( v13[4] == 2 )
            LOWORD(v12) = ProcessNvmeHealthInfoLog(a1, a2, *(char **)(SrbExtension + 4160), 13);
        }
      }
    }
    goto LABEL_14;
  }
  if ( !v9
    || (v17 = *(const void **)(SrbExtension + 4160)) == 0LL
    || !(_DWORD)v11
    || (v6 = *(unsigned int *)(v10 + 44), LOWORD(v12) = v6 + v11, *(_DWORD *)(v10 + 40) < (unsigned int)(v6 + v11))
    || (v18 = *(_QWORD *)(v10 + 48)) != 0 && (v12 = *(_QWORD *)(v10 + 32) + v11, v18 < v12) )
  {
LABEL_12:
    *(_BYTE *)(a2 + 3) = 4;
LABEL_13:
    v13[7] = 0;
LABEL_14:
    if ( *(_QWORD *)(SrbExtension + 4160) )
    {
      if ( v10 && *(_DWORD *)(v10 + 12) )
        LODWORD(v11) = *(_DWORD *)(v10 + 12);
      LOWORD(v12) = NVMeFreeDmaBufferEx(
                      a1,
                      0,
                      1,
                      (unsigned int)v11,
                      (__int64 *)(SrbExtension + 4160),
                      *(_QWORD *)(SrbExtension + 4168));
    }
    v15 = *(_QWORD *)(SrbExtension + 4200);
    if ( v15 )
    {
      LOWORD(v12) = StorPortExtendedFunction(1LL, a1, v15, v6);
      *(_QWORD *)(SrbExtension + 4200) = 0LL;
    }
    *(_BYTE *)(SrbExtension + 4225) |= 8u;
    *(_QWORD *)(SrbExtension + 4160) = 0LL;
    *(_DWORD *)(SrbExtension + 4208) = 0;
    return v12;
  }
  memmove((char *)v13 + (unsigned int)v13[6] + v6 + 8, v17, v11);
  LODWORD(v12) = *(_DWORD *)(SrbExtension + 4208);
  if ( *(_DWORD *)(v10 + 44) )
    LODWORD(v12) = v13[7] + v12;
  v13[7] = v12;
  v19 = *(_DWORD *)(v10 + 40);
  if ( v19 == (_DWORD)v12 )
    goto LABEL_14;
  if ( v19 <= (unsigned int)v12 )
  {
    v13[7] = v19;
    goto LABEL_14;
  }
  *(_BYTE *)(SrbExtension + 4225) |= 3u;
  v20 = v19 - v12;
  SrbAssignQueueId(a1, a2);
  v21 = *(_DWORD *)(v10 + 44);
  if ( !v21 )
    *(_DWORD *)(v10 + 4) &= ~1u;
  v22 = *(_QWORD *)(v10 + 32) + *(unsigned int *)(SrbExtension + 4208);
  *(_QWORD *)(v10 + 32) = v22;
  v23 = v21 + *(_DWORD *)(SrbExtension + 4208);
  v24 = *(_DWORD *)(v10 + 12);
  v25 = *(_QWORD *)(v10 + 48) == 0LL;
  *(_DWORD *)(v10 + 44) = v23;
  if ( v25 )
  {
    if ( v20 < v24 )
      v24 = v20;
    v20 = v24;
  }
  else
  {
    v26 = v24;
    v27 = *(_DWORD *)(v10 + 48) - v22;
    if ( v24 >= v27 )
      v26 = *(_DWORD *)(v10 + 48) - v22;
    if ( v20 >= v26 )
    {
      v20 = *(_DWORD *)(v10 + 48) - v22;
      if ( v24 < v27 )
        v20 = v24;
    }
  }
  v31 = v22;
  LOBYTE(v22) = *(_BYTE *)v10;
  BuildGetLogPageCommand(a1, SrbExtension, v22, v20, *(_QWORD *)(v10 + 24), *(_DWORD *)(v10 + 8), v31, v13[10]);
  if ( v7 )
  {
    *(_DWORD *)(SrbExtension + 4136) = v7[4];
    v28 = (v20 >> 2) - 1;
    *(_WORD *)(SrbExtension + 4138) = v28;
    *(_DWORD *)(SrbExtension + 4140) = v7[5];
    *(_WORD *)(SrbExtension + 4140) = HIWORD(v28);
    *(_QWORD *)(SrbExtension + 4144) = *(_QWORD *)(v10 + 32);
    *(_QWORD *)(SrbExtension + 4152) = (unsigned int)v7[11];
  }
  else
  {
    v29 = *(_DWORD *)(SrbExtension + 4136) ^ ((unsigned __int16)*(_DWORD *)(SrbExtension + 4136) ^ (unsigned __int16)((unsigned __int16)v13[11] << 15)) & 0x8000;
    *(_DWORD *)(SrbExtension + 4136) = v29;
    *(_DWORD *)(SrbExtension + 4136) = v29 ^ ((unsigned __int16)v29 ^ (unsigned __int16)((unsigned __int16)v13[11] << 7)) & 0xF00;
    if ( NVMeControllerSupportsUUIDList(a1) && (v13[11] & 0x7F00) != 0 && *(_BYTE *)v10 >= 0xC0u )
      *(_DWORD *)(SrbExtension + 4152) ^= ((unsigned __int8)BYTE1(v13[11]) ^ (unsigned __int8)*(_DWORD *)(SrbExtension + 4152)) & 0x7F;
  }
  *(_BYTE *)(SrbExtension + 4225) |= 4u;
  *(_QWORD *)(SrbExtension + 4192) = QueryProtocolInfoCompletion;
  *(_QWORD *)(SrbExtension + 4160) = *(_QWORD *)(v10 + 16);
  *(_QWORD *)(SrbExtension + 4168) = *(_QWORD *)(v10 + 24);
  *(_DWORD *)(SrbExtension + 4208) = v20;
  *(_QWORD *)(SrbExtension + 4200) = v10;
  LOWORD(v12) = ProcessCommand(a1, a2);
  return v12;
}
