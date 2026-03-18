/*
 * XREFs of ?CreateGestureCache@CPTPProcessor@@AEAAPEAUCPointerInputFrame@@IPEBUPTPEnginePointerNode@@_N@Z @ 0x1400E53B0
 * Callers:
 *     ?OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z @ 0x14018ADE0 (-OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z.c)
 * Callees:
 *     EtwTraceCopyPointerInputFrameStop @ 0x1400E5440 (EtwTraceCopyPointerInputFrameStop.c)
 *     ?CopyPTPPointerInputFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAU2@PEAX@Z @ 0x1400E5470 (-CopyPTPPointerInputFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAU2@PEAX@Z.c)
 *     EtwTraceCopyPointerInputFrameStart @ 0x1400E5820 (EtwTraceCopyPointerInputFrameStart.c)
 *     ?CopyPointersIntoFrame@CPTPProcessor@@AEAAXPEAUCPointerInputFrame@@IPEBUPTPEnginePointerNode@@_N@Z @ 0x1400E5850 (-CopyPointersIntoFrame@CPTPProcessor@@AEAAXPEAUCPointerInputFrame@@IPEBUPTPEnginePointerNode@@_N.c)
 */

struct CPointerInputFrame *__fastcall CPTPProcessor::CreateGestureCache(
        CPTPProcessor *this,
        __int64 a2,
        const struct PTPEnginePointerNode *a3,
        unsigned __int8 a4)
{
  int v4; // edi
  struct CPointerInputFrame *v7; // rbx
  CPTPProcessor *v8; // rcx
  unsigned int v9; // r8d
  struct CPointerInputFrame *result; // rax

  v4 = a4;
  EtwTraceCopyPointerInputFrameStart();
  v7 = CTouchProcessor::CopyPTPPointerInputFrame(
         this,
         *((struct CPointerInputFrame **)this + 67),
         *((void **)this + 66));
  EtwTraceCopyPointerInputFrameStop();
  if ( !v7 )
    return 0LL;
  CPTPProcessor::CopyPointersIntoFrame(v8, v7, v9, a3, 1);
  result = v7;
  *((_DWORD *)v7 + 57) = *((_DWORD *)v7 + 57) & 0xFFFFFEFF | (v4 << 8);
  return result;
}
