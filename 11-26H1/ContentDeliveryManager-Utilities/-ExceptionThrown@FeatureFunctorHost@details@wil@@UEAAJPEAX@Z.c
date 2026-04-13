/*
 * XREFs of ?ExceptionThrown@FeatureFunctorHost@details@wil@@UEAAJPEAX@Z @ 0x18002EBE0
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x180021E51 (memset_0.c)
 *     ?FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x18002EC44 (-FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 *     ?GetCaughtExceptionError@ThreadErrorContext@wil@@QEAA_NAEAUFailureInfo@2@PEBUDiagnosticsInfo@2@J@Z @ 0x180030C94 (-GetCaughtExceptionError@ThreadErrorContext@wil@@QEAA_NAEAUFailureInfo@2@PEBUDiagnosticsInfo@2@J.c)
 *     ?RecordFeatureError@details@wil@@YAXIAEBUFailureInfo@2@AEBUDiagnosticsInfo@2@PEAX@Z @ 0x180037410 (-RecordFeatureError@details@wil@@YAXIAEBUFailureInfo@2@AEBUDiagnosticsInfo@2@PEAX@Z.c)
 *     ?RethrowCaughtException@wil@@YAXXZ @ 0x18003A464 (-RethrowCaughtException@wil@@YAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall __noreturn wil::details::FeatureFunctorHost::ExceptionThrown(
        wil::details::FeatureFunctorHost *this,
        void *a2)
{
  const struct wil::FailureInfo *v3; // rdi
  unsigned int v4; // esi
  int v5; // r9d
  wil *v6; // rcx
  const struct DiagnosticsInfo *v7; // r9
  wil::details::in1diag3 *v8; // rcx
  unsigned int v9[42]; // [rsp+20h] [rbp-A8h] BYREF

  v3 = (const struct wil::FailureInfo *)*((_QWORD *)this + 3);
  v4 = *((_DWORD *)this + 8);
  memset_0(v9, 0, 0x98uLL);
  if ( wil::ThreadErrorContext::GetCaughtExceptionError(
         (wil::details::FeatureFunctorHost *)((char *)this + 8),
         (struct wil::FailureInfo *)v9,
         (const struct DiagnosticsInfo *)v3,
         v5) )
  {
    wil::details::RecordFeatureError((wil::details *)v4, (unsigned int)v9, v3, v7, *(void **)v9);
  }
  wil::RethrowCaughtException(v6);
  wil::details::in1diag3::FailFastImmediate_Unexpected(v8);
}
