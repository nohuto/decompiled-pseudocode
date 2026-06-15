/*
 * XREFs of WPP_SF_SSdSddd @ 0x1800F5DC4
 * Callers:
 *     ?AssignResourceGroup@CConstraintModelResourceManager@@AEAAJPEAUIMMDevice@@AEAVEndpointInfo@@PEAU_ResourceInfo@@KKHPEAUResourceHandleInfo@@@Z @ 0x1800F1D7C (-AssignResourceGroup@CConstraintModelResourceManager@@AEAAJPEAUIMMDevice@@AEAVEndpointInfo@@PEAU.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WPP_SF_SSdSddd(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const wchar_t *a4,
        __int64 a5,
        char a6,
        __int64 a7)
{
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rdx
  bool v10; // zf

  v7 = -1LL;
  if ( a7 )
  {
    v8 = -1LL;
    do
      ++v8;
    while ( *(_WORD *)(a7 + 2 * v8) );
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
      ++v7;
    while ( a4[v7] );
    v10 = a4 == 0LL;
  }
  if ( v10 )
    a4 = L"NULL";
  return EtwTraceMessage(a1, 43LL, &WPP_7a63d399f94f32cb8d4be129f7d61b2c_Traceguids, 18LL, a4);
}
