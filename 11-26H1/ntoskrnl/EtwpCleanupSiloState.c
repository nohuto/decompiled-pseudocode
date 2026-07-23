/*
 * XREFs of EtwpCleanupSiloState @ 0x14082B430
 * Callers:
 *     PspInitializeServerSiloDeferred @ 0x1407F4BD0 (PspInitializeServerSiloDeferred.c)
 *     EtwCleanupSiloState @ 0x14082A79C (EtwCleanupSiloState.c)
 *     EtwpPreInitializeSiloState @ 0x14082D040 (EtwpPreInitializeSiloState.c)
 * Callees:
 *     ExFreeCacheAwareRundownProtection @ 0x1404B4AF0 (ExFreeCacheAwareRundownProtection.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpCleanupSiloState(PVOID P)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  __int64 i; // rdi
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v6; // rcx

  if ( P )
  {
    v2 = (void *)*((_QWORD *)P + 561);
    if ( v2 )
      ExFreePoolWithTag(v2, 0x61777445u);
    v3 = (void *)*((_QWORD *)P + 548);
    if ( v3 )
      ExFreePoolWithTag(v3, 0x50777445u);
    v4 = (void *)*((_QWORD *)P + 552);
    if ( v4 )
      ExFreePoolWithTag(v4, 0x61777445u);
    if ( *((_QWORD *)P + 88) )
    {
      for ( i = 0LL; (unsigned int)i < *((_DWORD *)P + 4); i = (unsigned int)(i + 1) )
      {
        v6 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(*((_QWORD *)P + 88) + 8 * i);
        if ( v6 )
          ExFreeCacheAwareRundownProtection(v6);
      }
      ExFreePoolWithTag(*((PVOID *)P + 88), 0x61777445u);
    }
    ExFreePoolWithTag(P, 0x61777445u);
  }
}
