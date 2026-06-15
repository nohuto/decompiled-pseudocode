/*
 * XREFs of ?CloneData@?$CSimpleStringT@G$0A@@ATL@@CAPEAUCStringData@2@PEAU32@@Z @ 0x18001DE30
 * Callers:
 *     ?Copy@CDacl@ATL@@AEAAXAEBU_ACL@@@Z @ 0x18001D3E0 (-Copy@CDacl@ATL@@AEAAXAEBU_ACL@@@Z.c)
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@AEBV01@@Z @ 0x18001DCB4 (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@AEBV01@@Z.c)
 *     ??0CAccessAce@CDacl@ATL@@QEAA@AEBVCSid@2@KE_N@Z @ 0x18001DCE0 (--0CAccessAce@CDacl@ATL@@QEAA@AEBVCSid@2@KE_N@Z.c)
 * Callees:
 *     _invalid_parameter_noinfo @ 0x180030966 (_invalid_parameter_noinfo.c)
 *     memcpy_0 @ 0x180030A10 (memcpy_0.c)
 *     memset_0 @ 0x180030A1C (memset_0.c)
 *     ?ThrowMemoryException@?$CSimpleStringT@G$0A@@ATL@@KAXXZ @ 0x18003E17C (-ThrowMemoryException@-$CSimpleStringT@G$0A@@ATL@@KAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

volatile signed __int32 *__fastcall ATL::CSimpleStringT<unsigned short,0>::CloneData(volatile signed __int32 *a1)
{
  __int64 (__fastcall ***v2)(_QWORD, _QWORD, __int64); // rax
  volatile signed __int32 *v3; // rdi
  __int64 v5; // rax
  const void *v6; // rdx
  void *v7; // rcx
  size_t v8; // r8

  v2 = (__int64 (__fastcall ***)(_QWORD, _QWORD, __int64))(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)a1 + 32LL))(*(_QWORD *)a1);
  if ( *((int *)a1 + 4) >= 0 && v2 == *(__int64 (__fastcall ****)(_QWORD, _QWORD, __int64))a1 )
  {
    v3 = a1;
    _InterlockedIncrement(a1 + 4);
  }
  else
  {
    v5 = (**v2)(v2, *((unsigned int *)a1 + 2), 2LL);
    v3 = (volatile signed __int32 *)v5;
    if ( !v5 )
      ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException();
    v6 = (const void *)(a1 + 6);
    *(_DWORD *)(v5 + 8) = *((_DWORD *)a1 + 2);
    v7 = (void *)(v5 + 24);
    v8 = 2LL * (*((_DWORD *)a1 + 2) + 1);
    if ( v8 )
    {
      if ( v5 != -24 )
      {
        if ( a1 != (volatile signed __int32 *)-24LL )
        {
          memcpy_0(v7, v6, v8);
          return v3;
        }
        memset_0(v7, 0, v8);
      }
      *(_DWORD *)_o__errno(v7, v6) = 22;
      invalid_parameter_noinfo();
    }
  }
  return v3;
}
