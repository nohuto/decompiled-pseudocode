/*
 * XREFs of sub_1800BD89C @ 0x1800BD89C
 * Callers:
 *     sub_1800BC4A0 @ 0x1800BC4A0 (sub_1800BC4A0.c)
 * Callees:
 *     _o_log @ 0x18000CE64 (_o_log.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_1800BD89C(__int64 *a1)
{
  __int64 v2; // rax
  void (__fastcall *v3)(__int64 *, __int128 *); // rax
  int v4; // eax
  __int64 result; // rax
  __int128 v6; // [rsp+28h] [rbp-39h] BYREF
  __int64 v7; // [rsp+38h] [rbp-29h]
  __int64 v8; // [rsp+40h] [rbp-21h]
  __int128 v9; // [rsp+48h] [rbp-19h]
  __int128 v10; // [rsp+58h] [rbp-9h]
  __int128 v11; // [rsp+68h] [rbp+7h]
  __int64 v12; // [rsp+78h] [rbp+17h]
  __int64 v13; // [rsp+80h] [rbp+1Fh]
  __int64 v14; // [rsp+88h] [rbp+27h]
  __int64 v15; // [rsp+90h] [rbp+2Fh]
  int v16; // [rsp+98h] [rbp+37h]

  v7 = 0LL;
  v8 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  v16 = 0;
  v2 = *a1;
  v6 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v3 = *(void (__fastcall **)(__int64 *, __int128 *))(v2 + 88);
  v11 = 0LL;
  v3(a1, &v6);
  v4 = *((_DWORD *)a1 + 72);
  if ( v4 == 5 )
  {
    result = 3000LL;
  }
  else if ( v4 == 4 )
  {
    result = 4000LL;
  }
  else
  {
    o_log();
    o_log();
    result = (unsigned int)(int)(o_round() * 100.0);
  }
  *((_DWORD *)a1 + 1158) = result;
  return result;
}
