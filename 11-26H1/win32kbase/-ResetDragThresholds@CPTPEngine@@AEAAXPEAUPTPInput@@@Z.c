/*
 * XREFs of ?ResetDragThresholds@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1401B1FA8
 * Callers:
 *     ?DoTPGestureProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1401039F8 (-DoTPGestureProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 *     ?ProcessInputFrame@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x140103D7C (-ProcessInputFrame@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 *     ?DoTPMouseProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1401047BC (-DoTPMouseProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 *     ?DoTPButtonAndDragProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x140104E48 (-DoTPButtonAndDragProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 *     ?ApplyHeuristics@CPTPEngine@@AEAAXPEAUPTPInput@@_N1@Z @ 0x1401B0F94 (-ApplyHeuristics@CPTPEngine@@AEAAXPEAUPTPInput@@_N1@Z.c)
 *     ?HandleTap@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUPTPEnginePointerNode@@@Z @ 0x140226DF4 (-HandleTap@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUPTPEnginePointerNode@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CPTPEngine::ResetDragThresholds(CPTPEngine *this, struct PTPInput *a2)
{
  unsigned int v2; // r8d
  _QWORD *v5; // r11
  __int64 v6; // rdx
  int v7; // ecx
  unsigned int v8; // ecx

  v2 = 0;
  if ( *((_DWORD *)a2 + 12) )
  {
    v5 = (_QWORD *)((char *)a2 + 96);
    do
    {
      v6 = 328LL * (unsigned int)(*((_DWORD *)v5 - 9) % *((_DWORD *)this + 4));
      v7 = *(_DWORD *)((char *)this + v6 + 816);
      if ( (v7 & 1) != 0 )
      {
        v8 = v7 & 0xFFEFFFFB;
        *(_QWORD *)((char *)this + v6 + 832) = *v5;
        *(_QWORD *)((char *)this + v6 + 944) = *(_QWORD *)a2;
        *(_DWORD *)((char *)this + v6 + 952) = *((_DWORD *)a2 + 6);
        *(_DWORD *)((char *)this + v6 + 816) = v8;
        if ( (v8 & 0x80u) == 0 )
          *(_DWORD *)((char *)this + v6 + 816) = v8 & 0xFFFDFFFF;
      }
      ++v2;
      v5 += 12;
    }
    while ( v2 < *((_DWORD *)a2 + 12) );
  }
}
