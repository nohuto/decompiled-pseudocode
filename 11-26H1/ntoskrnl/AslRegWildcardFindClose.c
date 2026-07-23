/*
 * XREFs of AslRegWildcardFindClose @ 0x140890A50
 * Callers:
 *     SdbpCheckMatchingWildcardRegistryEntry @ 0x140889FBC (SdbpCheckMatchingWildcardRegistryEntry.c)
 *     AslRegWildcardFindFirst @ 0x140890AC8 (AslRegWildcardFindFirst.c)
 * Callees:
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     AslFree @ 0x1409D6144 (AslFree.c)
 */

__int64 __fastcall AslRegWildcardFindClose(_QWORD *a1)
{
  _QWORD *v1; // rsi
  void *v3; // rcx
  _QWORD *v4; // rbx
  __int64 v5; // rdx
  __int64 result; // rax

  if ( a1 )
  {
    v1 = (_QWORD *)*a1;
    if ( (_QWORD *)*a1 != a1 )
    {
      do
      {
        v3 = (void *)v1[4];
        if ( v3 )
        {
          ZwClose(v3);
          v1[4] = 0LL;
        }
        v4 = (_QWORD *)*v1;
        AslFree(v3, v1);
        v1 = v4;
      }
      while ( v4 != a1 );
    }
    v5 = a1[3];
    if ( v5 )
      AslFree(a1, v5);
    return AslFree(a1, a1);
  }
  return result;
}
