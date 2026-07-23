/*
 * XREFs of ?KiFlushScbReferences@@YAXPEAU_KPRCB@@PEAU_KSCB@@@Z @ 0x1405FB940
 * Callers:
 *     KeRemoveSchedulingGroup @ 0x1404BFB64 (KeRemoveSchedulingGroup.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     KiInsertQueueDpc @ 0x140307FF0 (KiInsertQueueDpc.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

void __fastcall KiFlushScbReferences(struct _KPRCB *a1, struct _KSCB *a2)
{
  __int16 v4; // ax
  unsigned int Number; // ecx
  __int128 Object; // [rsp+38h] [rbp-9h] BYREF
  char *v7; // [rsp+48h] [rbp+7h]
  _WORD BugCheckParameter2[8]; // [rsp+58h] [rbp+17h] BYREF
  __int64 v9; // [rsp+68h] [rbp+27h]
  void (*v10)(struct _KDPC *, void *, void *, void *); // [rsp+70h] [rbp+2Fh]
  __int128 *p_Object; // [rsp+78h] [rbp+37h]
  __int64 v12; // [rsp+90h] [rbp+4Fh]
  int v13; // [rsp+A8h] [rbp+67h] BYREF

  memset_0(BugCheckParameter2, 0, 0x40uLL);
  v7 = 0LL;
  v13 = 0;
  Object = 0LL;
  while ( _interlockedbittestandset64((volatile signed __int32 *)&a1->PrcbLock, 0LL) )
  {
    do
      KeYieldProcessorEx(&v13);
    while ( a1->PrcbLock );
  }
  v4 = a2->PrcbLockFlags & 0x100;
  _InterlockedAnd64((volatile signed __int64 *)&a1->PrcbLock, 0LL);
  if ( v4 )
  {
    Number = a1->Number;
    v7 = (char *)&Object + 8;
    *((_QWORD *)&Object + 1) = (char *)&Object + 8;
    v10 = KiFlushScbReferencesDpc;
    p_Object = &Object;
    v12 = 0LL;
    BYTE2(Object) = 6;
    DWORD1(Object) = 0;
    BugCheckParameter2[0] = 787;
    v9 = 0LL;
    BugCheckParameter2[1] = Number + 2048;
    KiInsertQueueDpc((ULONG_PTR)BugCheckParameter2, 0LL, 0LL, 0LL, 0);
    KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
  }
}
