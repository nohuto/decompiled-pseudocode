/*
 * XREFs of Windows::Internal::MakeOpLambda_0_Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults_______lambda_4637121c97463dde84d1e4eb150ea79f___ @ 0x1803F52E4
 * Callers:
 *     ?GetCurrentActivityForAllViewsAsync@TaskFlowImmersiveShellBroker@@UEAAJPEAPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@@Z @ 0x1803F82B0 (-GetCurrentActivityForAllViewsAsync@TaskFlowImmersiveShellBroker@@UEAAJPEAPEAU-$IAsyncOperation@.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802C8EB4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x1802CE03C (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall Windows::Internal::MakeOpLambda_0_Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults_______lambda_4637121c97463dde84d1e4eb150ea79f___(
        _QWORD *a1)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rbx
  __int64 v4; // rax

  v2 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v3 = v2;
  if ( !v2 )
    return 0LL;
  *v2 = &CCrashDetector::CHandler::`vftable';
  v2[1] = *a1;
  v4 = a1[1];
  a1[1] = 0LL;
  v3[2] = v4;
  *v3 = &off_18073B258;
  *((_DWORD *)v3 + 6) = 0;
  `eh vector constructor iterator'(
    (char *)v3 + 32,
    8LL,
    1LL,
    (void (__fastcall *)(char *))Microsoft::WRL::AgileRef::AgileRef);
  *((_DWORD *)v3 + 6) = 0;
  return v3;
}
