/*
 * XREFs of ??R?$default_delete@UHitTestResult@@@std@@QEBAXPEAUHitTestResult@@@Z @ 0x1800484C0
 * Callers:
 *     ?HitTest@DWMInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@PEAVInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@@Z @ 0x180014BD0 (-HitTest@DWMInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@PEAVInputContex.c)
 *     ??$?4U?$default_delete@UHitTestResult@@@std@@$0A@@?$unique_ptr@UHitTestResult@@U?$default_delete@UHitTestResult@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180053E28 (--$-4U-$default_delete@UHitTestResult@@@std@@$0A@@-$unique_ptr@UHitTestResult@@U-$default_delete.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18008A790 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009ADC0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::default_delete<HitTestResult>::operator()(__int64 a1, _QWORD *a2)
{
  __int64 **v3; // rbx
  __int64 **i; // rbp
  __int64 *v5; // rdi
  __int64 *j; // rsi
  __int64 v7; // rcx
  __int64 v8; // rcx

  if ( a2 )
  {
    v3 = (__int64 **)a2[12];
    if ( v3 )
    {
      for ( i = (__int64 **)a2[13]; v3 != i; v3 += 3 )
      {
        v5 = *v3;
        if ( *v3 )
        {
          for ( j = v3[1]; v5 != j; ++v5 )
          {
            v8 = *v5;
            if ( *v5 )
            {
              *v5 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
            }
          }
          std::_Deallocate<16>(*v3, ((char *)v3[2] - (char *)*v3) & 0xFFFFFFFFFFFFFFF8uLL);
          *v3 = 0LL;
          v3[1] = 0LL;
          v3[2] = 0LL;
        }
      }
      std::_Deallocate<16>(a2[12], 8 * ((__int64)(a2[14] - a2[12]) >> 3));
      a2[12] = 0LL;
      a2[13] = 0LL;
      a2[14] = 0LL;
    }
    v7 = a2[1];
    if ( v7 )
    {
      if ( v7 != -1 )
        NtCloseCompositionInputSink(v7);
    }
    operator delete(a2, (const struct std::nothrow_t *)0x78);
  }
}
