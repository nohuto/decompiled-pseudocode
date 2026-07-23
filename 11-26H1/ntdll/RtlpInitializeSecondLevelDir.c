/*
 * XREFs of RtlpInitializeSecondLevelDir @ 0x1800D5F18
 * Callers:
 *     RtlpCreateHashTable @ 0x1800D5D78 (RtlpCreateHashTable.c)
 * Callees:
 *     <none>
 */

void __fastcall RtlpInitializeSecondLevelDir(_QWORD *a1, unsigned int a2)
{
  _QWORD *v2; // rax
  __int64 v3; // r8

  if ( a2 )
  {
    v2 = a1;
    v3 = a2;
    do
    {
      a1[1] = v2;
      *a1 = v2;
      v2 += 2;
      a1 += 2;
      --v3;
    }
    while ( v3 );
  }
}
