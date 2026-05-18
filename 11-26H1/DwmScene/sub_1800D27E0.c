/*
 * XREFs of sub_1800D27E0 @ 0x1800D27E0
 * Callers:
 *     sub_18002DABC @ 0x18002DABC (sub_18002DABC.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011790 @ 0x180011790 (sub_180011790.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_180025874 @ 0x180025874 (sub_180025874.c)
 *     sub_18002CEA0 @ 0x18002CEA0 (sub_18002CEA0.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_1800D27E0(__int64 a1, int a2, _QWORD *a3)
{
  _QWORD *v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rcx

  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)a1 = &Spectre::Utils::IConfigurationManager::`vftable';
  *(_DWORD *)(a1 + 24) = a2;
  sub_180012C40((_QWORD *)(a1 + 32), a3);
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  v5 = (_QWORD *)sub_180011790(0x20uLL);
  *v5 = v5;
  v5[1] = v5;
  *(_QWORD *)(a1 + 48) = v5;
  *(_QWORD *)a1 = &Spectre::Utils::JsonConfigurationManager::`vftable';
  sub_180025874(a1 + 64);
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_QWORD *)(a1 + 152) = 0LL;
  v6 = sub_180011790(0xC0uLL);
  *(_QWORD *)v6 = v6;
  *(_QWORD *)(v6 + 8) = v6;
  *(_QWORD *)(v6 + 16) = v6;
  *(_WORD *)(v6 + 24) = 257;
  *(_QWORD *)(a1 + 144) = v6;
  sub_180025874(a1 + 160);
  *(_QWORD *)(a1 + 240) = 0LL;
  *(_QWORD *)(a1 + 248) = 0LL;
  v7 = sub_180011790(0x68uLL);
  *(_QWORD *)v7 = v7;
  *(_QWORD *)(v7 + 8) = v7;
  *(_QWORD *)(v7 + 16) = v7;
  *(_WORD *)(v7 + 24) = 257;
  *(_QWORD *)(a1 + 240) = v7;
  sub_18002CEA0((_DWORD *)(a1 + 256));
  v8 = a3[1];
  if ( v8 )
    sub_180010EC8(v8);
  return a1;
}
