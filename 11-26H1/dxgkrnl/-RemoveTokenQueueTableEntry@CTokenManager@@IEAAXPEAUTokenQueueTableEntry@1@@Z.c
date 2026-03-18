/*
 * XREFs of ?RemoveTokenQueueTableEntry@CTokenManager@@IEAAXPEAUTokenQueueTableEntry@1@@Z @ 0x140023EC4
 * Callers:
 *     ?DeleteAllTokenQueues@CTokenManager@@IEAAXXZ @ 0x140061DC8 (-DeleteAllTokenQueues@CTokenManager@@IEAAXXZ.c)
 * Callees:
 *     ??_GCTokenQueue@@AEAAPEAXI@Z @ 0x140023F0C (--_GCTokenQueue@@AEAAPEAXI@Z.c)
 */

void __fastcall CTokenManager::RemoveTokenQueueTableEntry(
        CTokenManager *this,
        struct CTokenManager::TokenQueueTableEntry *a2)
{
  CTokenQueue *v4; // rcx

  v4 = (CTokenQueue *)*((_QWORD *)a2 + 1);
  if ( v4 )
    CTokenQueue::`scalar deleting destructor'(v4, (unsigned int)a2);
  RtlDeleteElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 192), a2);
}
