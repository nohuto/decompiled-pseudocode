/*
 * XREFs of RtlAppendAsciizToString @ 0x140801890
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x14073D480 (memmove.c)
 *     strlen @ 0x14073DD10 (strlen.c)
 */

__int64 __fastcall RtlAppendAsciizToString(unsigned __int16 *a1, const char *a2)
{
  size_t v4; // rdi
  __int64 v5; // rax

  if ( !a2 )
    return 0LL;
  v4 = strlen(a2);
  if ( v4 <= 0xFFFF )
  {
    v5 = *a1;
    if ( v5 + v4 <= a1[1] )
    {
      memmove((void *)(v5 + *((_QWORD *)a1 + 1)), a2, v4);
      *a1 += v4;
      return 0LL;
    }
  }
  return 3221225507LL;
}
