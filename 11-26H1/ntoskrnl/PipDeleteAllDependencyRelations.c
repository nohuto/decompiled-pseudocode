/*
 * XREFs of PipDeleteAllDependencyRelations @ 0x1409B0FCC
 * Callers:
 *     PnpDeleteAllDependencyRelations @ 0x1409B0B74 (PnpDeleteAllDependencyRelations.c)
 * Callees:
 *     PipFreeDependencyEdge @ 0x1405023B0 (PipFreeDependencyEdge.c)
 *     PiListEntryToDependencyEdge @ 0x14050F9B0 (PiListEntryToDependencyEdge.c)
 *     PipAttemptDependentStart @ 0x1407A2860 (PipAttemptDependentStart.c)
 *     PipUnlinkDeviceObjectAndDependencyNode @ 0x140B33D14 (PipUnlinkDeviceObjectAndDependencyNode.c)
 *     PipDereferenceDependencyNode @ 0x140B33D68 (PipDereferenceDependencyNode.c)
 *     PipConvertResolutionsToReservations @ 0x140B6320C (PipConvertResolutionsToReservations.c)
 */

void __fastcall PipDeleteAllDependencyRelations(__int64 a1)
{
  __int64 v2; // rbx
  _QWORD *v3; // rsi
  _DWORD *v4; // rax
  __int64 v5; // rdx
  _QWORD *v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rbp
  _QWORD *v9; // rcx

  if ( a1 )
  {
    v2 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 80LL);
    if ( v2 )
    {
      ++*(_DWORD *)(v2 + 88);
      PipConvertResolutionsToReservations(v2);
      v3 = *(_QWORD **)(v2 + 16);
      while ( v3 != (_QWORD *)(v2 + 16) )
      {
        v4 = (_DWORD *)PiListEntryToDependencyEdge((__int64)v3, 0);
        v3 = (_QWORD *)*v3;
        PipFreeDependencyEdge(v4, v5);
      }
      v6 = *(_QWORD **)(v2 + 32);
      while ( v6 != (_QWORD *)(v2 + 32) )
      {
        v7 = PiListEntryToDependencyEdge((__int64)v6, 1);
        v6 = (_QWORD *)*v6;
        v8 = *(_QWORD *)(v7 + 40);
        ++*(_DWORD *)(v8 + 88);
        PipFreeDependencyEdge((_DWORD *)v7, 0LL);
        v9 = *(_QWORD **)(v8 + 48);
        if ( v9 )
        {
          if ( *(_QWORD *)(v8 + 16) != v8 + 16 )
            PipAttemptDependentStart(v9);
        }
        PipDereferenceDependencyNode(v8);
      }
      PipUnlinkDeviceObjectAndDependencyNode(a1, v2);
      PipDereferenceDependencyNode(v2);
    }
  }
}
