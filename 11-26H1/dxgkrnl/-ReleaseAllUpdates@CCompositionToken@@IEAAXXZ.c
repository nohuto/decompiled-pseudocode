/*
 * XREFs of ?ReleaseAllUpdates@CCompositionToken@@IEAAXXZ @ 0x14003A604
 * Callers:
 *     ?Discard@CCompositionToken@@UEAAXXZ @ 0x14003A5A0 (-Discard@CCompositionToken@@UEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

void __fastcall CCompositionToken::ReleaseAllUpdates(CCompositionToken *this)
{
  unsigned int *v1; // rbx
  unsigned int i; // esi
  __int64 v4; // rbp
  void (__fastcall ***v5)(_QWORD); // rcx
  void *v6; // rcx
  void *v7; // rcx

  v1 = (unsigned int *)((char *)this + 80);
  if ( *((_QWORD *)this + 9) )
  {
    for ( i = 0; i < *v1; ++i )
    {
      v4 = 32LL * i;
      v5 = *(void (__fastcall ****)(_QWORD))(*((_QWORD *)this + 9) + v4 + 24);
      if ( v5 )
        (**v5)(v5);
      v6 = *(void **)(*((_QWORD *)this + 9) + v4 + 8);
      if ( v6 )
        ObfDereferenceObject(v6);
    }
    v7 = (void *)*((_QWORD *)this + 9);
    if ( v7 )
      ExFreePoolWithTag(v7, 0);
    *((_QWORD *)this + 9) = 0LL;
  }
  *v1 = 0;
}
