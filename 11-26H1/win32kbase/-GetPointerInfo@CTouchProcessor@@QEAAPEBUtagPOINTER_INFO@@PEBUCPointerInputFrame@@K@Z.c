/*
 * XREFs of ?GetPointerInfo@CTouchProcessor@@QEAAPEBUtagPOINTER_INFO@@PEBUCPointerInputFrame@@K@Z @ 0x140064560
 * Callers:
 *     ?ProcessInput@DelayZonePalmRejection@@QEAA_NPEAX@Z @ 0x1400621D0 (-ProcessInput@DelayZonePalmRejection@@QEAA_NPEAX@Z.c)
 * Callees:
 *     ?ThreadUnlockAndUnReference@CRefUnRefPointerMsgId@@QEAAXXZ @ 0x14004B9C0 (-ThreadUnlockAndUnReference@CRefUnRefPointerMsgId@@QEAAXXZ.c)
 *     ?ReferenceAndThreadLock@CRefUnRefPointerMsgId@@QEAAXXZ @ 0x14004BEE0 (-ReferenceAndThreadLock@CRefUnRefPointerMsgId@@QEAAXXZ.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x14006BE3C (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 */

const struct tagPOINTER_INFO *__fastcall CTouchProcessor::GetPointerInfo(
        PERESOURCE *this,
        const struct CPointerInputFrame *a2,
        unsigned int a3)
{
  __int64 v4; // rbx
  int v5; // edx
  int v6; // r8d
  CPointerInfoNode *v7; // rbx
  __int64 v8; // rdx
  _QWORD v10[4]; // [rsp+20h] [rbp-38h] BYREF
  char v11; // [rsp+40h] [rbp-18h]
  PERESOURCE *v12; // [rsp+48h] [rbp-10h]

  v10[0] = 0LL;
  v11 = 0;
  v12 = this + 4;
  v4 = a3;
  ExEnterCriticalRegionAndAcquireResourceExclusive(this[4]);
  CRefUnRefPointerMsgId::ReferenceAndThreadLock((CRefUnRefPointerMsgId *)v10, v5, v6);
  v7 = (CPointerInfoNode *)(*((_QWORD *)a2 + 30) + 480 * v4);
  if ( (unsigned int)CPointerInfoNode::IsValid(v7) )
  {
    CRefUnRefPointerMsgId::ThreadUnlockAndUnReference((CRefUnRefPointerMsgId *)v10, v8);
    ExReleaseResourceAndLeaveCriticalRegion(*v12);
    return (CPointerInfoNode *)((char *)v7 + 168);
  }
  else
  {
    CRefUnRefPointerMsgId::ThreadUnlockAndUnReference((CRefUnRefPointerMsgId *)v10, v8);
    ExReleaseResourceAndLeaveCriticalRegion(*v12);
    return 0LL;
  }
}
