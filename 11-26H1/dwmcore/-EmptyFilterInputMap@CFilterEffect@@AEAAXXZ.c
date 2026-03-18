/*
 * XREFs of ?EmptyFilterInputMap@CFilterEffect@@AEAAXXZ @ 0x18026729C
 * Callers:
 *     ??1CFilterEffect@@MEAA@XZ @ 0x180245F14 (--1CFilterEffect@@MEAA@XZ.c)
 *     ?ProcessUpdateInputs@CFilterEffect@@AEAAJAEBV?$unordered_map@IUInput@CFilterEffect@@U?$hash@I@std@@U?$equal_to@I@4@V?$allocator@U?$pair@$$CBIUInput@CFilterEffect@@@std@@@4@@std@@@Z @ 0x1802677E0 (-ProcessUpdateInputs@CFilterEffect@@AEAAJAEBV-$unordered_map@IUInput@CFilterEffect@@U-$hash@I@st.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180022EAC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ??_GInternalFilterInput@@QEAAPEAXI@Z @ 0x180266F14 (--_GInternalFilterInput@@QEAAPEAXI@Z.c)
 */

void __fastcall CFilterEffect::EmptyFilterInputMap(CFilterEffect *this)
{
  __int64 v1; // rsi
  __int64 i; // rbx
  InternalFilterInput *v4; // rcx

  v1 = *((int *)this + 82);
  if ( v1 > 0 )
  {
    for ( i = 0LL; i < v1; ++i )
    {
      CResource::UnRegisterNotifierInternal(
        this,
        *(struct CResource **)(*(_QWORD *)(*((_QWORD *)this + 40) + 8 * i) + 24LL));
      v4 = *(InternalFilterInput **)(*((_QWORD *)this + 40) + 8 * i);
      if ( v4 )
        InternalFilterInput::`scalar deleting destructor'(v4);
    }
  }
  CMap<unsigned int,InternalFilterInput *,CMapEqualHelper<unsigned int,InternalFilterInput *>>::RemoveAll((__int64)this + 312);
}
