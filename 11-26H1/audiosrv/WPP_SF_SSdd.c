/*
 * XREFs of WPP_SF_SSdd @ 0x1800F5F1C
 * Callers:
 *     ?AssignResourceGroup@CConstraintModelResourceManager@@AEAAJPEAUIMMDevice@@AEAVEndpointInfo@@PEAU_ResourceInfo@@KKHPEAUResourceHandleInfo@@@Z @ 0x1800F1D7C (-AssignResourceGroup@CConstraintModelResourceManager@@AEAAJPEAUIMMDevice@@AEAVEndpointInfo@@PEAU.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WPP_SF_SSdd(__int64 a1, __int64 a2, __int64 a3, const wchar_t *a4, __int64 a5)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  bool v7; // zf

  v5 = -1LL;
  if ( a5 )
  {
    v6 = -1LL;
    do
      ++v6;
    while ( *(_WORD *)(a5 + 2 * v6) );
  }
  v7 = a4 == 0LL;
  if ( a4 )
  {
    do
      ++v5;
    while ( a4[v5] );
    v7 = a4 == 0LL;
  }
  if ( v7 )
    a4 = L"NULL";
  return EtwTraceMessage(a1, 43LL, &WPP_7a63d399f94f32cb8d4be129f7d61b2c_Traceguids, 20LL, a4);
}
