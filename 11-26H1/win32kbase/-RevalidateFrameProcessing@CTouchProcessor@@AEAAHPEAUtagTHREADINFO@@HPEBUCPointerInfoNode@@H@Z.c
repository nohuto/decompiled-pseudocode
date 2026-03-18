/*
 * XREFs of ?RevalidateFrameProcessing@CTouchProcessor@@AEAAHPEAUtagTHREADINFO@@HPEBUCPointerInfoNode@@H@Z @ 0x14015C3A4
 * Callers:
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x14006AA00 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 *     ?HandlePointerNodeWithTarget@CTouchProcessor@@AEAA?AW4PointerNodeWithTargetHandling@1@PEBUCPointerInfoNode@@IPEAU3@@Z @ 0x1400CB810 (-HandlePointerNodeWithTarget@CTouchProcessor@@AEAA-AW4PointerNodeWithTargetHandling@1@PEBUCPoint.c)
 * Callees:
 *     ?IsTargetSetForRetrieval@CPointerInfoNode@@QEBAHPEAUtagTHREADINFO@@@Z @ 0x14006A274 (-IsTargetSetForRetrieval@CPointerInfoNode@@QEBAHPEAUtagTHREADINFO@@@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x14006BE3C (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 */

__int64 __fastcall CTouchProcessor::RevalidateFrameProcessing(
        CTouchProcessor *this,
        struct tagTHREADINFO *a2,
        int a3,
        const struct CPointerInfoNode *a4,
        int a5)
{
  unsigned int v5; // ebx
  CPointerInfoNode *v6; // rcx
  struct tagTHREADINFO *v7; // r10
  __int64 v9; // rax

  v5 = 0;
  if ( a3 )
  {
    v9 = *((_QWORD *)a2 + 170);
    if ( (v9 & 0x2000) == 0 && (v9 & 0x2000000000LL) == 0 )
      return 0LL;
  }
  if ( !(unsigned int)CPointerInfoNode::IsValid(a4) )
    return 0LL;
  LOBYTE(v5) = ((unsigned int)CPointerInfoNode::IsTargetSetForRetrieval(v6, v7) != 0) == (a5 != 0);
  return v5;
}
