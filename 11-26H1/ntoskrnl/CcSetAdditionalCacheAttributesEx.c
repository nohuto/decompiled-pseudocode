/*
 * XREFs of CcSetAdditionalCacheAttributesEx @ 0x140486160
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1402FF400 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 *     CcSetAdditionalCacheAttributes @ 0x140486270 (CcSetAdditionalCacheAttributes.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

void __fastcall CcSetAdditionalCacheAttributesEx(struct _FILE_OBJECT *a1, int a2)
{
  PSECTION_OBJECT_POINTERS SectionObjectPointer; // rax
  _DWORD *SharedCacheMap; // rdi
  unsigned int v5; // edx
  unsigned int v6; // edx
  unsigned int v7; // eax
  int v8; // edx
  int v9; // eax
  int v10; // edx
  unsigned int v11; // eax
  int v12; // eax
  int v13; // edx
  unsigned int v14; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  SectionObjectPointer = a1->SectionObjectPointer;
  memset(&LockHandle, 0, sizeof(LockHandle));
  SharedCacheMap = SectionObjectPointer->SharedCacheMap;
  if ( !SharedCacheMap[1] )
    KeBugCheckEx(0x34u, 0xC6uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  CcSetAdditionalCacheAttributes(a1, (a2 & 2) != 0, (a2 & 4) != 0);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*((_QWORD *)SharedCacheMap + 67) + 768LL), &LockHandle);
  v5 = SharedCacheMap[38] | 0x800000;
  if ( (a2 & 1) == 0 )
    v5 = SharedCacheMap[38] & 0xFF7FFFFF;
  if ( (a2 & 8) != 0 )
  {
    v6 = v5 | 0x4000000;
  }
  else
  {
    if ( (v5 & 0x4000000) != 0 )
      v5 |= 0x20000u;
    v6 = v5 & 0xFBFFFFFF;
  }
  v7 = v6 & 0xEFFFFFFF;
  v8 = v6 | 0x10000000;
  if ( (a2 & 0x10) == 0 )
    v8 = v7;
  v9 = v8;
  v10 = v8 | 0x8000000;
  v11 = v9 & 0xF7FFFFFF;
  if ( (a2 & 0x20) == 0 )
    v10 = v11;
  v12 = v10;
  v13 = v10 | 0x1000;
  v14 = v12 & 0xFFFFEFFF;
  if ( (a2 & 0x10000000) == 0 )
    v13 = v14;
  SharedCacheMap[38] = v13;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
