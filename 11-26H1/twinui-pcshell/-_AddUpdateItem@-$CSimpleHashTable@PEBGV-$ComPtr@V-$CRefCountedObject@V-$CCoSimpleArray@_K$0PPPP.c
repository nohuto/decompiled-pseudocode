/*
 * XREFs of ?_AddUpdateItem@?$CSimpleHashTable@PEBGV?$ComPtr@V?$CRefCountedObject@V?$CCoSimpleArray@_K$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@_K@@@@@@@WRL@Microsoft@@VCStringHashPolicy@@VCStringCompare@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@AEAAJHAEBQEBGAEBV?$ComPtr@V?$CRefCountedObject@V?$CCoSimpleArray@_K$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@_K@@@@@@@WRL@Microsoft@@PEAV234@@Z @ 0x18015DEAC
 * Callers:
 *     ?_AddApplicationData@CApplicationManager@@AEAAJPEBGAEB_KAEAV?$ComPtr@V?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@@Z @ 0x18015E210 (-_AddApplicationData@CApplicationManager@@AEAAJPEBGAEB_KAEAV-$ComPtr@V-$CRefCountedObject@UPER_A.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?ULongLongMult@@YAJ_K0PEA_K@Z @ 0x180143394 (-ULongLongMult@@YAJ_K0PEA_K@Z.c)
 *     ?s_LookupEntry@?$CSimpleHashTable@PEBGV?$ComPtr@V?$CRefCountedObject@V?$CCoSimpleArray@_K$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@_K@@@@@@@WRL@Microsoft@@VCStringHashPolicy@@VCStringCompare@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@CAAEAVHashBucket@1@PEAV21@IAEBQEBG@Z @ 0x18015E4D4 (-s_LookupEntry@-$CSimpleHashTable@PEBGV-$ComPtr@V-$CRefCountedObject@V-$CCoSimpleArray@_K$0PPPPP.c)
 *     ?Alloc@CTLocalAllocPolicy@@SAJPEAXK_KPEAPEAX@Z @ 0x1801E6A78 (-Alloc@CTLocalAllocPolicy@@SAJPEAXK_KPEAPEAX@Z.c)
 *     ?_RehashTable@?$CSimpleHashTable@PEBGV?$ComPtr@V?$CRefCountedObject@V?$CCoSimpleArray@_K$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@_K@@@@@@@WRL@Microsoft@@VCStringHashPolicy@@VCStringCompare@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@AEAAJI@Z @ 0x1802AD53C (-_RehashTable@-$CSimpleHashTable@PEBGV-$ComPtr@V-$CRefCountedObject@V-$CCoSimpleArray@_K$0PPPPPP.c)
 */

int __fastcall CSimpleHashTable<unsigned short const *,Microsoft::WRL::ComPtr<CRefCountedObject<CCoSimpleArray<unsigned __int64,4294967294,CSimpleArrayStandardCompareHelper<unsigned __int64>>>>,CStringHashPolicy,CStringCompare,CDefaultResizePolicy,CDefaultRehashPolicy>::_AddUpdateItem(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        _QWORD *a4)
{
  _QWORD *v4; // r10
  _DWORD *v6; // rdi
  unsigned __int64 v9; // rcx
  int result; // eax
  unsigned int v11; // edx
  void *v12; // rcx
  void **v13; // r10
  __int64 v14; // rdx
  __int64 v15; // rax
  _DWORD *v16; // rdi
  unsigned __int64 v17; // [rsp+30h] [rbp+8h] BYREF

  v4 = (_QWORD *)(a1 + 16);
  v6 = (_DWORD *)(a1 + 4);
  if ( !*(_QWORD *)(a1 + 16) )
  {
    v9 = (unsigned int)*v6;
    *v4 = 0LL;
    v17 = 0LL;
    result = ULongLongMult(v9, 0x18uLL, &v17);
    if ( result < 0 )
      return result;
    result = CTLocalAllocPolicy::Alloc(v12, v11, v17, v13);
    if ( result < 0 )
      return result;
  }
  v14 = (unsigned int)*v6;
  if ( *(_DWORD *)a1 > *v6 >> 1 )
  {
    v14 = (unsigned int)(2 * v14 - 1);
    goto LABEL_8;
  }
  if ( *(_DWORD *)(a1 + 8) > (unsigned int)v14 >> 2 )
  {
    v6 = (_DWORD *)(a1 + 4);
LABEL_8:
    result = CSimpleHashTable<unsigned short const *,Microsoft::WRL::ComPtr<CRefCountedObject<CCoSimpleArray<unsigned __int64,4294967294,CSimpleArrayStandardCompareHelper<unsigned __int64>>>>,CStringHashPolicy,CStringCompare,CDefaultResizePolicy,CDefaultRehashPolicy>::_RehashTable(
               a1,
               v14);
    if ( result < 0 )
      return result;
  }
  v15 = CSimpleHashTable<unsigned short const *,Microsoft::WRL::ComPtr<CRefCountedObject<CCoSimpleArray<unsigned __int64,4294967294,CSimpleArrayStandardCompareHelper<unsigned __int64>>>>,CStringHashPolicy,CStringCompare,CDefaultResizePolicy,CDefaultRehashPolicy>::s_LookupEntry(
          *(_QWORD *)(a1 + 16),
          (unsigned int)*v6,
          a3);
  v16 = (_DWORD *)v15;
  if ( *(_DWORD *)v15 == 1 )
    return -2147024809;
  if ( *(_DWORD *)v15 == 2 )
    --*(_DWORD *)(a1 + 8);
  if ( v15 )
  {
    *(_QWORD *)(v15 + 8) = *a3;
    *(_QWORD *)(v15 + 16) = *a4;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)(v15 + 16));
    *v16 = 1;
  }
  ++*(_DWORD *)a1;
  return 0;
}
