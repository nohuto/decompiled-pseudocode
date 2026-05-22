/*
 * XREFs of ?CheckAndUpdateCursorOwnerForContext@CursorProcessor@@AEAA_NPEAVInputContext@@K@Z @ 0x18014A98C
 * Callers:
 *     ?OnInput@CursorProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x18014B1C0 (-OnInput@CursorProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C32C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800173F8 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??4?$ComPtr@UIMPCFocusTarget@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18002A9EC (--4-$ComPtr@UIMPCFocusTarget@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?CursorProcessorGenerateMouseLeave@Cursor@InputTraceLogging@@SAXKK@Z @ 0x18014AB30 (-CursorProcessorGenerateMouseLeave@Cursor@InputTraceLogging@@SAXKK@Z.c)
 *     ?CursorProcessorTargetUpdated@Cursor@InputTraceLogging@@SAXPEBUIInputTarget@@0KKKK@Z @ 0x18014AB94 (-CursorProcessorTargetUpdated@Cursor@InputTraceLogging@@SAXPEBUIInputTarget@@0KKKK@Z.c)
 *     ?GetWindowsMessageProcessAndThreadFromContext@CursorProcessor@@CA?AU?$pair@KK@std@@PEAVInputContext@@@Z @ 0x18014AEC0 (-GetWindowsMessageProcessAndThreadFromContext@CursorProcessor@@CA-AU-$pair@KK@std@@PEAVInputCont.c)
 *     ?InputTargetsSameByInputSite@CursorProcessor@@CA_NV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@0@Z @ 0x18014AF9C (-InputTargetsSameByInputSite@CursorProcessor@@CA_NV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@0@Z.c)
 *     ?UpdateCursorOwnerAndNotifyTargets@CursorProcessor@@AEAAXKK@Z @ 0x18014B34C (-UpdateCursorOwnerAndNotifyTargets@CursorProcessor@@AEAAXKK@Z.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall CursorProcessor::CheckAndUpdateCursorOwnerForContext(
        CursorProcessor *this,
        struct InputContext *a2,
        unsigned int a3)
{
  char v5; // r14
  const struct IInputTarget *v6; // rbx
  __int64 *v7; // r15
  unsigned int *v8; // r13
  unsigned int v9; // edi
  unsigned int *v10; // r12
  int v11; // ebx
  __int64 v12; // rcx
  __int64 v13; // r9
  unsigned int *v14; // rax
  __int64 v16; // [rsp+80h] [rbp+48h] BYREF
  const struct IInputTarget *v17; // [rsp+88h] [rbp+50h] BYREF
  unsigned int v18; // [rsp+90h] [rbp+58h]
  const struct IInputTarget *v19; // [rsp+98h] [rbp+60h] BYREF

  v18 = a3;
  v5 = 0;
  v6 = (const struct IInputTarget *)*((_QWORD *)a2 + 2);
  v19 = v6;
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)&v19);
  v7 = (__int64 *)((char *)this + 88);
  if ( *((_BYTE *)this + 72)
    || v6 != (const struct IInputTarget *)*v7
    && (v16 = *v7,
        wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(&v16),
        v17 = v6,
        wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)&v17),
        !(unsigned __int8)CursorProcessor::InputTargetsSameByInputSite(&v17, &v16)) )
  {
    CursorProcessor::GetWindowsMessageProcessAndThreadFromContext(&v16, a2);
    v8 = (unsigned int *)((char *)this + 112);
    v9 = v16;
    if ( *((_DWORD *)this + 28) == (_DWORD)v16 )
    {
      if ( *((_DWORD *)this + 29) == HIDWORD(v16) )
      {
LABEL_14:
        Microsoft::WRL::ComPtr<IMPCFocusTarget>::operator=(v7, &v19);
        goto LABEL_15;
      }
      v10 = (unsigned int *)((char *)this + 112);
    }
    else
    {
      v10 = (unsigned int *)((char *)this + 112);
    }
    InputTraceLogging::Cursor::CursorProcessorTargetUpdated(
      (const struct IInputTarget *)*v7,
      v6,
      *v8,
      v16,
      *((_DWORD *)this + 29),
      HIDWORD(v16));
    v11 = HIDWORD(v16);
    CursorProcessor::UpdateCursorOwnerAndNotifyTargets(this, HIDWORD(v16), v18);
    v12 = *((unsigned int *)this + 29);
    if ( (_DWORD)v12 )
    {
      v13 = 0LL;
      v14 = (unsigned int *)((char *)this + 112);
      if ( !v11 || (v14 = v10, v10 = (unsigned int *)((char *)this + 112), *v8 != v9) )
      {
        v13 = 1LL;
        v10 = v14;
      }
      NtMITPostThreadEventMessage(v12, 0LL, 675LL, v13, 0);
      InputTraceLogging::Cursor::CursorProcessorGenerateMouseLeave(*v10, *((_DWORD *)this + 29));
      v7 = (__int64 *)((char *)this + 88);
    }
    *((_BYTE *)this + 72) = 0;
    *v10 = v9;
    *((_DWORD *)this + 29) = v11;
    v5 = 1;
    goto LABEL_14;
  }
LABEL_15:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v19);
  return v5;
}
