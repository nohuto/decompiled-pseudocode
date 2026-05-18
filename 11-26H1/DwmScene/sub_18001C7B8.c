/*
 * XREFs of sub_18001C7B8 @ 0x18001C7B8
 * Callers:
 *     sub_18001E5F8 @ 0x18001E5F8 (sub_18001E5F8.c)
 *     sub_18006A8B8 @ 0x18006A8B8 (sub_18006A8B8.c)
 * Callees:
 *     sub_1800148EC @ 0x1800148EC (sub_1800148EC.c)
 *     sub_1800181BC @ 0x1800181BC (sub_1800181BC.c)
 *     sub_18001DCFC @ 0x18001DCFC (sub_18001DCFC.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18001C7B8(__int64 a1, int a2, __int64 a3, char a4)
{
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx

  *(_QWORD *)(a1 + 8) = sub_1800148EC(a3);
  *(_QWORD *)a1 = &Spectre::Utils::SpectreException::`vftable';
  sub_1800181BC((_QWORD *)(a1 + 16), v8);
  *(_DWORD *)(a1 + 48) = 0;
  *(_DWORD *)(a1 + 52) = a2;
  v9 = sub_1800148EC(a3);
  v10 = 4LL;
  if ( !a4 )
    v10 = 3LL;
  sub_18001DCFC(&unk_1801BD000, v10, "Throwing SpectreException with message '%s' and HRESULT error 0x%.8x", v9);
  return a1;
}
