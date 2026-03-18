/*
 * XREFs of Bulk_EP_ProcessExpectedEventTRBs @ 0x14001F810
 * Callers:
 *     <none>
 * Callees:
 *     ESM_AddEsmEvent @ 0x14001F8C0 (ESM_AddEsmEvent.c)
 *     ESM_AddEvent @ 0x140020E80 (ESM_AddEvent.c)
 */

void __fastcall Bulk_EP_ProcessExpectedEventTRBs(__int64 a1)
{
  KIRQL v2; // al
  bool v3; // zf
  char v4; // di
  __int64 v5; // r8
  __int64 v6; // rcx

  v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  v3 = *(_DWORD *)(a1 + 360) == 0;
  *(_BYTE *)(a1 + 104) = v2;
  if ( v3 )
  {
    v4 = 1;
  }
  else
  {
    *(_DWORD *)(a1 + 332) |= 2u;
    v4 = 0;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v2);
  if ( v4 )
  {
    v5 = *(_QWORD *)(a1 + 56);
    if ( *(_BYTE *)(v5 + 37) )
    {
      v6 = *(_QWORD *)(v5 + 144);
      if ( _InterlockedIncrement((volatile signed __int32 *)(v6 + 20)) == *(_DWORD *)(v6 + 8) )
        ESM_AddEvent((PVOID)(v5 + 304));
    }
    else
    {
      ESM_AddEsmEvent(*(_QWORD *)(a1 + 56), 150LL);
    }
  }
}
