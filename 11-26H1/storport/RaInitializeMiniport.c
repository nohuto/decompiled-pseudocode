/*
 * XREFs of RaInitializeMiniport @ 0x1401835AC
 * Callers:
 *     RaidAdapterStartMiniport @ 0x140053D94 (RaidAdapterStartMiniport.c)
 *     NvmeAdapterStartMiniport @ 0x1400DE784 (NvmeAdapterStartMiniport.c)
 * Callees:
 *     StorIsChildAdapterPdo @ 0x140059C94 (StorIsChildAdapterPdo.c)
 *     RaAssignConfigurationResources @ 0x1401887FC (RaAssignConfigurationResources.c)
 */

__int64 __fastcall RaInitializeMiniport(__int64 a1, _DWORD *a2, __int64 a3, _QWORD *a4)
{
  unsigned int v4; // esi
  _QWORD *v7; // r8
  int v8; // eax

  v4 = 0;
  if ( *a2 == 176 || *a2 == 208 && (a2[46] & 1) != 0 )
    *(_DWORD *)(a1 + 248) |= 8u;
  if ( a4 && *a4 )
    v4 = RaAssignConfigurationResources(a1 + 8, *a4, (unsigned int)a2[19]);
  if ( StorIsChildAdapterPdo(*(PDEVICE_OBJECT *)(a3 + 32)) )
  {
    *(_DWORD *)(a1 + 248) |= 0x200u;
    v7 = *(_QWORD **)(*(_QWORD *)(*(_QWORD *)(a3 + 32) + 64LL) + 72LL);
    *(_QWORD *)(a1 + 376) = v7;
    v8 = **(_DWORD **)(v7[1] + 64LL);
    if ( v8 == 1094997074 )
    {
      v7[94] = a3;
    }
    else if ( v8 == 1314275652 )
    {
      v7[68] = a3;
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  return v4;
}
