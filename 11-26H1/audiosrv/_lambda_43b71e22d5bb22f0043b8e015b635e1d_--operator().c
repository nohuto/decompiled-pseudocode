/*
 * XREFs of _lambda_43b71e22d5bb22f0043b8e015b635e1d_::operator() @ 0x180154F28
 * Callers:
 *     ?PerformLicenseCheckInternalLegacy@AtmosCheck@@AEAAJPEA_N@Z @ 0x180037E78 (-PerformLicenseCheckInternalLegacy@AtmosCheck@@AEAAJPEA_N@Z.c)
 *     wil::details::lambda_call__lambda_43b71e22d5bb22f0043b8e015b635e1d___::_lambda_call__lambda_43b71e22d5bb22f0043b8e015b635e1d___ @ 0x1800B0134 (wil--details--lambda_call__lambda_43b71e22d5bb22f0043b8e015b635e1d___--_lambda_call__lambda_43b7.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall lambda_43b71e22d5bb22f0043b8e015b635e1d_::operator()(__int64 a1)
{
  HSTRING v2; // rcx
  HSTRING v3; // rcx
  __int64 i; // rdi
  __int64 v5; // rcx

  v2 = **(HSTRING **)a1;
  if ( v2 )
  {
    WindowsDeleteString(v2);
    **(_QWORD **)a1 = 0LL;
  }
  v3 = **(HSTRING **)(a1 + 8);
  if ( v3 )
  {
    WindowsDeleteString(v3);
    **(_QWORD **)(a1 + 8) = 0LL;
  }
  if ( **(_QWORD **)(a1 + 16) )
  {
    for ( i = 0LL; (unsigned int)i < **(_DWORD **)(a1 + 24); i = (unsigned int)(i + 1) )
    {
      v5 = *(_QWORD *)(**(_QWORD **)(a1 + 16) + 8 * i);
      if ( v5 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
        *(_QWORD *)(**(_QWORD **)(a1 + 16) + 8 * i) = 0LL;
      }
    }
    CoTaskMemFree(**(LPVOID **)(a1 + 16));
  }
}
