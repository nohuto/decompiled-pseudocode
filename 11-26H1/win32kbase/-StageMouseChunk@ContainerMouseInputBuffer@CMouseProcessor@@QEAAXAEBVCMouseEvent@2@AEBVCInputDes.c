/*
 * XREFs of ?StageMouseChunk@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@AEBVCInputDest@@@Z @ 0x140224AD4
 * Callers:
 *     ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x14009A480 (-ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z.c)
 *     ?BufferInputDestinedForContainer@CMouseProcessor@@AEAA_NAEBVCMouseEvent@1@AEBVCInputDest@@@Z @ 0x1400CE60C (-BufferInputDestinedForContainer@CMouseProcessor@@AEAA_NAEBVCMouseEvent@1@AEBVCInputDest@@@Z.c)
 *     ?DeliverMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@AEBVCInputDest@@AEBUInputDeliveryContext@1@PEAU_mouseCursorEvent@@@Z @ 0x14012184C (-DeliverMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@AEBVCInputDest@@AEBUInputDel.c)
 * Callees:
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x14006A864 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ?InverseTransformPoint@@YA?AUTransformedPoint@@AEBU1@AEBUtagINPUT_TRANSFORM@@@Z @ 0x1401CFB00 (-InverseTransformPoint@@YA-AUTransformedPoint@@AEBU1@AEBUtagINPUT_TRANSFORM@@@Z.c)
 *     ?GetContainerHwndDest@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x140211D94 (-GetContainerHwndDest@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ?GetContainerId@CInputDest@@QEBA?AUCONTAINER_ID@@XZ @ 0x140211DB8 (-GetContainerId@CInputDest@@QEBA-AUCONTAINER_ID@@XZ.c)
 *     ApiSetGetLatestInputTransform @ 0x140228148 (ApiSetGetLatestInputTransform.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

void __fastcall CMouseProcessor::ContainerMouseInputBuffer::StageMouseChunk(
        CMouseProcessor::ContainerMouseInputBuffer *this,
        const struct CMouseProcessor::CMouseEvent *a2,
        const struct CInputDest *a3)
{
  int (*v6)(void); // rax
  __int64 v7; // rcx
  void (*v8)(void); // rax
  HWND WindowHandle; // rbx
  int *ContainerId; // rax
  int v11; // ecx
  int v12; // edx
  int v13; // r8d
  __int64 UserSessionState; // rax
  float *v15; // rax
  int v16; // edx
  unsigned __int64 v17; // [rsp+20h] [rbp-78h] BYREF
  _BYTE v18[8]; // [rsp+28h] [rbp-70h] BYREF
  float v19[16]; // [rsp+30h] [rbp-68h] BYREF

  v6 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(this) + 48) + 7040LL);
  if ( v6 )
  {
    if ( v6() >= 0 )
    {
      v8 = *(void (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v7) + 48) + 7048LL);
      if ( v8 )
        v8();
    }
  }
  (*(void (__fastcall **)(const struct CMouseProcessor::CMouseEvent *, _QWORD))(*(_QWORD *)a2 + 24LL))(
    a2,
    *((_QWORD *)this + 129));
  *(_QWORD *)(*((_QWORD *)this + 129) + 56LL) = CInputDest::GetContainerHwndDest(a3);
  WindowHandle = CInputDest::GetWindowHandle(a3);
  memset(v19, 0, sizeof(v19));
  if ( (unsigned int)ApiSetGetLatestInputTransform(WindowHandle, v19) )
  {
    *((_BYTE *)this + 1040) = 1;
    ContainerId = CInputDest::GetContainerId(a3);
    v11 = *ContainerId;
    *((_DWORD *)this + 264) = *ContainerId;
    UserSessionState = W32GetUserSessionState(v11, v12, v13);
    v17 = _mm_unpacklo_ps(
            (__m128)COERCE_UNSIGNED_INT((float)*(int *)(UserSessionState + 19216)),
            (__m128)COERCE_UNSIGNED_INT((float)*(int *)(UserSessionState + 19220))).m128_u64[0];
    v15 = (float *)InverseTransformPoint((__int64)v18, (float *)&v17, v19);
    v16 = (int)v15[1];
    *(_DWORD *)(*((_QWORD *)this + 129) + 12LL) = (int)*v15;
    *(_DWORD *)(*((_QWORD *)this + 129) + 16LL) = v16;
  }
}
