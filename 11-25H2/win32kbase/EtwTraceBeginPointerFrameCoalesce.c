/*
 * XREFs of EtwTraceBeginPointerFrameCoalesce @ 0x1400ECD20
 * Callers:
 *     ?CoalesceQFrames@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAUCPointerQFrame@@PEAU2@@Z @ 0x1401FC36C (-CoalesceQFrames@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAUCPointerQFrame@@PEAU2@@Z.c)
 *     ?TryCoalesceQFrame@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEBU2@PEBUCPointerQFrame@@@Z @ 0x14020C254 (-TryCoalesceQFrame@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEBU2@PEBUCPointerQFrame@@@Z.c)
 * Callees:
 *     McTemplateK0qqq_EtwWriteTransfer @ 0x1400E5334 (McTemplateK0qqq_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall EtwTraceBeginPointerFrameCoalesce(__int64 a1, char a2, __int64 a3)
{
  NTSTATUS result; // eax

  if ( (_DWORD)a3 )
  {
    if ( (Microsoft_Windows_Win32kEnableBits & 0x40000) != 0 )
      return McTemplateK0qqq_EtwWriteTransfer(a1, &BeginPointerFrameDelegateCoalesce, a3, a1, a2, 0);
  }
  else if ( (Microsoft_Windows_Win32kEnableBits & 0x40000) != 0 )
  {
    return McTemplateK0qqq_EtwWriteTransfer(a1, &BeginPointerFrameCoalesce, a3, a1, a2, 0);
  }
  return result;
}
