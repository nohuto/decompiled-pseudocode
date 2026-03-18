/*
 * XREFs of RemoveAllEdgePalmRejectionZonesForDevice @ 0x14015BD00
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInstance@DelayZonePalmRejection@@SAPEAV1@XZ @ 0x140038CEC (-GetInstance@DelayZonePalmRejection@@SAPEAV1@XZ.c)
 *     ?RemoveEdgeZonesForDevice@DelayZonePalmRejection@@QEAA_NPEAX@Z @ 0x140158A58 (-RemoveEdgeZonesForDevice@DelayZonePalmRejection@@QEAA_NPEAX@Z.c)
 */

DelayZonePalmRejection *__fastcall RemoveAllEdgePalmRejectionZonesForDevice(void *a1, __int64 a2)
{
  DelayZonePalmRejection *result; // rax

  result = DelayZonePalmRejection::GetInstance((__int64)a1, a2);
  if ( result )
    return (DelayZonePalmRejection *)(unsigned __int8)DelayZonePalmRejection::RemoveEdgeZonesForDevice(result, a1);
  return result;
}
