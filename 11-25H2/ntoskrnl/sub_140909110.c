/*
 * XREFs of sub_140909110 @ 0x140909110
 * Callers:
 *     sub_1408E0EF8 @ 0x1408E0EF8 (sub_1408E0EF8.c)
 *     sub_140905930 @ 0x140905930 (sub_140905930.c)
 *     sub_140906F0C @ 0x140906F0C (sub_140906F0C.c)
 *     sub_140907850 @ 0x140907850 (sub_140907850.c)
 *     sub_140908DF4 @ 0x140908DF4 (sub_140908DF4.c)
 *     sub_1409E0F38 @ 0x1409E0F38 (sub_1409E0F38.c)
 *     sub_140A3E0E8 @ 0x140A3E0E8 (sub_140A3E0E8.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     sub_140909220 @ 0x140909220 (sub_140909220.c)
 *     sub_140909250 @ 0x140909250 (sub_140909250.c)
 *     sub_140909280 @ 0x140909280 (sub_140909280.c)
 */

__int64 __fastcall sub_140909110(__int64 a1, __int64 a2, unsigned int a3, _QWORD *a4, int *a5)
{
  int v5; // ebp
  int v6; // edi
  int v8; // ebx
  int v12; // r14d
  __int64 (__fastcall *v13)(_QWORD, _QWORD, _QWORD); // r9
  __int64 v14; // rcx
  __int64 v15; // rax
  bool v16; // sf
  int v17; // eax
  __int64 result; // rax

  v5 = 0;
  v6 = *(_DWORD *)(a1 + 4) - 1;
  v8 = 0;
  v12 = -1073741198;
  while ( v5 <= v6 )
  {
    v13 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(a1 + 32);
    v8 = (v6 + v5) / 2;
    v14 = *(_QWORD *)((unsigned int)(*(_DWORD *)a1 * v8) + *(_QWORD *)(a1 + 16));
    if ( v13 == sub_140909220 )
    {
      v15 = sub_140909220(v14, a2, a3);
    }
    else if ( v13 == sub_140909250 )
    {
      v15 = sub_140909250(v14, a2, a3);
    }
    else if ( v13 == sub_140909280 )
    {
      v15 = sub_140909280(v14, a2, a3);
    }
    else
    {
      v15 = guard_dispatch_icall_no_overrides(v14);
    }
    v16 = v15 < 0;
    if ( !v15 )
    {
      v12 = 0;
      break;
    }
    v17 = v8 - 1;
    if ( !v16 )
      v17 = v6;
    v6 = v17;
    if ( !v16 )
      v5 = ++v8;
  }
  if ( a5 )
    *a5 = v8;
  result = (unsigned int)v12;
  if ( a4 && v12 >= 0 )
    *a4 = *(_QWORD *)((unsigned int)(*(_DWORD *)a1 * v8) + *(_QWORD *)(a1 + 16));
  return result;
}
