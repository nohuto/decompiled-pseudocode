/*
 * XREFs of ?KiAdvanceReadyQueueEnumeratorToNextPhase@@YAJPEAU_KI_READY_QUEUE_ENUMERATOR@@@Z @ 0x1403AAE40
 * Callers:
 *     ?KiAdvanceReadyQueueEnumeratorToNextList@@YAJPEAU_KI_READY_QUEUE_ENUMERATOR@@@Z @ 0x140307490 (-KiAdvanceReadyQueueEnumeratorToNextList@@YAJPEAU_KI_READY_QUEUE_ENUMERATOR@@@Z.c)
 * Callees:
 *     ?KiAdvanceReadyQueueEnumeratorToNextScb@@YAJPEAU_KI_READY_QUEUE_ENUMERATOR@@@Z @ 0x1403AB2B0 (-KiAdvanceReadyQueueEnumeratorToNextScb@@YAJPEAU_KI_READY_QUEUE_ENUMERATOR@@@Z.c)
 */

__int64 __fastcall KiAdvanceReadyQueueEnumeratorToNextPhase(struct _KI_READY_QUEUE_ENUMERATOR *a1)
{
  unsigned int v1; // esi
  unsigned __int8 v2; // di
  unsigned int v4; // r8d
  int v5; // eax
  char *v6; // rcx
  __int64 v7; // rdx
  int v8; // eax
  unsigned int v9; // eax
  int v10; // eax
  unsigned int v11; // r8d
  unsigned __int8 v12; // cl
  __int64 v13; // rax
  __int64 v14; // r8
  unsigned int v15; // r9d
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rax
  unsigned __int8 v19; // bp
  unsigned __int8 v20; // dl
  __int64 v21; // r10
  __int64 v22; // r11
  unsigned int v23; // eax
  __int64 v25; // r10
  unsigned int v26; // ecx
  unsigned int v27; // ebp
  int v28; // r11d
  unsigned __int8 v29; // r9
  unsigned __int8 v30; // cl
  char *v31; // rdx
  __int64 v32; // r9
  __int64 v33; // r8
  int v34; // eax
  __int64 v35; // rax
  unsigned int v36; // r8d
  int v37; // eax
  char *v38; // rcx
  __int64 v39; // rdx
  int v40; // eax
  unsigned int v41; // eax
  __int64 v42; // r10
  unsigned int v43; // ecx
  unsigned int v44; // ebp
  int v45; // r9d
  unsigned __int8 v46; // r11
  unsigned __int8 v47; // cl
  char *v48; // rdx
  __int64 v49; // r10
  __int64 v50; // r8
  int v51; // eax
  __int64 v52; // rax
  int v53; // edx
  __int64 v54; // rcx
  unsigned int v55; // ecx
  __int64 v56; // rcx

  v1 = 0;
  v2 = *((_BYTE *)a1 + 13) + 1;
  if ( v2 < 4u )
  {
    while ( v2 != 2 )
    {
      if ( v2 == 1 )
      {
        v4 = *(_DWORD *)a1;
        v5 = 0;
        *((_DWORD *)a1 + 1) = 0;
        if ( v4 )
        {
          v6 = (char *)a1 + 92;
          v7 = v4;
          do
          {
            v8 = *((_DWORD *)v6 - 1) | v5;
            v6 += 48;
            *((_DWORD *)a1 + 1) = v8;
            v5 = *((_DWORD *)v6 - 12) | v8;
            *((_DWORD *)a1 + 1) = v5;
            --v7;
          }
          while ( v7 );
        }
        v9 = v5 & 0xFFFFFFFE;
        *((_DWORD *)a1 + 1) = v9;
        if ( !v9 )
        {
          v10 = -2147483622;
          goto LABEL_25;
        }
        v25 = *((unsigned __int8 *)a1 + 9);
        _BitScanReverse(&v26, v9);
        *((_BYTE *)a1 + 10) = v25;
        v27 = (unsigned __int8)v26;
        *((_BYTE *)a1 + 8) = v26;
        v28 = 1 << v26;
        if ( ((*((_DWORD *)a1 + 12 * v25 + 22) | *((_DWORD *)a1 + 12 * v25 + 23)) & (1 << v26)) == 0 )
        {
          do
          {
            v29 = v25 + 1;
            *((_BYTE *)a1 + 10) = v25 + 1;
            if ( (unsigned __int8)(v25 + 1) >= v4 )
            {
              *((_BYTE *)a1 + 10) = 0;
              v29 = 0;
            }
            LOBYTE(v25) = v29;
          }
          while ( ((*((_DWORD *)a1 + 12 * v29 + 22) | *((_DWORD *)a1 + 12 * v29 + 23)) & v28) == 0 );
        }
        v30 = 0;
        v31 = (char *)a1 + 48 * (unsigned __int8)v25 + 48;
        v32 = *(_QWORD *)v31;
        v33 = *((_QWORD *)v31 + 1);
        *((_BYTE *)a1 + 11) = 0;
        if ( (v28 & *((_DWORD *)v31 + 10)) != 0 )
        {
          *((_BYTE *)a1 + 11) = 1;
          v30 = 1;
        }
        if ( (v28 & *((_DWORD *)v31 + 11)) != 0 )
        {
          v30 |= 2u;
          *((_BYTE *)a1 + 11) = v30;
        }
        if ( ((unsigned __int8)(v30 - 1) & v30) != 0 )
          LOBYTE(v34) = !_bittest((const signed __int32 *)(v32 + 33756), v27);
        else
          _BitScanForward((unsigned int *)&v34, v30);
        *((_BYTE *)a1 + 12) = v34;
        if ( (_BYTE)v34 )
        {
          if ( (unsigned __int8)v34 != 1 )
          {
LABEL_44:
            *((_QWORD *)a1 + 5) = *((_QWORD *)a1 + 4);
LABEL_45:
            v10 = 0;
            goto LABEL_25;
          }
          v35 = v33 + 16 * (*((unsigned __int8 *)a1 + 8) + 4LL);
        }
        else
        {
          v35 = v32 + 16 * (*((unsigned __int8 *)a1 + 8) + 2116LL);
        }
        *((_QWORD *)a1 + 4) = v35;
        goto LABEL_44;
      }
      if ( v2 == 3 )
      {
        v36 = *(_DWORD *)a1;
        v37 = 0;
        *((_DWORD *)a1 + 1) = 0;
        if ( v36 )
        {
          v38 = (char *)a1 + 92;
          v39 = v36;
          do
          {
            v40 = *((_DWORD *)v38 - 1) | v37;
            v38 += 48;
            *((_DWORD *)a1 + 1) = v40;
            v37 = *((_DWORD *)v38 - 12) | v40;
            *((_DWORD *)a1 + 1) = v37;
            --v39;
          }
          while ( v39 );
        }
        v41 = v37 & 1;
        *((_DWORD *)a1 + 1) = v41;
        if ( !v41 )
        {
          v10 = -2147483622;
          goto LABEL_25;
        }
        v42 = *((unsigned __int8 *)a1 + 9);
        _BitScanReverse(&v43, v41);
        *((_BYTE *)a1 + 10) = v42;
        v44 = (unsigned __int8)v43;
        *((_BYTE *)a1 + 8) = v43;
        v45 = 1 << v43;
        if ( ((*((_DWORD *)a1 + 12 * v42 + 22) | *((_DWORD *)a1 + 12 * v42 + 23)) & (1 << v43)) == 0 )
        {
          do
          {
            v46 = v42 + 1;
            *((_BYTE *)a1 + 10) = v42 + 1;
            if ( (unsigned __int8)(v42 + 1) >= v36 )
            {
              *((_BYTE *)a1 + 10) = 0;
              v46 = 0;
            }
            LOBYTE(v42) = v46;
          }
          while ( ((*((_DWORD *)a1 + 12 * v46 + 22) | *((_DWORD *)a1 + 12 * v46 + 23)) & v45) == 0 );
        }
        v47 = 0;
        v48 = (char *)a1 + 48 * (unsigned __int8)v42 + 48;
        v49 = *(_QWORD *)v48;
        v50 = *((_QWORD *)v48 + 1);
        *((_BYTE *)a1 + 11) = 0;
        if ( (v45 & *((_DWORD *)v48 + 10)) != 0 )
        {
          *((_BYTE *)a1 + 11) = 1;
          v47 = 1;
        }
        if ( (v45 & *((_DWORD *)v48 + 11)) != 0 )
        {
          v47 |= 2u;
          *((_BYTE *)a1 + 11) = v47;
        }
        if ( ((unsigned __int8)(v47 - 1) & v47) != 0 )
          LOBYTE(v51) = !_bittest((const signed __int32 *)(v49 + 33756), v44);
        else
          _BitScanForward((unsigned int *)&v51, v47);
        *((_BYTE *)a1 + 12) = v51;
        if ( (_BYTE)v51 )
        {
          if ( (unsigned __int8)v51 != 1 )
          {
LABEL_67:
            *((_QWORD *)a1 + 5) = *((_QWORD *)a1 + 4);
            v10 = 0;
LABEL_25:
            if ( v10 >= 0 )
              goto LABEL_27;
            goto LABEL_26;
          }
          v52 = v50 + 16 * (*((unsigned __int8 *)a1 + 8) + 4LL);
        }
        else
        {
          v52 = v49 + 16 * (*((unsigned __int8 *)a1 + 8) + 2116LL);
        }
        *((_QWORD *)a1 + 4) = v52;
        goto LABEL_67;
      }
LABEL_26:
      if ( ++v2 >= 4u )
        goto LABEL_27;
    }
    v11 = *(_DWORD *)a1;
    v12 = 0;
    if ( !*(_DWORD *)a1 )
    {
LABEL_18:
      v19 = 0;
      v20 = *((_BYTE *)a1 + 9);
      v21 = 0LL;
      do
      {
        v22 = *((_QWORD *)a1 + 6 * v20 + 8);
        if ( v22 && (!v21 || *(_DWORD *)(v21 + 140) < *(_DWORD *)(v22 + 140)) )
        {
          v19 = v20;
          v21 = *((_QWORD *)a1 + 6 * v20 + 8);
        }
        v23 = (unsigned __int8)(v20 + 1);
        v20 = 0;
        if ( v23 < v11 )
          v20 = v23;
      }
      while ( v20 != *((_BYTE *)a1 + 9) );
      if ( !v21 )
      {
        v10 = -2147483622;
        goto LABEL_25;
      }
      *((_BYTE *)a1 + 10) = v19;
      *((_QWORD *)a1 + 3) = v21;
      *((_QWORD *)a1 + 2) = v21;
      v53 = *(unsigned __int16 *)(v21 + 136);
      *((_DWORD *)a1 + 1) = v53;
      v54 = 48LL * v19;
      if ( *(_DWORD *)(v21 + 140) == *(_DWORD *)((char *)a1 + v54 + 80) )
      {
        v53 &= *(_DWORD *)((char *)a1 + v54 + 84);
        *((_DWORD *)a1 + 1) = v53;
      }
      if ( v53 || (int)KiAdvanceReadyQueueEnumeratorToNextScb(a1) >= 0 )
      {
        _BitScanReverse(&v55, *((_DWORD *)a1 + 1));
        *((_BYTE *)a1 + 8) = v55;
        v56 = *((_QWORD *)a1 + 2) + 16 * ((unsigned __int8)v55 + 10LL);
        *((_QWORD *)a1 + 4) = v56;
        *((_QWORD *)a1 + 5) = v56;
        goto LABEL_45;
      }
      goto LABEL_26;
    }
    while ( 1 )
    {
      v13 = v12 + 1LL;
      v14 = 6 * v13;
      v15 = *((_DWORD *)a1 + 12 * v13 + 8);
      if ( v15 )
        break;
LABEL_17:
      v11 = *(_DWORD *)a1;
      if ( (unsigned int)++v12 >= *(_DWORD *)a1 )
        goto LABEL_18;
    }
    v16 = *(_QWORD *)(*((_QWORD *)a1 + 6 * v13) + 33848LL);
    if ( (v16 & 1) != 0 )
    {
      if ( v16 == 1 )
      {
LABEL_15:
        v18 = 0LL;
LABEL_16:
        *((_QWORD *)a1 + v14 + 2) = v18;
        goto LABEL_17;
      }
      v17 = v16 ^ ((*((_QWORD *)a1 + 6 * v13) + 33840LL) | 1);
    }
    else
    {
      v17 = *(_QWORD *)(*((_QWORD *)a1 + 6 * v13) + 33848LL);
    }
    if ( v17 )
    {
      v18 = v17 - 104;
      if ( *(_DWORD *)(v18 + 140) <= v15 )
        goto LABEL_16;
    }
    goto LABEL_15;
  }
LABEL_27:
  *((_BYTE *)a1 + 13) = v2;
  if ( v2 == 4 )
    return (unsigned int)-2147483622;
  return v1;
}
