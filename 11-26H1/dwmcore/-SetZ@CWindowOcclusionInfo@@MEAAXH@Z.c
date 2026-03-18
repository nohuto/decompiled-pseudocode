/*
 * XREFs of ?SetZ@CWindowOcclusionInfo@@MEAAXH@Z @ 0x180195400
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CWindowOcclusionInfo::SetZ(CWindowOcclusionInfo *this, int a2)
{
  *((_DWORD *)this + 10) = a2;
  *((_DWORD *)this + 13) = a2;
  *((_DWORD *)this + 12) = a2;
}
