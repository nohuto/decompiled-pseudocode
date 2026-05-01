/*
 * XREFs of ?s_LookupEntry@?$CSimpleHashTable@PEBGV?$ComPtr@V?$CRefCountedObject@V?$CCoSimpleArray@_K$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@_K@@@@@@@WRL@Microsoft@@VCStringHashPolicy@@VCStringCompare@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@CAAEAVHashBucket@1@PEAV21@IAEBQEBG@Z @ 0x18015E4D4
 * Callers:
 *     ?_GetApplicationData@CApplicationManager@@AEAAJPEBGAEAV?$ComPtr@V?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@@Z @ 0x18015DDCC (-_GetApplicationData@CApplicationManager@@AEAAJPEBGAEAV-$ComPtr@V-$CRefCountedObject@UPER_APPLIC.c)
 *     ?_AddUpdateItem@?$CSimpleHashTable@PEBGV?$ComPtr@V?$CRefCountedObject@V?$CCoSimpleArray@_K$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@_K@@@@@@@WRL@Microsoft@@VCStringHashPolicy@@VCStringCompare@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@AEAAJHAEBQEBGAEBV?$ComPtr@V?$CRefCountedObject@V?$CCoSimpleArray@_K$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@_K@@@@@@@WRL@Microsoft@@PEAV234@@Z @ 0x18015DEAC (-_AddUpdateItem@-$CSimpleHashTable@PEBGV-$ComPtr@V-$CRefCountedObject@V-$CCoSimpleArray@_K$0PPPP.c)
 *     ?_DeleteApplicationData@CApplicationManager@@AEAAJPEBGAEB_K@Z @ 0x18015DFA4 (-_DeleteApplicationData@CApplicationManager@@AEAAJPEBGAEB_K@Z.c)
 *     ?_AddApplicationData@CApplicationManager@@AEAAJPEBGAEB_KAEAV?$ComPtr@V?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@@Z @ 0x18015E210 (-_AddApplicationData@CApplicationManager@@AEAAJPEBGAEB_KAEAV-$ComPtr@V-$CRefCountedObject@UPER_A.c)
 *     ?_RehashTable@?$CSimpleHashTable@PEBGV?$ComPtr@V?$CRefCountedObject@V?$CCoSimpleArray@_K$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@_K@@@@@@@WRL@Microsoft@@VCStringHashPolicy@@VCStringCompare@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@AEAAJI@Z @ 0x1802AD53C (-_RehashTable@-$CSimpleHashTable@PEBGV-$ComPtr@V-$CRefCountedObject@V-$CCoSimpleArray@_K$0PPPPPP.c)
 *     ?_DeleteApplicationData@CApplicationManager@@AEAAJPEBG@Z @ 0x1802E6B60 (-_DeleteApplicationData@CApplicationManager@@AEAAJPEBG@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CSimpleHashTable<unsigned short const *,Microsoft::WRL::ComPtr<CRefCountedObject<CCoSimpleArray<unsigned __int64,4294967294,CSimpleArrayStandardCompareHelper<unsigned __int64>>>>,CStringHashPolicy,CStringCompare,CDefaultResizePolicy,CDefaultRehashPolicy>::s_LookupEntry(
        __int64 a1,
        unsigned int a2,
        LPCWCH *a3)
{
  LPCWCH v3; // r11
  __int64 v4; // rax
  unsigned int v8; // r9d
  unsigned __int64 i; // r8
  int v10; // edx
  unsigned int v11; // edx
  int v12; // edi
  unsigned int v13; // ebx
  int v14; // eax

  v3 = *a3;
  v4 = -1LL;
  v8 = 314159269;
  do
    ++v4;
  while ( v3[v4] );
  for ( i = 0LL; i < 2 * v4; v8 ^= (v8 >> 2) + 2080 * v8 + v10 )
    v10 = *((unsigned __int8 *)v3 + i++);
  v11 = (v8 & 0x7FFFFFFF) % a2;
  v12 = -1;
  while ( 1 )
  {
    v13 = v11;
    v14 = *(_DWORD *)(a1 + 24LL * v11);
    if ( v14 == 2 )
    {
      if ( v12 == -1 )
        v12 = v11;
      goto LABEL_16;
    }
    if ( !v14 )
      break;
    if ( v14 == 1 && CompareStringOrdinal(*(LPCWCH *)(a1 + 24LL * v11 + 8), -1, *a3, -1, 0) == 2 )
      return a1 + 24LL * v13;
LABEL_16:
    v11 = (v13 + 1) % a2;
  }
  if ( v12 != -1 )
    v13 = v12;
  return a1 + 24LL * v13;
}
