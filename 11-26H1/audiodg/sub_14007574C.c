/*
 * XREFs of sub_14007574C @ 0x14007574C
 * Callers:
 *     sub_14003EB60 @ 0x14003EB60 (sub_14003EB60.c)
 * Callees:
 *     sub_14000EE40 @ 0x14000EE40 (sub_14000EE40.c)
 *     sub_140039EA8 @ 0x140039EA8 (sub_140039EA8.c)
 */

__int64 sub_14007574C()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v4; // [rsp+40h] [rbp-28h]
  WINBOOL v5; // [rsp+70h] [rbp+8h] BYREF
  __int64 v6; // [rsp+78h] [rbp+10h] BYREF

  v5 = 0;
  v6 = 0LL;
  if ( InitOnceBeginInitialize(&stru_1400E9758, 1u, &v5, (LPVOID *)&v6) && !v5 )
    sub_140039EA8(v6, v0, v2);
  if ( (byte_1400E8401 & 4) != 0 )
    sub_14000EE40(v1, v0, v2, 2, v6, 0, 0, 0, v4, 0, 0);
  return 0LL;
}
