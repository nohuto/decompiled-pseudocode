/*
 * XREFs of RaspCreateSegmentList @ 0x14035778C
 * Callers:
 *     RaspScanConvert @ 0x140356F8C (RaspScanConvert.c)
 * Callees:
 *     RaspInterpolatePoint @ 0x140356F04 (RaspInterpolatePoint.c)
 *     RaspAllocateMemory @ 0x140357710 (RaspAllocateMemory.c)
 *     RaspDestroySegmentList @ 0x140357ACC (RaspDestroySegmentList.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall RaspCreateSegmentList(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        _QWORD *a4,
        unsigned int *a5,
        __int64 *a6)
{
  __int64 v7; // r15
  __int64 result; // rax
  unsigned __int16 *v9; // r13
  unsigned int v10; // esi
  void *v11; // rbx
  int v12; // edx
  unsigned int v13; // r12d
  int v14; // r9d
  _BYTE *v15; // r10
  unsigned int v16; // r11d
  unsigned int v17; // r8d
  char *Memory; // rax
  char *v19; // r14
  int v20; // ebp
  char *v21; // rdi
  unsigned int i; // esi
  unsigned int v23; // r14d
  unsigned int v24; // r11d
  unsigned int v25; // r9d
  unsigned int v26; // edx
  int v27; // r8d
  __int64 v28; // r10
  __int64 v29; // r8
  __int64 v30; // r14
  __int64 v31; // rcx
  __int64 v32; // r15
  __int64 v33; // rax
  __int64 v34; // rax
  unsigned int v35; // edi
  __int64 v36; // r9
  __int64 v37; // rax
  int v38; // eax
  __int64 v39; // rdx
  bool v40; // zf
  char v41; // al
  __int64 v42; // rax
  unsigned int v43; // [rsp+20h] [rbp-48h]
  unsigned int v44; // [rsp+24h] [rbp-44h]
  void *v45; // [rsp+28h] [rbp-40h]

  v7 = a2;
  if ( a3 < 2 )
    return 3221225485LL;
  v9 = *(unsigned __int16 **)(a1 + 26);
  v10 = a3 - 2;
  v11 = 0LL;
  v44 = a3 - 2;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  if ( a3 == 2 )
    goto LABEL_29;
  v15 = (_BYTE *)(v7 + 16);
  do
  {
    v16 = v14 + 1;
    v17 = v14 + 1;
    if ( v14 == v9[v12] )
    {
      if ( v12 )
        v17 = v9[v12 - 1] + 1;
      else
        v17 = 0;
      ++v12;
    }
    if ( (*v15 & 1) != 0 || (*(_BYTE *)(17LL * v17 + v7 + 16) & 1) == 0 )
      ++v13;
    v15 += 17;
    ++v14;
  }
  while ( v16 < v10 );
  if ( !v13 )
  {
LABEL_29:
    *a4 = 0LL;
    *a5 = 0;
    return 0LL;
  }
  Memory = (char *)RaspAllocateMemory(25LL * v13, a6);
  v45 = Memory;
  v19 = Memory;
  if ( !Memory )
  {
    *a5 = 0;
    return 3221225626LL;
  }
  memset_0(Memory, 0, 25LL * v13);
  v20 = 0;
  v21 = v19 + 16;
  for ( i = 0; ; ++i )
  {
    if ( i >= v44 )
    {
      v35 = 0;
      v11 = v45;
      goto LABEL_28;
    }
    v23 = i + 1;
    v43 = i + 1;
    v24 = i + 1;
    v25 = i - 1;
    v26 = i + 2;
    if ( i )
    {
      if ( v20 && i == v9[v20 - 1] + 1 )
        v25 = v9[v20];
    }
    else
    {
      v25 = *v9;
    }
    v27 = v9[v20];
    if ( i == v27 - 1 )
    {
      if ( v20 )
        v26 = v9[v20 - 1] + 1;
      else
        v26 = 0;
    }
    if ( i == v27 )
    {
      if ( v20 )
      {
        v38 = v9[v20 - 1];
        v24 = v38 + 1;
        v43 = v38 + 1;
        v26 = v38 + 2;
      }
      else
      {
        v24 = 0;
        v43 = 0;
        v26 = 1;
      }
      ++v20;
    }
    v28 = 17LL * i;
    v29 = v28 + v7;
    if ( (*(_BYTE *)(v28 + v7 + 16) & 1) != 0 )
    {
      v36 = v7 + 17LL * v24;
      if ( (*(_BYTE *)(v36 + 16) & 1) != 0 )
      {
        *((_QWORD *)v21 - 2) = v29;
        *((_QWORD *)v21 - 1) = v36;
        *(_QWORD *)v21 = v36;
        v21[8] = 1;
      }
      else
      {
        v39 = v7 + 17LL * v26;
        v40 = (*(_BYTE *)(v39 + 16) & 1) == 0;
        *((_QWORD *)v21 - 2) = v29;
        *((_QWORD *)v21 - 1) = v36;
        if ( v40 )
        {
          v42 = RaspInterpolatePoint(v7 + 17LL * v24, v39, (__int64)a6);
          *(_QWORD *)v21 = v42;
          if ( !v42 )
            goto LABEL_51;
          v24 = v43;
          v41 = 4;
        }
        else
        {
          *(_QWORD *)v21 = v39;
          v41 = 2;
        }
        v21[8] = v41;
        if ( v24 > i )
        {
          ++i;
          if ( v23 == v9[v20] )
            ++v20;
        }
      }
      goto LABEL_25;
    }
    if ( (i || (*(_BYTE *)(17LL * v25 + v7 + 16) & 1) == 0)
      && (!v20 || i != v9[v20 - 1] + 1 || (*(_BYTE *)(17LL * v25 + v7 + 16) & 1) == 0) )
    {
      break;
    }
LABEL_26:
    ;
  }
  v30 = v28 + v7;
  v31 = v7 + 17LL * v25;
  v32 = 17LL * v24 + v7;
  if ( (*(_BYTE *)(v32 + 16) & 1) != 0 )
  {
    v37 = RaspInterpolatePoint(v31, v30, (__int64)a6);
    *((_QWORD *)v21 - 2) = v37;
    if ( !v37 )
      goto LABEL_51;
    *((_QWORD *)v21 - 1) = v30;
    *(_QWORD *)v21 = v32;
    v21[8] = 3;
LABEL_24:
    v7 = a2;
LABEL_25:
    v21 += 25;
    goto LABEL_26;
  }
  v33 = RaspInterpolatePoint(v31, v30, (__int64)a6);
  *((_QWORD *)v21 - 2) = v33;
  if ( v33 )
  {
    *((_QWORD *)v21 - 1) = v30;
    v34 = RaspInterpolatePoint(a2 + 17LL * i, v32, (__int64)a6);
    *(_QWORD *)v21 = v34;
    if ( v34 )
    {
      v21[8] = 5;
      goto LABEL_24;
    }
  }
LABEL_51:
  v35 = -1073741670;
  RaspDestroySegmentList(v45, v13, a6);
  v13 = 0;
LABEL_28:
  *a5 = v13;
  result = v35;
  *a4 = v11;
  return result;
}
