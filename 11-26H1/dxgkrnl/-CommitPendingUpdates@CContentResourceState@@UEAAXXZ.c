/*
 * XREFs of ?CommitPendingUpdates@CContentResourceState@@UEAAXXZ @ 0x140038880
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

void __fastcall CContentResourceState::CommitPendingUpdates(CContentResourceState *this)
{
  char v1; // al
  char v2; // al

  v1 = *((_BYTE *)this + 64);
  if ( (v1 & 2) != 0 )
    *((_BYTE *)this + 64) = v1 & 0xFC;
  v2 = *((_BYTE *)this + 32);
  if ( (v2 & 4) != 0 )
  {
    v2 &= 0xFAu;
    *((_BYTE *)this + 32) = v2;
  }
  if ( (v2 & 8) != 0 )
    (*(void (__fastcall **)(CContentResourceState *, __int64))(*(_QWORD *)this + 32LL))(this, 1LL);
}
