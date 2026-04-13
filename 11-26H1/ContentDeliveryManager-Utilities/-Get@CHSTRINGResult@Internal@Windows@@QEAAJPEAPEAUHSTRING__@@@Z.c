/*
 * XREFs of ?Get@CHSTRINGResult@Internal@Windows@@QEAAJPEAPEAUHSTRING__@@@Z @ 0x1800300D4
 * Callers:
 *     ?GetResults@?$AsyncOperation@U?$IAsyncOperation@PEAUHSTRING__@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@PEAUHSTRING__@@@23@VCHSTRINGResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x1800329E0 (-GetResults@-$AsyncOperation@U-$IAsyncOperation@PEAUHSTRING__@@@Foundation@Windows@@U-$IAsyncOpe.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::CHSTRINGResult::Get(Windows::Internal::CHSTRINGResult *this, HSTRING *a2)
{
  AcquireSRWLockShared((PSRWLOCK)this + 3);
  LODWORD(a2) = WindowsDuplicateString(*((HSTRING *)this + 2), a2);
  ReleaseSRWLockShared((PSRWLOCK)this + 3);
  return (unsigned int)a2;
}
