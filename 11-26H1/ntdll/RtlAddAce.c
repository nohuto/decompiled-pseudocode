/*
 * XREFs of RtlAddAce @ 0x18003C430
 * Callers:
 *     RtlCreateAndSetSD @ 0x1800C8770 (RtlCreateAndSetSD.c)
 * Callees:
 *     RtlValidAcl @ 0x18003D180 (RtlValidAcl.c)
 */

__int64 __fastcall RtlAddAce(char *a1, unsigned int a2, unsigned int a3, char *a4, unsigned int a5)
{
  char *v9; // rax
  unsigned int v10; // r15d
  unsigned int v11; // r11d
  unsigned int v12; // r10d
  unsigned __int64 v13; // r9
  unsigned __int64 v14; // rdx
  unsigned __int8 *v15; // r10
  unsigned __int8 v16; // r13
  __int64 v17; // r8
  unsigned __int64 v18; // rsi
  int v19; // ecx
  __int64 v20; // r9
  __int64 v21; // r10
  char v22; // cl
  char *v23; // rbx
  __int64 result; // rax
  unsigned __int8 v25; // cl
  __int16 v26; // [rsp+20h] [rbp-38h]

  if ( !(unsigned __int8)RtlValidAcl(a1) )
    return 3221225485LL;
  v9 = a1 + 8;
  v10 = *((unsigned __int16 *)a1 + 2);
  v11 = 0;
  v12 = 0;
  v13 = (unsigned __int64)(a1 + 8);
  v14 = (unsigned __int64)&a1[*((unsigned __int16 *)a1 + 1)];
  while ( v12 < v10 )
  {
    if ( v13 >= v14 )
      return 3221225485LL;
    ++v12;
    v13 += *(unsigned __int16 *)(v13 + 2);
  }
  v15 = (unsigned __int8 *)a4;
  v16 = a2;
  if ( v13 > v14 )
    v13 = 0LL;
  v26 = 0;
  v17 = a5;
  if ( (unsigned __int8)a2 <= (unsigned __int8)*a1 )
    v16 = *a1;
  v18 = (unsigned __int64)&a4[a5];
  while ( (unsigned __int64)v15 < v18 )
  {
    v25 = *v15;
    if ( *v15 > 3u )
    {
      if ( v25 <= 4u )
      {
        if ( a2 < 3 )
          return 3221225485LL;
      }
      else if ( v25 <= 8u )
      {
        if ( a2 < 4 )
          return 3221225485LL;
      }
      else if ( !*((_WORD *)v15 + 1) )
      {
        return 3221225485LL;
      }
    }
    v15 += *((unsigned __int16 *)v15 + 1);
    ++v26;
  }
  if ( (unsigned __int64)v15 > v18 )
    return 3221225485LL;
  if ( !v13 || v13 + a5 > v14 )
    return 3221225507LL;
  if ( a3 )
  {
    do
    {
      if ( v11 >= v10 )
        break;
      ++v11;
      v9 += *((unsigned __int16 *)v9 + 1);
    }
    while ( v11 < a3 );
  }
  v19 = v13 - (_DWORD)v9 - 1;
  v20 = v19;
  if ( v19 >= 0 )
  {
    v21 = v19 + a5;
    do
    {
      v22 = v9[v20--];
      v9[v21] = v22;
      v21 = (unsigned int)(v21 - 1);
    }
    while ( v20 >= 0 );
  }
  if ( a5 )
  {
    v23 = (char *)(a4 - v9);
    do
    {
      *v9 = v9[(_QWORD)v23];
      ++v9;
      --v17;
    }
    while ( v17 );
  }
  *((_WORD *)a1 + 2) += v26;
  result = 0LL;
  *a1 = v16;
  return result;
}
