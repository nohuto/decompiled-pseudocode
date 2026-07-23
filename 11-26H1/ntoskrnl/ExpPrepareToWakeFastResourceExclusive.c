/*
 * XREFs of ExpPrepareToWakeFastResourceExclusive @ 0x1404403C0
 * Callers:
 *     ExpReleaseDisownedFastResourceExclusive @ 0x14041E23C (ExpReleaseDisownedFastResourceExclusive.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall ExpPrepareToWakeFastResourceExclusive(
        signed __int64 *a1,
        signed __int64 **a2,
        signed __int64 *a3,
        int *a4,
        int *a5)
{
  int v7; // ecx
  signed __int64 v10; // r11
  int v11; // ebx
  signed __int64 v12; // rax
  int *v13; // r8
  BOOL v14; // esi
  signed __int64 *v15; // rax
  signed __int64 v16; // r9
  signed __int64 *v17; // rdx
  signed __int64 v18; // rdx
  signed __int64 result; // rax
  signed __int64 v20; // rcx
  signed __int64 v21; // rtt
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rcx
  signed __int64 v24; // rtt
  signed __int64 **v25; // r9

  v7 = 0;
  v10 = 0LL;
  v11 = 1;
  v12 = a1[2];
  v13 = (int *)(a1 + 7);
  v14 = v12 || *v13;
  if ( *v13 )
  {
    *a2 = (signed __int64 *)a1[1];
    a1[1] = 0LL;
    v11 = *v13;
    *v13 = 0;
  }
  else
  {
    if ( v12 )
    {
      *a2 = 0LL;
      v15 = (signed __int64 *)a1[2];
      if ( !v15 )
        goto LABEL_13;
      if ( (signed __int64 *)*v15 == v15 )
      {
        a1[2] = 0LL;
      }
      else
      {
        a1[2] = *v15;
        v16 = *v15;
        if ( *(signed __int64 **)(*v15 + 8) != v15 )
          goto LABEL_39;
        v17 = (signed __int64 *)v15[1];
        if ( (signed __int64 *)*v17 != v15 )
          goto LABEL_39;
        *v17 = v16;
        *(_QWORD *)(v16 + 8) = v17;
      }
      v18 = (signed __int64)*a2;
      v10 = v15[2];
      if ( !*a2 )
      {
        v15[1] = (signed __int64)v15;
        *v15 = (signed __int64)v15;
LABEL_12:
        *a2 = v15;
        goto LABEL_13;
      }
      v25 = *(signed __int64 ***)(v18 + 8);
      if ( *v25 == (signed __int64 *)v18 )
      {
        *v15 = v18;
        v15[1] = (signed __int64)v25;
        *v25 = v15;
        *(_QWORD *)(v18 + 8) = v15;
        goto LABEL_12;
      }
LABEL_39:
      __fastfail(3u);
    }
    *a2 = 0LL;
    v11 = 0;
  }
LABEL_13:
  *a4 = v11;
  *a3 = v10;
  *a5 = 0;
  if ( v14 )
  {
    *a5 = 2;
    v7 = 2;
  }
  if ( v10 )
    *a5 = v7 | 1;
  _m_prefetchw(a1);
  result = *a1;
  if ( v10 )
  {
    do
    {
      if ( a1[2] || *v13 )
        v20 = result | 2;
      else
        v20 = result & 0xFFFFFFFFFFFFFFFDuLL;
      if ( v20 == result )
        break;
      v21 = result;
      result = _InterlockedCompareExchange64(a1, v20, result);
    }
    while ( v21 != result );
  }
  else
  {
    do
    {
      if ( a1[2] || *v13 )
        v22 = result | 2;
      else
        v22 = result & 0xFFFFFFFFFFFFFFFDuLL;
      v23 = v22 & 0xFFFFFFFFFFFFFFFEuLL;
      if ( v11 )
        v23 += 4LL * v11;
      if ( v23 == result )
        break;
      v24 = result;
      result = _InterlockedCompareExchange64(a1, v23, result);
    }
    while ( v24 != result );
  }
  return result;
}
