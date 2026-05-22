/*
 * XREFs of ?_Tidy@?$vector@V?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@V?$allocator@V?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@2@@std@@AEAAXXZ @ 0x180046AF0
 * Callers:
 *     ??4HitTestResult@@QEAAAEAU0@$$QEAU0@@Z @ 0x18014DBD4 (--4HitTestResult@@QEAAAEAU0@$$QEAU0@@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18008A790 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::vector<std::vector<Microsoft::WRL::ComPtr<InputSite>>>::_Tidy(__int64 ***a1)
{
  __int64 **v2; // rbx
  __int64 **i; // rbp
  __int64 *v4; // rdi
  __int64 *j; // rsi
  __int64 result; // rax
  __int64 v7; // rcx

  v2 = *a1;
  if ( *a1 )
  {
    for ( i = a1[1]; v2 != i; v2 += 3 )
    {
      v4 = *v2;
      if ( *v2 )
      {
        for ( j = v2[1]; v4 != j; ++v4 )
        {
          v7 = *v4;
          if ( *v4 )
          {
            *v4 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
          }
        }
        std::_Deallocate<16>(*v2, ((char *)v2[2] - (char *)*v2) & 0xFFFFFFFFFFFFFFF8uLL);
        *v2 = 0LL;
        v2[1] = 0LL;
        v2[2] = 0LL;
      }
    }
    result = std::_Deallocate<16>(*a1, 8 * (a1[2] - *a1));
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
  return result;
}
