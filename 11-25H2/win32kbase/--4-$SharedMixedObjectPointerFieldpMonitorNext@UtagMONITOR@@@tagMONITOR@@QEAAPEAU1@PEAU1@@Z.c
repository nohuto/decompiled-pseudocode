/*
 * XREFs of ??4?$SharedMixedObjectPointerFieldpMonitorNext@UtagMONITOR@@@tagMONITOR@@QEAAPEAU1@PEAU1@@Z @ 0x1401554EC
 * Callers:
 *     ?zzzUpdateUserScreen@@YAJXZ @ 0x1400ABDF8 (-zzzUpdateUserScreen@@YAJXZ.c)
 *     DestroyMonitor @ 0x1400F63A0 (DestroyMonitor.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall tagMONITOR::SharedMixedObjectPointerFieldpMonitorNext<tagMONITOR>::operator=(_QWORD *a1, __int64 a2)
{
  __int64 v2; // r8

  v2 = *(a1 - 2);
  if ( a2 )
    *(_QWORD *)(v2 + 16) = *(_QWORD *)(a2 + 48);
  else
    *(_QWORD *)(v2 + 16) = 0LL;
  *a1 = a2;
  return a2;
}
