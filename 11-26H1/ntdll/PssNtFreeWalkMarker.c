/*
 * XREFs of PssNtFreeWalkMarker @ 0x1801113F0
 * Callers:
 *     <none>
 * Callees:
 *     NtUnmapViewOfSection @ 0x18015F480 (NtUnmapViewOfSection.c)
 */

__int64 __fastcall PssNtFreeWalkMarker(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
  {
    result = NtUnmapViewOfSection(-1LL, *a1);
    *a1 = 0LL;
  }
  a1[1] = 0LL;
  return result;
}
