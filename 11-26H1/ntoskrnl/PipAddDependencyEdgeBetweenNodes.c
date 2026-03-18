/*
 * XREFs of PipAddDependencyEdgeBetweenNodes @ 0x1405D8D80
 * Callers:
 *     IoDuplicateDependency @ 0x14079F8B0 (IoDuplicateDependency.c)
 *     PipSetDependency @ 0x1407A0160 (PipSetDependency.c)
 * Callees:
 *     PipCreateNewDependencyEdge @ 0x1405D8E1C (PipCreateNewDependencyEdge.c)
 *     PipAddRequestToEdge @ 0x14079FBC4 (PipAddRequestToEdge.c)
 *     PipCheckValidNewDependencyEdge @ 0x14079FDB8 (PipCheckValidNewDependencyEdge.c)
 *     PipAddtoRebuildPowerRelationsQueue @ 0x14091159C (PipAddtoRebuildPowerRelationsQueue.c)
 */

__int64 __fastcall PipAddDependencyEdgeBetweenNodes(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v5; // rdx
  _QWORD *v7; // rax
  unsigned int v8; // ebx
  _QWORD *v9; // rcx
  __int64 v10; // r11
  __int64 NewDependencyEdge; // rax

  v5 = (_QWORD *)(a1 + 16);
  v7 = *(_QWORD **)(a1 + 16);
  v8 = 0;
  while ( v7 != v5 )
  {
    v9 = v7;
    v7 = (_QWORD *)*v7;
    if ( v9[4] == a2 )
    {
      PipAddRequestToEdge(v9, a3);
      return v8;
    }
  }
  if ( (unsigned __int8)PipCheckValidNewDependencyEdge(a1, a2) )
  {
    NewDependencyEdge = PipCreateNewDependencyEdge(a1, v10, a3);
    if ( NewDependencyEdge )
    {
      if ( *(_QWORD *)(*(_QWORD *)(NewDependencyEdge + 32) + 48LL) )
        PipAddtoRebuildPowerRelationsQueue(*(_QWORD *)(*(_QWORD *)(NewDependencyEdge + 40) + 48LL));
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v8;
}
