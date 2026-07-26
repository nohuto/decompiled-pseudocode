/*
 * XREFs of ndisIntersectAtoms @ 0x14014E4FC
 * Callers:
 *     ?ndisBuildBindings@@YAJPEBU_GUID@@AEAUBindStack@Ndis@@@Z @ 0x14014E098 (-ndisBuildBindings@@YAJPEBU_GUID@@AEAUBindStack@Ndis@@@Z.c)
 *     ndisIsLwfBindable @ 0x14014E678 (ndisIsLwfBindable.c)
 * Callees:
 *     <none>
 */

char __fastcall ndisIntersectAtoms(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r9
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // r10

  v2 = *(unsigned int *)(a1 + 4);
  v4 = 0LL;
LABEL_2:
  if ( v4 == v2 )
    return 0;
  if ( v4 >= v2 )
LABEL_11:
    __fastfail(5u);
  v5 = 0LL;
  v6 = *(unsigned int *)(a2 + 4);
  while ( 1 )
  {
    if ( v5 == v6 )
    {
      ++v4;
      goto LABEL_2;
    }
    if ( v5 >= v6 )
      goto LABEL_11;
    if ( *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v4) == *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8 * v5) )
      return 1;
    ++v5;
  }
}
