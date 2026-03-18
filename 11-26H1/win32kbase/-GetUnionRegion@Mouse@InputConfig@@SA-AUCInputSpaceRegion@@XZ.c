/*
 * XREFs of ?GetUnionRegion@Mouse@InputConfig@@SA?AUCInputSpaceRegion@@XZ @ 0x140085C70
 * Callers:
 *     ?ConvertExplicitCoordinatesToAbsolute@MouseInputDataEx@CMouseProcessor@@QEAAXXZ @ 0x140081794 (-ConvertExplicitCoordinatesToAbsolute@MouseInputDataEx@CMouseProcessor@@QEAAXXZ.c)
 *     RIMGetVirtualDesktopPhysicalSize @ 0x140085740 (RIMGetVirtualDesktopPhysicalSize.c)
 *     ?GetMouseCoord@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEAUtagPOINT@@PEAU_SUBPIXELS@@@Z @ 0x1400857AC (-GetMouseCoord@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEAUtagPOINT@@PEAU_SUBPIXELS@@@Z.c)
 *     ?OnDisplayStateChange@CCursorClip@@QEAAXW4CursorDisplayChangeOptions@@@Z @ 0x14008F210 (-OnDisplayStateChange@CCursorClip@@QEAAXW4CursorDisplayChangeOptions@@@Z.c)
 *     ?ForwardInputToISM@CMouseProcessor@@AEAA?AW4ISMForwardingDecision@1@AEAVCInputDest@@AEBVCMouseEvent@1@AEBUInputDeliveryContext@1@AEBUtagPOINT@@II_K@Z @ 0x14009BAE8 (-ForwardInputToISM@CMouseProcessor@@AEAA-AW4ISMForwardingDecision@1@AEAVCInputDest@@AEBVCMouseEv.c)
 *     ?ProcessMouseInputData@CMouseProcessor@@AEAAXPEAVMouseInputDataEx@1@PEAUMouseInputProcessingState@@AEAU_MousePacketPerf@@PEBU_MOUSE_INPUT_DATA@@PEBUtagUIPI_INFO_INT@@@Z @ 0x14009F170 (-ProcessMouseInputData@CMouseProcessor@@AEAAXPEAVMouseInputDataEx@1@PEAUMouseInputProcessingStat.c)
 *     ?GetMouseCoordinateAbsolute@CMouseProcessor@@AEAAXJJKPEAUtagPOINT@@PEAU_SUBPIXELS@@_K2W4GetMouseCoordinateOptions@@@Z @ 0x140148504 (-GetMouseCoordinateAbsolute@CMouseProcessor@@AEAAXJJKPEAUtagPOINT@@PEAU_SUBPIXELS@@_K2W4GetMouse.c)
 *     ?EndInertia@CInertiaManager@@QEAA_NXZ @ 0x1401B0814 (-EndInertia@CInertiaManager@@QEAA_NXZ.c)
 * Callees:
 *     <none>
 */

_OWORD *__fastcall InputConfig::Mouse::GetUnionRegion(_OWORD *a1, int a2, int a3)
{
  __int64 UserSessionState; // rdi
  int v5; // edx
  int v6; // ecx
  int v7; // r8d
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rdx
  _OWORD *v11; // rcx
  _OWORD *v12; // rax
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int64 v23; // rax

  UserSessionState = W32GetUserSessionState((_DWORD)a1, a2, a3);
  ExEnterCriticalRegionAndAcquireResourceShared(*(PERESOURCE *)(UserSessionState + 18688));
  v8 = *(_QWORD *)(W32GetUserSessionState(v6, v5, v7) + 18680);
  v9 = *(_QWORD *)(v8 + 24);
  if ( !v9 )
    v9 = v8 + 32;
  v10 = 5LL;
  v11 = a1;
  v12 = (_OWORD *)(v9 + 24);
  do
  {
    v13 = v12[1];
    *v11 = *v12;
    v14 = v12[2];
    v11[1] = v13;
    v15 = v12[3];
    v11[2] = v14;
    v16 = v12[4];
    v11[3] = v15;
    v17 = v12[5];
    v11[4] = v16;
    v18 = v12[6];
    v11[5] = v17;
    v19 = v12[7];
    v12 += 8;
    v11[6] = v18;
    v11 += 8;
    *(v11 - 1) = v19;
    --v10;
  }
  while ( v10 );
  v20 = v12[1];
  *v11 = *v12;
  v21 = v12[2];
  v11[1] = v20;
  v22 = v12[3];
  v23 = *((_QWORD *)v12 + 8);
  v11[2] = v21;
  v11[3] = v22;
  *((_QWORD *)v11 + 8) = v23;
  ExReleaseResourceAndLeaveCriticalRegion(*(PERESOURCE *)(UserSessionState + 18688));
  return a1;
}
