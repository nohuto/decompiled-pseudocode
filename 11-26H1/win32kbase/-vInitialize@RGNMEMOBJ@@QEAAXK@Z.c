/*
 * XREFs of ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x140015950
 * Callers:
 *     ?vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x14000F920 (-vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 *     GreExtCreateRegion @ 0x140011690 (GreExtCreateRegion.c)
 *     ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x140013030 (-bSetDefaultRegion@DC@@QEAAHXZ.c)
 *     GreSelectVisRgn @ 0x140016B80 (GreSelectVisRgn.c)
 *     GreSelectVisRgnShared @ 0x140017500 (GreSelectVisRgnShared.c)
 *     ?bCompute@DC@@QEAAHXZ @ 0x140037910 (-bCompute@DC@@QEAAHXZ.c)
 *     ?vDuplicateAndScaleRegion@@YAXPEAVREGION@@PEAPEAV1@VPOINTFL@@@Z @ 0x140038094 (-vDuplicateAndScaleRegion@@YAXPEAVREGION@@PEAPEAV1@VPOINTFL@@@Z.c)
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x14003E960 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     NtGdiCreateRectRgn @ 0x140102C20 (NtGdiCreateRectRgn.c)
 *     EngCreateClip @ 0x140121DA0 (EngCreateClip.c)
 *     ??0RGNMEMOBJ@@QEAA@XZ @ 0x140178B40 (--0RGNMEMOBJ@@QEAA@XZ.c)
 *     GreCreateRectRgn @ 0x140194400 (GreCreateRectRgn.c)
 *     ??0RGNMEMOBJ@@QEAA@K@Z @ 0x1401950E0 (--0RGNMEMOBJ@@QEAA@K@Z.c)
 * Callees:
 *     ?vSet@RGNOBJ@@QEAAXXZ @ 0x1400156C0 (-vSet@RGNOBJ@@QEAAXXZ.c)
 *     ?vDeleteREGION@REGION@@AEAAXXZ @ 0x140015A00 (-vDeleteREGION@REGION@@AEAAXXZ.c)
 *     ?AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@K@Z @ 0x140015AE0 (-AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@K@Z.c)
 *     ?BeginTrack@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@QEAAPEAXPEAX@Z @ 0x140113F54 (-BeginTrack@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@QEAAPEAXPEAX@Z.c)
 */

void __fastcall RGNMEMOBJ::vInitialize(RGNMEMOBJ *this, unsigned int a2)
{
  unsigned int v3; // ecx
  struct REGION *Region; // rax
  _QWORD *v5; // rax
  _QWORD *v6; // rdi
  __int64 v7; // rcx
  NSInstrumentation::CReferenceTracker::CReferenceCountedType *v8; // rcx
  void *v9; // rax

  v3 = 112;
  if ( a2 >= 0x70 )
    v3 = a2;
  Region = RGNMEMOBJ::AllocateRegion(v3);
  *(_QWORD *)this = Region;
  if ( Region )
  {
    RGNOBJ::vSet(this);
    *(_DWORD *)(*(_QWORD *)this + 76LL) = 0;
    *(_DWORD *)(*(_QWORD *)this + 72LL) = 0;
    v5 = (_QWORD *)(*(_QWORD *)this + 80LL);
    v5[1] = v5;
    *v5 = v5;
    v6 = *(_QWORD **)this;
    v8 = *(NSInstrumentation::CReferenceTracker::CReferenceCountedType **)(*(_QWORD *)(W32GetSessionState(v7) + 88)
                                                                         + 72LL);
    if ( v8 )
    {
      v9 = NSInstrumentation::CReferenceTracker::CReferenceCountedType::BeginTrack(v8, v6);
      if ( v9 )
      {
        v6[14] = v9;
      }
      else
      {
        REGION::vDeleteREGION(*(REGION **)this);
        *(_QWORD *)this = 0LL;
      }
    }
    else
    {
      v6[14] = 0LL;
    }
  }
}
