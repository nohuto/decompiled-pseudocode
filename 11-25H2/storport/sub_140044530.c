/*
 * XREFs of sub_140044530 @ 0x140044530
 * Callers:
 *     sub_140060AF4 @ 0x140060AF4 (sub_140060AF4.c)
 *     sub_1400A070C @ 0x1400A070C (sub_1400A070C.c)
 * Callees:
 *     sub_1400A67E4 @ 0x1400A67E4 (sub_1400A67E4.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

__int64 __fastcall sub_140044530(__int64 a1, __int64 a2, char a3)
{
  _DWORD *v3; // r13
  char v7; // bp
  char v8; // r14
  char v9; // r15
  __int64 v10; // rdx
  __int64 result; // rax
  _BYTE *v12; // rcx
  __int128 v13; // [rsp+80h] [rbp-48h] BYREF

  v3 = *(_DWORD **)(a2 + 24);
  v13 = 0LL;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  IoGetActivityIdIrp(a2, &v13);
  v10 = *(_QWORD *)(a1 + 64);
  result = *(_QWORD *)(a2 + 184);
  if ( *(_DWORD *)v10 == 1431193940 )
  {
    v12 = *(_BYTE **)(a1 + 64);
    v10 = *(_QWORD *)(v10 + 24);
    v7 = v12[104];
    v8 = v12[105];
    v9 = v12[106];
  }
  else
  {
    v12 = 0LL;
  }
  if ( (byte_1401694F3 & 1) != 0 )
    return sub_1400A67E4(
             (_DWORD)v12,
             v10,
             (unsigned int)&v13,
             a2,
             *(_DWORD *)(result + 24),
             v12 == 0LL,
             *(_DWORD *)(v10 + 56),
             v7,
             v8,
             v9,
             v3[2],
             v3[20],
             v3[4],
             v3[5],
             a3);
  return result;
}
