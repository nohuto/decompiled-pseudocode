/*
 * XREFs of Windows::Internal::MakeOpLambda_0_Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::IPropertyValue___lambda_7c875662d6abaa9f8d1386a75bd755d7___ @ 0x18016DA68
 * Callers:
 *     ?GetConstantAsync@MPCConstantManagerClient@@UEAAJW4InputType@MPCManager@Input@Internal@Windows@@PEAUHSTRING__@@PEAPEAU?$IAsyncOperation@PEAUIPropertyValue@Foundation@Windows@@@Foundation@6@@Z @ 0x180172AA0 (-GetConstantAsync@MPCConstantManagerClient@@UEAAJW4InputType@MPCManager@Input@Internal@Windows@@.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009C928 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x18009C97C (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 */

// Hidden C++ exception states: #wind=2
char *__fastcall Windows::Internal::MakeOpLambda_0_Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::IPropertyValue___lambda_7c875662d6abaa9f8d1386a75bd755d7___(
        __int64 a1)
{
  char *v2; // rax
  char *v3; // rbx

  v2 = (char *)operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v3 = v2;
  if ( !v2 )
    return 0LL;
  *(_QWORD *)v2 = &Windows::Internal::AsyncCallbackBase<Windows::Internal::CNoResult>::`vftable';
  *(_OWORD *)(v2 + 8) = *(_OWORD *)a1;
  *((_QWORD *)v2 + 3) = *(_QWORD *)(a1 + 16);
  *(_QWORD *)v2 = &off_1801F1000;
  *((_DWORD *)v2 + 8) = 0;
  `eh vector constructor iterator'(
    v2 + 40,
    8LL,
    1LL,
    (void (__fastcall *)(char *))std::unique_ptr<CSharedCircularQueueProducer>::unique_ptr<CSharedCircularQueueProducer>);
  *((_DWORD *)v3 + 8) = 0;
  return v3;
}
