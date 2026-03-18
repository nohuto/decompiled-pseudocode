/*
 * XREFs of ?IsNearbyContactPresent@CPTPEngine@@AEAA_NPEAUPTPInput@@PEAUCContactState@@UtagPOINT@@K@Z @ 0x140151E88
 * Callers:
 *     ?HandleTap@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUPTPEnginePointerNode@@@Z @ 0x140193DFC (-HandleTap@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUPTPEnginePointerNode@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CPTPEngine::IsNearbyContactPresent(
        CPTPEngine *this,
        struct PTPInput *a2,
        struct CContactState *a3,
        struct tagPOINT a4,
        unsigned int a5)
{
  _QWORD *v5; // r10
  unsigned int i; // r11d
  struct CContactState *v7; // rax

  v5 = (_QWORD *)((char *)a2 + 96);
  for ( i = 0; i < *((_DWORD *)a2 + 12); ++i )
  {
    v7 = (CPTPEngine *)((char *)this + 328 * (unsigned int)(*((_DWORD *)v5 - 9) % *((_DWORD *)this + 4)) + 816);
    if ( v7 != a3
      && (*(_DWORD *)v7 & 0x40000000) != 0
      && (int)((HIDWORD(*v5) - a4.y) * (HIDWORD(*v5) - a4.y) + (*v5 - a4.x) * (*v5 - a4.x)) <= (unsigned __int64)(a5 * a5) )
    {
      return 1;
    }
    v5 += 12;
  }
  return 0;
}
