/*
 * XREFs of VrpGetNextToken @ 0x14093AAB0
 * Callers:
 *     VrpCreateNamespaceNode @ 0x14093A7F0 (VrpCreateNamespaceNode.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VrpGetNextToken(unsigned __int16 *a1, __int64 *a2, __int64 a3)
{
  unsigned __int64 v5; // r11
  __int64 result; // rax
  unsigned __int64 v8; // rcx
  __int64 v9; // r8
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  __int64 i; // rcx

  *(_WORD *)a3 = 0;
  v5 = *a1;
  result = *a2;
  v8 = 2 * *a2;
  if ( v8 < v5 )
  {
    do
    {
      if ( *(_WORD *)(*((_QWORD *)a1 + 1) + v8) != 92 )
        break;
      ++result;
      v8 = 2 * result;
    }
    while ( 2 * result < v5 );
  }
  v9 = 2 * result;
  *(_QWORD *)(a3 + 8) = 2 * result + *((_QWORD *)a1 + 1);
  v10 = *a1;
  if ( 2 * result < v10 )
  {
    LOWORD(v11) = *a1;
    do
    {
      LOWORD(v10) = v11;
      if ( *(_WORD *)(v9 + *((_QWORD *)a1 + 1)) == 92 )
        break;
      *(_WORD *)a3 += 2;
      ++result;
      v11 = *a1;
      LOWORD(v10) = *a1;
      v9 = 2 * result;
    }
    while ( 2 * result < v11 );
  }
  for ( i = 2 * result; 2 * result < (unsigned __int64)(unsigned __int16)v10; i = 2 * result )
  {
    if ( *(_WORD *)(*((_QWORD *)a1 + 1) + i) != 92 )
      break;
    ++result;
  }
  *a2 = result;
  return result;
}
