/*
 * XREFs of ?OnHeadEventOccurredWorkerThread@MPCHeadUpdateListener@@QEAAXXZ @ 0x1800652D0
 * Callers:
 *     wistd::__function::__func__lambda_de6b1f6763cb8f9e5e4be32e0bbc9f12__void___cdecl(void)_::operator() @ 0x1800D1340 (wistd--__function--__func__lambda_de6b1f6763cb8f9e5e4be32e0bbc9f12__void___cdecl(void)_--operato.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@0@@Z @ 0x180065488 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18008A790 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??4?$com_ptr_t@UIPerceptionTimestamp@Perception@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@AEBV01@@Z @ 0x1800914D8 (--4-$com_ptr_t@UIPerceptionTimestamp@Perception@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAAE.c)
 *     ??$emplace_back@AEAV?$com_ptr_t@UIHeadEventHandler@@Uerr_exception_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIHeadEventHandler@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIHeadEventHandler@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAAEAV?$com_ptr_t@UIHeadEventHandler@@Uerr_exception_policy@wil@@@wil@@AEAV23@@Z @ 0x1800D0FD0 (--$emplace_back@AEAV-$com_ptr_t@UIHeadEventHandler@@Uerr_exception_policy@wil@@@wil@@@-$vector@V.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall MPCHeadUpdateListener::OnHeadEventOccurredWorkerThread(MPCHeadUpdateListener *this)
{
  MPCHeadUpdateListener *v1; // rdi
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  __int128 v3; // xmm6
  __int128 v4; // xmm7
  __int128 v5; // xmm8
  __int128 v6; // xmm9
  _QWORD **v7; // rdi
  _QWORD *i; // rbx
  __int64 *v9; // rsi
  __int64 *v10; // r14
  __int64 v11; // rbx
  __int64 v12; // rdi
  __int64 v13; // rcx
  __int128 v14; // [rsp+38h] [rbp-69h] BYREF
  __int64 v15; // [rsp+48h] [rbp-59h]
  _OWORD v16[8]; // [rsp+58h] [rbp-49h] BYREF
  __int64 v17; // [rsp+108h] [rbp+67h] BYREF
  __int64 v18; // [rsp+110h] [rbp+6Fh] BYREF
  struct _RTL_CRITICAL_SECTION *v19; // [rsp+118h] [rbp+77h]

  v1 = MPCHeadUpdateListener::s_instance;
  v17 = 0LL;
  v18 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)MPCHeadUpdateListener::s_instance + 160);
  EnterCriticalSection((LPCRITICAL_SECTION)MPCHeadUpdateListener::s_instance + 4);
  v19 = v2;
  v3 = *((_OWORD *)v1 + 6);
  v4 = *((_OWORD *)v1 + 7);
  v5 = *((_OWORD *)v1 + 8);
  v6 = *((_OWORD *)v1 + 9);
  wil::com_ptr_t<Windows::Perception::IPerceptionTimestamp,wil::err_exception_policy>::operator=(&v17, (char *)v1 + 80);
  wil::com_ptr_t<Windows::Perception::IPerceptionTimestamp,wil::err_exception_policy>::operator=(&v18, (char *)v1 + 88);
  v7 = (_QWORD **)*((_QWORD *)v1 + 2);
  for ( i = *v7; i != v7; i = (_QWORD *)*i )
    std::vector<wil::com_ptr_t<IHeadEventHandler,wil::err_exception_policy>>::emplace_back<wil::com_ptr_t<IHeadEventHandler,wil::err_exception_policy> &>(
      &v14,
      i + 3);
  if ( v2 )
    LeaveCriticalSection(v2);
  v10 = (__int64 *)*((_QWORD *)&v14 + 1);
  v9 = (__int64 *)v14;
  v11 = v17;
  v12 = v18;
  if ( (_QWORD)v14 != *((_QWORD *)&v14 + 1) )
  {
    do
    {
      v13 = *v9;
      v16[0] = v3;
      v16[1] = v4;
      v16[2] = v5;
      v16[3] = v6;
      (*(void (__fastcall **)(__int64, _OWORD *, __int64, __int64))(*(_QWORD *)v13 + 24LL))(v13, v16, v11, v12);
      ++v9;
    }
    while ( v9 != v10 );
    v10 = (__int64 *)*((_QWORD *)&v14 + 1);
    v9 = (__int64 *)v14;
  }
  if ( v9 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<MPCGestureHandler,wil::err_exception_policy>>>(v9, v10);
    std::_Deallocate<16>(v14, (v15 - v14) & 0xFFFFFFFFFFFFFFF8uLL);
    v14 = 0LL;
    v15 = 0LL;
  }
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
}
