/*
 * XREFs of ?Create@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@SAPEAV123@PEAU_LIST_ENTRY@@K@Z @ 0x1401C5D74
 * Callers:
 *     ?InitializeReferenceTracker@@YA_NXZ @ 0x140185BD4 (-InitializeReferenceTracker@@YA_NXZ.c)
 * Callees:
 *     ?Create@?$CBackTraceStoreExCommon@VCBackTraceStorageUnit@NSInstrumentation@@@NSInstrumentation@@SAPEAV12@XZ @ 0x1401B4B88 (-Create@-$CBackTraceStoreExCommon@VCBackTraceStorageUnit@NSInstrumentation@@@NSInstrumentation@@.c)
 *     ?Destroy@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@SAXPEAV123@@Z @ 0x1401FD364 (-Destroy@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@SAXPEAV123@@Z.c)
 *     ?Create@CPointerHashTable@NSInstrumentation@@SAPEAV12@_N@Z @ 0x1401FD55C (-Create@CPointerHashTable@NSInstrumentation@@SAPEAV12@_N@Z.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

struct _LIST_ENTRY *__fastcall NSInstrumentation::CReferenceTracker::CReferenceCountedType::Create(
        struct _LIST_ENTRY *a1,
        int a2)
{
  __int64 Pool2; // rax
  struct _LIST_ENTRY *v5; // rbx
  struct NSInstrumentation::CPointerHashTable *v6; // rax
  struct _LIST_ENTRY *v7; // rax
  struct _LIST_ENTRY *Flink; // rax

  Pool2 = ExAllocatePool2(258LL, 1584LL, 1632203605LL);
  v5 = (struct _LIST_ENTRY *)Pool2;
  if ( !Pool2 )
    return 0LL;
  *(_DWORD *)(Pool2 + 16) = a2;
  v6 = NSInstrumentation::CPointerHashTable::Create(0);
  v5[1].Blink = (struct _LIST_ENTRY *)v6;
  if ( !v6
    || (v7 = (struct _LIST_ENTRY *)NSInstrumentation::CBackTraceStoreExCommon<NSInstrumentation::CBackTraceStorageUnit>::Create(),
        (v5[2].Flink = v7) == 0LL) )
  {
    NSInstrumentation::CReferenceTracker::CReferenceCountedType::Destroy(v5);
    return 0LL;
  }
  Flink = a1->Flink;
  if ( a1->Flink->Blink != a1 )
    __fastfail(3u);
  v5->Flink = Flink;
  v5->Blink = a1;
  Flink->Blink = v5;
  a1->Flink = v5;
  LODWORD(v5[2].Blink) = 0;
  memset(&v5[3], 0, 0x600uLL);
  return v5;
}
