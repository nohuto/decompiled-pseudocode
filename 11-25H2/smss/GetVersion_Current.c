/*
 * XREFs of GetVersion_Current @ 0x14001D400
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 GetVersion_Current()
{
  __int64 v0; // rdx

  v0 = *(_QWORD *)&KeGetPcr()->MajorVersion;
  return *(_DWORD *)(v0 + 280) | (*(unsigned __int16 *)(v0 + 288) << 16) | ((*(_DWORD *)(v0 + 284) | ((*(_DWORD *)(v0 + 292) ^ 0xFFFFFFFE) << 22)) << 8);
}
