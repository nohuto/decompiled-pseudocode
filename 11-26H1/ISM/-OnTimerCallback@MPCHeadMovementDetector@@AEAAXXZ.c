/*
 * XREFs of ?OnTimerCallback@MPCHeadMovementDetector@@AEAAXXZ @ 0x180072788
 * Callers:
 *     _lambda_aa0eaa0d8a3377c6799a200e781869ec_::_lambda_invoker_cdecl_ @ 0x180096D30 (_lambda_aa0eaa0d8a3377c6799a200e781869ec_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?AccumulateYawVelocity@MPCHeadMovementDetector@@AEAA_NXZ @ 0x180072878 (-AccumulateYawVelocity@MPCHeadMovementDetector@@AEAA_NXZ.c)
 *     ?IdleTelemetry@MPCHeadMovementDetector@@AEAAXXZ @ 0x180072B6C (-IdleTelemetry@MPCHeadMovementDetector@@AEAAXXZ.c)
 *     ?WasThereSufficientYawMovement@MPCHeadMovementDetector@@AEAA_NXZ @ 0x180072C98 (-WasThereSufficientYawMovement@MPCHeadMovementDetector@@AEAA_NXZ.c)
 *     ?LogMPCLastHeadYawMovement@ISMTracing@@SAXI@Z @ 0x1800D0BB8 (-LogMPCLastHeadYawMovement@ISMTracing@@SAXI@Z.c)
 *     ?QueueIdleTimerKick@MPCHeadMovementDetector@@AEAAXXZ @ 0x1800D0C04 (-QueueIdleTimerKick@MPCHeadMovementDetector@@AEAAXXZ.c)
 */

void __fastcall MPCHeadMovementDetector::OnTimerCallback(MPCHeadMovementDetector *this)
{
  ULONGLONG TickCount64; // rax
  bool v3; // zf
  __int64 v4; // rcx
  __int64 v5; // rax
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rcx

  TickCount64 = GetTickCount64();
  v3 = *((_BYTE *)this + 64) == 0;
  *((_QWORD *)this + 5) = TickCount64;
  if ( !v3 )
  {
    if ( MPCHeadMovementDetector::AccumulateYawVelocity(this) )
    {
      if ( MPCHeadMovementDetector::WasThereSufficientYawMovement(this) )
      {
        MPCHeadMovementDetector::QueueIdleTimerKick(this);
        RtlPublishWnfStateData(WNF_HOLO_RESET_IDLE_TIMER, 0LL, 0LL, 0LL);
        ISMTracing::LogMPCLastHeadYawMovement(0);
        v4 = *((_QWORD *)this + 5);
        v5 = v4 + *((unsigned int *)this + 35);
        *((_QWORD *)this + 6) = v4;
LABEL_10:
        *((_QWORD *)this + 16) = v5;
        goto LABEL_11;
      }
      v6 = *((_QWORD *)this + 5);
      if ( *((_QWORD *)this + 16) <= v6 )
      {
        if ( *((_QWORD *)this + 6) )
          v7 = (v6 - *((_QWORD *)this + 6)) / 0x3E8;
        else
          LODWORD(v7) = -1;
        ISMTracing::LogMPCLastHeadYawMovement(v7);
        v5 = *((_QWORD *)this + 5) + *((unsigned int *)this + 35);
        goto LABEL_10;
      }
    }
LABEL_11:
    MPCHeadMovementDetector::IdleTelemetry(this);
  }
  MPCHeadMovementDetector::ScheduleNextTimerCallback(this);
}
