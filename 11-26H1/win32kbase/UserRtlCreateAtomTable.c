/*
 * XREFs of UserRtlCreateAtomTable @ 0x1402F55E0
 * Callers:
 *     Win32UserInitialize @ 0x1402F23AC (Win32UserInitialize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UserRtlCreateAtomTable(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax

  result = 0LL;
  if ( !*a2 )
    return RtlCreateAtomTableEx(37LL, 1LL, a2);
  return result;
}
