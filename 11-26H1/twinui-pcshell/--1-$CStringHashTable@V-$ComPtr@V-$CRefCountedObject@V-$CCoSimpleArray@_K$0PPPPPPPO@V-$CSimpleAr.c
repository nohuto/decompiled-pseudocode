/*
 * XREFs of ??1?$CStringHashTable@V?$ComPtr@V?$CRefCountedObject@V?$CCoSimpleArray@_K$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@_K@@@@@@@WRL@Microsoft@@VCStringHashPolicy@@VCStringCompare@@@@QEAA@XZ @ 0x1802DD14C
 * Callers:
 *     ??1CApplicationManager@@MEAA@XZ @ 0x1802DD350 (--1CApplicationManager@@MEAA@XZ.c)
 * Callees:
 *     ??$s_EnumAdaptor@V_lambda_43584e7377c77bc592a90ea9fe565013_@@@?$CSimpleHashTable@PEBGV?$ComPtr@V?$CRefCountedObject@V?$CCoSimpleArray@_K$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@_K@@@@@@@WRL@Microsoft@@VCStringHashPolicy@@VCStringCompare@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@CAHPEBV_lambda_43584e7377c77bc592a90ea9fe565013_@@AEBQEBGAEAV?$ComPtr@V?$CRefCountedObject@V?$CCoSimpleArray@_K$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@_K@@@@@@@WRL@Microsoft@@@Z @ 0x1802DCE80 (--$s_EnumAdaptor@V_lambda_43584e7377c77bc592a90ea9fe565013_@@@-$CSimpleHashTable@PEBGV-$ComPtr@V.c)
 *     ?RemoveAll@?$CSimpleHashTable@PEBGV?$ComPtr@V?$CRefCountedObject@V?$CCoSimpleArray@_K$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@_K@@@@@@@WRL@Microsoft@@VCStringHashPolicy@@VCStringCompare@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@QEAAXXZ @ 0x1802E4650 (-RemoveAll@-$CSimpleHashTable@PEBGV-$ComPtr@V-$CRefCountedObject@V-$CCoSimpleArray@_K$0PPPPPPPO@.c)
 */

__int64 __fastcall CStringHashTable<Microsoft::WRL::ComPtr<CRefCountedObject<CCoSimpleArray<unsigned __int64,4294967294,CSimpleArrayStandardCompareHelper<unsigned __int64>>>>,CStringHashPolicy,CStringCompare>::~CStringHashTable<Microsoft::WRL::ComPtr<CRefCountedObject<CCoSimpleArray<unsigned __int64,4294967294,CSimpleArrayStandardCompareHelper<unsigned __int64>>>>,CStringHashPolicy,CStringCompare>(
        __int64 a1)
{
  int v2; // ecx
  __int64 v3; // rdi
  __int64 v4; // rax
  char v6; // [rsp+30h] [rbp+8h] BYREF
  char *v7; // [rsp+38h] [rbp+10h] BYREF

  v6 = 0;
  v7 = &v6;
  v2 = 1;
  if ( *(_QWORD *)(a1 + 16) )
  {
    v3 = 0LL;
    do
    {
      if ( (unsigned int)v3 >= *(_DWORD *)(a1 + 4) )
        break;
      v4 = *(_QWORD *)(a1 + 16);
      if ( *(_DWORD *)(v4 + 24 * v3) == 1 )
        v2 = CSimpleHashTable<unsigned short const *,Microsoft::WRL::ComPtr<CRefCountedObject<CCoSimpleArray<unsigned __int64,4294967294,CSimpleArrayStandardCompareHelper<unsigned __int64>>>>,CStringHashPolicy,CStringCompare,CDefaultResizePolicy,CDefaultRehashPolicy>::s_EnumAdaptor<_lambda_43584e7377c77bc592a90ea9fe565013_>(
               (__int64)&v7,
               (LPVOID *)(v4 + 8 + 24 * v3));
      v3 = (unsigned int)(v3 + 1);
    }
    while ( v2 );
  }
  CSimpleHashTable<unsigned short const *,Microsoft::WRL::ComPtr<CRefCountedObject<CCoSimpleArray<unsigned __int64,4294967294,CSimpleArrayStandardCompareHelper<unsigned __int64>>>>,CStringHashPolicy,CStringCompare,CDefaultResizePolicy,CDefaultRehashPolicy>::RemoveAll(a1);
  return CSimpleHashTable<unsigned short const *,Microsoft::WRL::ComPtr<CRefCountedObject<CCoSimpleArray<unsigned __int64,4294967294,CSimpleArrayStandardCompareHelper<unsigned __int64>>>>,CStringHashPolicy,CStringCompare,CDefaultResizePolicy,CDefaultRehashPolicy>::RemoveAll(a1);
}
