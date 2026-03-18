/*
 * XREFs of _GetPointerDeviceRects @ 0x140090CA4
 * Callers:
 *     NtUserGetPointerDeviceRects @ 0x140090B80 (NtUserGetPointerDeviceRects.c)
 *     ?ProcessInertia@Edgy@@YAXPEBUINERTIA_INFO_INTERNAL@@@Z @ 0x14020D788 (-ProcessInertia@Edgy@@YAXPEBUINERTIA_INFO_INTERNAL@@@Z.c)
 *     NtUserGetHimetricScaleFactorFromPixelLocation @ 0x14020E040 (NtUserGetHimetricScaleFactorFromPixelLocation.c)
 *     ?CreateEdgePalmRejectionZones@PalmRejection@@YAHPEAX@Z @ 0x1402A55DC (-CreateEdgePalmRejectionZones@PalmRejection@@YAHPEAX@Z.c)
 *     ?_HitTestEdgyRegion@Edgy@@YA?AUtagHIT_TEST_RESULT@1@AEBUtagEDGY_DATA@@PEAXUtagPOINT@@W4tagPOINTER_DEVICE_TYPE@@H@Z @ 0x1402A5F24 (-_HitTestEdgyRegion@Edgy@@YA-AUtagHIT_TEST_RESULT@1@AEBUtagEDGY_DATA@@PEAXUtagPOINT@@W4tagPOINTE.c)
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140019B64 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x140019B80 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     GetScreenRectForDpi @ 0x140090A20 (GetScreenRectForDpi.c)
 *     GetCurrentThreadCompositedDpi @ 0x140090E74 (GetCurrentThreadCompositedDpi.c)
 *     VirtualizeMultiMonDigitizerSize @ 0x140090EE0 (VirtualizeMultiMonDigitizerSize.c)
 *     EnsurePointerDeviceHasMonitor @ 0x1400C8680 (EnsurePointerDeviceHasMonitor.c)
 */

__int64 __fastcall GetPointerDeviceRects(__int64 a1, __m128i *a2, __m128i *a3)
{
  unsigned int v6; // r14d
  unsigned __int16 CurrentThreadCompositedDpi; // ax
  unsigned __int16 v8; // bx
  __m128i v9; // xmm6
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __m128i *v15; // rax
  __int64 v16; // r15
  __m128i *v17; // rcx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __m128i *v19; // [rsp+20h] [rbp-50h] BYREF
  __m128i v20; // [rsp+28h] [rbp-48h] BYREF
  _BYTE v21[16]; // [rsp+38h] [rbp-38h] BYREF
  __m128i v22; // [rsp+48h] [rbp-28h] BYREF
  int v23; // [rsp+A8h] [rbp+38h] BYREF

  v23 = 0;
  v19 = 0LL;
  v6 = 1;
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v21);
  if ( !(unsigned int)ResolveMouseOrPointerDevice(a1, &v19, &v23) )
  {
    v6 = 0;
    goto LABEL_9;
  }
  CurrentThreadCompositedDpi = GetCurrentThreadCompositedDpi();
  v8 = CurrentThreadCompositedDpi;
  if ( v23 )
  {
    if ( a3 )
      *a3 = *GetScreenRectForDpi(&v20, CurrentThreadCompositedDpi);
    if ( a2 )
    {
      v9 = *(__m128i *)RIMGetVirtualDesktopPhysicalSize(&v22);
      v20 = v9;
      if ( ***(_DWORD ***)(W32GetUserSessionState(v11, v10) + 56968) > 1u )
      {
        VirtualizeMultiMonDigitizerSize(&v20, v8);
        v9 = v20;
      }
      *a2 = v9;
    }
    goto LABEL_9;
  }
  EnsurePointerDeviceHasMonitor(v19);
  if ( !a2 )
    goto LABEL_13;
  v15 = v19;
  *a2 = v19[11];
  v16 = v15[1].m128i_i64[0];
  if ( ***(_DWORD ***)(W32GetUserSessionState(v14, v13) + 56968) <= 1u || *(_DWORD *)(v16 + 1336) )
    goto LABEL_13;
  v17 = v19;
  if ( v19[1].m128i_i32[2] != 7 )
  {
    VirtualizeMultiMonDigitizerSize(a2, v8);
LABEL_13:
    v17 = v19;
  }
  if ( a3 )
  {
    if ( *(_DWORD *)(v17[1].m128i_i64[0] + 1336) )
    {
      *a3 = v17[10];
      CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v17);
      PhysicalToLogicalDPIRect(a3, a3, CurrentThreadDpiAwarenessContext, 0LL);
    }
    else
    {
      *a3 = *GetScreenRectForDpi(&v22, v8);
    }
  }
LABEL_9:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v21);
  return v6;
}
