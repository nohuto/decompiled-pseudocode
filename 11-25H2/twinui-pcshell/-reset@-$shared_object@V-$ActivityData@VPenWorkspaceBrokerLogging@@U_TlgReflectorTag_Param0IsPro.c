/*
 * XREFs of ?reset@?$shared_object@V?$ActivityData@VPenWorkspaceBrokerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VPenWorkspaceBrokerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x1803E4840
 * Callers:
 *     ??1?$ActivityBase@VPenWorkspaceBrokerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1803E1F6C (--1-$ActivityBase@VPenWorkspaceBrokerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0I.c)
 *     ?Destroy@?$ActivityBase@VPenWorkspaceBrokerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1803E24CC (-Destroy@-$ActivityBase@VPenWorkspaceBrokerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_P.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$ActivityData@VPenWorkspaceBrokerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VPenWorkspaceBrokerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1803E1FA4 (--1-$ActivityData@VPenWorkspaceBrokerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$Activit.c)
 */

void __fastcall wil::details::shared_object<wil::ActivityBase<PenWorkspaceBrokerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<PenWorkspaceBrokerLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(
        volatile signed __int32 **a1)
{
  volatile signed __int32 *v2; // rcx
  volatile signed __int32 *v3; // rdi

  v2 = *a1;
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd(v2, 0xFFFFFFFF) == 1 )
    {
      v3 = *a1;
      if ( *a1 )
      {
        wil::ActivityBase<PenWorkspaceBrokerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<PenWorkspaceBrokerLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<PenWorkspaceBrokerLogging,_TlgReflectorTag_Param0IsProviderType>((__int64)(v3 + 2));
        operator delete((void *)v3, (const struct std::nothrow_t *)0x110);
      }
    }
    *a1 = 0LL;
  }
}
