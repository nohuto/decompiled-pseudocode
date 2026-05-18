/*
 * XREFs of sub_18001D48C @ 0x18001D48C
 * Callers:
 *     sub_18001D0F0 @ 0x18001D0F0 (sub_18001D0F0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_1800129D0 @ 0x1800129D0 (sub_1800129D0.c)
 *     sub_180012AC4 @ 0x180012AC4 (sub_180012AC4.c)
 *     sub_18001CFE8 @ 0x18001CFE8 (sub_18001CFE8.c)
 *     sub_18001D748 @ 0x18001D748 (sub_18001D748.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18001D48C(__int64 a1, _BYTE *a2, unsigned int a3)
{
  int v6; // ecx
  int v7; // r8d
  int v8; // r9d
  unsigned int v9; // edx
  unsigned int v10; // eax
  int v11; // r10d
  __int64 v12; // rcx
  __int64 *v13; // rbx
  _BYTE v15[16]; // [rsp+28h] [rbp-50h] BYREF
  _QWORD v16[4]; // [rsp+38h] [rbp-40h] BYREF

  *(_QWORD *)(a1 + 16) = a2;
  *(_DWORD *)a1 = dword_1801BD038;
  v6 = dword_1801BD038;
  *(_DWORD *)(a1 + 4) = dword_1801BD058;
  v7 = dword_1801BD058;
  *(_DWORD *)(a1 + 8) = dword_1801BD078;
  v8 = dword_1801BD078;
  v9 = HIBYTE(a3) & 0xF;
  if ( !v9 )
    v9 = v6;
  *(_DWORD *)a1 = v9;
  v10 = HIWORD(a3) & 0xF;
  if ( !v10 )
    v10 = v7;
  if ( v10 <= v9 )
    v9 = v10;
  *(_DWORD *)(a1 + 4) = v9;
  v11 = (a3 >> 8) & 0xF;
  if ( !v11 )
    v11 = v8;
  *(_DWORD *)(a1 + 8) = v11;
  *(_DWORD *)(a1 + 12) = 6;
  sub_180012AC4((__int64)&unk_1801C7C30);
  v13 = (__int64 *)sub_18001D748(v12);
  sub_180011CC4(v16, a2);
  *(_QWORD *)(*(_QWORD *)sub_18001CFE8(v13, (__int64)v15, (__int64)v16) + 64LL) = a1;
  sub_1800129D0((__int64)v16);
  Mtx_unlock((_Mtx_t)&unk_1801C7C30);
  return a1;
}
