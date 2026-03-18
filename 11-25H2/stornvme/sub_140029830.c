/*
 * XREFs of sub_140029830 @ 0x140029830
 * Callers:
 *     <none>
 * Callees:
 *     sub_140005000 @ 0x140005000 (sub_140005000.c)
 *     sub_14000CF50 @ 0x14000CF50 (sub_14000CF50.c)
 *     __security_check_cookie @ 0x140032780 (__security_check_cookie.c)
 */

__int64 __fastcall sub_140029830(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  bool v5; // zf
  __int64 v6; // rdi
  __int64 v7; // rcx
  __int64 result; // rax
  __int64 v9; // [rsp+20h] [rbp-20h] BYREF
  unsigned __int64 v10; // [rsp+28h] [rbp-18h]
  __int64 v11; // [rsp+30h] [rbp-10h]

  v3 = sub_140005000(a2);
  v5 = *(_BYTE *)(v4 + 3) == 1;
  v6 = v3;
  v10 = 0xAE3430FE2131D944uLL;
  v7 = *(_QWORD *)(v3 + 4160);
  v9 = v7;
  v11 = 0x5A1983BA3DFD4DABLL;
  if ( !v5 )
    goto LABEL_6;
  result = *(_QWORD *)(v7 + 496) - v10;
  if ( !result )
    result = *(_QWORD *)(v7 + 504) - v11;
  if ( result )
  {
LABEL_6:
    result = sub_14000CF50(a1, 512LL, &v9, *(_QWORD *)(a1 + 3944));
    *(_QWORD *)(a1 + 3944) = 0LL;
    *(_DWORD *)(a1 + 12) |= 8u;
  }
  else
  {
    *(_QWORD *)(a1 + 3928) = v7;
  }
  *(_BYTE *)(v6 + 4225) |= 8u;
  return result;
}
