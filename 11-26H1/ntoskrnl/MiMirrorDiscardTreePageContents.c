/*
 * XREFs of MiMirrorDiscardTreePageContents @ 0x140527C90
 * Callers:
 *     MiMirrorDiscardPageContents @ 0x140527C58 (MiMirrorDiscardPageContents.c)
 * Callees:
 *     MiGetZeroingContext @ 0x140457050 (MiGetZeroingContext.c)
 */

_QWORD *__fastcall MiMirrorDiscardTreePageContents(_QWORD **a1)
{
  _QWORD *result; // rax
  _QWORD *v2; // rdx
  __int64 ZeroingContext; // rax
  _QWORD *v4; // rcx
  _QWORD *v5; // rcx

  result = *a1;
  v2 = 0LL;
  while ( result )
  {
    v2 = result;
    result = (_QWORD *)*result;
  }
  while ( v2 )
  {
    ZeroingContext = MiGetZeroingContext((__int64)v2);
    *(_QWORD *)(ZeroingContext + 24) |= 2uLL;
    result = v2;
    v4 = (_QWORD *)v2[1];
    if ( v4 )
    {
      v2 = (_QWORD *)v2[1];
      v5 = (_QWORD *)*v4;
      if ( v5 )
      {
        do
        {
          result = (_QWORD *)*v5;
          v2 = v5;
          v5 = result;
        }
        while ( result );
      }
    }
    else
    {
      while ( 1 )
      {
        v2 = (_QWORD *)(v2[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v2 || (_QWORD *)*v2 == result )
          break;
        result = v2;
      }
    }
  }
  return result;
}
