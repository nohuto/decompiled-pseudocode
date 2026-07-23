/*
 * XREFs of KiStartReadyQueueEnumeratorForRescheduleContext @ 0x140306BF0
 * Callers:
 *     KiSearchForNewThreadsForRescheduleContext @ 0x14022E570 (KiSearchForNewThreadsForRescheduleContext.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiStartReadyQueueEnumeratorForRescheduleContext(__int64 a1, unsigned __int8 *a2)
{
  __int64 v2; // r14
  unsigned __int8 *v5; // r8
  int *v6; // rax
  __int64 v7; // r12
  int v8; // r15d
  __int64 v9; // rdx
  __int64 v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // r9
  unsigned __int8 v13; // r11
  int v14; // ebp
  int v15; // esi
  int v16; // r10d
  __int64 v17; // rcx
  _DWORD *v18; // rdx
  unsigned int v19; // r9d
  int v20; // r8d
  __int64 v21; // rsi
  __int64 v22; // rbx
  unsigned int v23; // r11d
  _DWORD *v24; // r10
  _DWORD *v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 result; // rax
  char v29; // cl
  __int64 v30; // r11
  __int64 v31; // r10
  int v32; // esi
  __int64 v33; // rax
  __int64 v34; // rcx

  v2 = *a2;
  if ( !*a2 )
    goto LABEL_23;
  v5 = a2 + 16;
  v6 = (int *)(a1 + 88);
  v7 = *a2;
  v8 = 1;
  do
  {
    v9 = *((_QWORD *)v5 + 2);
    v10 = *(_QWORD *)v5;
    v11 = *(_QWORD *)(v9 + 104);
    if ( !v11 )
    {
LABEL_4:
      v12 = 0LL;
      goto LABEL_6;
    }
    v12 = v11 + *(unsigned int *)(v10 + 216);
    if ( v12 )
    {
      v30 = v11 + *(unsigned int *)(v10 + 216);
      if ( *(char *)(v9 + 195) >= 16
        || (*(_DWORD *)(v9 + 120) & 0x200) != 0
        || (v5[32] & 4) != 0 && (*(_DWORD *)(v9 + 484) || *(_BYTE *)(v9 + 390) == 1) )
      {
        goto LABEL_4;
      }
      v31 = v11 + *(unsigned int *)(v10 + 216);
      while ( (*(_BYTE *)(v31 + 128) & 2) == 0 )
      {
        v31 = *(_QWORD *)(v31 + 440);
        if ( !v31 )
        {
          do
          {
            v32 = *(_DWORD *)(v30 + 140);
            if ( v32 )
              break;
            v30 = *(_QWORD *)(v30 + 440);
          }
          while ( v30 );
          if ( !v32 )
            goto LABEL_4;
          break;
        }
      }
    }
LABEL_6:
    v13 = v5[32];
    if ( (v13 & 1) != 0 )
    {
      v14 = -1;
      v15 = -1;
      v16 = -1;
    }
    else
    {
      v29 = *(_BYTE *)(v9 + 195);
      if ( v29 == 63 )
      {
        v16 = 0;
        v14 = 0;
        v15 = 0;
      }
      else if ( (v13 & 0x10) != 0 )
      {
        v14 = -1;
        v15 = -1;
        v16 = -(v29 != 0) - 1;
      }
      else if ( v12 )
      {
        v16 = -1;
        v15 = ~((1 << v29) - 1);
        v14 = *(_DWORD *)(*(_QWORD *)(v12 + 448) + 140LL);
        if ( (v13 & 8) == 0 )
          v15 &= ~(1 << v29);
      }
      else
      {
        v16 = ~((1 << v29) - 1);
        if ( (v13 & 8) == 0 )
          v16 &= ~(1 << v29);
        v14 = 0;
        v15 = 0;
      }
    }
    *((_QWORD *)v6 - 5) = v10;
    v17 = *((_QWORD *)v5 + 1);
    v5 += 40;
    *((_QWORD *)v6 - 4) = v17;
    *v6 = v16;
    *((_QWORD *)v6 - 2) = v12;
    *(v6 - 2) = v14;
    *(v6 - 1) = v15;
    v6 += 12;
    --v7;
  }
  while ( v7 );
  v18 = (_DWORD *)(a1 + 92);
  v19 = 1;
  LOBYTE(v20) = 0;
  v21 = v2;
  do
  {
    if ( ((unsigned __int8)v20 & (unsigned __int8)v8) == 0 )
    {
      v22 = *(_QWORD *)(v18 - 9);
      if ( v22 )
      {
        v23 = v19;
        *v18 = *(v18 - 1);
        if ( v19 < (unsigned int)v2 )
        {
          v24 = (_DWORD *)(a1 + 48LL * v19 + 88);
          do
          {
            if ( *((_QWORD *)v24 - 4) == v22 )
            {
              *v18 |= *v24;
              v20 = (unsigned __int8)v20 | (1 << v23);
            }
            ++v23;
            v24 += 12;
          }
          while ( v23 < (unsigned int)v2 );
        }
      }
      v20 = (unsigned __int8)v20 | (1 << (v19 - 1));
    }
    ++v19;
    v8 = __ROL4__(v8, 1);
    v18 += 12;
    --v21;
  }
  while ( v21 );
  v25 = (_DWORD *)(a1 + 88);
  v26 = v2;
  do
  {
    v27 = *((_QWORD *)v25 - 4);
    *v25 &= *(_DWORD *)(*((_QWORD *)v25 - 5) + 33752LL);
    if ( v27 )
      v25[1] &= *(_DWORD *)(v27 + 8);
    v25 += 12;
    --v26;
  }
  while ( v26 );
LABEL_23:
  if ( !KiForceIdleDisabled && KiForceIdleState == 4 && (_DWORD)v2 )
  {
    v33 = a1 + 92;
    v34 = v2;
    do
    {
      *(_QWORD *)(v33 - 4) = 0LL;
      *(_QWORD *)(v33 - 20) = 0LL;
      *(_QWORD *)(v33 - 12) = 0LL;
      v33 += 48LL;
      --v34;
    }
    while ( v34 );
  }
  *(_DWORD *)a1 = v2;
  *(_BYTE *)(a1 + 13) = 0;
  result = a2[1];
  *(_BYTE *)(a1 + 9) = result;
  return result;
}
