/*
 * XREFs of ?_AddApplicationData@CApplicationManager@@AEAAJPEBGAEB_KAEAV?$ComPtr@V?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@@Z @ 0x18015E210
 * Callers:
 *     ?_CreateImmersiveApp@CApplicationManager@@AEAAJPEBG_KKPEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@Z @ 0x1800A5F3C (-_CreateImmersiveApp@CApplicationManager@@AEAAJPEBG_KKPEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x180086F00 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V-$CT.c)
 *     ?_AddUpdateItem@?$CSimpleHashTable@PEBGV?$ComPtr@V?$CRefCountedObject@V?$CCoSimpleArray@_K$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@_K@@@@@@@WRL@Microsoft@@VCStringHashPolicy@@VCStringCompare@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@AEAAJHAEBQEBGAEBV?$ComPtr@V?$CRefCountedObject@V?$CCoSimpleArray@_K$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@_K@@@@@@@WRL@Microsoft@@PEAV234@@Z @ 0x18015DEAC (-_AddUpdateItem@-$CSimpleHashTable@PEBGV-$ComPtr@V-$CRefCountedObject@V-$CCoSimpleArray@_K$0PPPP.c)
 *     ?_AddUpdateItem@?$CSimpleHashTable@_KV?$ComPtr@V?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@V?$CDefaultHashPolicy@_K@@V?$CDefaultKeyCompare@_K@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@AEAAJHAEB_KAEBV?$ComPtr@V?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@PEAV234@@Z @ 0x18015E418 (-_AddUpdateItem@-$CSimpleHashTable@_KV-$ComPtr@V-$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WR.c)
 *     ?s_LookupEntry@?$CSimpleHashTable@PEBGV?$ComPtr@V?$CRefCountedObject@V?$CCoSimpleArray@_K$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@_K@@@@@@@WRL@Microsoft@@VCStringHashPolicy@@VCStringCompare@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@CAAEAVHashBucket@1@PEAV21@IAEBQEBG@Z @ 0x18015E4D4 (-s_LookupEntry@-$CSimpleHashTable@PEBGV-$ComPtr@V-$CRefCountedObject@V-$CCoSimpleArray@_K$0PPPPP.c)
 *     ??$CreateRefCountedObj@V?$CCoSimpleArray@_K$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@_K@@@@$$V@@YA?AV?$ComPtr@V?$CRefCountedObject@V?$CCoSimpleArray@_K$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@_K@@@@@@@WRL@Microsoft@@XZ @ 0x18015E5CC (--$CreateRefCountedObj@V-$CCoSimpleArray@_K$0PPPPPPPO@V-$CSimpleArrayStandardCompareHelper@_K@@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CApplicationManager::_AddApplicationData(__int64 a1, const WCHAR *a2, _QWORD *a3)
{
  int updated; // eax
  unsigned int v7; // ebx
  _QWORD *v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rax
  void *v11; // r8
  char *v12; // rax
  LPWSTR v13; // rcx
  __int64 v14; // rdx
  HRESULT v15; // edi
  _QWORD *v17; // rdi
  __int64 v18; // rdx
  _QWORD *v19; // rdx
  int v20; // eax
  unsigned int v21; // esi
  LPWSTR ppwsz; // [rsp+30h] [rbp-10h] BYREF
  char v23; // [rsp+38h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  _QWORD *v25; // [rsp+60h] [rbp+20h] BYREF
  const WCHAR *v26; // [rsp+68h] [rbp+28h] BYREF

  v26 = a2;
  updated = CSimpleHashTable<unsigned __int64,Microsoft::WRL::ComPtr<CRefCountedObject<PER_APPLICATION_DATA>>,CDefaultHashPolicy<unsigned __int64>,CDefaultKeyCompare<unsigned __int64>,CDefaultResizePolicy,CDefaultRehashPolicy>::_AddUpdateItem(a1 + 1000);
  v7 = updated;
  if ( updated < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x20DD,
      (int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      (const char *)(unsigned int)updated);
    return v7;
  }
  v8 = 0LL;
  v25 = 0LL;
  v9 = *(_QWORD *)(a1 + 1040);
  if ( v9
    && (v10 = CSimpleHashTable<unsigned short const *,Microsoft::WRL::ComPtr<CRefCountedObject<CCoSimpleArray<unsigned __int64,4294967294,CSimpleArrayStandardCompareHelper<unsigned __int64>>>>,CStringHashPolicy,CStringCompare,CDefaultResizePolicy,CDefaultRehashPolicy>::s_LookupEntry(
                v9,
                *(unsigned int *)(a1 + 1028),
                &v26),
        *(_DWORD *)v10 == 1) )
  {
    v17 = *(_QWORD **)(v10 + 16);
    if ( v17 )
    {
      (*(void (__fastcall **)(_QWORD))(*v17 + 8LL))(*(_QWORD *)(v10 + 16));
      v8 = v17;
      v25 = v17;
    }
  }
  else
  {
    v12 = (char *)CreateRefCountedObj<CCoSimpleArray<unsigned __int64,4294967294,CSimpleArrayStandardCompareHelper<unsigned __int64>>,>(&ppwsz);
    v8 = 0LL;
    if ( &v23 != v12 )
    {
      v8 = *(_QWORD **)v12;
      *(_QWORD *)v12 = 0LL;
    }
    v25 = v8;
    v13 = ppwsz;
    if ( ppwsz )
    {
      ppwsz = 0LL;
      (*(void (__fastcall **)(LPWSTR))(*(_QWORD *)v13 + 16LL))(v13);
    }
    ppwsz = 0LL;
    v15 = SHStrDupW(a2, &ppwsz);
    if ( v15 < 0 )
      goto LABEL_9;
    v15 = CSimpleHashTable<unsigned short const *,Microsoft::WRL::ComPtr<CRefCountedObject<CCoSimpleArray<unsigned __int64,4294967294,CSimpleArrayStandardCompareHelper<unsigned __int64>>>>,CStringHashPolicy,CStringCompare,CDefaultResizePolicy,CDefaultRehashPolicy>::_AddUpdateItem(
            a1 + 1024,
            v14,
            &ppwsz,
            &v25);
    if ( v15 < 0 )
    {
      CoTaskMemFree(ppwsz);
LABEL_9:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x20E3,
        (int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
        (const char *)(unsigned int)v15);
      if ( v8 )
        (*(void (__fastcall **)(_QWORD *))(*v8 + 16LL))(v8);
      return (unsigned int)v15;
    }
  }
  v18 = v8[2];
  if ( v18 == v8[4]
    && (v20 = CTSimpleArray<Microsoft::WRL::ComPtr<ITaskbarLayoutItem>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<ITaskbarLayoutItem>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<ITaskbarLayoutItem>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<ITaskbarLayoutItem>>>::_EnsureCapacity(
                (__int64)(v8 + 1),
                v18 + 1,
                v11),
        v21 = v20,
        v20 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x20E6,
      (int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      (const char *)(unsigned int)v20);
    if ( v8 )
      (*(void (__fastcall **)(_QWORD *))(*v8 + 16LL))(v8);
    return v21;
  }
  else
  {
    v19 = (_QWORD *)(v8[1] + 8 * v8[2]++);
    if ( v19 )
      *v19 = *a3;
    if ( v8 )
      (*(void (__fastcall **)(_QWORD *))(*v8 + 16LL))(v8);
    return 0LL;
  }
}
