/*
 * XREFs of ?DetermineViewDistance@Win81@@YA_NQEAXAEBUtagSIZE@@H1HPEAI@Z @ 0x1401E44F4
 * Callers:
 *     ?UpdateGdiInfoForVidPnSource@Win81@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIIHPEAU_DPI_INFORMATION@@@Z @ 0x1401E4CF4 (-UpdateGdiInfoForVidPnSource@Win81@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIIHPEAU_DPI_INFORMATION@@@Z.c)
 * Callees:
 *     ?HeuristicallyDetermineViewingDistance@Win81@@YAIAEBUtagSIZE@@H0H@Z @ 0x1401E4AE8 (-HeuristicallyDetermineViewingDistance@Win81@@YAIAEBUtagSIZE@@H0H@Z.c)
 *     DpiReadPnpRegistryValue @ 0x1403914A0 (DpiReadPnpRegistryValue.c)
 */

char __fastcall Win81::DetermineViewDistance(
        Win81 *this,
        Win81 *a2,
        const struct tagSIZE *a3,
        int a4,
        const struct tagSIZE *a5,
        _DWORD *a6)
{
  _DWORD *v6; // rbx
  unsigned int v8; // edi
  __int64 v10; // rcx
  int v11; // ecx
  _DWORD *i; // rax
  int v14; // [rsp+20h] [rbp-18h]
  int v15; // [rsp+50h] [rbp+18h] BYREF

  v6 = a6;
  v8 = (unsigned int)a3;
  if ( (_DWORD)a3 )
  {
    v10 = *((_QWORD *)this + 27);
    v15 = 0;
    if ( (int)DpiReadPnpRegistryValue(v10, L"ViewDistanceOverride", &v15, 4LL, 2) >= 0 )
    {
      v11 = v15;
      for ( i = &unk_140108E38; i != dword_140108E50; ++i )
      {
        if ( v15 == *i )
        {
          *v6 = v15;
          if ( !v11 )
            break;
          return 1;
        }
      }
    }
  }
  *v6 = Win81::HeuristicallyDetermineViewingDistance(
          a2,
          (const struct tagSIZE *)v8,
          a4,
          (const struct tagSIZE *)(unsigned int)a5,
          v14);
  return 0;
}
