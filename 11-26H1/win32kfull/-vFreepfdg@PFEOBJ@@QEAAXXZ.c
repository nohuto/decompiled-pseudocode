/*
 * XREFs of ?vFreepfdg@PFEOBJ@@QEAAXXZ @ 0x140101C04
 * Callers:
 *     ?bComputeQuickLookup@@YAHPEAU_QUICKLOOKUP@@PEAVPFE@@H@Z @ 0x1400FB1B4 (-bComputeQuickLookup@@YAHPEAU_QUICKLOOKUP@@PEAVPFE@@H@Z.c)
 *     ?vXlatGlyphArray@RFONTOBJ@@QEAAXPEBGIPEAKKH@Z @ 0x1400FBC50 (-vXlatGlyphArray@RFONTOBJ@@QEAAXPEBGIPEAKKH@Z.c)
 *     ?bComputeGISET@@YAHPEAU_IFIMETRICS@@PEAVPFE@@PEAPEAU_GISET@@@Z @ 0x140101934 (-bComputeGISET@@YAHPEAU_IFIMETRICS@@PEAVPFE@@PEAPEAU_GISET@@@Z.c)
 *     ?vDeleteRFONT@RFONTOBJ@@QEAAXPEAUHDEV__@@PEAVPFFOBJ@@H@Z @ 0x140105CD0 (-vDeleteRFONT@RFONTOBJ@@QEAAXPEAUHDEV__@@PEAVPFFOBJ@@H@Z.c)
 *     ?bRealizeFont@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAUHDEV__@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_XFORM@@QEAU_POINTL@@KKHHK@Z @ 0x14010651C (-bRealizeFont@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAUHDEV__@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_X.c)
 *     ?GrepGetFontUnicodeRanges@@YAKAEAVDCOBJ@@PEAUtagGLYPHSET@@@Z @ 0x140206DE8 (-GrepGetFontUnicodeRanges@@YAKAEAVDCOBJ@@PEAUtagGLYPHSET@@@Z.c)
 *     ?vDestroyFont@RFONTOBJ@@QEAAXH@Z @ 0x1402515C4 (-vDestroyFont@RFONTOBJ@@QEAAXH@Z.c)
 * Callees:
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140071590 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     UmfdTrueTypeFreeGlyphset @ 0x1400D2A18 (UmfdTrueTypeFreeGlyphset.c)
 *     ?UmfdIsUmfdTrueTypePff@@YA_NPEBVPFF@@@Z @ 0x140101D70 (-UmfdIsUmfdTrueTypePff@@YA_NPEBVPFF@@@Z.c)
 *     ??$GrepAcquireLockValidate@$0BM@@@YAXXZ @ 0x140102008 (--$GrepAcquireLockValidate@$0BM@@@YAXXZ.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

void __fastcall PFEOBJ::vFreepfdg(__int64 ***this, __int64 a2, __int64 a3)
{
  __int64 *v4; // rbp
  __int64 *v5; // r14
  __int64 *v6; // rsi
  HSEMAPHORE v7; // rbx
  int v8; // eax
  struct _GRETHREAD *v9; // rax
  bool v10; // zf
  __int64 v11; // rcx
  __int64 **v12; // rdx
  __int64 *v13; // rcx

  v4 = 0LL;
  v5 = 0LL;
  v6 = **this;
  v7 = *(HSEMAPHORE *)(*(_QWORD *)(W32GetSessionState(this, a2, a3) + 96) + 20368LL);
  GreAcquireSemaphoreInternal(v7);
  GrepAcquireLockValidate<28>();
  v8 = *((_DWORD *)*this + 34);
  if ( v8 )
  {
    *((_DWORD *)*this + 34) = v8 - 1;
    if ( !*((_DWORD *)*this + 34) )
    {
      if ( UmfdIsUmfdTrueTypePff((const struct PFF *)v6) )
      {
        UmfdTrueTypeFreeGlyphset(v6[11], *((_DWORD *)*this + 2), (char *)(*this)[2]);
        (*this)[2] = 0LL;
      }
      else
      {
        v11 = v6[12];
        if ( (*(_DWORD *)(v11 + 40) & 0x8000) != 0 && *(_QWORD *)(v11 + 3016) )
        {
          v12 = *this;
          if ( *((_BYTE *)(*this)[4] + 44) == 2 && (v13 = v12[2]) != 0LL && (*((_DWORD *)v13 + 1) & 0x10) != 0 )
          {
            Win32FreePool(v13);
          }
          else
          {
            v4 = v12[2];
            v5 = v12[3];
          }
          (*this)[2] = 0LL;
          if ( v4 )
            (*(void (__fastcall **)(__int64 *, __int64 *))(v6[12] + 3016))(v4, v5);
        }
      }
    }
  }
  if ( v7 )
  {
    EtwTraceGreLockReleaseSemaphore(L"GlyphSet", v7);
    v9 = GreGetCurrentThreadCrossSessionCheck();
    if ( v9 )
    {
      v10 = (*(_QWORD *)v9 & 0xFFFFFFFFEFFFFFFFuLL) == 0;
      *(_QWORD *)v9 &= ~0x10000000uLL;
      if ( v10 )
        GrepOnAllLocksReleased();
    }
    GreReleaseSemaphoreExclusiveInternal(v7);
  }
}
