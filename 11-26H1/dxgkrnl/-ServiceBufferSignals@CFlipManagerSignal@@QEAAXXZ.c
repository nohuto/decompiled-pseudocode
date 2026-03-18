/*
 * XREFs of ?ServiceBufferSignals@CFlipManagerSignal@@QEAAXXZ @ 0x14001D6FC
 * Callers:
 *     ??1CFlipManagerSignal@@UEAA@XZ @ 0x140019FF4 (--1CFlipManagerSignal@@UEAA@XZ.c)
 *     ?ProcessSignal@CFlipManager@@QEAAXPEAVCFlipManagerSignal@@_K_N@Z @ 0x14001D924 (-ProcessSignal@CFlipManager@@QEAAXPEAVCFlipManagerSignal@@_K_N@Z.c)
 * Callees:
 *     ?RemoveUsageReference@CPoolBufferResource@@QEAAXXZ @ 0x14001D790 (-RemoveUsageReference@CPoolBufferResource@@QEAAXXZ.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

void __fastcall CFlipManagerSignal::ServiceBufferSignals(CFlipManagerSignal *this)
{
  __int64 v2; // r14
  _QWORD *v3; // rsi
  _QWORD *v4; // rbx
  __int64 v5; // rcx
  _QWORD *v7; // rcx

  if ( *((_DWORD *)this + 10) )
  {
    v2 = 0LL;
    v3 = (_QWORD *)((char *)this + 32);
    do
    {
      v4 = (_QWORD *)*v3;
      CPoolBufferResource::RemoveUsageReference(*(CPoolBufferResource **)(*v3 + 8 * v2));
      v5 = v4[v2];
      if ( (*(_DWORD *)(v5 + 24))-- == 1 )
        (**(void (__fastcall ***)(__int64, __int64))v5)(v5, 1LL);
      v2 = (unsigned int)(v2 + 1);
    }
    while ( (unsigned int)v2 < *((_DWORD *)this + 10) );
    v7 = (_QWORD *)*v3;
    *((_DWORD *)this + 10) = 0;
    ExFreePoolWithTag(v7, 0);
    *v3 = 0LL;
  }
}
