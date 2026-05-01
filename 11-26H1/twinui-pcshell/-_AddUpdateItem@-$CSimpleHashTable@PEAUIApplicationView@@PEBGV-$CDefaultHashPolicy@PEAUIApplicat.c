/*
 * XREFs of ?_AddUpdateItem@?$CSimpleHashTable@PEAUIApplicationView@@PEBGV?$CDefaultHashPolicy@PEAUIApplicationView@@@@V?$CDefaultKeyCompare@PEAUIApplicationView@@@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@AEAAJHAEBQEAUIApplicationView@@AEBQEBGPEAPEBG@Z @ 0x180533208
 * Callers:
 *     TabletModeDragPattern::GetWindowTitleWithMap @ 0x18053308C (TabletModeDragPattern--GetWindowTitleWithMap.c)
 * Callees:
 *     ?ULongLongMult@@YAJ_K0PEA_K@Z @ 0x180143394 (-ULongLongMult@@YAJ_K0PEA_K@Z.c)
 *     ?Alloc@CTLocalAllocPolicy@@SAJPEAXK_KPEAPEAX@Z @ 0x1801E6A78 (-Alloc@CTLocalAllocPolicy@@SAJPEAXK_KPEAPEAX@Z.c)
 *     ?_RehashTable@?$CSimpleHashTable@PEAUIApplicationView@@PEBGV?$CDefaultHashPolicy@PEAUIApplicationView@@@@V?$CDefaultKeyCompare@PEAUIApplicationView@@@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@AEAAJI@Z @ 0x180533300 (-_RehashTable@-$CSimpleHashTable@PEAUIApplicationView@@PEBGV-$CDefaultHashPolicy@PEAUIApplicatio.c)
 *     ?s_LookupEntry@?$CSimpleHashTable@PEAUIApplicationView@@PEBGV?$CDefaultHashPolicy@PEAUIApplicationView@@@@V?$CDefaultKeyCompare@PEAUIApplicationView@@@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@CAAEAVHashBucket@1@PEAV21@IAEBQEAUIApplicationView@@@Z @ 0x1805333DC (-s_LookupEntry@-$CSimpleHashTable@PEAUIApplicationView@@PEBGV-$CDefaultHashPolicy@PEAUIApplicati.c)
 */

__int64 __fastcall CSimpleHashTable<IApplicationView *,unsigned short const *,CDefaultHashPolicy<IApplicationView *>,CDefaultKeyCompare<IApplicationView *>,CDefaultResizePolicy,CDefaultRehashPolicy>::_AddUpdateItem(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        _QWORD *a4)
{
  _QWORD *v4; // r10
  _DWORD *v6; // rdi
  unsigned __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rdx
  void **v12; // r10
  int v13; // ecx
  __int64 v14; // rdx
  __int64 v15; // rax
  unsigned __int64 v17; // [rsp+30h] [rbp+8h] BYREF

  v4 = (_QWORD *)(a1 + 16);
  v6 = (_DWORD *)(a1 + 4);
  if ( *(_QWORD *)(a1 + 16) )
    goto LABEL_5;
  v9 = (unsigned int)*v6;
  *v4 = 0LL;
  v17 = 0LL;
  v10 = ULongLongMult(v9, 0x18uLL, &v17);
  v13 = v10;
  if ( v10 >= 0 )
    v13 = CTLocalAllocPolicy::Alloc((void *)(unsigned int)v10, v11, v17, v12);
  if ( v13 >= 0 )
  {
LABEL_5:
    v14 = (unsigned int)*v6;
    if ( *(_DWORD *)a1 <= *v6 >> 1 )
    {
      if ( *(_DWORD *)(a1 + 8) <= (unsigned int)v14 >> 2 )
      {
LABEL_10:
        v15 = CSimpleHashTable<IApplicationView *,unsigned short const *,CDefaultHashPolicy<IApplicationView *>,CDefaultKeyCompare<IApplicationView *>,CDefaultResizePolicy,CDefaultRehashPolicy>::s_LookupEntry(
                *(_QWORD *)(a1 + 16),
                (unsigned int)*v6,
                a3);
        if ( *(_DWORD *)v15 == 1 )
        {
          *(_QWORD *)(v15 + 16) = *a4;
        }
        else
        {
          if ( *(_DWORD *)v15 == 2 )
            --*(_DWORD *)(a1 + 8);
          if ( v15 )
          {
            *(_QWORD *)(v15 + 8) = *a3;
            *(_QWORD *)(v15 + 16) = *a4;
            *(_DWORD *)v15 = 1;
          }
          ++*(_DWORD *)a1;
        }
        return 0;
      }
      v6 = (_DWORD *)(a1 + 4);
    }
    else
    {
      v14 = (unsigned int)(2 * v14 - 1);
    }
    v13 = CSimpleHashTable<IApplicationView *,unsigned short const *,CDefaultHashPolicy<IApplicationView *>,CDefaultKeyCompare<IApplicationView *>,CDefaultResizePolicy,CDefaultRehashPolicy>::_RehashTable(
            a1,
            v14);
    if ( v13 < 0 )
      return (unsigned int)v13;
    goto LABEL_10;
  }
  return (unsigned int)v13;
}
