/*
 * XREFs of ??0RGNMEMOBJTMP@@QEAA@K@Z @ 0x140021D3C
 * Callers:
 *     GreExtCreateRegion @ 0x140011690 (GreExtCreateRegion.c)
 *     _RGNOBJ::iCombine_::_2_::_lambda_1_::operator() @ 0x140012020 (_RGNOBJ--iCombine_--_2_--_lambda_1_--operator().c)
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x140012210 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     GreCombineRgn @ 0x140020BA0 (GreCombineRgn.c)
 *     RGNCOREOBJ::bMerge__RGNOBJ::bMerge_::_2_::_lambda_1___ @ 0x140022050 (RGNCOREOBJ--bMerge__RGNOBJ--bMerge_--_2_--_lambda_1___.c)
 *     ?bCreate@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEBVEXFORMOBJR@@@Z @ 0x1400237E0 (-bCreate@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEBVEXFORMOBJR@@@Z.c)
 *     ?bCopy@RGNOBJ@@QEAAHAEAV1@@Z @ 0x140038140 (-bCopy@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     ?bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z @ 0x1400C5040 (-bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z.c)
 *     GreIntersectVisRect @ 0x1401BABF0 (GreIntersectVisRect.c)
 *     ?bExpand@RGNOBJ@@QEAAHK@Z @ 0x1401BCB10 (-bExpand@RGNOBJ@@QEAAHK@Z.c)
 * Callees:
 *     ?vDeleteREGION@REGION@@AEAAXXZ @ 0x140015A00 (-vDeleteREGION@REGION@@AEAAXXZ.c)
 *     ?AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@K@Z @ 0x140015AE0 (-AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@K@Z.c)
 *     ?vInit@RGNMEMOBJ@@QEAAXXZ @ 0x14001FA3C (-vInit@RGNMEMOBJ@@QEAAXXZ.c)
 *     ?vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ @ 0x140021730 (-vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ.c)
 *     ?BeginTrack@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@QEAAPEAXPEAX@Z @ 0x140113F54 (-BeginTrack@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@QEAAPEAXPEAX@Z.c)
 */

RGNMEMOBJTMP *__fastcall RGNMEMOBJTMP::RGNMEMOBJTMP(RGNMEMOBJTMP *this, unsigned int a2)
{
  __int64 v3; // rcx
  struct REGION *Region; // rax
  _QWORD *v5; // rdi
  __int64 v6; // rcx
  NSInstrumentation::CReferenceTracker::CReferenceCountedType *v7; // rcx
  void *v9; // rax

  *(_QWORD *)this = 0LL;
  v3 = 112LL;
  if ( a2 >= 0x70 )
    v3 = a2;
  Region = RGNMEMOBJ::AllocateRegion(v3);
  *(_QWORD *)this = Region;
  if ( Region )
  {
    RGNMEMOBJ::vInit(this);
    v5 = *(_QWORD **)this;
    v7 = *(NSInstrumentation::CReferenceTracker::CReferenceCountedType **)(*(_QWORD *)(W32GetSessionState(v6) + 88)
                                                                         + 72LL);
    if ( v7 )
    {
      v9 = NSInstrumentation::CReferenceTracker::CReferenceCountedType::BeginTrack(v7, v5);
      if ( v9 )
      {
        v5[14] = v9;
      }
      else
      {
        REGION::vDeleteREGION(*(REGION **)this);
        *(_QWORD *)this = 0LL;
      }
    }
    else
    {
      v5[14] = 0LL;
    }
  }
  RGNMEMOBJ::vPushThreadGuardedObject(this);
  return this;
}
