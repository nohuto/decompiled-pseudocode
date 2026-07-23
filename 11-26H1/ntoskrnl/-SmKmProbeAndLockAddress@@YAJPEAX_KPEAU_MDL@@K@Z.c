/*
 * XREFs of ?SmKmProbeAndLockAddress@@YAJPEAX_KPEAU_MDL@@K@Z @ 0x14049C76C
 * Callers:
 *     SmKmStoreHelperCommandProcess @ 0x140384A48 (SmKmStoreHelperCommandProcess.c)
 * Callees:
 *     MmStoreProbeAndLockPages @ 0x1402D26F0 (MmStoreProbeAndLockPages.c)
 */

__int64 __fastcall SmKmProbeAndLockAddress(unsigned __int64 a1, __int64 a2, struct _MDL *a3, int a4)
{
  __int64 result; // rax

  a3->ByteCount = a2;
  a3->StartVa = (PVOID)(a1 & 0xFFFFFFFFFFFFF000uLL);
  a3->Next = 0LL;
  a3->MdlFlags = 0;
  a3->Size = 8 * (((a2 + (a1 & 0xFFF) + 4095) >> 12) + 6);
  a3->ByteOffset = a1 & 0xFFF;
  result = MmStoreProbeAndLockPages((ULONG_PTR)a3, a4);
  if ( (int)result >= 0 )
    return 0LL;
  if ( (_DWORD)result == -1073741801 )
    return 3221225901LL;
  return result;
}
