/*
 * XREFs of ?LockExclusive@?$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800249FC
 * Callers:
 *     ?Stop@?$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18002403C (-Stop@-$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@.c)
 *     ?Destroy@?$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800241BC (-Destroy@-$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTyp.c)
 *     ?zInternalStart@?$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1800246E4 (-zInternalStart@-$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProv.c)
 *     ?zInternalStop@?$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1800249B8 (-zInternalStop@-$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProvi.c)
 *     ?NotifyFailure@?$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x1800CB6E0 (-NotifyFailure@-$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProvi.c)
 * Callees:
 *     <none>
 */

RTL_SRWLOCK **__fastcall wil::ActivityBase<WindowFrameLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
        __int64 a1,
        RTL_SRWLOCK **a2)
{
  RTL_SRWLOCK *v3; // rbx
  PSRWLOCK *p_SRWLock; // rax
  char v5; // di
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF
  PSRWLOCK v8; // [rsp+38h] [rbp+10h] BYREF

  LODWORD(SRWLock) = 0;
  v3 = *(RTL_SRWLOCK **)(a1 + 280);
  if ( v3 )
  {
    v3 += 33;
    AcquireSRWLockExclusive(v3);
    p_SRWLock = &v8;
    v5 = 1;
  }
  else
  {
    p_SRWLock = &SRWLock;
    v5 = 2;
  }
  *a2 = v3;
  *p_SRWLock = 0LL;
  if ( (v5 & 2) != 0 )
  {
    v5 &= ~2u;
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
  }
  if ( (v5 & 1) != 0 && v8 )
    ReleaseSRWLockExclusive(v8);
  return a2;
}
