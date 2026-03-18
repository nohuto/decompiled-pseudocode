/*
 * XREFs of NVMeModeSenseGetLogPageHealthInfoCompletion @ 0x1400025C0
 * Callers:
 *     <none>
 * Callees:
 *     ProcessNvmeHealthInfoLog @ 0x140002180 (ProcessNvmeHealthInfoLog.c)
 *     GetSrbExtension @ 0x140003A40 (GetSrbExtension.c)
 *     SrbAssignQueueId @ 0x1400047C0 (SrbAssignQueueId.c)
 *     ProcessCommand @ 0x14000A680 (ProcessCommand.c)
 *     NVMeFreeDmaBufferEx @ 0x140010C58 (NVMeFreeDmaBufferEx.c)
 *     memset @ 0x140032A40 (memset.c)
 */

unsigned __int64 __fastcall NVMeModeSenseGetLogPageHealthInfoCompletion(__int64 a1, __int64 a2)
{
  __int64 SrbExtension; // rax
  char v5; // r10
  __int64 v6; // rbx
  _BYTE *v7; // r12
  char *v8; // r8
  unsigned int v9; // eax
  unsigned int *v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // r9
  unsigned int *v14; // r14
  __int64 v15; // r15
  unsigned int v16; // ebp
  __int64 v17; // rax
  __int64 v18; // rsi
  char *v19; // rsi
  size_t v20; // rax
  unsigned int v21; // eax
  unsigned int v22; // edx
  char v23; // al
  char v24; // cl
  __int64 v25; // rcx
  char v26; // al
  unsigned __int64 result; // rax
  _BYTE *v28; // rcx
  _BYTE *v29; // rcx
  char v30; // al
  char v31; // dl
  int v32; // edx
  char *v33; // [rsp+60h] [rbp+8h]

  SrbExtension = GetSrbExtension(a2);
  v5 = *(_BYTE *)(a2 + 2);
  v6 = SrbExtension;
  v7 = 0LL;
  v8 = *(char **)(SrbExtension + 4160);
  v33 = v8;
  if ( v5 == 40 )
  {
    if ( !*(_DWORD *)(a2 + 20) )
    {
      v9 = *(_DWORD *)(a2 + 56);
      if ( v9 )
      {
        v10 = (unsigned int *)(a2 + 120);
        v11 = v9;
        do
        {
          v12 = *v10;
          if ( (unsigned int)v12 >= 0x80 && (unsigned int)v12 <= *(_DWORD *)(a2 + 16) )
          {
            v13 = a2 + v12;
            switch ( *(_DWORD *)(a2 + v12) )
            {
              case '@':
                if ( *(_BYTE *)(v13 + 10) )
                  v7 = (_BYTE *)(v13 + 24);
                break;
              case 'A':
                v29 = (_BYTE *)(v13 + 24);
                if ( !*(_BYTE *)(v13 + 10) )
                  v29 = v7;
                v7 = v29;
                break;
              case 'B':
                v28 = (_BYTE *)(v13 + 32);
                if ( !*(_DWORD *)(v13 + 12) )
                  v28 = v7;
                v7 = v28;
                break;
            }
          }
          ++v10;
          --v11;
        }
        while ( v11 );
        v8 = v33;
      }
    }
  }
  else if ( !v5 && *(_BYTE *)(a2 + 10) )
  {
    v7 = (_BYTE *)(a2 + 72);
  }
  v14 = 0LL;
  v15 = *(_QWORD *)(a1 + 1560);
  v16 = 0;
  if ( *(_BYTE *)(a2 + 3) == 1 )
  {
    if ( v5 == 40 )
    {
      v17 = 60LL;
      v18 = 64LL;
    }
    else
    {
      v17 = 16LL;
      v18 = 24LL;
    }
    v19 = *(char **)(a2 + v18);
    v14 = (unsigned int *)(a2 + v17);
    v20 = *(unsigned int *)(a2 + v17);
    if ( (v20 & 3) != 0 )
    {
      if ( !(_DWORD)v20 )
        goto LABEL_17;
      memset(v19, 0, v20);
    }
    else
    {
      v21 = (unsigned int)v20 >> 2;
      if ( !v21 )
      {
LABEL_17:
        v22 = *v14;
        if ( *v7 == 26 )
        {
          v19[1] = 0;
          v23 = 23;
          if ( v22 < 0x18 )
            v23 = 15;
          v16 = 4;
          v24 = v19[2] | 0x10;
          *v19 = v23;
          v19[2] = v24;
          if ( (*v8 & 8) != 0 )
            v19[2] = v24 | 0x80;
          v25 = 4LL;
        }
        else
        {
          *v19 = 0;
          v25 = 8LL;
          v19[2] = 0;
          v30 = 26;
          if ( v22 < 0x1C )
            v30 = 18;
          v16 = 8;
          v19[1] = v30;
          v31 = v19[3] | 0x10;
          v19[3] = v31;
          if ( (*v8 & 8) != 0 )
            v19[3] = v31 | 0x80;
        }
        v26 = v19[v25];
        v19[v25 + 2] &= 0xFAu;
        v19[v25 + 1] = 10;
        v19[v25] = v26 & 0x40 | 8;
        ProcessNvmeHealthInfoLog(a1, a2, v8, 14);
        goto LABEL_24;
      }
      memset(v19, 0, 4LL * v21);
    }
    v8 = v33;
    goto LABEL_17;
  }
LABEL_24:
  LOBYTE(v8) = 1;
  result = NVMeFreeDmaBufferEx(a1, 0, (_DWORD)v8, *(_DWORD *)(v6 + 4208), v6 + 4160, *(_QWORD *)(v6 + 4168));
  *(_DWORD *)(v6 + 4208) = 0;
  *(_QWORD *)(v6 + 4200) = 0LL;
  if ( *(_BYTE *)(a2 + 3) == 1 )
  {
    if ( (*(_BYTE *)(v15 + 525) & 1) != 0 )
    {
      *(_BYTE *)(a2 + 3) = 0;
      *(_BYTE *)(v6 + 4225) = *(_BYTE *)(v6 + 4225) & 0xF8 | 1;
      SrbAssignQueueId(a1, a2);
      *(_QWORD *)(v6 + 4096) = 0LL;
      *(_QWORD *)(v6 + 4104) = 0LL;
      *(_QWORD *)(v6 + 4112) = 0LL;
      *(_QWORD *)(v6 + 4120) = 0LL;
      *(_QWORD *)(v6 + 4128) = 0LL;
      *(_QWORD *)(v6 + 4136) = 0LL;
      *(_QWORD *)(v6 + 4144) = 0LL;
      *(_QWORD *)(v6 + 4152) = 0LL;
      *(_BYTE *)(v6 + 4096) = 10;
      *(_BYTE *)(v6 + 4136) = 6;
      *(_QWORD *)(v6 + 4192) = NVMeGetFeaturesCurrentCacheValueCompletion;
      return ProcessCommand(a1, a2);
    }
    result = *v14;
    v32 = 20;
    if ( result < (unsigned __int64)v16 + 20 )
      v32 = 12;
    *v14 = v16 + v32;
  }
  *(_BYTE *)(v6 + 4225) |= 8u;
  return result;
}
