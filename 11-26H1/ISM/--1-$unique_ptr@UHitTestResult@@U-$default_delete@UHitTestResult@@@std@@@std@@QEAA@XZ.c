/*
 * XREFs of ??1?$unique_ptr@UHitTestResult@@U?$default_delete@UHitTestResult@@@std@@@std@@QEAA@XZ @ 0x180046BE0
 * Callers:
 *     ?HitTest@DWMInputRouter@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUIInputTarget@@PEAPEAU4@@Z @ 0x1801A33B0 (-HitTest@DWMInputRouter@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUIInputTarget@@PEAPEAU4@@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18008A790 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009ADC0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::unique_ptr<HitTestResult>::~unique_ptr<HitTestResult>(_QWORD **a1)
{
  _QWORD *v1; // r14
  __int64 **v2; // rbx
  __int64 **i; // rbp
  __int64 *v4; // rdi
  __int64 *j; // rsi
  __int64 v6; // rcx
  __int64 v7; // rcx

  v1 = *a1;
  if ( *a1 )
  {
    v2 = (__int64 **)v1[12];
    if ( v2 )
    {
      for ( i = (__int64 **)v1[13]; v2 != i; v2 += 3 )
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
      std::_Deallocate<16>(v1[12], 8 * ((__int64)(v1[14] - v1[12]) >> 3));
      v1[12] = 0LL;
      v1[13] = 0LL;
      v1[14] = 0LL;
    }
    v6 = v1[1];
    if ( v6 )
    {
      if ( v6 != -1 )
        NtCloseCompositionInputSink(v6);
    }
    operator delete(v1, (const struct std::nothrow_t *)0x78);
  }
}
