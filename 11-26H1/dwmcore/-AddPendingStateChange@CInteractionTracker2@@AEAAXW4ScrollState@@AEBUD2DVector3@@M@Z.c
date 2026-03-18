/*
 * XREFs of ?AddPendingStateChange@CInteractionTracker2@@AEAAXW4ScrollState@@AEBUD2DVector3@@M@Z @ 0x18027197C
 * Callers:
 *     ?AddOrUpdatePendingInertiaStateChange@CInteractionTracker2@@UEAAXW4ScrollAxis@@MW4TrackerUpdateType@CInteractionTrackerBase@@@Z @ 0x1802717D0 (-AddOrUpdatePendingInertiaStateChange@CInteractionTracker2@@UEAAXW4ScrollAxis@@MW4TrackerUpdateT.c)
 *     ?ProcessDwmRestartCompleted@CInteractionTracker2@@AEAAXXZ @ 0x1802749CC (-ProcessDwmRestartCompleted@CInteractionTracker2@@AEAAXXZ.c)
 *     ?SetState@CInteractionTracker2@@EEAAXW4ScrollState@@W4TrackerUpdateType@CInteractionTrackerBase@@@Z @ 0x180277000 (-SetState@CInteractionTracker2@@EEAAXW4ScrollState@@W4TrackerUpdateType@CInteractionTrackerBase@.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArray@UGraphInputParameters@CBrushRenderingGraph@@$0A@@@QEAAJPEFBUGraphInputParameters@CBrushRenderingGraph@@I@Z @ 0x1800FB60C (-AddMultipleAndSet@-$DynArray@UGraphInputParameters@CBrushRenderingGraph@@$0A@@@QEAAJPEFBUGraphI.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 */

__int64 __fastcall CInteractionTracker2::AddPendingStateChange(__int64 a1, int a2, __int64 *a3, float a4)
{
  int v4; // eax
  __int64 v6; // rdx
  __int64 result; // rax
  __int64 v8; // xmm0_8
  int v9; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+24h] [rbp-24h]
  int v11; // [rsp+2Ch] [rbp-1Ch]
  float v12; // [rsp+30h] [rbp-18h]
  char v13; // [rsp+34h] [rbp-14h]
  __int16 v14; // [rsp+35h] [rbp-13h]
  char v15; // [rsp+37h] [rbp-11h]

  v4 = *(_DWORD *)(a1 + 120);
  if ( !v4 || (v6 = 3LL * (unsigned int)(v4 - 1), result = *(_QWORD *)(a1 + 96), *(_DWORD *)(result + 8 * v6) != a2) )
  {
    v8 = *a3;
    v11 = *((_DWORD *)a3 + 2);
    v14 = 0;
    v15 = 0;
    v12 = a4;
    v9 = a2;
    v10 = v8;
    v13 = 0;
    return DynArray<CBrushRenderingGraph::GraphInputParameters,0>::AddMultipleAndSet(a1 + 96, &v9);
  }
  return result;
}
