/*
 * XREFs of SANITIZE_EFLAGS @ 0x14046ADB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SANITIZE_EFLAGS(int a1, int a2)
{
  unsigned int v2; // eax
  unsigned int v3; // ecx

  v2 = a1 & 0x250FD7;
  v3 = a1 & 0x210DD5 | 0x202;
  if ( !a2 )
    return v2;
  return v3;
}
