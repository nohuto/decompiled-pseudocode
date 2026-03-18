/*
 * XREFs of ??0ManipulationData@@QEAA@XZ @ 0x180108564
 * Callers:
 *     ??0CManipulation@@IEAA@PEAVCComposition@@@Z @ 0x180108450 (--0CManipulation@@IEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     ?Reset@ManipulationData@@QEAAXXZ @ 0x18010859C (-Reset@ManipulationData@@QEAAXXZ.c)
 */

ManipulationData *__fastcall ManipulationData::ManipulationData(ManipulationData *this)
{
  __int64 v1; // rcx

  ManipulationData::Reset(this);
  *(_BYTE *)(v1 + 180) |= 3u;
  *(_DWORD *)(v1 + 168) = 7;
  *(_DWORD *)(v1 + 172) = 7;
  *(_DWORD *)(v1 + 176) = 7;
  return (ManipulationData *)v1;
}
