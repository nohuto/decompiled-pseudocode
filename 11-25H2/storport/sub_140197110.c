/*
 * XREFs of sub_140197110 @ 0x140197110
 * Callers:
 *     sub_140196E08 @ 0x140196E08 (sub_140196E08.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_14003CC48 @ 0x14003CC48 (sub_14003CC48.c)
 */

__int64 __fastcall sub_140197110(__int64 a1, _QWORD *a2, _DWORD *a3)
{
  __int64 v3; // r9
  unsigned int v4; // ebx
  _DWORD *v8; // rax
  _DWORD *v9; // rdi

  v3 = *(_QWORD *)(a1 + 8);
  v4 = 0;
  *a2 = 0LL;
  *a3 = 0;
  v8 = (_DWORD *)sub_1400143E0(64LL, 120LL, 1145266514LL, v3);
  v9 = v8;
  if ( v8 )
  {
    *v8 = 1145917490;
    v8[1] = 8194;
    v8[2] = 120;
    v8[25] = *(_DWORD *)(a1 + 56);
    ObfReferenceObject(*(PVOID *)(a1 + 8));
    *((_QWORD *)v9 + 2) = a1;
    *a2 = v9;
    *a3 = 120;
    sub_14003CC48(17, 64LL, (_WORD *)0x60);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v4;
}
