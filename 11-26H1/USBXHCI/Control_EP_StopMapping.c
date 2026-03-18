/*
 * XREFs of Control_EP_StopMapping @ 0x140033870
 * Callers:
 *     <none>
 * Callees:
 *     ESM_AddEsmEvent @ 0x14001F8C0 (ESM_AddEsmEvent.c)
 */

void __fastcall Control_EP_StopMapping(__int64 a1)
{
  KIRQL v2; // al
  int v3; // ebx
  __int64 v4; // rcx
  __int64 v5; // rdx

  v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  v3 = *(_DWORD *)(a1 + 108);
  *(_BYTE *)(a1 + 104) = v2;
  *(_DWORD *)(a1 + 108) = v3 == 3;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v2);
  if ( v3 != 3 )
  {
    v4 = *(_QWORD *)(a1 + 56);
    if ( !*(_BYTE *)(v4 + 37)
      || (v5 = *(_QWORD *)(v4 + 144), _InterlockedIncrement((volatile signed __int32 *)(v5 + 20)) == *(_DWORD *)(v5 + 8)) )
    {
      ESM_AddEsmEvent(v4);
    }
  }
}
