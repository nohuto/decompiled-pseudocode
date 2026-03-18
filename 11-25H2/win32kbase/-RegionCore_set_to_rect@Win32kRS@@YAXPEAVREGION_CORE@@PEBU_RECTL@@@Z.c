/*
 * XREFs of ?RegionCore_set_to_rect@Win32kRS@@YAXPEAVREGION_CORE@@PEBU_RECTL@@@Z @ 0x1400130C8
 * Callers:
 *     GreSetRectRgn @ 0x140014720 (GreSetRectRgn.c)
 *     SetOrCreateRectRgnIndirectPublic @ 0x140014B10 (SetOrCreateRectRgnIndirectPublic.c)
 *     SetRectRgnIndirect @ 0x140014F50 (SetRectRgnIndirect.c)
 *     GreCreateRectRgnIndirect @ 0x140015720 (GreCreateRectRgnIndirect.c)
 *     ?InitializeFromRect@CRegion@@IEAAJAEBUtagRECT@@@Z @ 0x14001FD84 (-InitializeFromRect@CRegion@@IEAAJAEBUtagRECT@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

void __fastcall Win32kRS::RegionCore_set_to_rect(Win32kRS *this, struct REGION_CORE *a2, const struct _RECTL *a3)
{
  struct REGION_CORE *v3; // rdi
  char *v6; // rbx
  __int64 v7; // rdi

  v3 = qword_1402A10B0;
  v6 = (char *)qword_1402A10B0 + 8;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v6, 2LL);
  v7 = *(_QWORD *)v3;
  (*(void (__fastcall **)(Win32kRS *, struct REGION_CORE *))(v7 + 176))(this, a2);
  if ( !(*(unsigned int (__fastcall **)(Win32kRS *))(v7 + 216))(this) )
    DbgkWerCaptureLiveKernelDump(L"GreLKD", 400LL, 64LL, this, 0LL, 0LL, 0LL, 0LL, 0);
  ExReleasePushLockSharedEx(v6, 2LL);
  KeLeaveCriticalRegion();
}
