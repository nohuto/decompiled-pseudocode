/*
 * XREFs of sub_140027070 @ 0x140027070
 * Callers:
 *     sub_140026E80 @ 0x140026E80 (sub_140026E80.c)
 *     StorPortNotification @ 0x14004C160 (StorPortNotification.c)
 *     sub_1400D474C @ 0x1400D474C (sub_1400D474C.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_140027070(_QWORD *a1)
{
  __int64 v1; // rbx
  unsigned __int64 v2; // r8
  unsigned __int8 v3; // r11
  unsigned __int8 v4; // bp
  char v6; // si
  unsigned __int8 v7; // r12
  unsigned __int8 v8; // r14
  __int64 v9; // r10
  unsigned int v10; // r15d
  int v11; // r9d
  unsigned int v12; // edi
  unsigned __int64 v13; // rdi
  unsigned __int64 result; // rax
  unsigned __int64 v15; // rdi
  __int64 v16; // r11
  __int64 v17; // rcx
  int v18; // ecx
  __int64 v19; // rcx
  unsigned int v20; // r9d
  __int64 v21; // r10
  __int64 v22; // rcx
  unsigned __int8 *v23; // r14
  unsigned int *v24; // r12
  __int64 v25; // rax
  unsigned __int64 v26; // r15
  int v27; // ecx
  unsigned __int64 v28; // rcx
  bool v29; // zf
  int v30; // ecx
  unsigned int v31; // ebp
  unsigned int *v32; // r13
  __int64 v33; // rax
  unsigned __int64 v34; // r11
  unsigned int v35; // r9d
  unsigned int v36; // r14d
  unsigned int v37; // ebp
  unsigned int *v38; // r11
  unsigned int v39; // r15d
  unsigned int v40; // ebp
  unsigned int *v41; // r11
  unsigned __int64 v42; // r12
  __int64 v43; // rax
  unsigned __int64 v44; // r12
  int v45; // [rsp+40h] [rbp+8h]
  unsigned int v46; // [rsp+48h] [rbp+10h]

  v1 = a1[21];
  v2 = 0LL;
  v3 = 0;
  v4 = 0;
  v6 = *(_BYTE *)(v1 + 2);
  v7 = 0;
  v8 = 0;
  v9 = 0LL;
  v10 = 0;
  if ( v6 == 40 )
  {
    v11 = *(_DWORD *)(v1 + 20);
    v9 = a1[21];
  }
  else
  {
    v11 = *(unsigned __int8 *)(v1 + 2);
  }
  v12 = *(unsigned __int8 *)(v1 + 3);
  if ( v11 )
  {
    if ( v11 == 23 )
    {
      if ( v6 == 40 )
      {
        v39 = *(_DWORD *)(v9 + 56);
        v40 = 0;
        if ( v39 )
        {
          v41 = (unsigned int *)(v9 + 120);
          while ( 1 )
          {
            v43 = *v41;
            if ( (unsigned int)v43 >= 0x80 )
            {
              v44 = *(unsigned int *)(v9 + 16);
              if ( (unsigned int)v43 <= (unsigned int)v44 && *(_DWORD *)(v9 + v43) == 96 && v43 + 24 <= v44 )
                break;
            }
            ++v40;
            ++v41;
            if ( v40 >= v39 )
              goto LABEL_79;
          }
          v8 = *(_BYTE *)(v9 + v43 + 8);
        }
LABEL_79:
        v13 = (v12 | 0x170000) << 8;
        result = (unsigned __int64)v8 << 16;
        goto LABEL_6;
      }
    }
    else
    {
      result = (unsigned int)(v11 - 36);
      if ( v11 == 36 )
      {
        if ( v6 == 40 )
        {
          v36 = *(_DWORD *)(v9 + 56);
          v37 = 0;
          if ( v36 )
          {
            v38 = (unsigned int *)(v9 + 120);
            while ( 1 )
            {
              result = *v38;
              if ( (unsigned int)result >= 0x80 )
              {
                v42 = *(unsigned int *)(v9 + 16);
                if ( (unsigned int)result <= (unsigned int)v42 && *(_DWORD *)(v9 + result) == 97 && result + 24 <= v42 )
                  break;
              }
              ++v37;
              ++v38;
              if ( v37 >= v36 )
                goto LABEL_72;
            }
            v10 = *(_DWORD *)(v9 + result + 12);
          }
LABEL_72:
          v35 = (v10 << 16) | ((v12 | (v11 << 16)) << 8);
        }
        else
        {
          result = (unsigned int)(*(_DWORD *)(v1 + 8) << 16);
          v35 = result | ((v12 | (v11 << 16)) << 8);
        }
        v15 = v35;
        goto LABEL_7;
      }
      if ( v11 != 37 )
      {
        v15 = ((v11 << 16) | v12) << 8;
        goto LABEL_7;
      }
      if ( v6 == 40 )
      {
        v31 = *(_DWORD *)(v9 + 56);
        if ( v31 )
        {
          v32 = (unsigned int *)(v9 + 120);
          while ( 1 )
          {
            v33 = *v32;
            if ( (unsigned int)v33 >= 0x80 )
            {
              v34 = *(unsigned int *)(v9 + 16);
              if ( (unsigned int)v33 <= (unsigned int)v34
                && *(_DWORD *)(v33 + v9) == 98
                && (unsigned __int64)(unsigned int)v33 + 24 <= v34 )
              {
                break;
              }
            }
            ++v10;
            ++v32;
            if ( v10 >= v31 )
              goto LABEL_53;
          }
          v7 = *(_BYTE *)(v33 + v9 + 8);
        }
LABEL_53:
        v13 = ((v11 << 16) | v12) << 8;
        result = (unsigned __int64)v7 << 16;
        goto LABEL_6;
      }
    }
    v13 = ((v11 << 16) | v12) << 8;
    result = (unsigned __int64)*(unsigned __int8 *)(v1 + 4) << 16;
    goto LABEL_6;
  }
  if ( v6 != 40 )
  {
    v13 = ((unsigned __int64)*(unsigned __int8 *)(v1 + 72) << 16) | (v12 << 8);
    result = *(unsigned __int8 *)(v1 + 4);
    goto LABEL_6;
  }
  v23 = 0LL;
  if ( *(_BYTE *)(v9 + 2) != 40 || *(_DWORD *)(v9 + 20) )
    goto LABEL_37;
  v45 = 0;
  v46 = *(_DWORD *)(v9 + 56);
  if ( !v46 )
    goto LABEL_35;
  v24 = (unsigned int *)(v9 + 120);
  while ( 1 )
  {
    v25 = *v24;
    if ( (unsigned int)v25 < 0x80 )
      goto LABEL_26;
    v26 = *(unsigned int *)(v9 + 16);
    if ( (unsigned int)v25 >= (unsigned int)v26 )
      goto LABEL_26;
    v27 = *(_DWORD *)(v9 + v25);
    if ( v27 == 64 )
    {
      v28 = v25 + 40;
      goto LABEL_25;
    }
    v30 = v27 - 65;
    if ( v30 )
      break;
    v28 = v25 + 56;
LABEL_25:
    if ( v28 <= v26 )
    {
      v23 = (unsigned __int8 *)(v9 + v25 + 24);
      v29 = *(_BYTE *)(v9 + v25 + 10) == 0;
      goto LABEL_33;
    }
LABEL_26:
    ++v24;
    if ( ++v45 >= v46 )
      goto LABEL_35;
  }
  if ( v30 != 1 || v25 + 40 > v26 )
    goto LABEL_26;
  v23 = (unsigned __int8 *)(v9 + v25 + 32);
  v29 = *(_DWORD *)(v9 + v25 + 12) == 0;
LABEL_33:
  v3 = *(_BYTE *)(v9 + v25 + 8);
  if ( v29 )
    v23 = 0LL;
LABEL_35:
  if ( v23 )
    v4 = *v23;
LABEL_37:
  v13 = ((unsigned __int64)v4 << 16) | (v12 << 8);
  result = v3;
LABEL_6:
  v15 = result | v13;
LABEL_7:
  v16 = a1[20];
  if ( !v16 )
  {
    if ( v6 == 40 )
      v16 = *(_QWORD *)(v9 + 80);
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
      v20 = *(_DWORD *)(v19 + 4932);
      if ( v20 )
      {
        v21 = *(_QWORD *)(v19 + 4936);
        if ( v21 )
        {
          v22 = v21 + 48LL * (_InterlockedIncrement((volatile signed __int32 *)(v19 + 4928)) % v20);
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
