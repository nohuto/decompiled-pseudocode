/*
 * XREFs of MiInitializeSystemPteTracker @ 0x140D07C28
 * Callers:
 *     MiInitNucleus @ 0x140CF903C (MiInitNucleus.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1402CA4E0 (RtlRaiseStatus.c)
 */

_QWORD *MiInitializeSystemPteTracker()
{
  _QWORD *result; // rax
  char *v1; // rcx
  __int64 v2; // rdx

  if ( ((unsigned __int8)&stru_140E34B40 & 0xF) != 0 )
    RtlRaiseStatus(-2147483646);
  result = &unk_140E37A30;
  stru_140E34B40 = 0LL;
  v1 = (char *)&unk_140E37A30;
  v2 = 16LL;
  do
  {
    result[1] = v1;
    *result = v1;
    v1 += 16;
    result += 2;
    --v2;
  }
  while ( v2 );
  return result;
}
