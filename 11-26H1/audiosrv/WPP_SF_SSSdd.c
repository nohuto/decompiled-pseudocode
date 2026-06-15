/*
 * XREFs of WPP_SF_SSSdd @ 0x1800F5A94
 * Callers:
 *     ?AssignResourceGroup@CConstraintModelResourceManager@@AEAAJPEAUIMMDevice@@AEAVEndpointInfo@@PEAU_ResourceInfo@@KKHPEAUResourceHandleInfo@@@Z @ 0x1800F1D7C (-AssignResourceGroup@CConstraintModelResourceManager@@AEAAJPEAUIMMDevice@@AEAVEndpointInfo@@PEAU.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WPP_SF_SSSdd(__int64 a1, __int64 a2, __int64 a3, const wchar_t *a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  bool v10; // zf

  v6 = -1LL;
  if ( a6 )
  {
    v8 = -1LL;
    do
      ++v8;
    while ( *(_WORD *)(a6 + 2 * v8) );
  }
  if ( a5 )
  {
    v9 = -1LL;
    do
      ++v9;
    while ( *(_WORD *)(a5 + 2 * v9) );
  }
  v10 = a4 == 0LL;
  if ( a4 )
  {
    do
      ++v6;
    while ( a4[v6] );
    v10 = a4 == 0LL;
  }
  if ( v10 )
    a4 = L"NULL";
  return EtwTraceMessage(a1, 43LL, &WPP_7a63d399f94f32cb8d4be129f7d61b2c_Traceguids, 19LL, a4);
}
