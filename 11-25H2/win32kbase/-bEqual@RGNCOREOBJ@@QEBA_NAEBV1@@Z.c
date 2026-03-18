/*
 * XREFs of ?bEqual@RGNCOREOBJ@@QEBA_NAEBV1@@Z @ 0x14009617C
 * Callers:
 *     CddEngEqualRgn @ 0x1401D28C0 (CddEngEqualRgn.c)
 * Callees:
 *     ?get_pScan@REGION_CORE@@IEAAPEAVSCAN@@XZ @ 0x1400113C0 (-get_pScan@REGION_CORE@@IEAAPEAVSCAN@@XZ.c)
 *     ?get_pscnTail@REGION_CORE@@IEAAPEAVSCAN@@XZ @ 0x140096A80 (-get_pscnTail@REGION_CORE@@IEAAPEAVSCAN@@XZ.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 *     memcmp @ 0x140243810 (memcmp.c)
 */

char __fastcall RGNCOREOBJ::bEqual(REGION_CORE **this, const struct RGNCOREOBJ *a2)
{
  struct REGION_CORE *v2; // rsi
  char v3; // bp
  __int64 v4; // r14
  REGION_CORE *v5; // rdi
  unsigned int pScan; // esi
  struct REGION_CORE *v9; // rdx
  struct SCAN *v10; // rdi
  struct REGION_CORE *v11; // rdx
  struct SCAN *v12; // rbx
  unsigned int pscnTail; // eax
  int v15; // edi

  v2 = qword_1402A10B0;
  v3 = 0;
  v4 = *(_QWORD *)a2;
  v5 = *this;
  if ( qword_1402A10B0 )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx((char *)v2 + 8, 2LL);
    v15 = (*(__int64 (__fastcall **)(REGION_CORE *, __int64))(*(_QWORD *)v2 + 128LL))(v5, v4);
    ExReleasePushLockSharedEx((char *)v2 + 8, 2LL);
    KeLeaveCriticalRegion();
    return v15 != 0;
  }
  else
  {
    if ( *((_DWORD *)v5 + 6) == *(_DWORD *)(v4 + 24) )
    {
      pScan = (unsigned int)REGION_CORE::get_pScan(*this, a2);
      v10 = REGION_CORE::get_pScan(*(REGION_CORE **)a2, v9);
      v12 = REGION_CORE::get_pScan(*this, v11);
      pscnTail = (unsigned int)REGION_CORE::get_pscnTail(*this);
      return memcmp(v12, v10, pscnTail - pScan) == 0;
    }
    return v3;
  }
}
