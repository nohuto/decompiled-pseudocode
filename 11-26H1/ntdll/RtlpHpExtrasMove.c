/*
 * XREFs of RtlpHpExtrasMove @ 0x1800D4520
 * Callers:
 *     RtlpHpReallocMove @ 0x1800818A0 (RtlpHpReallocMove.c)
 * Callees:
 *     <none>
 */

void *__fastcall RtlpHpExtrasMove(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int16 a5)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned __int8 *v8; // rdx

  v5 = a1 + a2;
  v6 = a1 + a2 + 16;
  if ( (a5 & 0x2000) == 0 )
    v6 = v5;
  v7 = a3 + a4 + 16;
  v8 = (unsigned __int8 *)((v6 + 15) & 0xFFFFFFFFFFFFFFF0uLL);
  if ( (a5 & 0x2000) == 0 )
    v7 = a3 + a4;
  return memmove((void *)((v7 + 15) & 0xFFFFFFFFFFFFFFF0uLL), v8, 16 * (v8[3] + 1LL));
}
