/*
 * XREFs of ?GetItem@?$CSimpleHashTable@_KV?$ComPtr@V?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@V?$CDefaultHashPolicy@_K@@V?$CDefaultKeyCompare@_K@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@QEBAJAEB_KAEAV?$ComPtr@V?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@@Z @ 0x1800A6B90
 * Callers:
 *     ?_CreateImmersiveApp@CApplicationManager@@AEAAJPEBG_KKPEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@Z @ 0x1800A5F3C (-_CreateImmersiveApp@CApplicationManager@@AEAAJPEBG_KKPEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@.c)
 *     ?GetPerHostIdApplicationData@CApplicationManager@@UEAAJ_KPEAPEAV?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@Z @ 0x1800A6770 (-GetPerHostIdApplicationData@CApplicationManager@@UEAAJ_KPEAPEAV-$CRefCountedObject@UPER_APPLICA.c)
 *     ?_UpdatePerApplicationDataIfNeeded@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@PEAUHWND__@@W4UpdateAppDataReason@1@@Z @ 0x1800A67E4 (-_UpdatePerApplicationDataIfNeeded@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@.c)
 *     ?_GetApplicationData@CApplicationManager@@AEAAJPEBGAEAV?$ComPtr@V?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@@Z @ 0x18015DDCC (-_GetApplicationData@CApplicationManager@@AEAAJPEBGAEAV-$ComPtr@V-$CRefCountedObject@UPER_APPLIC.c)
 *     ?_UpdatePerApplicationDataIfNeeded@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@PEAUITaskWindow@@W4UpdateAppDataReason@1@@Z @ 0x1802E77C4 (-_UpdatePerApplicationDataIfNeeded@CApplicationManager@@AEAAXPEAUIImmersiveApplicat_ea_1802E77C4.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSimpleHashTable<unsigned __int64,Microsoft::WRL::ComPtr<CRefCountedObject<PER_APPLICATION_DATA>>,CDefaultHashPolicy<unsigned __int64>,CDefaultKeyCompare<unsigned __int64>,CDefaultResizePolicy,CDefaultRehashPolicy>::GetItem(
        __int64 a1,
        _QWORD *a2,
        __int64 *a3)
{
  __int64 v5; // rdi
  unsigned int v6; // ebx
  unsigned int v7; // r10d
  unsigned int v8; // r8d
  unsigned __int64 i; // rdx
  __int64 v10; // rdx
  unsigned int v11; // ecx
  __int64 v13; // rdi
  __int64 v14; // rcx

  v5 = *(_QWORD *)(a1 + 16);
  v6 = 0;
  if ( !v5 )
    return (unsigned int)-2147319765;
  v7 = *(_DWORD *)(a1 + 4);
  v8 = 314159269;
  for ( i = 0LL; i < 8; ++i )
    v8 ^= (v8 >> 2) + 2080 * v8 + *((unsigned __int8 *)a2 + i);
  v10 = (v8 & 0x7FFFFFFF) % v7;
  v11 = -1;
  while ( 1 )
  {
    if ( *(_DWORD *)(v5 + 24 * v10) == 2 )
    {
      if ( v11 == -1 )
        v11 = v10;
      goto LABEL_13;
    }
    if ( !*(_DWORD *)(v5 + 24 * v10) )
      break;
    if ( *(_DWORD *)(v5 + 24 * v10) == 1 && *(_QWORD *)(v5 + 24 * v10 + 8) == *a2 )
      goto LABEL_9;
LABEL_13:
    v10 = ((int)v10 + 1) % v7;
  }
  if ( v11 != -1 )
    v10 = v11;
LABEL_9:
  if ( *(_DWORD *)(v5 + 24 * v10) == 1 )
  {
    v13 = *(_QWORD *)(v5 + 24 * v10 + 16);
    if ( *a3 != v13 )
    {
      if ( v13 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
      v14 = *a3;
      *a3 = v13;
      if ( v14 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    }
  }
  else
  {
    return (unsigned int)-2147319765;
  }
  return v6;
}
