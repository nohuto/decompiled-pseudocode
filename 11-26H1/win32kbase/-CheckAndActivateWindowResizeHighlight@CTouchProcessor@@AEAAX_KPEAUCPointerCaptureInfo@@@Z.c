/*
 * XREFs of ?CheckAndActivateWindowResizeHighlight@CTouchProcessor@@AEAAX_KPEAUCPointerCaptureInfo@@@Z @ 0x14010A904
 * Callers:
 *     ?SetPointerCapture@CTouchProcessor@@QEAAH_KAEBVCInputDest@@W4CPointerCaptureMode@@HH@Z @ 0x14010A518 (-SetPointerCapture@CTouchProcessor@@QEAAH_KAEBVCInputDest@@W4CPointerCaptureMode@@HH@Z.c)
 * Callees:
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x14004C5B4 (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     ?ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z @ 0x14004C77C (-ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z.c)
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x14004C87C (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     ?GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z @ 0x14004E2A8 (-GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x14006A864 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     EditionTouchResizeAction @ 0x140249098 (EditionTouchResizeAction.c)
 *     IsTouchResizeActionSupported @ 0x1402492B8 (IsTouchResizeActionSupported.c)
 */

void __fastcall CTouchProcessor::CheckAndActivateWindowResizeHighlight(
        PERESOURCE *this,
        __int64 a2,
        struct CPointerCaptureInfo *a3)
{
  int v6; // esi
  CTouchProcessor *v7; // rcx
  struct CPointerMsgData *NonConstMsgData; // rax
  struct CPointerMsgData *v9; // rbx
  _QWORD *v10; // rax
  int v11; // ebx
  HWND WindowHandle; // rax

  if ( !tagDomLock::IsLockedShared(this + 4) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3785LL);
  v6 = *((_DWORD *)a3 + 32);
  if ( v6 >= 10 && v6 <= 17 && *(_DWORD *)a3 == 1 )
  {
    if ( *((_DWORD *)a3 + 25) )
    {
      if ( (int)IsTouchResizeActionSupported() >= 0 )
      {
        NonConstMsgData = CTouchProcessor::GetNonConstMsgData(v7, a2);
        v9 = NonConstMsgData;
        if ( NonConstMsgData )
        {
          if ( (*((_DWORD *)NonConstMsgData + 9) & 0x10) != 0 )
          {
            v10 = CTouchProcessor::ReferenceFrame((__int64)this, *((_DWORD *)NonConstMsgData + 7));
            if ( v10 )
            {
              v11 = *(_DWORD *)(480LL * *((unsigned int *)v9 + 8) + v10[30] + 168);
              CTouchProcessor::UnreferenceFrame((__int64)this, (__int64)v10);
              if ( v11 == 2 )
              {
                WindowHandle = CInputDest::GetWindowHandle((struct CPointerCaptureInfo *)((char *)a3 + 8));
                EditionTouchResizeAction(WindowHandle, (unsigned int)(v6 - 9), 0LL);
                *((_DWORD *)a3 + 33) |= 1u;
              }
            }
          }
        }
      }
    }
  }
}
