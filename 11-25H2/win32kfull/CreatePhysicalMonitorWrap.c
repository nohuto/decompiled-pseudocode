/*
 * XREFs of CreatePhysicalMonitorWrap @ 0x140323930
 * Callers:
 *     <none>
 * Callees:
 *     ?CreatePhysicalMonitor@@YAJAEAU_LUID@@KPEAPEAX@Z @ 0x14020224C (-CreatePhysicalMonitor@@YAJAEAU_LUID@@KPEAPEAX@Z.c)
 */

__int64 __fastcall CreatePhysicalMonitorWrap(struct _LUID *a1, __int64 a2, void **a3)
{
  return CreatePhysicalMonitor(a1, a2, a3);
}
