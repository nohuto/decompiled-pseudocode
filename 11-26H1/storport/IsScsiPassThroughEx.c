/*
 * XREFs of IsScsiPassThroughEx @ 0x14003B34C
 * Callers:
 *     PortpCompleteRequestIrp @ 0x14003B1EC (PortpCompleteRequestIrp.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsScsiPassThroughEx(__int64 a1)
{
  int v1; // ecx

  v1 = *(_DWORD *)(*(_QWORD *)(a1 + 184) + 24LL);
  return v1 == 315460 || v1 == 315464;
}
