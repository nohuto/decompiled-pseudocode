/*
 * XREFs of RtlFreeActivationContextStack @ 0x180080030
 * Callers:
 *     RtlFreeThreadActivationContextStack @ 0x18007FF90 (RtlFreeThreadActivationContextStack.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlReleaseActivationContext @ 0x180038390 (RtlReleaseActivationContext.c)
 *     RtlpFreeActivationContextStackFrame @ 0x180080370 (RtlpFreeActivationContextStackFrame.c)
 */

void __fastcall RtlFreeActivationContextStack(__int64 **BaseAddress)
{
  __int64 *v1; // rdi
  __int64 **v3; // rdi
  __int64 *v4; // rax
  __int64 **v5; // r8
  __int64 ***v6; // rcx
  __int64 *v7; // rsi

  if ( BaseAddress )
  {
    v1 = *BaseAddress;
    if ( *BaseAddress )
    {
      do
      {
        v7 = (__int64 *)*v1;
        if ( (v1[2] & 1) != 0 )
          RtlReleaseActivationContext((PACTIVATION_CONTEXT)v1[1]);
        if ( (v1[2] & 8) != 0 )
          RtlpFreeActivationContextStackFrame(BaseAddress, v1);
        v1 = v7;
      }
      while ( v7 );
    }
    *BaseAddress = 0LL;
    v3 = (__int64 **)BaseAddress[1];
    while ( v3 != BaseAddress + 1 )
    {
      v4 = *v3;
      v5 = v3 - 1;
      if ( (__int64 **)(*v3)[1] != v3 || (v6 = (__int64 ***)v3[1], *v6 != v3) )
        __fastfail(3u);
      *v6 = (__int64 **)v4;
      v4[1] = (__int64)v6;
      v3 = (__int64 **)v4;
      RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, v5);
    }
    if ( ((_BYTE)BaseAddress[3] & 2) == 0 )
      RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
  }
}
