/*
 * XREFs of ??0CNaturalAnimation@@QEAA@PEAVCComposition@@@Z @ 0x180218C90
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x180155D14 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CBaseExpression@@IEAA@PEAVCComposition@@@Z @ 0x1801A7F64 (--0CBaseExpression@@IEAA@PEAVCComposition@@@Z.c)
 *     ?ClearState@CNaturalAnimation@@AEAAXXZ @ 0x1801E3618 (-ClearState@CNaturalAnimation@@AEAAXXZ.c)
 */

CNaturalAnimation *__fastcall CNaturalAnimation::CNaturalAnimation(CNaturalAnimation *this, struct CComposition *a2)
{
  __int64 v2; // rcx
  CNaturalAnimation *v3; // rcx

  CBaseExpression::CBaseExpression(this, a2);
  *(_QWORD *)v2 = &CNaturalAnimation::`vftable';
  *(_QWORD *)(v2 + 280) = 0LL;
  *(_DWORD *)(v2 + 288) = 0;
  *(_QWORD *)(v2 + 292) = 0LL;
  *(_DWORD *)(v2 + 300) = 0;
  *(_QWORD *)(v2 + 304) = 0LL;
  *(_DWORD *)(v2 + 312) = 0;
  *(_QWORD *)(v2 + 316) = 0LL;
  *(_DWORD *)(v2 + 324) = 0;
  *(_QWORD *)(v2 + 344) = 0LL;
  *(_QWORD *)(v2 + 368) = 0LL;
  *(_QWORD *)(v2 + 384) = 0LL;
  *(_QWORD *)(v2 + 392) = 0LL;
  *(_BYTE *)(v2 + 532) |= 0x44u;
  CNaturalAnimation::ClearState((CNaturalAnimation *)v2);
  return v3;
}
