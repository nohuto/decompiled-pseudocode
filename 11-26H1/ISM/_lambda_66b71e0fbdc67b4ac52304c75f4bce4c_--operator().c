/*
 * XREFs of _lambda_66b71e0fbdc67b4ac52304c75f4bce4c_::operator() @ 0x1801CF3B8
 * Callers:
 *     ?DetectAndProcessHotKey@HotKeyProcessor@@QEAAJI_N_K1PEAEIIU_GUID@@AEAUHotKeyDetectionResult@@@Z @ 0x1801CF798 (-DetectAndProcessHotKey@HotKeyProcessor@@QEAAJI_N_K1PEAEIIU_GUID@@AEAUHotKeyDetectionResult@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C32C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 */

bool __fastcall lambda_66b71e0fbdc67b4ac52304c75f4bce4c_::operator()(__int64 **a1, __int64 *a2)
{
  __int64 *v2; // r8
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  bool v7; // bl
  __int64 v8; // rax

  v2 = a1[1];
  v4 = *v2 - *(_QWORD *)&GUID_NULL.Data1;
  if ( *v2 == *(_QWORD *)&GUID_NULL.Data1 )
    v4 = v2[1] - *(_QWORD *)GUID_NULL.Data4;
  if ( v4 && (v5 = *a2) != 0 )
  {
    v6 = **a1;
    if ( !v6 || (v7 = 1, *(_DWORD *)(v6 + 20) != 1) || *(_DWORD *)(v6 + 28) != 115 )
    {
      v8 = *(_QWORD *)(v5 + 84) - *v2;
      if ( !v8 )
        v8 = *(_QWORD *)(v5 + 92) - v2[1];
      v7 = v8 == 0;
    }
  }
  else
  {
    v7 = 0;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a2);
  return v7;
}
