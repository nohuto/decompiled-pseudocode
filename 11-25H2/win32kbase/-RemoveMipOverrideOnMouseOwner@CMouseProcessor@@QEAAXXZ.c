/*
 * XREFs of ?RemoveMipOverrideOnMouseOwner@CMouseProcessor@@QEAAXXZ @ 0x140221FBC
 * Callers:
 *     CancelCapturedMipOverride @ 0x14015A9A0 (CancelCapturedMipOverride.c)
 * Callees:
 *     ?GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z @ 0x1400B96E8 (-GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z.c)
 *     IsMiPActive @ 0x1400BF0AC (IsMiPActive.c)
 *     _anonymous_namespace_::GetPtiFromInputDest @ 0x1400E67D0 (_anonymous_namespace_--GetPtiFromInputDest.c)
 */

void __fastcall CMouseProcessor::RemoveMipOverrideOnMouseOwner(CMouseProcessor *this)
{
  CInputDest *v1; // rbx
  __int64 PtiFromInputDest; // rax
  __int64 Queue; // rax

  if ( _InterlockedCompareExchange((volatile signed __int32 *)this + 974, 1, 1) )
  {
    v1 = (CMouseProcessor *)((char *)this + 3776);
    PtiFromInputDest = anonymous_namespace_::GetPtiFromInputDest((CMouseProcessor *)((char *)this + 3776), 2LL);
    if ( PtiFromInputDest )
    {
      if ( (unsigned int)IsMiPActive(PtiFromInputDest, 0LL) )
      {
        Queue = CInputDest::GetQueue(v1, 2);
        if ( Queue )
          *(_QWORD *)(Queue + 464) = 0LL;
      }
    }
  }
}
