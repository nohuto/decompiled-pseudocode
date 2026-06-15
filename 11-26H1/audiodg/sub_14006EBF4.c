/*
 * XREFs of sub_14006EBF4 @ 0x14006EBF4
 * Callers:
 *     sub_140043B74 @ 0x140043B74 (sub_140043B74.c)
 *     sub_14006FB30 @ 0x14006FB30 (sub_14006FB30.c)
 *     sub_14006FC60 @ 0x14006FC60 (sub_14006FC60.c)
 *     sub_14006FD90 @ 0x14006FD90 (sub_14006FD90.c)
 *     sub_14006FEC0 @ 0x14006FEC0 (sub_14006FEC0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14006EBF4(__int64 a1, unsigned __int16 a2, __int64 a3, int a4, __int64 a5)
{
  __int64 v5; // rax
  int v7; // [rsp+78h] [rbp+20h] BYREF

  v7 = a4;
  if ( a5 )
  {
    v5 = -1LL;
    do
      ++v5;
    while ( *(_BYTE *)(a5 + v5) );
  }
  return EtwTraceMessage(a1, 43LL, a3, a2, &v7);
}
