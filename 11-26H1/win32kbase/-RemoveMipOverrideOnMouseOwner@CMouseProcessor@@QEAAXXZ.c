/*
 * XREFs of ?RemoveMipOverrideOnMouseOwner@CMouseProcessor@@QEAAXXZ @ 0x1402248A8
 * Callers:
 *     CancelCapturedMipOverride @ 0x14019A300 (CancelCapturedMipOverride.c)
 * Callees:
 *     IsMiPActive @ 0x140102234 (IsMiPActive.c)
 *     ?GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z @ 0x140117D38 (-GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z.c)
 *     _anonymous_namespace_::GetPtiFromInputDest @ 0x14012D9A4 (_anonymous_namespace_--GetPtiFromInputDest.c)
 */

void __fastcall CMouseProcessor::RemoveMipOverrideOnMouseOwner(CMouseProcessor *this, __int64 a2, int a3)
{
  char *v3; // rbx
  __int64 PtiFromInputDest; // rax
  __int64 Queue; // rax

  v3 = (char *)this + 3784;
  if ( _InterlockedCompareExchange((volatile signed __int32 *)this + 976, 1, 1) )
  {
    PtiFromInputDest = anonymous_namespace_::GetPtiFromInputDest((__int64)v3, 2, a3);
    if ( PtiFromInputDest )
    {
      if ( (unsigned int)IsMiPActive(PtiFromInputDest, 0LL) )
      {
        Queue = CInputDest::GetQueue((__int64)v3, 2);
        if ( Queue )
          *(_QWORD *)(Queue + 488) = 0LL;
      }
    }
  }
}
