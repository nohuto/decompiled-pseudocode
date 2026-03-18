/*
 * XREFs of RemoveAllEdgePalmRejectionZonesForDevice @ 0x14019BEA0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInstance@DelayZonePalmRejection@@SAPEAV1@XZ @ 0x140049048 (-GetInstance@DelayZonePalmRejection@@SAPEAV1@XZ.c)
 *     ?RemoveEdgeZonesForDevice@DelayZonePalmRejection@@QEAA_NPEAX@Z @ 0x140197E8C (-RemoveEdgeZonesForDevice@DelayZonePalmRejection@@QEAA_NPEAX@Z.c)
 */

struct DelayZonePalmRejection *__fastcall RemoveAllEdgePalmRejectionZonesForDevice(void *a1, int a2, int a3)
{
  struct DelayZonePalmRejection *result; // rax

  result = DelayZonePalmRejection::GetInstance((int)a1, a2, a3);
  if ( result )
    return (struct DelayZonePalmRejection *)(unsigned __int8)DelayZonePalmRejection::RemoveEdgeZonesForDevice(
                                                               (PERESOURCE *)result,
                                                               a1);
  return result;
}
