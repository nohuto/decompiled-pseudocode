/*
 * XREFs of MxConsumedBootDescriptorSort @ 0x140CFBAD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MxConsumedBootDescriptorSort(_QWORD *a1, _QWORD *a2)
{
  unsigned __int64 v2; // r8
  unsigned __int64 v3; // rdx

  v2 = a2[4];
  v3 = a1[4];
  if ( v3 >= v2 )
    return v3 > v2;
  else
    return 0xFFFFFFFFLL;
}
