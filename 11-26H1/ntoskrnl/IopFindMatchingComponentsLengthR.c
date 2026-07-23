/*
 * XREFs of IopFindMatchingComponentsLengthR @ 0x1409359C0
 * Callers:
 *     IopSymlinkProcessReparse @ 0x14093415C (IopSymlinkProcessReparse.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IopFindMatchingComponentsLengthR(unsigned __int16 *a1, unsigned __int16 *a2)
{
  unsigned __int64 v2; // rax
  __int64 v3; // r10
  _WORD *v4; // r8
  unsigned __int64 v5; // r11
  _WORD *v6; // r9
  _WORD *v7; // rcx

  v2 = *((_QWORD *)a1 + 1);
  v3 = *a1;
  v4 = 0LL;
  v5 = *((_QWORD *)a2 + 1);
  v6 = (_WORD *)(v3 + v2);
  if ( v3 + v2 < v2 )
    return 0LL;
  v7 = (_WORD *)(v5 + *a2);
  do
  {
    if ( (unsigned __int64)v7 < v5 || *v6 != *v7 )
      break;
    if ( *v6 == 92 )
      v4 = v6;
    --v6;
    --v7;
  }
  while ( (unsigned __int64)v6 >= v2 );
  if ( v4 )
    return (__int64)(v3 + v2 - (_QWORD)v4) >> 1;
  else
    return 0LL;
}
