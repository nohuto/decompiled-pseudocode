/*
 * XREFs of ?Delete@CCompositionToken@@UEAAJPEAX@Z @ 0x14004F120
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CCompositionToken::Delete(CCompositionToken *this, void *a2)
{
  (*(void (__fastcall **)(char *, void *))(*((_QWORD *)this + 1) + 56LL))((char *)this + 8, a2);
  return 0LL;
}
