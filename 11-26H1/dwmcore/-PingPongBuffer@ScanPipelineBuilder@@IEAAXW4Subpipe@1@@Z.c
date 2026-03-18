/*
 * XREFs of ?PingPongBuffer@ScanPipelineBuilder@@IEAAXW4Subpipe@1@@Z @ 0x1802B55A8
 * Callers:
 *     ?AddOp_Binary@ScanPipelineBuilder@@QEAAJP6AXPEBUPipelineParams@@PEBUScanOpParams@@@ZPEAUOpSpecificData@@W4Subpipe@1@@Z @ 0x1802B4E50 (-AddOp_Binary@ScanPipelineBuilder@@QEAAJP6AXPEBUPipelineParams@@PEBUScanOpParams@@@ZPEAUOpSpecif.c)
 * Callees:
 *     ?GetFreeIntermediateBuffer@ScanPipelineBuilder@@IEAA?AW4BufferLocation@@XZ @ 0x1802B5580 (-GetFreeIntermediateBuffer@ScanPipelineBuilder@@IEAA-AW4BufferLocation@@XZ.c)
 */

__int64 __fastcall ScanPipelineBuilder::PingPongBuffer(__int64 a1)
{
  int FreeIntermediateBuffer; // eax
  _DWORD *v2; // rcx
  __int64 v3; // r8
  __int64 result; // rax

  FreeIntermediateBuffer = ScanPipelineBuilder::GetFreeIntermediateBuffer(a1);
  v3 = (int)v2[6];
  if ( (unsigned int)(v3 - 3) <= 2 )
    *((_BYTE *)v2 + v3 + 13) = 1;
  v2[6] = FreeIntermediateBuffer;
  result = (unsigned int)++v2[5];
  v2[8] = result;
  return result;
}
