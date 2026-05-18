/*
 * XREFs of sub_18008B1B0 @ 0x18008B1B0
 * Callers:
 *     sub_18008A284 @ 0x18008A284 (sub_18008A284.c)
 * Callees:
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_18008B1B0(__int64 *a1)
{
  __int64 v2; // rax
  void (*v3)(void); // rax
  __int64 result; // rax

  *((_DWORD *)a1 + 468) = *((_DWORD *)a1 + 459);
  *((_DWORD *)a1 + 469) = *((_DWORD *)a1 + 460);
  *((_DWORD *)a1 + 461) = 1065353216;
  *((_DWORD *)a1 + 462) = 1065353216;
  *(__int64 *)((char *)a1 + 1812) = 1065353216LL;
  v2 = *a1;
  *((_DWORD *)a1 + 475) = 0;
  *((_DWORD *)a1 + 455) = -1078806334;
  *((_DWORD *)a1 + 456) = 1068677314;
  v3 = *(void (**)(void))(v2 + 248);
  *((_DWORD *)a1 + 467) = 2;
  *((_DWORD *)a1 + 473) = 0;
  *((_WORD *)a1 + 948) = 256;
  v3();
  result = (*(__int64 (__fastcall **)(__int64 *))(*a1 + 256))(a1);
  *((_BYTE *)a1 + 1864) = 0;
  return result;
}
