/*
 * XREFs of ?IsServiceAvailable@CImmersiveApp@@UEAAJW4IMMERSIVE_APPLICATION_QUERY_SERVICE_OPTION@@AEBU_GUID@@PEAH@Z @ 0x1801E92A0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_de07712c181cbebffd3210a2d706196b_::operator() @ 0x1801E935C (_lambda_de07712c181cbebffd3210a2d706196b_--operator().c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

__int64 __fastcall CImmersiveApp::IsServiceAvailable(__int64 a1, int a2, __int128 *a3, _DWORD *a4)
{
  __int128 v8; // xmm0
  char v9; // al
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rbx
  _DWORD *v13; // [rsp+20h] [rbp-48h] BYREF
  int v14; // [rsp+28h] [rbp-40h]
  __int128 i; // [rsp+2Ch] [rbp-3Ch]

  *a4 = 0;
  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v8 = *a3;
  v13 = a4;
  v9 = 1;
  v10 = *(_QWORD *)(a1 + 368);
  v14 = a2;
  v11 = 0LL;
  for ( i = v8;
        v11 < v10;
        v9 = lambda_de07712c181cbebffd3210a2d706196b_::operator()(&v13, *(_QWORD *)(*(_QWORD *)(a1 + 360) + 8 * v11++)) )
  {
    if ( !v9 )
      break;
  }
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  return 0LL;
}
