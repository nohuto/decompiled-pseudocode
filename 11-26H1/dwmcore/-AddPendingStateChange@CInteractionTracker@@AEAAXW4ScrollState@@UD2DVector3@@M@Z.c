/*
 * XREFs of ?AddPendingStateChange@CInteractionTracker@@AEAAXW4ScrollState@@UD2DVector3@@M@Z @ 0x1801C4F8C
 * Callers:
 *     ?AddOrUpdatePendingInertiaStateChange@CInteractionTracker@@UEAAXW4ScrollAxis@@MW4TrackerUpdateType@CInteractionTrackerBase@@@Z @ 0x1801C4B20 (-AddOrUpdatePendingInertiaStateChange@CInteractionTracker@@UEAAXW4ScrollAxis@@MW4TrackerUpdateTy.c)
 *     ?SetState@CInteractionTracker@@EEAAXW4ScrollState@@W4TrackerUpdateType@CInteractionTrackerBase@@@Z @ 0x1801C4CE0 (-SetState@CInteractionTracker@@EEAAXW4ScrollState@@W4TrackerUpdateType@CInteractionTrackerBase@@.c)
 *     ?ProcessDwmRestartCompleted@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_DWMRESTARTCOMPLETED@@@Z @ 0x18021EF48 (-ProcessDwmRestartCompleted@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACT.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArray@UGraphInputParameters@CBrushRenderingGraph@@$0A@@@QEAAJPEFBUGraphInputParameters@CBrushRenderingGraph@@I@Z @ 0x1800FB60C (-AddMultipleAndSet@-$DynArray@UGraphInputParameters@CBrushRenderingGraph@@$0A@@@QEAAJPEFBUGraphI.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 */

__int64 __fastcall CInteractionTracker::AddPendingStateChange(__int64 a1, int a2, __int64 *a3, float a4)
{
  int v4; // eax
  __int64 v6; // xmm0_8
  __int64 result; // rax
  __int64 v8; // rdx
  int v9; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+24h] [rbp-24h]
  int v11; // [rsp+2Ch] [rbp-1Ch]
  float v12; // [rsp+30h] [rbp-18h]
  char v13; // [rsp+34h] [rbp-14h]
  __int16 v14; // [rsp+35h] [rbp-13h]
  char v15; // [rsp+37h] [rbp-11h]

  v4 = *(_DWORD *)(a1 + 120);
  if ( !v4 || (v8 = 3LL * (unsigned int)(v4 - 1), result = *(_QWORD *)(a1 + 96), *(_DWORD *)(result + 8 * v8) != a2) )
  {
    v6 = *a3;
    v11 = *((_DWORD *)a3 + 2);
    v14 = 0;
    v15 = 0;
    v12 = a4;
    v9 = a2;
    v10 = v6;
    v13 = 0;
    return DynArray<CBrushRenderingGraph::GraphInputParameters,0>::AddMultipleAndSet(a1 + 96, &v9);
  }
  return result;
}
