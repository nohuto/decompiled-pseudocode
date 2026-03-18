/*
 * XREFs of CmpHiveInitialize @ 0x140AB8AA0
 * Callers:
 *     CmpCreateEmptyHiveClone @ 0x14085C094 (CmpCreateEmptyHiveClone.c)
 *     CmpCreateHive @ 0x1408B5E6C (CmpCreateHive.c)
 * Callees:
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     CmpInitSecurityCache @ 0x140AB8B64 (CmpInitSecurityCache.c)
 *     HvHiveInitialize @ 0x140AB8BAC (HvHiveInitialize.c)
 */

__int64 (__fastcall *__fastcall CmpHiveInitialize(__int64 a1, _QWORD *a2))(PVOID P)
{
  __int64 v4; // r8
  __int64 (__fastcall *result)(PVOID); // rax

  memset_0((void *)a1, 0, 0x12E0uLL);
  HvHiveInitialize(a1);
  *(_DWORD *)(a1 + 4240) = 1;
  *(_QWORD *)(a1 + 4784) = 0LL;
  *(_QWORD *)(a1 + 1616) = a1 + 1608;
  *(_QWORD *)(a1 + 1608) = a1 + 1608;
  *(_QWORD *)(a1 + 1640) = 0LL;
  *(_DWORD *)(a1 + 2964) = 16;
  *(_QWORD *)(a1 + 1680) = 0LL;
  *(_QWORD *)(a1 + 1792) = 0LL;
  *(_QWORD *)(a1 + 4136) = a1 + 4128;
  *(_QWORD *)(a1 + 4128) = a1 + 4128;
  *(_QWORD *)(a1 + 1632) = a1 + 1624;
  *(_QWORD *)(a1 + 1624) = a1 + 1624;
  CmpInitSecurityCache(a1);
  *(_DWORD *)(a1 + 4808) = v4;
  result = CmpLateUnloadHiveWorker;
  *(_QWORD *)(a1 + 4816) = v4;
  a2[3] = a1;
  a2[2] = CmpLateUnloadHiveWorker;
  *a2 = v4;
  *(_QWORD *)(a1 + 4824) = a2;
  return result;
}
