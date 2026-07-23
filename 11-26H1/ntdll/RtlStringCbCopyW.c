/*
 * XREFs of RtlStringCbCopyW @ 0x1800CA6D0
 * Callers:
 *     SwitchedRtlGetVersion @ 0x1800833F0 (SwitchedRtlGetVersion.c)
 *     RtlGetVersion @ 0x180083D40 (RtlGetVersion.c)
 *     RtlCreateTagHeap @ 0x1800C89F0 (RtlCreateTagHeap.c)
 *     RtlInstallFunctionTableCallback @ 0x1800CA290 (RtlInstallFunctionTableCallback.c)
 *     RtlpGetNameFromLangInfoNode @ 0x1800CA5C0 (RtlpGetNameFromLangInfoNode.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlStringCbCopyW(_WORD *a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rdx
  unsigned __int64 v5; // r8
  __int64 v6; // r9
  __int16 v7; // ax
  _WORD *v8; // rax
  __int64 result; // rax

  v3 = a2 >> 1;
  if ( v3 && v3 <= 0x7FFFFFFF )
  {
    v5 = 2147483646 - v3;
    v6 = a3 - (_QWORD)a1;
    do
    {
      if ( !(v5 + v3) )
        break;
      v7 = *(_WORD *)((char *)a1 + v6);
      if ( !v7 )
        break;
      *a1++ = v7;
      --v3;
    }
    while ( v3 );
    v8 = a1 - 1;
    if ( v3 )
      v8 = a1;
    *v8 = 0;
    result = 2147483653LL;
    if ( v3 )
      return 0LL;
  }
  else
  {
    result = 3221225485LL;
    if ( v3 )
      *a1 = 0;
  }
  return result;
}
