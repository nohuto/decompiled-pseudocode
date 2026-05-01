/*
 * XREFs of _lambda_de07712c181cbebffd3210a2d706196b_::operator() @ 0x1801F2CA8
 * Callers:
 *     ?IsServiceAvailable@CImmersiveApp@@UEAAJW4IMMERSIVE_APPLICATION_QUERY_SERVICE_OPTION@@AEBU_GUID@@PEAH@Z @ 0x1801F2BF0 (-IsServiceAvailable@CImmersiveApp@@UEAAJW4IMMERSIVE_APPLICATION_QUERY_SERVICE_OPTION@@AEBU_GUID@.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall lambda_de07712c181cbebffd3210a2d706196b_::operator()(__int64 a1, __int64 a2)
{
  char v3; // di
  __int64 v4; // rax
  int IsWindowServiceSupported; // eax
  int v6; // ecx
  int v7; // ecx

  v3 = 1;
  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL))(a2);
  IsWindowServiceSupported = CoreIsWindowServiceSupported(v4, a1 + 12);
  v6 = *(_DWORD *)(a1 + 8);
  if ( !v6 || (v7 = v6 - 1) == 0 )
  {
    **(_DWORD **)a1 = IsWindowServiceSupported >= 0;
    return 0;
  }
  if ( v7 != 1 )
    return 0;
  if ( IsWindowServiceSupported >= 0 )
  {
    **(_DWORD **)a1 = 1;
    return 0;
  }
  return v3;
}
