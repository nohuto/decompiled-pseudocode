/*
 * XREFs of ndisFreeNblToNPagedPool @ 0x140051E60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ndisFreeNblToNPagedPool(_QWORD *Buffer, PLOOKASIDE_LIST_EX Lookaside)
{
  void *v3; // rcx
  __int64 v4; // rdi
  KIRQL v5; // al
  __int64 v6; // r9
  char *v7; // r8
  char **v8; // rdx

  v3 = (void *)Buffer[46];
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  v4 = *(Buffer - 4);
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 8));
  v6 = *(Buffer - 3);
  v7 = (char *)(Buffer - 3);
  if ( *(_QWORD **)(v6 + 8) != Buffer - 3 || (v8 = (char **)*((_QWORD *)v7 + 1), *v8 != v7) )
    __fastfail(3u);
  *v8 = (char *)v6;
  *(_QWORD *)(v6 + 8) = v8;
  KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 8), v5);
  ExFreePoolWithTag(Buffer - 4, 0);
}
