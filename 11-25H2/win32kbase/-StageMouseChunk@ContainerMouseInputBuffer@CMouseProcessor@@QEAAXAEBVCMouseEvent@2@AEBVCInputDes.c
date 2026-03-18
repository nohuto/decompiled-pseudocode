/*
 * XREFs of ?StageMouseChunk@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@AEBVCInputDest@@@Z @ 0x140222370
 * Callers:
 *     ?BufferInputDestinedForContainer@CMouseProcessor@@AEAA_NAEBVCMouseEvent@1@AEBVCInputDest@@@Z @ 0x14005F048 (-BufferInputDestinedForContainer@CMouseProcessor@@AEAA_NAEBVCMouseEvent@1@AEBVCInputDest@@@Z.c)
 * Callees:
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1400B8074 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ?InverseTransformPoint@@YA?AUTransformedPoint@@AEBU1@AEBUtagINPUT_TRANSFORM@@@Z @ 0x1401AD9C0 (-InverseTransformPoint@@YA-AUTransformedPoint@@AEBU1@AEBUtagINPUT_TRANSFORM@@@Z.c)
 *     ?GetContainerHwndDest@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1401F6FD0 (-GetContainerHwndDest@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ?GetContainerId@CInputDest@@QEBA?AUCONTAINER_ID@@XZ @ 0x1401F6FF4 (-GetContainerId@CInputDest@@QEBA-AUCONTAINER_ID@@XZ.c)
 *     ApiSetGetLatestInputTransform @ 0x140225EA8 (ApiSetGetLatestInputTransform.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 *     memset @ 0x140243000 (memset.c)
 */

void __fastcall CMouseProcessor::ContainerMouseInputBuffer::StageMouseChunk(
        CMouseProcessor::ContainerMouseInputBuffer *this,
        const struct CMouseProcessor::CMouseEvent *a2,
        const struct CInputDest *a3)
{
  int (*v6)(void); // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  void (*v9)(void); // rax
  HWND WindowHandle; // rbx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 UserSessionState; // rax
  float *v14; // rax
  int v15; // edx
  unsigned __int64 v16; // [rsp+20h] [rbp-78h] BYREF
  _BYTE v17[8]; // [rsp+28h] [rbp-70h] BYREF
  float v18[16]; // [rsp+30h] [rbp-68h] BYREF

  v6 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(this, a2) + 48) + 7480LL);
  if ( v6 )
  {
    if ( v6() >= 0 )
    {
      v9 = *(void (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v8, v7) + 48) + 7488LL);
      if ( v9 )
        v9();
    }
  }
  (*(void (__fastcall **)(const struct CMouseProcessor::CMouseEvent *, _QWORD))(*(_QWORD *)a2 + 24LL))(
    a2,
    *((_QWORD *)this + 129));
  *(_QWORD *)(*((_QWORD *)this + 129) + 56LL) = CInputDest::GetContainerHwndDest(a3);
  WindowHandle = CInputDest::GetWindowHandle(a3);
  memset(v18, 0, sizeof(v18));
  if ( (unsigned int)ApiSetGetLatestInputTransform(WindowHandle, v18) )
  {
    *((_BYTE *)this + 1040) = 1;
    v11 = (unsigned int)*CInputDest::GetContainerId(a3);
    *((_DWORD *)this + 264) = v11;
    UserSessionState = W32GetUserSessionState(v11, v12);
    v16 = _mm_unpacklo_ps(
            (__m128)COERCE_UNSIGNED_INT((float)*(int *)(UserSessionState + 19184)),
            (__m128)COERCE_UNSIGNED_INT((float)*(int *)(UserSessionState + 19188))).m128_u64[0];
    v14 = (float *)InverseTransformPoint((__int64)v17, (float *)&v16, v18);
    v15 = (int)v14[1];
    *(_DWORD *)(*((_QWORD *)this + 129) + 12LL) = (int)*v14;
    *(_DWORD *)(*((_QWORD *)this + 129) + 16LL) = v15;
  }
}
