/*
 * XREFs of RaidLogMiniportCompletion @ 0x14000E920
 * Callers:
 *     RaidAdapterRequestComplete @ 0x14000E730 (RaidAdapterRequestComplete.c)
 *     RaidAdapterRequestDirectComplete @ 0x14002E1A8 (RaidAdapterRequestDirectComplete.c)
 *     NvmeAdapterRequestComplete @ 0x1400DC454 (NvmeAdapterRequestComplete.c)
 *     NvmeAdapterRequestDirectComplete @ 0x1400DC60C (NvmeAdapterRequestDirectComplete.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall RaidLogMiniportCompletion(_QWORD *a1)
{
  __int64 v1; // rdi
  unsigned __int64 v2; // r8
  unsigned __int8 v4; // bp
  unsigned __int8 v5; // si
  char v6; // r9
  unsigned __int8 v7; // r14
  unsigned __int8 *v8; // r11
  unsigned __int8 v9; // r15
  unsigned __int64 result; // rax
  unsigned int v11; // ebx
  __int64 v12; // r10
  unsigned __int64 v13; // r11
  bool v14; // zf
  unsigned __int64 v15; // r11
  __int64 v16; // rbx
  __int64 v17; // rcx
  int v18; // ecx
  __int64 v19; // rcx
  unsigned int v20; // r9d
  __int64 v21; // r10
  __int64 v22; // rcx
  unsigned int v23; // r12d
  unsigned int v24; // ebp
  __int64 v25; // rcx
  unsigned __int64 v26; // r14
  __int64 v27; // r13
  int v28; // ecx
  unsigned __int64 v29; // rcx
  int v30; // ecx
  unsigned int v31; // esi
  __int64 v32; // rcx
  unsigned __int64 v33; // rax
  unsigned int v34; // ebx
  unsigned int v35; // ebp
  unsigned int v36; // esi
  unsigned int v37; // esi
  __int64 v38; // rcx
  __int64 v39; // rcx
  unsigned __int64 v40; // rax

  v1 = a1[21];
  v2 = 0LL;
  v4 = 0;
  v5 = 0;
  v6 = *(_BYTE *)(v1 + 2);
  v7 = 0;
  v8 = 0LL;
  v9 = 0;
  if ( v6 == 40 )
    result = *(unsigned int *)(v1 + 20);
  else
    result = *(unsigned __int8 *)(v1 + 2);
  v11 = *(unsigned __int8 *)(v1 + 3);
  v12 = a1[21];
  if ( v6 != 40 )
    v12 = 0LL;
  if ( (_DWORD)result )
  {
    if ( (_DWORD)result != 23 )
    {
      if ( (_DWORD)result != 36 )
      {
        if ( (_DWORD)result != 37 )
        {
          result = (v11 | ((_DWORD)result << 16)) << 8;
          v15 = (unsigned int)result;
          goto LABEL_16;
        }
        if ( v6 != 40 )
        {
          v13 = (unsigned __int64)*(unsigned __int8 *)(v1 + 4) << 16;
          result = (v11 | 0x250000) << 8;
          goto LABEL_15;
        }
        v31 = *(_DWORD *)(v12 + 56);
        if ( v31 )
        {
          while ( 1 )
          {
            v32 = *(unsigned int *)(v12 + 4LL * (unsigned int)v8 + 120);
            if ( (unsigned int)v32 >= 0x80 )
            {
              v33 = *(unsigned int *)(v12 + 16);
              if ( (unsigned int)v32 <= (unsigned int)v33 && *(_DWORD *)(v32 + v12) == 98 && v32 + 24 <= v33 )
                break;
            }
            LODWORD(v8) = (_DWORD)v8 + 1;
            if ( (unsigned int)v8 >= v31 )
              goto LABEL_55;
          }
          v7 = *(_BYTE *)(v32 + v12 + 8);
        }
LABEL_55:
        v13 = (v11 | 0x250000) << 8;
        result = (unsigned __int64)v7 << 16;
        goto LABEL_15;
      }
      if ( v6 == 40 )
      {
        v35 = *(_DWORD *)(v12 + 56);
        v36 = 0;
        if ( v35 )
        {
          while ( 1 )
          {
            result = v36;
            v38 = *(unsigned int *)(v12 + 4LL * v36 + 120);
            if ( (unsigned int)v38 >= 0x80 )
            {
              result = *(unsigned int *)(v12 + 16);
              if ( (unsigned int)v38 <= (unsigned int)result && *(_DWORD *)(v38 + v12) == 97 && v38 + 24 <= result )
                break;
            }
            if ( ++v36 >= v35 )
              goto LABEL_73;
          }
          LODWORD(v8) = *(_DWORD *)((unsigned int)v38 + v12 + 12);
        }
LABEL_73:
        v34 = ((_DWORD)v8 << 16) | ((v11 | 0x240000) << 8);
      }
      else
      {
        result = (v11 | 0x240000) << 8;
        v34 = result | (*(_DWORD *)(v1 + 8) << 16);
      }
      v15 = v34;
      goto LABEL_16;
    }
    if ( v6 != 40 )
    {
      v13 = (unsigned __int64)*(unsigned __int8 *)(v1 + 4) << 16;
      result = (v11 | 0x170000) << 8;
      goto LABEL_15;
    }
    v37 = *(_DWORD *)(v12 + 56);
    if ( v37 )
    {
      while ( 1 )
      {
        v39 = *(unsigned int *)(v12 + 4LL * (unsigned int)v8 + 120);
        if ( (unsigned int)v39 >= 0x80 )
        {
          v40 = *(unsigned int *)(v12 + 16);
          if ( (unsigned int)v39 <= (unsigned int)v40 && *(_DWORD *)(v39 + v12) == 96 && v39 + 24 <= v40 )
            break;
        }
        LODWORD(v8) = (_DWORD)v8 + 1;
        if ( (unsigned int)v8 >= v37 )
          goto LABEL_80;
      }
      v4 = *(_BYTE *)((unsigned int)v39 + v12 + 8);
    }
LABEL_80:
    v13 = (v11 | 0x170000) << 8;
    result = (unsigned __int64)v4 << 16;
    goto LABEL_15;
  }
  if ( v6 != 40 )
  {
    v13 = (v11 << 8) | ((unsigned __int64)*(unsigned __int8 *)(v1 + 72) << 16);
    result = *(unsigned __int8 *)(v1 + 4);
    goto LABEL_15;
  }
  if ( *(_BYTE *)(v12 + 2) != 40 )
    goto LABEL_14;
  if ( *(_DWORD *)(v12 + 20) )
    goto LABEL_14;
  v23 = *(_DWORD *)(v12 + 56);
  v24 = 0;
  if ( !v23 )
    goto LABEL_14;
  while ( 1 )
  {
    v25 = *(unsigned int *)(v12 + 4LL * v24 + 120);
    if ( (unsigned int)v25 < 0x80 )
      goto LABEL_33;
    v26 = *(unsigned int *)(v12 + 16);
    if ( (unsigned int)v25 >= (unsigned int)v26 )
      goto LABEL_33;
    v27 = (unsigned int)v25;
    v28 = *(_DWORD *)(v12 + v25);
    if ( v28 == 64 )
    {
      v29 = v27 + 40;
      goto LABEL_32;
    }
    v30 = v28 - 65;
    if ( v30 )
      break;
    v29 = v27 + 56;
LABEL_32:
    if ( v29 <= v26 )
    {
      v8 = (unsigned __int8 *)(v27 + v12 + 24);
      v14 = *(_BYTE *)(v12 + v27 + 10) == 0;
      goto LABEL_10;
    }
LABEL_33:
    if ( ++v24 >= v23 )
      goto LABEL_12;
  }
  if ( v30 != 1 || v27 + 40 > v26 )
    goto LABEL_33;
  v8 = (unsigned __int8 *)(v27 + v12 + 32);
  v14 = *(_DWORD *)(v12 + v27 + 12) == 0;
LABEL_10:
  v9 = *(_BYTE *)(v12 + v27 + 8);
  if ( v14 )
    v8 = 0LL;
LABEL_12:
  if ( v8 )
    v5 = *v8;
LABEL_14:
  v13 = ((unsigned __int64)v5 << 16) | (v11 << 8);
  result = v9;
LABEL_15:
  v15 = result | v13;
LABEL_16:
  v16 = a1[20];
  if ( !v16 )
  {
    if ( v6 == 40 )
      v16 = *(_QWORD *)(v12 + 80);
    else
      v16 = *(_QWORD *)(v1 + 48);
  }
  v17 = a1[28];
  if ( v17 )
  {
    v18 = *(_DWORD *)(v17 + 104);
    result = BYTE2(v18);
    v2 = BYTE2(v18) | ((((unsigned __int64)(unsigned __int8)v18 << 8) | BYTE1(v18)) << 8);
  }
  v19 = a1[27];
  if ( v19 )
  {
    if ( *(_DWORD *)v19 != 1314275652 )
    {
      v20 = *(_DWORD *)(v19 + 4996);
      if ( v20 )
      {
        v21 = *(_QWORD *)(v19 + 5000);
        if ( v21 )
        {
          v22 = v21 + 48LL * (_InterlockedIncrement((volatile signed __int32 *)(v19 + 4992)) % v20);
          *(_DWORD *)v22 = 1;
          result = MEMORY[0xFFFFF78000000014];
          *(_QWORD *)(v22 + 40) = MEMORY[0xFFFFF78000000014];
          *(_QWORD *)(v22 + 8) = v16;
          *(_QWORD *)(v22 + 16) = v2;
          *(_QWORD *)(v22 + 24) = v1;
          *(_QWORD *)(v22 + 32) = v15;
        }
      }
    }
  }
  return result;
}
