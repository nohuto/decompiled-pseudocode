/*
 * XREFs of TopologyFreeFunctionUnits @ 0x14002E6B4
 * Callers:
 *     FilterCreateFilterContext @ 0x140030498 (FilterCreateFilterContext.c)
 *     TopologyBuildFilterTopology @ 0x140041998 (TopologyBuildFilterTopology.c)
 * Callees:
 *     <none>
 */

void __fastcall TopologyFreeFunctionUnits(__int64 a1)
{
  _QWORD **v1; // rbx
  _QWORD *v2; // rcx
  _QWORD *v3; // rax

  v1 = (_QWORD **)(*(_QWORD *)(a1 + 16) + 80LL);
  while ( 1 )
  {
    v2 = *v1;
    if ( *v1 == v1 )
      break;
    if ( (_QWORD **)v2[1] != v1 || (v3 = (_QWORD *)*v2, *(_QWORD **)(*v2 + 8LL) != v2) )
      __fastfail(3u);
    *v1 = v3;
    v3[1] = v1;
    ExFreePool(v2);
  }
}
