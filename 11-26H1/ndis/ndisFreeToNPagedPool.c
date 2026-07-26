/*
 * XREFs of ndisFreeToNPagedPool @ 0x140050EB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ndisFreeToNPagedPool(_QWORD *Buffer, PLOOKASIDE_LIST_EX Lookaside)
{
  __int64 v2; // rdi
  _QWORD *v3; // rbx
  KIRQL v4; // al
  __int64 v5; // r9
  _QWORD *v6; // rdx

  v2 = *(Buffer - 4);
  v3 = Buffer - 4;
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v2 + 8));
  v5 = v3[1];
  if ( *(_QWORD **)(v5 + 8) != v3 + 1 || (v6 = (_QWORD *)v3[2], (_QWORD *)*v6 != v3 + 1) )
    __fastfail(3u);
  *v6 = v5;
  *(_QWORD *)(v5 + 8) = v6;
  KeReleaseSpinLock((PKSPIN_LOCK)(v2 + 8), v4);
  ExFreePoolWithTag(v3, 0);
}
