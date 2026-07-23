/*
 * XREFs of RtlCmDecodeMemIoResource @ 0x180143EF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall RtlCmDecodeMemIoResource(__int64 a1, _QWORD *a2)
{
  unsigned __int64 result; // rax

  result = 0LL;
  if ( *(_BYTE *)a1 == 3 || *(_BYTE *)a1 == 1 )
  {
    result = *(unsigned int *)(a1 + 12);
  }
  else if ( (*(_WORD *)(a1 + 2) & 0x200) != 0 )
  {
    result = (unsigned __int64)*(unsigned int *)(a1 + 12) << 8;
  }
  else if ( (*(_WORD *)(a1 + 2) & 0x400) != 0 )
  {
    result = (unsigned __int64)*(unsigned int *)(a1 + 12) << 16;
  }
  else if ( (*(_WORD *)(a1 + 2) & 0x800) != 0 )
  {
    result = (unsigned __int64)*(unsigned int *)(a1 + 12) << 32;
  }
  if ( a2 )
    *a2 = *(_QWORD *)(a1 + 4);
  return result;
}
