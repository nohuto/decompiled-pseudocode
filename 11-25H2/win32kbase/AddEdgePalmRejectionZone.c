/*
 * XREFs of AddEdgePalmRejectionZone @ 0x14009EA50
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInstance@DelayZonePalmRejection@@SAPEAV1@XZ @ 0x140038CEC (-GetInstance@DelayZonePalmRejection@@SAPEAV1@XZ.c)
 *     ?AddEdgeZoneToList@DelayZonePalmRejection@@QEAAKPEAXKUtagRECT@@@Z @ 0x14009EAA8 (-AddEdgeZoneToList@DelayZonePalmRejection@@QEAAKPEAXKUtagRECT@@@Z.c)
 */

int __fastcall AddEdgePalmRejectionZone(void *a1, __int64 a2, struct tagRECT *a3)
{
  unsigned int v4; // edi
  DelayZonePalmRejection *Instance; // rax
  struct tagRECT v8; // [rsp+20h] [rbp-18h] BYREF

  v4 = a2;
  Instance = DelayZonePalmRejection::GetInstance((__int64)a1, a2);
  if ( Instance )
  {
    v8 = *a3;
    LODWORD(Instance) = DelayZonePalmRejection::AddEdgeZoneToList(Instance, a1, v4, &v8);
  }
  return (int)Instance;
}
