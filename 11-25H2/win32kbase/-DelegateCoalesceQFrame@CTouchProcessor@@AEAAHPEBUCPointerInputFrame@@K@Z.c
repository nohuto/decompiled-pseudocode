/*
 * XREFs of ?DelegateCoalesceQFrame@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@K@Z @ 0x1401FDBA4
 * Callers:
 *     ?DelegateChainingResetAndCoalescePointerMessage@CTouchProcessor@@QEAAH_KHHHI@Z @ 0x1401FD640 (-DelegateChainingResetAndCoalescePointerMessage@CTouchProcessor@@QEAAH_KHHHI@Z.c)
 *     ?DelegateCoalescePointerMessage@CTouchProcessor@@QEAAH_KHHHI@Z @ 0x1401FD9B0 (-DelegateCoalescePointerMessage@CTouchProcessor@@QEAAH_KHHHI@Z.c)
 * Callees:
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x1400D8574 (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     ?TrackCoalesceOnReassign@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@W4CPointerCoalesce@@@Z @ 0x140104E10 (-TrackCoalesceOnReassign@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@W4CPointerCoalesce@@@Z.c)
 *     ?IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x1401887DC (-IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?CoalesceQFrames@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAUCPointerQFrame@@PEAU2@@Z @ 0x1401FC36C (-CoalesceQFrames@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAUCPointerQFrame@@PEAU2@@Z.c)
 *     ?ReferencePreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z @ 0x140209150 (-ReferencePreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z.c)
 *     ?UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x14020C984 (-UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 */

__int64 __fastcall CTouchProcessor::DelegateCoalesceQFrame(
        PERESOURCE *this,
        const struct CPointerInputFrame *a2,
        unsigned int a3)
{
  __int64 v4; // rsi
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rbx
  int v9; // eax
  int v10; // r8d
  struct CPointerInputFrame *v12; // rax
  struct CPointerInputFrame *v13; // rsi
  unsigned int v14; // ebx

  v4 = a3;
  if ( !tagDomLock::IsLockedShared(this + 4) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 15474);
  if ( !a2 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 15476);
  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced(v6, (__int64)a2) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 15477);
  if ( (unsigned int)v4 >= *((_DWORD *)a2 + 12) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 15478);
  v8 = *((_QWORD *)a2 + 31) + 160 * v4;
  if ( *(_DWORD *)v8 != (_DWORD)v4 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 15480);
  v9 = *(_DWORD *)(v8 + 140);
  if ( (v9 & 8) != 0 )
  {
    v10 = 9;
LABEL_13:
    CTouchProcessor::TrackCoalesceOnReassign(v7, v8, v10);
    return 0LL;
  }
  if ( (v9 & 2) == 0 && *(_DWORD *)(v8 + 144) != 9 )
  {
    v7 = *(unsigned int *)(v8 + 148);
    if ( (_DWORD)v7 )
    {
      if ( (_DWORD)v7 != 9 )
        return 0LL;
    }
  }
  if ( (v9 & 1) == 0 )
  {
    v10 = 13;
    goto LABEL_13;
  }
  v12 = CTouchProcessor::ReferencePreviousFrameByDeviceInt((CTouchProcessor *)this, a2);
  v13 = v12;
  if ( !v12 )
  {
    v10 = 10;
    goto LABEL_13;
  }
  v14 = (unsigned int)CTouchProcessor::CoalesceQFrames(this, a2, (struct CPointerQFrame *)v8, v12);
  CTouchProcessor::UnreferenceFrameInt(this, v13);
  return v14;
}
