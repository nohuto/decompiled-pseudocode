/*
 * XREFs of ?_DeleteApplicationData@CApplicationManager@@AEAAJPEBGAEB_K@Z @ 0x18015DFA4
 * Callers:
 *     ?_ForgetApplicationNoLock@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@W4ForgetReason@@@Z @ 0x1800A63B8 (-_ForgetApplicationNoLock@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@W4ForgetR.c)
 *     ?ForgetApplicationByHostId@CApplicationManager@@UEAAJPEBG_K@Z @ 0x1802DF930 (-ForgetApplicationByHostId@CApplicationManager@@UEAAJPEBG_K@Z.c)
 *     ?_DeleteApplicationData@CApplicationManager@@AEAAJPEBG@Z @ 0x1802E6B60 (-_DeleteApplicationData@CApplicationManager@@AEAAJPEBG@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_EnsureSet@?$CSimpleHashTable@_KV?$ComPtr@V?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@V?$CDefaultHashPolicy@_K@@V?$CDefaultKeyCompare@_K@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@AEAAJXZ @ 0x18015E158 (-_EnsureSet@-$CSimpleHashTable@_KV-$ComPtr@V-$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Mi.c)
 *     ?Remove@?$CTSimpleArray@_K$0PPPPPPPO@V?$CTPolicyCoTaskMem@_K@@V?$CSimpleArrayStandardCompareHelper@_K@@V?$CSimpleArrayStandardMergeHelper@_K@@@@QEAAJAEB_KPEA_K@Z @ 0x18015E1A4 (-Remove@-$CTSimpleArray@_K$0PPPPPPPO@V-$CTPolicyCoTaskMem@_K@@V-$CSimpleArrayStandardCompareHelp.c)
 *     ?s_LookupEntry@?$CSimpleHashTable@PEBGV?$ComPtr@V?$CRefCountedObject@V?$CCoSimpleArray@_K$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@_K@@@@@@@WRL@Microsoft@@VCStringHashPolicy@@VCStringCompare@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@CAAEAVHashBucket@1@PEAV21@IAEBQEBG@Z @ 0x18015E4D4 (-s_LookupEntry@-$CSimpleHashTable@PEBGV-$ComPtr@V-$CRefCountedObject@V-$CCoSimpleArray@_K$0PPPPP.c)
 *     ??$RemoveIfCallback@URemoveIfFreeString@?1??DeleteItem@?$CStringHashTable@V?$ComPtr@V?$CRefCountedObject@V?$CCoSimpleArray@_K$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@_K@@@@@@@WRL@Microsoft@@VCStringHashPolicy@@VCStringCompare@@@@QEAAJAEBQEBG@Z@@?$CSimpleHashTable@PEBGV?$ComPtr@V?$CRefCountedObject@V?$CCoSimpleArray@_K$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@_K@@@@@@@WRL@Microsoft@@VCStringHashPolicy@@VCStringCompare@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@QEAAXAEAURemoveIfFreeString@?1??DeleteItem@?$CStringHashTable@V?$ComPtr@V?$CRefCountedObject@V?$CCoSimpleArray@_K$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@_K@@@@@@@WRL@Microsoft@@VCStringHashPolicy@@VCStringCompare@@@@QEAAJAEBQEBG@Z@@Z @ 0x18015E62C (--$RemoveIfCallback@URemoveIfFreeString@-1--DeleteItem@-$CStringHashTable@V-$ComPtr@V-$CRefCount.c)
 *     ?s_LookupEntry@?$CSimpleHashTable@_KV?$ComPtr@V?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@V?$CDefaultHashPolicy@_K@@V?$CDefaultKeyCompare@_K@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@CAAEAVHashBucket@1@PEAV21@IAEB_K@Z @ 0x1801B4BDC (-s_LookupEntry@-$CSimpleHashTable@_KV-$ComPtr@V-$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL.c)
 *     ?_FreeBucket@?$CSimpleHashTable@_KV?$ComPtr@V?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@V?$CDefaultHashPolicy@_K@@V?$CDefaultKeyCompare@_K@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@AEAAHPEAVHashBucket@1@@Z @ 0x1802E6C40 (-_FreeBucket@-$CSimpleHashTable@_KV-$ComPtr@V-$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@M.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::_DeleteApplicationData(
        CApplicationManager *this,
        const unsigned __int16 *a2,
        const unsigned __int64 *a3)
{
  char *v6; // rbx
  unsigned int v7; // edi
  __int64 v8; // rax
  _QWORD *v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rax
  _QWORD *v13; // rdi
  int v14; // eax
  int v15; // [rsp+20h] [rbp-28h] BYREF
  const unsigned __int16 *v16; // [rsp+28h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  const unsigned __int16 *v18; // [rsp+58h] [rbp+10h] BYREF

  v18 = a2;
  v6 = (char *)this + 1000;
  v7 = CSimpleHashTable<unsigned __int64,Microsoft::WRL::ComPtr<CRefCountedObject<PER_APPLICATION_DATA>>,CDefaultHashPolicy<unsigned __int64>,CDefaultKeyCompare<unsigned __int64>,CDefaultResizePolicy,CDefaultRehashPolicy>::_EnsureSet((char *)this + 1000);
  if ( (v7 & 0x80000000) != 0 )
    goto LABEL_4;
  v8 = CSimpleHashTable<unsigned __int64,Microsoft::WRL::ComPtr<CRefCountedObject<PER_APPLICATION_DATA>>,CDefaultHashPolicy<unsigned __int64>,CDefaultKeyCompare<unsigned __int64>,CDefaultResizePolicy,CDefaultRehashPolicy>::s_LookupEntry(
         *((_QWORD *)v6 + 2),
         *((unsigned int *)v6 + 1),
         a3);
  if ( !(unsigned int)CSimpleHashTable<unsigned __int64,Microsoft::WRL::ComPtr<CRefCountedObject<PER_APPLICATION_DATA>>,CDefaultHashPolicy<unsigned __int64>,CDefaultKeyCompare<unsigned __int64>,CDefaultResizePolicy,CDefaultRehashPolicy>::_FreeBucket(
                        v6,
                        v8) )
  {
    v7 = -2147319765;
LABEL_4:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x20ED,
      (int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      (const char *)v7);
    return v7;
  }
  v10 = 0LL;
  v11 = *((_QWORD *)this + 130);
  if ( !v11
    || (v12 = CSimpleHashTable<unsigned short const *,Microsoft::WRL::ComPtr<CRefCountedObject<CCoSimpleArray<unsigned __int64,4294967294,CSimpleArrayStandardCompareHelper<unsigned __int64>>>>,CStringHashPolicy,CStringCompare,CDefaultResizePolicy,CDefaultRehashPolicy>::s_LookupEntry(
                v11,
                *((unsigned int *)this + 257),
                &v18),
        *(_DWORD *)v12 != 1) )
  {
    v7 = -2147319765;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x20EF,
      (int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      (const char *)0x8002802BLL);
    return v7;
  }
  v13 = *(_QWORD **)(v12 + 16);
  if ( v13 )
  {
    (*(void (__fastcall **)(_QWORD))(*v13 + 8LL))(*(_QWORD *)(v12 + 16));
    v10 = v13;
  }
  v14 = CTSimpleArray<unsigned __int64,4294967294,CTPolicyCoTaskMem<unsigned __int64>,CSimpleArrayStandardCompareHelper<unsigned __int64>,CSimpleArrayStandardMergeHelper<unsigned __int64>>::Remove(
          v10 + 1,
          a3);
  v7 = v14;
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x20F0,
      (int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      (const char *)(unsigned int)v14);
    if ( v10 )
      (*(void (__fastcall **)(_QWORD *))(*v10 + 16LL))(v10);
    return v7;
  }
  if ( !v10[2] )
  {
    LOBYTE(v15) = 0;
    v16 = a2;
    ___RemoveIfCallback_URemoveIfFreeString__1__DeleteItem___CStringHashTable_V__ComPtr_V__CRefCountedObject_V__CCoSimpleArray__K_0PPPPPPPO_V__CSimpleArrayStandardCompareHelper__K_______WRL_Microsoft__VCStringHashPolicy__VCStringCompare____QEAAJAEBQEBG_Z____CSimpleHashTable_PEBGV__ComPtr_V__CRefCountedObject_V__CCoSimpleArray__K_0PPPPPPPO_V__CSimpleArrayStandardCompareHelper__K_______WRL_Microsoft__VCStringHashPolicy__VCStringCompare__VCDefaultResizePolicy__VCDefaultRehashPolicy____QEAAXAEAURemoveIfFreeString__1__DeleteItem___CStringHashTable_V__ComPtr_V__CRefCountedObject_V__CCoSimpleArray__K_0PPPPPPPO_V__CSimpleArrayStandardCompareHelper__K_______WRL_Microsoft__VCStringHashPolicy__VCStringCompare____QEAAJAEBQEBG_Z__Z(
      (char *)this + 1024,
      &v15);
    if ( !(_BYTE)v15 )
    {
      v7 = -2147319765;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x20F3,
        (int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
        (const char *)0x8002802BLL);
      (*(void (__fastcall **)(_QWORD *))(*v10 + 16LL))(v10);
      return v7;
    }
  }
  (*(void (__fastcall **)(_QWORD *))(*v10 + 16LL))(v10);
  return 0LL;
}
