/*
 * XREFs of PnpSetInterruptInformation @ 0x1407A8178
 * Callers:
 *     PnpSetDevicePropertyData @ 0x140A18AE4 (PnpSetDevicePropertyData.c)
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnpSetInterruptInformation(__int64 a1, const void *a2, unsigned int a3)
{
  size_t v3; // rdi
  _DWORD *Pool2; // rax
  _DWORD *v7; // rbx
  __int64 v9; // rax
  void *v10; // rcx

  v3 = a3;
  Pool2 = (_DWORD *)ExAllocatePool2(0x100uLL);
  v7 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  *Pool2 = v3;
  memmove(Pool2 + 1, a2, v3);
  v9 = *(_QWORD *)(a1 + 312);
  v10 = *(void **)(v9 + 88);
  *(_QWORD *)(v9 + 88) = v7;
  if ( v10 )
    ExFreePoolWithTag(v10, 0x47706E50u);
  return 0LL;
}
