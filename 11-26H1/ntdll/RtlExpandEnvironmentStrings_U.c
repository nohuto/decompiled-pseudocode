/*
 * XREFs of RtlExpandEnvironmentStrings_U @ 0x18009C8A0
 * Callers:
 *     RtlpCallQueryRegistryRoutine @ 0x18005A26C (RtlpCallQueryRegistryRoutine.c)
 *     sxsisol_ExpandEnvironmentStrings_UEx @ 0x18009AD18 (sxsisol_ExpandEnvironmentStrings_UEx.c)
 *     RtlpLookupSafeCurDirList @ 0x180106064 (RtlpLookupSafeCurDirList.c)
 * Callees:
 *     RtlQueryEnvironmentVariable @ 0x18009CD10 (RtlQueryEnvironmentVariable.c)
 */

__int64 __fastcall RtlExpandEnvironmentStrings_U(__int64 a1, unsigned __int16 *a2, __int64 a3, _DWORD *a4)
{
  _WORD *v4; // rdi
  int v5; // r14d
  __int64 v6; // rbp
  unsigned __int64 v7; // r12
  unsigned __int64 v8; // rbx
  _WORD *v9; // r13
  _WORD *v10; // rsi
  unsigned __int64 v11; // rbp
  __int64 result; // rax
  unsigned __int64 v13; // r15
  int v14; // r8d
  __int64 v15; // rcx
  __int64 v16; // [rsp+90h] [rbp+8h]
  __int64 v17; // [rsp+98h] [rbp+10h] BYREF
  _WORD *v18; // [rsp+A0h] [rbp+18h]
  _DWORD *v19; // [rsp+A8h] [rbp+20h]

  v19 = a4;
  v18 = (_WORD *)a3;
  v16 = a1;
  v4 = (_WORD *)*((_QWORD *)a2 + 1);
  v5 = 0;
  v6 = 0LL;
  v7 = (unsigned __int64)*(unsigned __int16 *)(a3 + 2) >> 1;
  v8 = (unsigned __int64)*a2 >> 1;
  v9 = *(_WORD **)(a3 + 8);
  v17 = 0LL;
  if ( !v8 )
    goto LABEL_26;
  do
  {
    if ( *v4 != 37 )
      goto LABEL_3;
    v13 = 0LL;
    v10 = v4 + 1;
    if ( v8 == 1 )
      goto LABEL_3;
    do
    {
      if ( *v10 == 37 )
        break;
      ++v10;
      ++v13;
    }
    while ( v13 < v8 - 1 );
    if ( v13
      && v13 < v8 - 1
      && ((v14 = RtlQueryEnvironmentVariable(a1, v4 + 1, v13, v9, v7, &v17), (int)(v14 + 0x80000000) < 0)
       || v14 == -1073741789) )
    {
      v15 = v17 + v6;
      v6 = v17 + v6 - 1;
      if ( v14 != -1073741789 )
        v6 = v15;
      v8 += -2LL - v13;
      if ( v14 < 0 )
      {
        v5 = v14;
      }
      else
      {
        v7 -= v17;
        v9 += v17;
      }
    }
    else
    {
LABEL_3:
      if ( v5 >= 0 )
      {
        if ( v7 <= 1 )
        {
          v5 = -1073741789;
        }
        else
        {
          --v7;
          *v9++ = *v4;
        }
      }
      ++v6;
      v10 = v4;
      --v8;
    }
    a1 = v16;
    v4 = v10 + 1;
  }
  while ( v8 );
  if ( v5 >= 0 )
  {
LABEL_26:
    if ( v7 )
      *v9 = 0;
    else
      v5 = -1073741789;
  }
  v11 = v6 + 1;
  if ( v11 > 0x7FFF )
  {
    result = 3221225473LL;
    if ( v19 )
      *v19 = 0;
  }
  else
  {
    if ( v5 >= 0 )
      *v18 = 2 * v11 - 2;
    if ( v19 )
      *v19 = 2 * v11;
    return (unsigned int)v5;
  }
  return result;
}
