/*
 * XREFs of ?vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@HK@Z @ 0x1400C3E98
 * Callers:
 *     ?DoFontManagement@@YAKAEAVXDCOBJ@@KKPEAXK1@Z @ 0x14016DFD0 (-DoFontManagement@@YAKAEAVXDCOBJ@@KKPEAXK1@Z.c)
 *     NtGdiGetLinkedUFIs @ 0x14027D690 (NtGdiGetLinkedUFIs.c)
 *     NtGdiGetWidthTable @ 0x140281520 (NtGdiGetWidthTable.c)
 *     NtGdiQueryFontAssocInfo @ 0x140281810 (NtGdiQueryFontAssocInfo.c)
 *     ?GrepGetStringBitmapW@@YAIAEAVDCOBJ@@PEAGIPEAUSTRINGBITMAP@@I@Z @ 0x14028A034 (-GrepGetStringBitmapW@@YAIAEAVDCOBJ@@PEAGIPEAUSTRINGBITMAP@@I@Z.c)
 *     NtGdiGetETM @ 0x1403336E0 (NtGdiGetETM.c)
 * Callees:
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1400C4834 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ??$GrepAcquireLockValidate@$04@@YAXXZ @ 0x1400C5C60 (--$GrepAcquireLockValidate@$04@@YAXXZ.c)
 */

void __fastcall RFONTOBJ::vInit(RFONTOBJ *this, struct XDCOBJ *a2, int a3, unsigned int a4)
{
  HSEMAPHORE v5; // rbx

  if ( (unsigned int)RFONTOBJ::bInit(this, a2, a3, a4) )
  {
    v5 = *(HSEMAPHORE *)(*(_QWORD *)this + 504LL);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"RFONT_Cache", v5, 0LL);
    GreAcquireSemaphoreInternal(v5);
    GrepAcquireLockValidate<5>();
  }
}
