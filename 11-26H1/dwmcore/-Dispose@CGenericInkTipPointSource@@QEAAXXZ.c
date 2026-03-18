/*
 * XREFs of ?Dispose@CGenericInkTipPointSource@@QEAAXXZ @ 0x180288DF0
 * Callers:
 *     ?DetachFromChannel@CGenericInk@@UEAAXPEAVCChannelContext@@_N@Z @ 0x18026F7A0 (-DetachFromChannel@CGenericInk@@UEAAXPEAVCChannelContext@@_N@Z.c)
 *     ?DetachFromChannel@CSynchronousSuperWetInk@@UEAAXPEAVCChannelContext@@_N@Z @ 0x180284B60 (-DetachFromChannel@CSynchronousSuperWetInk@@UEAAXPEAVCChannelContext@@_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCConditionalExpression@@@WRL@Microsoft@@IEAAKXZ @ 0x180050020 (-InternalRelease@-$ComPtr@VCConditionalExpression@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1801BB3E4 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?reset@?$unique_ptr@VCSharedCircularQueue@@U?$default_delete@VCSharedCircularQueue@@@std@@@std@@QEAAXPEAVCSharedCircularQueue@@@Z @ 0x18026CEDC (-reset@-$unique_ptr@VCSharedCircularQueue@@U-$default_delete@VCSharedCircularQueue@@@std@@@std@@.c)
 */

void __fastcall CGenericInkTipPointSource::Dispose(CGenericInkTipPointSource *this)
{
  RTL_SRWLOCK *v1; // rbx
  RTL_SRWLOCK *v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = (RTL_SRWLOCK *)((char *)this + 32);
  AcquireSRWLockExclusive((PSRWLOCK)this + 4);
  v3 = v1;
  Microsoft::WRL::ComPtr<CConditionalExpression>::InternalRelease((__int64 *)this + 2);
  std::unique_ptr<CSharedCircularQueue>::reset((void **)this + 3, 0LL);
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v3);
}
