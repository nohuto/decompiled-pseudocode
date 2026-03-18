/*
 * XREFs of MiInitializeSystemPteTracker @ 0x140D01888
 * Callers:
 *     MiInitNucleus @ 0x140CF2CBC (MiInitNucleus.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1402E84A0 (RtlRaiseStatus.c)
 */

_QWORD *MiInitializeSystemPteTracker()
{
  _QWORD *result; // rax
  char *v1; // rcx
  __int64 v2; // rdx

  if ( ((unsigned __int8)&stru_140E349C0 & 0xF) != 0 )
    RtlRaiseStatus(-2147483646);
  result = &unk_140E378B0;
  stru_140E349C0 = 0LL;
  v1 = (char *)&unk_140E378B0;
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
