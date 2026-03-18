/*
 * XREFs of ?ClearState@CNaturalAnimation@@AEAAXXZ @ 0x1801E3618
 * Callers:
 *     ??0CNaturalAnimation@@QEAA@PEAVCComposition@@@Z @ 0x180218C90 (--0CNaturalAnimation@@QEAA@PEAVCComposition@@@Z.c)
 *     ?GetForceForAxis@CNaturalAnimation@@QEAAJW4ScrollAxis@@MMPEAPEAUIScalarForce@@@Z @ 0x18027B4B0 (-GetForceForAxis@CNaturalAnimation@@QEAAJW4ScrollAxis@@MMPEAPEAUIScalarForce@@@Z.c)
 *     ?StartAsTriggeredAnimation@CNaturalAnimation@@UEAAJXZ @ 0x18027C580 (-StartAsTriggeredAnimation@CNaturalAnimation@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CNaturalAnimation::ClearState(CNaturalAnimation *this)
{
  __int128 v1; // xmm4
  __int128 v2; // xmm8
  __int128 v3; // xmm12
  __int128 v4; // xmm8
  __int128 v5; // xmm12
  __int128 v6; // xmm4

  *((_BYTE *)this + 532) &= ~1u;
  *((_BYTE *)this + 532) |= 0x44u;
  v1 = *(_OWORD *)((char *)&qword_1803DD48C + 4);
  v2 = *(_OWORD *)ymmword_1803DD4A0.m256_f32;
  v3 = *(_OWORD *)&ymmword_1803DD4A0.m256_f32[4];
  *(_OWORD *)((char *)this + 468) = CMILMatrix::Identity;
  *(_OWORD *)((char *)this + 484) = v1;
  *(_OWORD *)((char *)this + 500) = v2;
  *(_OWORD *)((char *)this + 516) = v3;
  v4 = *(_OWORD *)ymmword_1803DD4A0.m256_f32;
  v5 = *(_OWORD *)&ymmword_1803DD4A0.m256_f32[4];
  v6 = *(_OWORD *)((char *)&qword_1803DD48C + 4);
  *(_OWORD *)((char *)this + 404) = CMILMatrix::Identity;
  *(_OWORD *)((char *)this + 420) = v6;
  *(_OWORD *)((char *)this + 436) = v4;
  *(_OWORD *)((char *)this + 452) = v5;
  *((_BYTE *)this + 532) &= 0xF5u;
  *((_QWORD *)this + 46) = 0LL;
}
