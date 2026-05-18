/*
 * XREFs of sub_180042FF0 @ 0x180042FF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_180028BD0 @ 0x180028BD0 (sub_180028BD0.c)
 *     sub_180029070 @ 0x180029070 (sub_180029070.c)
 *     sub_180029EF8 @ 0x180029EF8 (sub_180029EF8.c)
 *     sub_18007E080 @ 0x18007E080 (sub_18007E080.c)
 */

__int64 __fastcall sub_180042FF0(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v5; // rdx
  _QWORD *v6; // rax
  __int64 v7; // r8
  _QWORD v8[3]; // [rsp+20h] [rbp-18h] BYREF
  int v9; // [rsp+40h] [rbp+8h] BYREF

  result = sub_180029070(a1, (__int64)a2);
  if ( *(_QWORD *)(a1 + 120) )
  {
    sub_180029EF8(*a2 + 24LL, v5);
    v6 = sub_180012C40(v8, a2);
    sub_18007E080(v7, v6);
    v9 = *(_DWORD *)(*a2 + 244LL);
    result = sub_180028BD0((__int64 *)(a1 + 80), (__int64)v8, &v9);
    *(_BYTE *)(*(_QWORD *)result + 32LL) = 1;
  }
  return result;
}
