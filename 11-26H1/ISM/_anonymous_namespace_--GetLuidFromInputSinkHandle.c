/*
 * XREFs of _anonymous_namespace_::GetLuidFromInputSinkHandle @ 0x180047DE0
 * Callers:
 *     NotifyInputSinkRemoved @ 0x180047CA0 (NotifyInputSinkRemoved.c)
 *     NotifyInputSinkParented @ 0x180047CE0 (NotifyInputSinkParented.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall anonymous_namespace_::GetLuidFromInputSinkHandle(__int64 a1)
{
  unsigned int v1; // eax
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  v3 = 0LL;
  if ( a1 )
  {
    NtQueryCompositionInputSinkLuid(a1, &v3);
    v1 = v3;
  }
  return __PAIR64__(HIDWORD(v3), v1);
}
