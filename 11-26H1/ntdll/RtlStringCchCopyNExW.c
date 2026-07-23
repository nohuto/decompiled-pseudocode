/*
 * XREFs of RtlStringCchCopyNExW @ 0x1800AF4EC
 * Callers:
 *     punycode_encode @ 0x1800AEE44 (punycode_encode.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlStringCchCopyNExW(_WORD *a1, __int64 a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  _WORD *v6; // r10
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int16 v10; // ax
  _WORD *v11; // rax
  __int64 v12; // rax
  _WORD *v13; // r8
  unsigned int v14; // ecx
  __int64 result; // rax

  if ( (unsigned __int64)(a2 - 1) > 0x7FFFFFFE )
  {
    result = 3221225485LL;
    if ( a2 )
      *a1 = 0;
  }
  else
  {
    v6 = a1;
    v7 = 0LL;
    v8 = 4 - a2;
    v9 = a3 - (_QWORD)v6;
    do
    {
      if ( !(v8 + a2) )
        break;
      v10 = *(_WORD *)((char *)v6 + v9);
      if ( !v10 )
        break;
      *v6 = v10;
      ++v7;
      ++v6;
      --a2;
    }
    while ( a2 );
    v11 = v6 - 1;
    if ( a2 )
      v11 = v6;
    *v11 = 0;
    v12 = v7 - 1;
    if ( a2 )
      v12 = v7;
    v13 = &a1[v12];
    v14 = a2 == 0 ? 0x80000005 : 0;
    if ( a2 || (result = v14, v14 == -2147483643) )
    {
      result = v14;
      if ( a5 )
        *a5 = v13;
    }
  }
  return result;
}
