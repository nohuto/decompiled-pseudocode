/*
 * XREFs of ?MarkRecentlyTrackedContactsAsNonResting@CPTPEngine@@AEAAXPEAUPTPInput@@PEBUCContactState@@@Z @ 0x14017EBE0
 * Callers:
 *     ?DoTPGestureProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1401039F8 (-DoTPGestureProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 * Callees:
 *     ?SetContactRestingState@CPTPEngine@@AEAAXPEAUCContactState@@_N@Z @ 0x140132FF4 (-SetContactRestingState@CPTPEngine@@AEAAXPEAUCContactState@@_N@Z.c)
 */

void __fastcall CPTPEngine::MarkRecentlyTrackedContactsAsNonResting(
        CPTPEngine *this,
        struct PTPInput *a2,
        const struct CContactState *a3)
{
  unsigned __int64 v3; // r14
  unsigned int v4; // edi
  _DWORD *v7; // rbx
  __int64 v8; // r9
  int v9; // eax
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // r8

  v3 = *((_QWORD *)a3 + 9);
  v4 = 0;
  if ( *((_DWORD *)a2 + 12) )
  {
    v7 = (_DWORD *)((char *)a2 + 68);
    do
    {
      v8 = 328LL * (unsigned int)(*(v7 - 2) % *((_DWORD *)this + 4));
      v9 = *(_DWORD *)((char *)this + v8 + 816);
      if ( (v9 & 1) != 0 && (v9 & 0x100) != 0 && (*v7 & 0x40000) == 0 )
      {
        v10 = *(_QWORD *)((char *)this + v8 + 888);
        v11 = v3 - v10;
        if ( v3 <= v10 )
          v11 = *(_QWORD *)((char *)this + v8 + 888) - v3;
        if ( v11 < *((_QWORD *)this + 12) * (unsigned __int64)*((unsigned int *)this + 808) / 0x3E8 )
          CPTPEngine::SetContactRestingState(this, (CPTPEngine *)((char *)this + v8 + 816), 0);
      }
      ++v4;
      v7 += 24;
    }
    while ( v4 < *((_DWORD *)a2 + 12) );
  }
}
