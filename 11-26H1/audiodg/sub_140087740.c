/*
 * XREFs of sub_140087740 @ 0x140087740
 * Callers:
 *     <none>
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_14008670C @ 0x14008670C (sub_14008670C.c)
 */

__int64 __fastcall sub_140087740(RTL_SRWLOCK *a1, __int64 a2, int a3, PSRWLOCK *a4)
{
  __int64 result; // rax
  char v6; // r8
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v8; // [rsp+48h] [rbp+10h] BYREF
  __int64 v9; // [rsp+50h] [rbp+18h] BYREF

  v8 = a2;
  if ( a3 )
  {
    if ( a3 != 1 )
    {
      sub_14000C2A8(
        (int)retaddr,
        227,
        (int)"avcore\\audiocore\\server\\audiodg\\dspoffload\\client\\audiopumpdspresourcemanager.cpp",
        -2147024809);
      return 2147942487LL;
    }
    v6 = 1;
  }
  else
  {
    v6 = 0;
  }
  LOBYTE(v9) = 0;
  result = sub_14008670C(a1 + 4, &v8, v6, a4, &v9);
  if ( *a4 )
    return 0LL;
  return result;
}
