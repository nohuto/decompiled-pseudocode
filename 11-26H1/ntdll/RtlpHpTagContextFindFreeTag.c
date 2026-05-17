/*
 * XREFs of RtlpHpTagContextFindFreeTag @ 0x180104BDC
 * Callers:
 *     RtlpHpTagContextAllocateTag @ 0x1800A1BC4 (RtlpHpTagContextAllocateTag.c)
 * Callees:
 *     <none>
 */

__int64 RtlpHpTagContextFindFreeTag()
{
  unsigned __int16 v0; // dx
  __int16 v1; // r8
  unsigned __int16 v2; // ax

  v0 = 0;
  if ( word_1801CCC02 != 1024 )
  {
    v1 = word_1801CCC00;
    do
    {
      v2 = 0;
      if ( v1 != 1024 )
        v2 = v1;
      v1 = v2 + 1;
    }
    while ( *(_QWORD *)(qword_1801CCBF8 + 8LL * v2) );
    return (unsigned __int16)(v2 + 1);
  }
  return v0;
}
