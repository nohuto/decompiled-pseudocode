/*
 * XREFs of sub_140076CA0 @ 0x140076CA0
 * Callers:
 *     sub_140045B10 @ 0x140045B10 (sub_140045B10.c)
 *     sub_14007BBD0 @ 0x14007BBD0 (sub_14007BBD0.c)
 *     pfnwa @ 0x14007EB40 (pfnwa.c)
 * Callees:
 *     sub_140017850 @ 0x140017850 (sub_140017850.c)
 *     sub_140076D48 @ 0x140076D48 (sub_140076D48.c)
 *     sub_140078220 @ 0x140078220 (sub_140078220.c)
 */

__int64 __fastcall sub_140076CA0(RTL_SRWLOCK *a1, __int128 *a2)
{
  unsigned int v4; // edi
  RTL_SRWLOCK *v5; // rbx
  __int64 v6; // rbx
  __int128 v8; // [rsp+20h] [rbp-18h] BYREF
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0;
  v9 = 0LL;
  v5 = a1 + 1;
  AcquireSRWLockExclusive(a1 + 1);
  sub_140078220(&v9, a1);
  if ( v5 )
    ReleaseSRWLockExclusive(v5);
  v6 = v9;
  if ( v9 )
  {
    v8 = *a2;
    v4 = sub_140076D48(&v8, v9, a1);
    sub_140017850(v6);
  }
  return v4;
}
