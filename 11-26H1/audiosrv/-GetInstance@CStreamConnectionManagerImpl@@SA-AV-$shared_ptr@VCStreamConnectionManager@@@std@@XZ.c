/*
 * XREFs of ?GetInstance@CStreamConnectionManagerImpl@@SA?AV?$shared_ptr@VCStreamConnectionManager@@@std@@XZ @ 0x18011D520
 * Callers:
 *     ?EndInitialization@CAudioSrv@@UEAAJJ@Z @ 0x1800D8020 (-EndInitialization@CAudioSrv@@UEAAJJ@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180011720 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x180056EC0 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x18007D194 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ??$make_shared@VCStreamConnectionManagerImpl@@$$V@std@@YA?AV?$shared_ptr@VCStreamConnectionManagerImpl@@@0@XZ @ 0x18011B478 (--$make_shared@VCStreamConnectionManagerImpl@@$$V@std@@YA-AV-$shared_ptr@VCStreamConnectionManag.c)
 *     ?Initialize@CMonitorManager@@QEAAJK_KPEBK@Z @ 0x18011DC34 (-Initialize@CMonitorManager@@QEAAJK_KPEBK@Z.c)
 */

// Hidden C++ exception states: #wind=3
RTL_SRWLOCK *__fastcall CStreamConnectionManagerImpl::GetInstance(RTL_SRWLOCK *a1)
{
  void *v2; // xmm0_8
  __int64 v3; // rdx
  signed __int32 v4; // eax
  signed __int32 v5; // ett
  void *v6; // rsi
  void *v7; // rbx
  CMonitorManager *v8; // rcx
  volatile signed __int32 *v9; // rdi
  volatile signed __int32 *v10; // rbx
  void *v11; // rax
  volatile signed __int32 *v12; // rdx
  std::_Ref_count_base *v13; // rcx
  std::_Ref_count_base *v15[2]; // [rsp+28h] [rbp-30h]
  _QWORD v16[4]; // [rsp+38h] [rbp-20h] BYREF
  RTL_SRWLOCK *v17; // [rsp+60h] [rbp+8h] BYREF

  v17 = a1;
  AcquireSRWLockExclusive(&CStreamConnectionManagerImpl::s_instanceLock);
  v17 = &CStreamConnectionManagerImpl::s_instanceLock;
  v2 = 0LL;
  *(_OWORD *)v15 = 0LL;
  v3 = *((_QWORD *)&CStreamConnectionManagerImpl::s_weakSelf + 1);
  if ( *((_QWORD *)&CStreamConnectionManagerImpl::s_weakSelf + 1) )
  {
    v4 = *(_DWORD *)(*((_QWORD *)&CStreamConnectionManagerImpl::s_weakSelf + 1) + 8LL);
    while ( v4 )
    {
      v5 = v4;
      v4 = _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 8), v4 + 1, v4);
      if ( v5 == v4 )
      {
        v15[1] = *((std::_Ref_count_base **)&CStreamConnectionManagerImpl::s_weakSelf + 1);
        v2 = (void *)CStreamConnectionManagerImpl::s_weakSelf;
        break;
      }
    }
  }
  v6 = v2;
  if ( v2 )
  {
    v10 = (volatile signed __int32 *)v15[1];
  }
  else
  {
    std::make_shared<CStreamConnectionManagerImpl,>(v16);
    v7 = (void *)v16[0];
    v8 = *(CMonitorManager **)(v16[0] + 8LL);
    v9 = (volatile signed __int32 *)v16[1];
    if ( v8 && (int)CMonitorManager::Initialize(v8, 0x12u, 9uLL, &dword_180194740) >= 0 )
    {
      if ( v9 )
        _InterlockedIncrement(v9 + 2);
      v6 = v7;
      v10 = v9;
      if ( v15[1] )
        std::_Ref_count_base::_Decref(v15[1]);
    }
    else
    {
      v10 = (volatile signed __int32 *)v15[1];
    }
    v11 = 0LL;
    v12 = 0LL;
    if ( v10 )
    {
      _InterlockedIncrement(v10 + 3);
      v11 = v6;
      v12 = v10;
    }
    *(_QWORD *)&CStreamConnectionManagerImpl::s_weakSelf = v11;
    v13 = (std::_Ref_count_base *)*((_QWORD *)&CStreamConnectionManagerImpl::s_weakSelf + 1);
    *((_QWORD *)&CStreamConnectionManagerImpl::s_weakSelf + 1) = v12;
    if ( v13 )
      std::_Ref_count_base::_Decwref(v13);
    if ( v9 )
      std::_Ref_count_base::_Decref((std::_Ref_count_base *)v9);
  }
  a1->Ptr = v6;
  a1[1].Ptr = (PVOID)v10;
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v17);
  return a1;
}
