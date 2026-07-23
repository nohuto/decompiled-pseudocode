/*
 * XREFs of CmpValidateComponents @ 0x140A22B60
 * Callers:
 *     CmpGetSymbolicLinkTarget @ 0x1408C0924 (CmpGetSymbolicLinkTarget.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpValidateComponents(unsigned int a1, __int64 a2)
{
  unsigned int i; // eax
  _WORD *v4; // rdx

  for ( i = 0; ; ++i )
  {
    if ( i >= a1 )
      return 0LL;
    v4 = (_WORD *)(i >= 8 ? *(_QWORD *)(a2 + 160) + 16 * (i - 8 + 6LL) : a2 + 16 * (i + 2LL));
    if ( *v4 > 0x200u )
      break;
  }
  return 3221225485LL;
}
