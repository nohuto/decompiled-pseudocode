/*
 * XREFs of ?RmpActivityHostEnumerateResourceSetGetNext@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST_RESOURCE_SET_ENUMERATION_CONTEXT@@@Z @ 0x180061B14
 * Callers:
 *     ?RmpActivityHostHasPpleResourceSet@@YAEPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180083AC0 (-RmpActivityHostHasPpleResourceSet@@YAEPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpGpuMonitorTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x18008A1B0 (-RmpGpuMonitorTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 * Callees:
 *     ?RmpActivityHostEnumerateResourceSetGetFirst@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST@@KW4_RM_RESOURCE_SET_CATEGORY@@@Z @ 0x1800337CC (-RmpActivityHostEnumerateResourceSetGetFirst@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY.c)
 */

struct ExecutionModel::ResourceSet *__fastcall RmpActivityHostEnumerateResourceSetGetNext(
        struct _RM_ACTIVITY_HOST_RESOURCE_SET_ENUMERATION_CONTEXT *a1)
{
  __int64 v1; // rbx
  __int64 First; // r9
  __int64 v4; // r8
  __int64 v5; // rcx
  __int64 v6; // r10
  struct ExecutionModel::ResourceSet *result; // rax

  v1 = *(_QWORD *)a1;
  First = 0LL;
  if ( *(_QWORD *)a1 )
  {
    v4 = *(_QWORD *)(v1 + 1296);
    v5 = *(_QWORD *)(v1 + 1320);
    v6 = *(int *)(v1 + 1328);
    if ( v4 != v5 + 8 * (v6 + 2 * (v6 + 70)) )
      First = v4 - 1296;
    if ( !First )
      First = RmpActivityHostEnumerateResourceSetGetFirst(v5, *((_DWORD *)a1 + 2), (int)v6 + 1);
  }
  result = (struct ExecutionModel::ResourceSet *)v1;
  *(_QWORD *)a1 = First;
  return result;
}
