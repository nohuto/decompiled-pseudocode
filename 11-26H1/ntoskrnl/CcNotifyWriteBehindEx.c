/*
 * XREFs of CcNotifyWriteBehindEx @ 0x1403E364C
 * Callers:
 *     MiFlushAllPagesWorker @ 0x1403E3C5C (MiFlushAllPagesWorker.c)
 *     MiObtainFreePages @ 0x140533DBC (MiObtainFreePages.c)
 * Callees:
 *     CcNotifyWriteBehindInternal @ 0x1403E39CC (CcNotifyWriteBehindInternal.c)
 */

__int64 __fastcall CcNotifyWriteBehindEx(unsigned int a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rcx

  result = a1;
  v3 = *(_QWORD *)(a2 + 8);
  if ( v3 )
    return CcNotifyWriteBehindInternal(v3, (unsigned int)result);
  return result;
}
