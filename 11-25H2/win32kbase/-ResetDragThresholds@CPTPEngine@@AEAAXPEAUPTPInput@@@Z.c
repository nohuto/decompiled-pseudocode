/*
 * XREFs of ?ResetDragThresholds@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x140194444
 * Callers:
 *     ?DoTPGestureProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1400CA388 (-DoTPGestureProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 *     ?ProcessInputFrame@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1400CA76C (-ProcessInputFrame@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 *     ?DoTPMouseProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1400CB168 (-DoTPMouseProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 *     ?DoTPButtonAndDragProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1400CB7E8 (-DoTPButtonAndDragProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 *     ?ApplyHeuristics@CPTPEngine@@AEAAXPEAUPTPInput@@_N1@Z @ 0x140192FF0 (-ApplyHeuristics@CPTPEngine@@AEAAXPEAUPTPInput@@_N1@Z.c)
 *     ?HandleTap@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUPTPEnginePointerNode@@@Z @ 0x140193DFC (-HandleTap@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUPTPEnginePointerNode@@@Z.c)
 * Callees:
 *     Feature_PTPButtonUpdates__private_IsEnabledDeviceUsageNoInline @ 0x140225560 (Feature_PTPButtonUpdates__private_IsEnabledDeviceUsageNoInline.c)
 */

void __fastcall CPTPEngine::ResetDragThresholds(CPTPEngine *this, struct PTPInput *a2)
{
  unsigned int v2; // ebp
  _QWORD *v5; // r14
  __int64 v6; // rsi
  int v7; // ecx
  __int64 v8; // rcx
  int v9; // eax

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
        if ( (unsigned int)Feature_PTPButtonUpdates__private_IsEnabledDeviceUsageNoInline(v8) )
        {
          v9 = *(_DWORD *)((char *)this + v6 + 816);
          if ( (v9 & 0x80u) == 0 )
            *(_DWORD *)((char *)this + v6 + 816) = v9 & 0xFFFDFFFF;
        }
      }
      ++v2;
      v5 += 12;
    }
    while ( v2 < *((_DWORD *)a2 + 12) );
  }
}
