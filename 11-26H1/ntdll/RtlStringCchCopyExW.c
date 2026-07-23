/*
 * XREFs of RtlStringCchCopyExW @ 0x1800C1770
 * Callers:
 *     LdrpMakeUnicodeStringFromPathElement @ 0x18012047C (LdrpMakeUnicodeStringFromPathElement.c)
 *     RtlpGetCompleteLanguageFallback @ 0x180142624 (RtlpGetCompleteLanguageFallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlStringCchCopyExW(_WORD *a1, __int64 a2, __int64 a3, _QWORD *a4, _QWORD *a5)
{
  __int64 v7; // r11
  __int64 v8; // r8
  __int64 v9; // rax
  _WORD *v10; // r10
  __int16 v11; // cx
  _WORD *v12; // rcx
  unsigned int v13; // edx
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 result; // rax

  if ( (unsigned __int64)(a2 - 1) > 0x7FFFFFFE )
  {
    result = 3221225485LL;
    if ( a2 )
      *a1 = 0;
  }
  else
  {
    v7 = 0LL;
    v8 = a3 - (_QWORD)a1;
    v9 = a2;
    v10 = a1;
    do
    {
      if ( !(2147483646 - a2 + v9) )
        break;
      v11 = *(_WORD *)((char *)v10 + v8);
      if ( !v11 )
        break;
      *v10 = v11;
      ++v7;
      ++v10;
      --v9;
    }
    while ( v9 );
    v12 = v10 - 1;
    v13 = -2147483643;
    if ( v9 )
    {
      v12 = v10;
      v13 = 0;
    }
    *v12 = 0;
    v14 = v7 - 1;
    if ( v9 )
      v14 = v7;
    v15 = a2 - v14;
    if ( a4 )
      *a4 = &a1[v14];
    result = v13;
    if ( a5 )
      *a5 = v15;
  }
  return result;
}
