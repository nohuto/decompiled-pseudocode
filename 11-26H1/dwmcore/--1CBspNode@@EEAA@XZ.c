/*
 * XREFs of ??1CBspNode@@EEAA@XZ @ 0x18019DF7C
 * Callers:
 *     ??_GCBspNode@@EEAAPEAXI@Z @ 0x18019DF30 (--_GCBspNode@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x1800C44D0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ?ReleaseSubTree@CBspNode@@QEAAXXZ @ 0x18019DFF8 (-ReleaseSubTree@CBspNode@@QEAAXXZ.c)
 *     ??$ReleaseInterfaceNoNULL@VCPolygon@@@@YAXPEAVCPolygon@@@Z @ 0x18019E020 (--$ReleaseInterfaceNoNULL@VCPolygon@@@@YAXPEAVCPolygon@@@Z.c)
 */

void __fastcall CBspNode::~CBspNode(CBspNode *this)
{
  _QWORD *v2; // rsi
  _QWORD *i; // rbx
  void *v4; // rcx

  *(_QWORD *)this = &CBspNode::`vftable';
  CBspNode::ReleaseSubTree(this);
  v2 = (_QWORD *)*((_QWORD *)this + 5);
  for ( i = (_QWORD *)*((_QWORD *)this + 4); i != v2; ++i )
    ReleaseInterfaceNoNULL<CPolygon>(*i);
  v4 = (void *)*((_QWORD *)this + 4);
  if ( v4 )
  {
    std::_Deallocate<16>(v4, (*((_QWORD *)this + 6) - (_QWORD)v4) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 4) = 0LL;
    *((_QWORD *)this + 5) = 0LL;
    *((_QWORD *)this + 6) = 0LL;
  }
}
