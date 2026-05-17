/*
 * XREFs of RtlFreeActivationContextStack @ 0x180088C30
 * Callers:
 *     RtlFreeThreadActivationContextStack @ 0x180088B90 (RtlFreeThreadActivationContextStack.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlReleaseActivationContext @ 0x18004DE10 (RtlReleaseActivationContext.c)
 *     RtlpFreeActivationContextStackFrame @ 0x180088F70 (RtlpFreeActivationContextStackFrame.c)
 */

void __fastcall RtlFreeActivationContextStack(__int64 ***a1)
{
  __int64 **v1; // rdi
  __int64 **v3; // rdi
  __int64 *v4; // rax
  __int64 ***v5; // rcx
  __int64 *v6; // rsi

  if ( a1 )
  {
    v1 = *a1;
    if ( *a1 )
    {
      do
      {
        v6 = *v1;
        if ( ((_BYTE)v1[2] & 1) != 0 )
          RtlReleaseActivationContext((volatile signed __int32 *)v1[1]);
        if ( ((_BYTE)v1[2] & 8) != 0 )
          RtlpFreeActivationContextStackFrame(a1, v1);
        v1 = (__int64 **)v6;
      }
      while ( v6 );
    }
    *a1 = 0LL;
    v3 = a1[1];
    while ( v3 != (__int64 **)(a1 + 1) )
    {
      v4 = *v3;
      if ( (__int64 **)(*v3)[1] != v3 || (v5 = (__int64 ***)v3[1], *v5 != v3) )
        __fastfail(3u);
      *v5 = (__int64 **)v4;
      v4[1] = (__int64)v5;
      v3 = (__int64 **)v4;
      RtlFreeHeap_0();
    }
    if ( ((_BYTE)a1[3] & 2) == 0 )
      RtlFreeHeap_0();
  }
}
