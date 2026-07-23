/*
 * XREFs of IvtDisableGlobalCommandRegisterField @ 0x1405A8808
 * Callers:
 *     IvtInitializeIommu @ 0x140BF5C90 (IvtInitializeIommu.c)
 * Callees:
 *     IvtWaitForGlobalCommandCompletion @ 0x1405AA648 (IvtWaitForGlobalCommandCompletion.c)
 */

__int64 __fastcall IvtDisableGlobalCommandRegisterField(__int64 a1, char a2)
{
  __int64 v2; // rdx
  signed __int32 v4[10]; // [rsp+0h] [rbp-28h] BYREF

  v2 = (unsigned int)(1 << a2);
  *(_DWORD *)(*(_QWORD *)(a1 + 8) + 24LL) = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 28LL) & ~(_DWORD)v2 & 0x96FFFFFF;
  _InterlockedOr(v4, 0);
  return IvtWaitForGlobalCommandCompletion(a1, v2, 0LL);
}
