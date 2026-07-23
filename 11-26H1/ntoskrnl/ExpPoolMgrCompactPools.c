/*
 * XREFs of ExpPoolMgrCompactPools @ 0x140AC533C
 * Callers:
 *     ExpHpCompactionRoutine @ 0x1404A41F0 (ExpHpCompactionRoutine.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     ExpPoolCompact @ 0x140348F20 (ExpPoolCompact.c)
 *     DbgPrintEx @ 0x1403992B0 (DbgPrintEx.c)
 *     ExpPoolMgrGetNextPoolCommon @ 0x140AC540C (ExpPoolMgrGetNextPoolCommon.c)
 *     ExpPoolMgrResolveMaintenanceHint @ 0x140AC54C0 (ExpPoolMgrResolveMaintenanceHint.c)
 *     ExpPoolMgrSetMaintenanceHint @ 0x140AC5520 (ExpPoolMgrSetMaintenanceHint.c)
 */

ULONG __fastcall ExpPoolMgrCompactPools(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebp
  unsigned int v4; // edi
  __int64 v5; // rax
  struct _EX_RUNDOWN_REF *v6; // rbx
  __int64 NextPoolCommon; // rax

  v2 = a2;
  v4 = 0;
  v5 = ExpPoolMgrResolveMaintenanceHint(a1, a2);
  v6 = (struct _EX_RUNDOWN_REF *)v5;
  if ( v5 )
  {
    DbgPrintEx(0x6Eu, 2u, "Resuming compaction with pool %wZ\n", v5 + 48);
    goto LABEL_7;
  }
  NextPoolCommon = ExpPoolMgrGetNextPoolCommon(a1, v2, 0LL);
  while ( 1 )
  {
    v6 = (struct _EX_RUNDOWN_REF *)NextPoolCommon;
    if ( !NextPoolCommon )
      break;
LABEL_7:
    if ( v4 >= 5 )
      break;
    ExpPoolCompact((__int64)v6);
    NextPoolCommon = ExpPoolMgrGetNextPoolCommon(a1, (unsigned __int8)BYTE1(v6[1].Count), v6);
    ++v4;
  }
  ExpPoolMgrSetMaintenanceHint(a1, v2, v6);
  if ( v6 )
    ExReleaseRundownProtection_0(v6 + 3);
  return DbgPrintEx(0x6Eu, 2u, "Compacted %u pool(s)\n", v4);
}
