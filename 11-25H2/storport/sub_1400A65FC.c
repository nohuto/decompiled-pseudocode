/*
 * XREFs of sub_1400A65FC @ 0x1400A65FC
 * Callers:
 *     sub_14000D2F0 @ 0x14000D2F0 (sub_14000D2F0.c)
 *     sub_14000D600 @ 0x14000D600 (sub_14000D600.c)
 *     sub_1400267A0 @ 0x1400267A0 (sub_1400267A0.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1400A65FC(__int64 a1)
{
  int v2; // ebx
  __int64 i; // rbx

  if ( *(_QWORD *)(a1 + 6072) )
  {
    v2 = *(_DWORD *)(a1 + 968);
    if ( v2 )
    {
      for ( i = (unsigned int)(v2 - 1); (_DWORD)i != -1; i = (unsigned int)(i - 1) )
        KeReleaseInStackQueuedSpinLock((PKLOCK_QUEUE_HANDLE)(*(_QWORD *)(a1 + 6072) + 24 * i));
    }
  }
}
