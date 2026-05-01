/*
 * XREFs of ??_GCAutoAppTransitionRequest@@UEAAPEAXI@Z @ 0x1804F4050
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CAutoAppTransitionRequest@@UEAA@XZ @ 0x1804F3C74 (--1CAutoAppTransitionRequest@@UEAA@XZ.c)
 */

CAutoAppTransitionRequest *__fastcall CAutoAppTransitionRequest::`scalar deleting destructor'(
        CAutoAppTransitionRequest *this,
        char a2)
{
  CAutoAppTransitionRequest::~CAutoAppTransitionRequest(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x18);
  return this;
}
