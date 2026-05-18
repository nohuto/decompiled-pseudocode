/*
 * XREFs of sub_1800965A0 @ 0x1800965A0
 * Callers:
 *     sub_1800975F0 @ 0x1800975F0 (sub_1800975F0.c)
 * Callees:
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_1800965A0(__int64 a1, __int64 *a2)
{
  __int64 v3; // rax
  __int64 v4; // r8
  __int64 result; // rax
  char v6; // [rsp+20h] [rbp-28h]
  __int128 v7; // [rsp+30h] [rbp-18h] BYREF

  if ( *(_BYTE *)(a1 + 61) )
  {
    v3 = *a2;
    v6 = *(_BYTE *)(a1 + 60);
    v4 = *(unsigned int *)(a1 + 40);
    v7 = *(_OWORD *)(a1 + 44);
    result = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64, __int128 *, char))(v3 + 168))(
               a2,
               a1 + 24,
               v4,
               &v7,
               v6);
    *(_BYTE *)(a1 + 61) = 0;
  }
  return result;
}
