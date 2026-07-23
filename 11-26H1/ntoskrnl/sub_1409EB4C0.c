/*
 * XREFs of sub_1409EB4C0 @ 0x1409EB4C0
 * Callers:
 *     sub_1409EB2D4 @ 0x1409EB2D4 (sub_1409EB2D4.c)
 *     sub_1409EB368 @ 0x1409EB368 (sub_1409EB368.c)
 *     sub_1409EBD68 @ 0x1409EBD68 (sub_1409EBD68.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall sub_1409EB4C0(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, int *a5)
{
  int v5; // esi
  int v6; // edi
  int v8; // ebx
  int v11; // r14d
  __int64 v12; // rax
  int v13; // ecx
  __int64 result; // rax

  v5 = 0;
  v6 = *(_DWORD *)(a1 + 4) - 1;
  v8 = 0;
  v11 = -1073741198;
  while ( v5 <= v6 )
  {
    v8 = (v6 + v5) / 2;
    v12 = guard_dispatch_icall_no_overrides(*(_QWORD *)((unsigned int)(*(_DWORD *)a1 * v8) + *(_QWORD *)(a1 + 16)), a2);
    if ( !v12 )
    {
      v11 = 0;
      break;
    }
    v13 = v8 - 1;
    if ( v12 >= 0 )
      v13 = v6;
    v6 = v13;
    if ( v12 >= 0 )
      v5 = ++v8;
  }
  if ( a5 )
    *a5 = v8;
  result = (unsigned int)v11;
  if ( a4 && v11 >= 0 )
    *a4 = *(_QWORD *)((unsigned int)(*(_DWORD *)a1 * v8) + *(_QWORD *)(a1 + 16));
  return result;
}
