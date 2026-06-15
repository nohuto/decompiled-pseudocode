/*
 * XREFs of sub_140047C0C @ 0x140047C0C
 * Callers:
 *     sub_14003EB60 @ 0x14003EB60 (sub_14003EB60.c)
 * Callees:
 *     <none>
 */

__int64 sub_140047C0C()
{
  _QWORD *v0; // rbx
  __int64 v1; // rcx
  __int64 result; // rax

  v0 = off_1400E73D8;
  if ( off_1400E73D8 != (_UNKNOWN *)&off_1400E73D8 )
  {
    while ( v0 )
    {
      v1 = v0[1];
      if ( v1 )
      {
        result = EtwUnregisterTraceGuids(v1);
        v0[1] = 0LL;
      }
      v0 = (_QWORD *)*v0;
    }
    off_1400E73D8 = &off_1400E73D8;
  }
  return result;
}
