/*
 * XREFs of ?NonDelegatingRelease@CUnknown@@UEAAKXZ @ 0x14001A8A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14001C6E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CUnknown::NonDelegatingRelease(CUnknown *this)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)&this->INonDelegatingUnknown, 0xFFFFFFFF) != 1 )
    return LODWORD(this->lpVtbl);
  ++LODWORD(this->lpVtbl);
  ((void (__fastcall *)(CUnknown *, __int64))this->__vftable[3].~CUnknown)(this, 1LL);
  return 0LL;
}
