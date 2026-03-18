/*
 * XREFs of PipAddtoRebuildPowerRelationsQueue @ 0x14091159C
 * Callers:
 *     IoResolveDependency @ 0x1404F5D10 (IoResolveDependency.c)
 *     PipAddDependencyEdgeBetweenNodes @ 0x1405D8D80 (PipAddDependencyEdgeBetweenNodes.c)
 *     PipAddDependentsToRebuildPowerRelationsQueue @ 0x14090ED20 (PipAddDependentsToRebuildPowerRelationsQueue.c)
 *     PnpNewDeviceNodeDependencyCheck @ 0x14091034C (PnpNewDeviceNodeDependencyCheck.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140278B30 (ObfReferenceObjectWithTag.c)
 *     PipIsDeviceReadyForPowerRelations @ 0x140911614 (PipIsDeviceReadyForPowerRelations.c)
 */

_QWORD *__fastcall PipAddtoRebuildPowerRelationsQueue(__int64 a1)
{
  _QWORD *result; // rax
  __int64 v2; // rcx
  __int64 v3; // rdi
  void *v4; // rcx
  _QWORD *v5; // rbx

  result = (_QWORD *)PipIsDeviceReadyForPowerRelations(a1);
  if ( (_BYTE)result )
  {
    if ( v2 )
    {
      result = *(_QWORD **)(v2 + 312);
      v3 = result[10];
      if ( v3 )
      {
        v4 = *(void **)(v3 + 48);
        if ( v4 )
        {
          v5 = (_QWORD *)(v3 + 72);
          if ( (_QWORD *)*v5 == v5 )
          {
            ObfReferenceObjectWithTag(v4, 0x44706E50u);
            ++*(_DWORD *)(v3 + 88);
            result = (_QWORD *)qword_140F84BB8;
            if ( *(__int64 **)qword_140F84BB8 != &PiRebuildPowerRelationsQueue )
              __fastfail(3u);
            *v5 = &PiRebuildPowerRelationsQueue;
            *(_QWORD *)(v3 + 80) = result;
            *result = v5;
            qword_140F84BB8 = v3 + 72;
          }
        }
      }
    }
  }
  return result;
}
