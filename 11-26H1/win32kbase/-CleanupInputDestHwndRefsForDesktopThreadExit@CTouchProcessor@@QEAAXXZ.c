/*
 * XREFs of ?CleanupInputDestHwndRefsForDesktopThreadExit@CTouchProcessor@@QEAAXXZ @ 0x140189FE0
 * Callers:
 *     <none>
 * Callees:
 *     ?ThreadUnlockAndUnReference@CRefUnRefPointerMsgId@@QEAAXXZ @ 0x14004B9C0 (-ThreadUnlockAndUnReference@CRefUnRefPointerMsgId@@QEAAXXZ.c)
 *     ?ReferenceAndThreadLock@CRefUnRefPointerMsgId@@QEAAXXZ @ 0x14004BEE0 (-ReferenceAndThreadLock@CRefUnRefPointerMsgId@@QEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _lambda_eba40ec2e57c463160aa5102b24468e6_::operator() @ 0x1402137D0 (_lambda_eba40ec2e57c463160aa5102b24468e6_--operator().c)
 */

void __fastcall CTouchProcessor::CleanupInputDestHwndRefsForDesktopThreadExit(PERESOURCE *this)
{
  int v2; // edx
  int v3; // r8d
  __int64 v4; // rdx
  __int64 v5; // rcx
  PERESOURCE Flink; // rdi
  char v7; // al
  unsigned int v8; // r15d
  char *SharedWaiters; // r13
  __int64 i; // r12
  __int64 v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // rcx
  CTouchProcessor *v14; // rbx
  _QWORD v15[4]; // [rsp+20h] [rbp-30h] BYREF
  char v16; // [rsp+40h] [rbp-10h]
  PERESOURCE *v17; // [rsp+48h] [rbp-8h]
  int v18; // [rsp+80h] [rbp+30h] BYREF

  v15[0] = 0LL;
  v16 = 0;
  v17 = this + 4;
  ExEnterCriticalRegionAndAcquireResourceExclusive(this[4]);
  CRefUnRefPointerMsgId::ReferenceAndThreadLock((CRefUnRefPointerMsgId *)v15, v2, v3);
  LOBYTE(v18) = 0;
  Flink = this[6];
  v7 = 0;
  if ( Flink != (PERESOURCE)(this + 6) )
  {
    do
    {
      v8 = 0;
      SharedWaiters = (char *)Flink[2].SharedWaiters;
      for ( i = *(_QWORD *)&Flink[2].ActiveCount; v8 < LODWORD(Flink->ExclusiveWaiters); ++v8 )
      {
        lambda_eba40ec2e57c463160aa5102b24468e6_::operator()(v5, &SharedWaiters[160 * v8 + 16], &v18);
        v11 = 480LL * v8;
        lambda_eba40ec2e57c463160aa5102b24468e6_::operator()(v12, i + v11 + 24, &v18);
        lambda_eba40ec2e57c463160aa5102b24468e6_::operator()(v13, i + v11 + 352, &v18);
      }
      Flink = (PERESOURCE)Flink->SystemResourcesList.Flink;
    }
    while ( Flink != (PERESOURCE)(this + 6) );
    v7 = v18;
  }
  if ( !gbIgnoreStressedOutStuff && v7 )
  {
    v18 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 17292LL);
  }
  LOBYTE(v18) = 0;
  v14 = (CTouchProcessor *)this[8];
  if ( v14 != (CTouchProcessor *)(this + 8) )
  {
    do
    {
      lambda_eba40ec2e57c463160aa5102b24468e6_::operator()(v5, (char *)v14 + 72, &v18);
      v14 = *(CTouchProcessor **)v14;
    }
    while ( v14 != (CTouchProcessor *)(this + 8) );
    if ( (_BYTE)v18 )
    {
      v18 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 17302LL);
    }
  }
  CRefUnRefPointerMsgId::ThreadUnlockAndUnReference((CRefUnRefPointerMsgId *)v15, v4);
  ExReleaseResourceAndLeaveCriticalRegion(*v17);
}
