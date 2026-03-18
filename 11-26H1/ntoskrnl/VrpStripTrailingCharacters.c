/*
 * XREFs of VrpStripTrailingCharacters @ 0x140978B60
 * Callers:
 *     VrpCreateNamespaceNode @ 0x1409787E0 (VrpCreateNamespaceNode.c)
 *     VrpPreLoadKey @ 0x140B1B118 (VrpPreLoadKey.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VrpStripTrailingCharacters(unsigned __int16 *a1)
{
  unsigned __int16 v1; // dx
  __int64 result; // rax
  __int64 v4; // r8
  _WORD *v5; // rcx

  v1 = *a1;
  result = *a1 >> 1;
  if ( (_DWORD)result )
  {
    v4 = (unsigned int)result - 1LL;
    v5 = (_WORD *)(*((_QWORD *)a1 + 1) + 2 * v4);
    result = 2LL;
    do
    {
      if ( *v5 != 92 )
        break;
      v1 -= 2;
      --v5;
      --v4;
      *a1 = v1;
    }
    while ( v4 >= 0 );
  }
  return result;
}
