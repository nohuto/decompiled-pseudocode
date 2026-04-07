/*
 * XREFs of ?FindAnimatingTarget@CStoryboard@@QEAAPEAVCAnimationComponent@@W4DWMTRANSITION_TARGET@@@Z @ 0x1800C0A64
 * Callers:
 *     ?FindAnimatingTarget@CAnimationScheduler@@QEAAPEAVCAnimationComponent@@HW4DWMTRANSITION_TARGET@@@Z @ 0x18009A164 (-FindAnimatingTarget@CAnimationScheduler@@QEAAPEAVCAnimationComponent@@HW4DWMTRANSITION_TARGET@@.c)
 * Callees:
 *     ?AddRef@CBaseObject@@QEAAKXZ @ 0x18001C65C (-AddRef@CBaseObject@@QEAAKXZ.c)
 */

__int64 __fastcall CStoryboard::FindAnimatingTarget(__int64 a1)
{
  __int64 v1; // r9
  __int64 i; // r8
  CBaseObject *v4; // rcx

  v1 = 0LL;
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 120); i = (unsigned int)(i + 1) )
  {
    v4 = *(CBaseObject **)(*(_QWORD *)(a1 + 96) + 8 * i);
    if ( (*((_DWORD *)v4 + 6) & 0xFFF) == 0x28 )
    {
      v1 = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 8 * i);
      if ( v4 )
        CBaseObject::AddRef(v4);
      return v1;
    }
  }
  return v1;
}
