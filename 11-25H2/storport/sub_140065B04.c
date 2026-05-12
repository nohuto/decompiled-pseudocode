/*
 * XREFs of sub_140065B04 @ 0x140065B04
 * Callers:
 *     sub_1401B2CE0 @ 0x1401B2CE0 (sub_1401B2CE0.c)
 * Callees:
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

__int64 __fastcall sub_140065B04(_DWORD *a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // rax
  _DWORD *v5; // rdi
  unsigned int v6; // ebx

  v3 = *(_QWORD *)(a2 + 184);
  v5 = *(_DWORD **)(a2 + 24);
  v6 = 0;
  *a3 = 20LL;
  if ( *(_DWORD *)(v3 + 8) >= 0x14u )
  {
    memset_0(v5, 0, *(unsigned int *)(v3 + 8));
    *v5 = 1;
    v5[1] = 20;
    v5[3] = a1[1391];
    v5[2] = a1[1390];
    v5[4] = a1[1398];
  }
  else
  {
    return (unsigned int)-1073741789;
  }
  return v6;
}
