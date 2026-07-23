/*
 * XREFs of RtlStringCchCopyNW @ 0x1800DC74C
 * Callers:
 *     LdrpGetFileDriverStoreRoot @ 0x1800DC68C (LdrpGetFileDriverStoreRoot.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlStringCchCopyNW(_WORD *a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v4; // r10
  __int64 v5; // r8
  __int16 v6; // ax
  _WORD *v7; // rax
  __int64 result; // rax

  if ( a4 > 0x7FFFFFFE )
  {
    result = 3221225485LL;
    *a1 = 0;
  }
  else
  {
    v4 = a3 - (_QWORD)a1;
    v5 = 351LL;
    do
    {
      if ( !(v5 + a4 - 351) )
        break;
      v6 = *(_WORD *)((char *)a1 + v4);
      if ( !v6 )
        break;
      *a1++ = v6;
      --v5;
    }
    while ( v5 );
    v7 = a1 - 1;
    if ( v5 )
      v7 = a1;
    *v7 = 0;
    return v5 == 0 ? 0x80000005 : 0;
  }
  return result;
}
