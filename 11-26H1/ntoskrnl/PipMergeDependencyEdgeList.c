/*
 * XREFs of PipMergeDependencyEdgeList @ 0x1407A2AD8
 * Callers:
 *     PipMergeDependencyNodes @ 0x1407A2C34 (PipMergeDependencyNodes.c)
 * Callees:
 *     PipFreeDependencyEdge @ 0x1405023B0 (PipFreeDependencyEdge.c)
 *     PiListEntryToDependencyEdge @ 0x14050F9B0 (PiListEntryToDependencyEdge.c)
 *     PipMoveListEntries @ 0x1405DB770 (PipMoveListEntries.c)
 *     PipNotifyDependenciesChanged @ 0x14077B7B0 (PipNotifyDependenciesChanged.c)
 *     PipAddRequestToEdge @ 0x1407A2704 (PipAddRequestToEdge.c)
 *     PiPnpRtlBeginOperation @ 0x140968528 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x140968708 (PiPnpRtlEndOperation.c)
 *     PipDereferenceDependencyNode @ 0x140B33D68 (PipDereferenceDependencyNode.c)
 */

void __fastcall PipMergeDependencyEdgeList(__int64 a1, __int64 a2, int a3)
{
  int v4; // esi
  __int64 v5; // r9
  __int64 *v6; // r14
  _QWORD **v7; // r15
  _QWORD *i; // r13
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 *v13; // r8
  __int64 v14; // rbp
  __int64 v15; // rdx
  bool v16; // r12
  UNICODE_STRING *v17; // rsi
  PCUNICODE_STRING *v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rcx
  PVOID P[9]; // [rsp+20h] [rbp-48h] BYREF
  __int64 *v24; // [rsp+88h] [rbp+20h]

  P[0] = 0LL;
  v4 = a3;
  v5 = a3 != 0 ? 32LL : 16LL;
  v6 = (__int64 *)(v5 + a1);
  v24 = (__int64 *)(v5 + a1);
  v7 = (_QWORD **)(v5 + a2);
  PiPnpRtlBeginOperation(P, a2);
  for ( i = *v7; i != v7; v6 = v24 )
  {
    v9 = PiListEntryToDependencyEdge((__int64)i, v4);
    i = (_QWORD *)*i;
    v10 = v9;
    v11 = *v6;
    while ( (__int64 *)v11 != v6 )
    {
      v12 = PiListEntryToDependencyEdge(v11, v4);
      v11 = *v13;
      v14 = v12;
      if ( v4 )
      {
        if ( *(_QWORD *)(v10 + 40) == *(_QWORD *)(v12 + 40) )
        {
          v16 = 1;
LABEL_9:
          v17 = *(UNICODE_STRING **)(v10 + 56);
          while ( v17 != (UNICODE_STRING *)(v10 + 56) )
          {
            v18 = (PCUNICODE_STRING *)v17;
            v17 = *(UNICODE_STRING **)&v17->Length;
            PipAddRequestToEdge(v14, v18 + 2);
          }
          PipFreeDependencyEdge((_DWORD *)v10, v14);
          v4 = a3;
          v10 = 0LL;
          if ( v16 )
            goto LABEL_17;
          break;
        }
      }
      else
      {
        v15 = *(_QWORD *)(v10 + 32);
        v16 = v15 == *(_QWORD *)(v12 + 32);
        if ( v15 == *(_QWORD *)(v12 + 32) )
          goto LABEL_9;
      }
    }
    if ( v4 )
    {
      v20 = *(_QWORD *)(v10 + 40);
      v19 = a1;
      *(_QWORD *)(v10 + 32) = a1;
    }
    else
    {
      v19 = *(_QWORD *)(v10 + 32);
      v20 = a1;
      *(_QWORD *)(v10 + 40) = a1;
    }
    PipNotifyDependenciesChanged(v20, v19);
    ++*(_DWORD *)(a1 + 88);
    PipDereferenceDependencyNode(a2);
LABEL_17:
    ;
  }
  PipMoveListEntries(v6, (__int64)v7);
  if ( P[0] )
    PiPnpRtlEndOperation(P[0]);
}
