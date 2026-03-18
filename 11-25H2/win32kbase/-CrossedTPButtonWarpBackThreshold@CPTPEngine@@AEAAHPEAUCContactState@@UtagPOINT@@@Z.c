/*
 * XREFs of ?CrossedTPButtonWarpBackThreshold@CPTPEngine@@AEAAHPEAUCContactState@@UtagPOINT@@@Z @ 0x1402251C0
 * Callers:
 *     ?DoTPButtonWarpBack@CPTPEngine@@AEAA?AUtagPOINT@@PEAUPTPInput@@@Z @ 0x140193994 (-DoTPButtonWarpBack@CPTPEngine@@AEAA-AUtagPOINT@@PEAUPTPInput@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CPTPEngine::CrossedTPButtonWarpBackThreshold(
        CPTPEngine *this,
        struct CContactState *a2,
        struct tagPOINT a3)
{
  return (*((_DWORD *)this + 824) & 0x200) == 0
      || *((unsigned int *)this + 781)
       * (__int64)(int)((HIDWORD(*((_QWORD *)a2 + 6)) - a3.y) * (HIDWORD(*((_QWORD *)a2 + 6)) - a3.y))
       + (unsigned __int64)*((unsigned int *)this + 782)
       * (int)((*((_QWORD *)a2 + 6) - a3.x) * (*((_QWORD *)a2 + 6) - a3.x)) >= *((unsigned int *)this + 782)
                                                                             * (unsigned __int64)*((unsigned int *)this
                                                                                                 + 781);
}
