/*
 * XREFs of ?PruneStaleProcessSubmixes@CBaseStreamGroupProxy@@IEAAXXZ @ 0x180045480
 * Callers:
 *     ?EnumerateProcessSubmixes@CBaseStreamGroupProxy@@UEAAJAEAV?$vector@V?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x1800FD1D0 (-EnumerateProcessSubmixes@CBaseStreamGroupProxy@@UEAAJAEAV-$vector@V-$ComPtr@UIProcessSubmixProx.c)
 *     ?GetProcessSubmix@CBaseStreamGroupProxy@@UEAAJPEAUProcessSubmixParams@@KAEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAPEAUIProcessSubmixProxy@@@Z @ 0x1800FDA20 (-GetProcessSubmix@CBaseStreamGroupProxy@@UEAAJPEAUProcessSubmixParams@@KAEBV-$vector@V-$com_ptr_.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x1800397BC (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _lambda_ce21942885de90a1a6198292e021f395_::operator() @ 0x180044CB0 (_lambda_ce21942885de90a1a6198292e021f395_--operator().c)
 *     std::find_if_Microsoft::WRL::WeakRef____lambda_6721409c6d8d6be39a12e154768b61d2___ @ 0x18004616C (std--find_if_Microsoft--WRL--WeakRef____lambda_6721409c6d8d6be39a12e154768b61d2___.c)
 *     ??$_Move_unchecked@PEAVWeakRef@WRL@Microsoft@@PEAV123@@std@@YAPEAVWeakRef@WRL@Microsoft@@PEAV123@00@Z @ 0x180046224 (--$_Move_unchecked@PEAVWeakRef@WRL@Microsoft@@PEAV123@@std@@YAPEAVWeakRef@WRL@Microsoft@@PEAV123.c)
 */

void __fastcall CBaseStreamGroupProxy::PruneStaleProcessSubmixes(CBaseStreamGroupProxy *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // r14
  __int64 *v3; // rbp
  __int64 v4; // rcx
  __int64 *v5; // rbx
  __int64 *v6; // rdi
  __int64 *v7; // rcx
  __int64 v8; // rax
  __int64 *v9; // rbp
  __int64 v10; // rdi
  __int64 *i; // rbx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14[3]; // [rsp+20h] [rbp-18h] BYREF

  v1 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 176);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 176));
  v3 = (__int64 *)*((_QWORD *)this + 31);
  v5 = (__int64 *)std::find_if_Microsoft::WRL::WeakRef____lambda_6721409c6d8d6be39a12e154768b61d2___(
                    *((_QWORD *)this + 30),
                    v3);
  v6 = v5;
  if ( v5 != v3 )
  {
    while ( ++v5 != v3 )
    {
      if ( !lambda_ce21942885de90a1a6198292e021f395_::operator()(v4, v5) )
      {
        v12 = 0LL;
        if ( v14 != v5 )
        {
          v12 = *v5;
          *v5 = 0LL;
        }
        v13 = *v6;
        *v6 = v12;
        v14[0] = v13;
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v14);
        ++v6;
      }
    }
  }
  v7 = (__int64 *)*((_QWORD *)this + 31);
  if ( v6 != v7 )
  {
    v8 = std::_Move_unchecked<Microsoft::WRL::WeakRef *,Microsoft::WRL::WeakRef *>(v7, *((_QWORD *)this + 31));
    v9 = (__int64 *)*((_QWORD *)this + 31);
    v10 = v8;
    for ( i = (__int64 *)v8; i != v9; ++i )
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(i);
    *((_QWORD *)this + 31) = v10;
  }
  if ( v1 )
    LeaveCriticalSection(v1);
}
