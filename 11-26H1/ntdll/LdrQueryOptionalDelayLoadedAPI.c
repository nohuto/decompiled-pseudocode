/*
 * XREFs of LdrQueryOptionalDelayLoadedAPI @ 0x1801150A0
 * Callers:
 *     <none>
 * Callees:
 *     LdrResolveDelayLoadedAPI @ 0x180105E10 (LdrResolveDelayLoadedAPI.c)
 *     LdrpFindDelayloadedMethod @ 0x18015C318 (LdrpFindDelayloadedMethod.c)
 *     LdrpFindDelayloadedMethodInDescriptor @ 0x18015C3BC (LdrpFindDelayloadedMethodInDescriptor.c)
 *     LdrpGetDelayloadDescriptor @ 0x18015C44C (LdrpGetDelayloadDescriptor.c)
 */

__int64 __fastcall LdrQueryOptionalDelayLoadedAPI(const void *ArgList, unsigned __int8 *a2, __int64 a3, int a4)
{
  int v7; // ecx
  char *DelayloadedMethodInDescriptor; // rax
  _BYTE *v9; // rbx
  __int64 DelayloadDescriptor; // rax
  _BYTE *v11; // [rsp+30h] [rbp-18h] BYREF

  v11 = 0LL;
  if ( a4 )
    return 3221225485LL;
  v7 = *a2 - 42;
  if ( *a2 == 42 )
    v7 = a2[1];
  if ( v7 )
  {
    DelayloadDescriptor = LdrpGetDelayloadDescriptor(ArgList);
    v9 = (_BYTE *)DelayloadDescriptor;
    if ( !DelayloadDescriptor )
      return 3221225781LL;
    DelayloadedMethodInDescriptor = (char *)LdrpFindDelayloadedMethodInDescriptor(ArgList, DelayloadDescriptor, a3);
  }
  else
  {
    DelayloadedMethodInDescriptor = (char *)LdrpFindDelayloadedMethod(ArgList, a3, &v11);
    v9 = v11;
  }
  if ( DelayloadedMethodInDescriptor )
    return LdrResolveDelayLoadedAPI(ArgList, v9, 0LL, 0LL, DelayloadedMethodInDescriptor, 0) == 0 ? 0xC0000139 : 0;
  return 3221225781LL;
}
