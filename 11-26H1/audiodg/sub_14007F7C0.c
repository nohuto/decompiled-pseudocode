/*
 * XREFs of sub_14007F7C0 @ 0x14007F7C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140052748 @ 0x140052748 (sub_140052748.c)
 *     sub_1400766E4 @ 0x1400766E4 (sub_1400766E4.c)
 */

__int64 __fastcall sub_14007F7C0(__int64 a1, _DWORD *a2)
{
  _QWORD *v2; // rax
  __int64 v3; // rdx
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF
  _DWORD **v6; // [rsp+40h] [rbp+8h] BYREF
  _DWORD *v7; // [rsp+48h] [rbp+10h] BYREF

  v7 = a2;
  *a2 = 0;
  v6 = &v7;
  v2 = sub_140052748(v5, a1, (__int64)&v7);
  return sub_1400766E4((unsigned int *)(v3 + 48), *(_QWORD *)(v3 + 40), (__int64)v2, &v6);
}
