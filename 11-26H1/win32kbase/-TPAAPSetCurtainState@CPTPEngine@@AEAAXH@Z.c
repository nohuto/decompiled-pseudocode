/*
 * XREFs of ?TPAAPSetCurtainState@CPTPEngine@@AEAAXH@Z @ 0x1401058D4
 * Callers:
 *     ?HandleButtonSuppression@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x14010325C (-HandleButtonSuppression@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 *     ?ProcessInputFrame@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x140103D7C (-ProcessInputFrame@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 *     ?UpdateTPStateIndicator@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUCContactState@@PEAUPTPEnginePointerNode@@@Z @ 0x1401B2030 (-UpdateTPStateIndicator@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUCContactState@@PEAUPTPEnginePointerNo.c)
 *     ?ProcessInitialization@CPTPEngine@@MEAAJXZ @ 0x1402270D0 (-ProcessInitialization@CPTPEngine@@MEAAJXZ.c)
 * Callees:
 *     ?SendEtwOutput@CBasePTPEngine@@IEAAXW4Action@Etw@Payload@PTPTelemetryOutput@@TParameters@345@@Z @ 0x140106324 (-SendEtwOutput@CBasePTPEngine@@IEAAXW4Action@Etw@Payload@PTPTelemetryOutput@@TParameters@345@@Z.c)
 */

void __fastcall CPTPEngine::TPAAPSetCurtainState(CPTPEngine *this, int a2)
{
  int v2; // r10d
  __int128 v3; // xmm0
  _BYTE v4[20]; // [rsp+20h] [rbp-28h] BYREF

  v2 = *((_DWORD *)this + 768);
  if ( (unsigned __int16)(v2 & 0x8000) >> 15 != (a2 != 0) )
  {
    *(_DWORD *)v4 = a2;
    *(_OWORD *)&v4[4] = 0LL;
    v3 = *(_OWORD *)v4;
    *((_DWORD *)this + 768) = (a2 << 15) ^ (v2 ^ (a2 << 15)) & 0xFFFF7FFF;
    *(_OWORD *)v4 = v3;
    *(_DWORD *)&v4[16] = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 12));
    CBasePTPEngine::SendEtwOutput(this, 1LL, v4);
  }
}
