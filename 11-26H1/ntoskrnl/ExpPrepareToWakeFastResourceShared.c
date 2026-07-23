/*
 * XREFs of ExpPrepareToWakeFastResourceShared @ 0x14041E380
 * Callers:
 *     ExpReleaseDisownedFastResourceShared @ 0x14041E108 (ExpReleaseDisownedFastResourceShared.c)
 * Callees:
 *     <none>
 */

int *__fastcall ExpPrepareToWakeFastResourceShared(
        signed __int64 *a1,
        signed __int64 **a2,
        signed __int64 *a3,
        int *a4,
        int *a5)
{
  signed __int64 v9; // rax
  int v10; // ebx
  int v11; // ebp
  signed __int64 v12; // r8
  _DWORD *v13; // r10
  __int64 v14; // r9
  BOOL v15; // edi
  unsigned __int64 v16; // rcx
  signed __int64 v17; // rtt
  signed __int64 v18; // rcx
  signed __int64 *v19; // rax
  signed __int64 v20; // rdx
  signed __int64 *v21; // rcx
  signed __int64 v22; // rdx
  int *result; // rax
  signed __int64 **v24; // r8

  _m_prefetchw(a1);
  v9 = *a1;
  v10 = 0;
  v11 = 1;
  do
  {
    v12 = a1[2];
    v13 = a1 + 7;
    v14 = (v9 >> 2) - 1;
    v15 = v12 || *v13;
    v16 = (v9 & 0xFFFFFFFFFFFFFFFDuLL | (2LL * v15)) ^ ((v9 & 0xFFFFFFFFFFFFFFFDuLL | (2LL * v15)) ^ ((v9 & 0xFFFFFFFFFFFFFFFCuLL | (2LL * v15) & 0xFFFFFFFFFFFFFFFCuLL) - 1)) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( v9 >> 2 == 1 )
    {
      if ( v12 )
      {
        v16 |= 1uLL;
      }
      else if ( *v13 )
      {
        v16 = ((v16 & 0xFFFFFFFFFFFFFFFCuLL) + 4LL * (unsigned int)*v13) | v16 & 3;
      }
    }
    if ( v16 == v9 )
      break;
    v17 = v9;
    v9 = _InterlockedCompareExchange64(a1, v16, v9);
  }
  while ( v17 != v9 );
  v18 = 0LL;
  if ( v14 )
    goto LABEL_30;
  if ( a1[2] )
  {
    *a2 = 0LL;
    v19 = (signed __int64 *)a1[2];
    if ( !v19 )
      goto LABEL_19;
    if ( (signed __int64 *)*v19 == v19 )
    {
      a1[2] = 0LL;
    }
    else
    {
      a1[2] = *v19;
      v20 = *v19;
      if ( *(signed __int64 **)(*v19 + 8) != v19 )
        goto LABEL_28;
      v21 = (signed __int64 *)v19[1];
      if ( (signed __int64 *)*v21 != v19 )
        goto LABEL_28;
      *v21 = v20;
      *(_QWORD *)(v20 + 8) = v21;
    }
    v22 = (signed __int64)*a2;
    v18 = v19[2];
    if ( !*a2 )
    {
      v19[1] = (signed __int64)v19;
      *v19 = (signed __int64)v19;
LABEL_18:
      *a2 = v19;
      goto LABEL_19;
    }
    v24 = *(signed __int64 ***)(v22 + 8);
    if ( *v24 == (signed __int64 *)v22 )
    {
      *v19 = v22;
      v19[1] = (signed __int64)v24;
      *v24 = v19;
      *(_QWORD *)(v22 + 8) = v19;
      goto LABEL_18;
    }
LABEL_28:
    __fastfail(3u);
  }
  if ( *((_DWORD *)a1 + 14) )
  {
    *a2 = (signed __int64 *)a1[1];
    a1[1] = 0LL;
    v11 = *((_DWORD *)a1 + 14);
    *((_DWORD *)a1 + 14) = 0;
  }
  else
  {
LABEL_30:
    v11 = 0;
    *a2 = 0LL;
  }
LABEL_19:
  result = a5;
  *a4 = v11;
  *a3 = v18;
  *a5 = 0;
  if ( v15 )
  {
    *a5 = 2;
    v10 = 2;
  }
  if ( v18 )
    *a5 = v10 | 1;
  return result;
}
