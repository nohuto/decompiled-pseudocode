/*
 * XREFs of ?bLoadFontFileTable@PFFMEMOBJ@@QEAAHPEBGKPEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z @ 0x1401020EC
 * Callers:
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH@Z @ 0x140102C2C (-bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH.c)
 *     ?hLoadMemFonts@PUBLIC_PFTOBJ@@QEAAPEAXPEAPEAUFONTFILEVIEW@@PEAUtagDESIGNVECTOR@@KPEAKPEAH@Z @ 0x14021C4D0 (-hLoadMemFonts@PUBLIC_PFTOBJ@@QEAAPEAXPEAPEAUFONTFILEVIEW@@PEAUtagDESIGNVECTOR@@KPEAKPEAH@Z.c)
 *     ?bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAUFONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PEAU_UNIVERSAL_FONT_ID@@PEAH@Z @ 0x1403273E8 (-bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAUFONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PEA.c)
 * Callees:
 *     ?bAddEntry@PFFMEMOBJ@@QEAAHKPEAU_FD_GLYPHSET@@_KPEAU_IFIMETRICS@@1PEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z @ 0x140102470 (-bAddEntry@PFFMEMOBJ@@QEAAHKPEAU_FD_GLYPHSET@@_KPEAU_IFIMETRICS@@1PEAU_UNIVERSAL_FONT_ID@@PEAU_E.c)
 *     ?bAllocPFEData@PFFMEMOBJ@@AEAAHK@Z @ 0x1401F8F14 (-bAllocPFEData@PFFMEMOBJ@@AEAAHK@Z.c)
 *     ?FindDefaultLinkedFontEntry@@YAHPEBG0@Z @ 0x140200738 (-FindDefaultLinkedFontEntry@@YAHPEBG0@Z.c)
 *     ?Free@PDEVOBJ@@QEAAXPEAX_K@Z @ 0x14020A220 (-Free@PDEVOBJ@@QEAAXPEAX_K@Z.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PFFMEMOBJ::bLoadFontFileTable(
        PFFMEMOBJ *this,
        const unsigned __int16 *a2,
        unsigned int a3,
        struct _UNIVERSAL_FONT_ID *a4,
        struct _EUDCLOAD *a5)
{
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 SessionState; // rax
  struct _EUDCLOAD *v13; // rbp
  unsigned int v14; // edi
  __int64 v15; // r12
  __int64 v16; // rcx
  __int64 v17; // rax
  struct _IFIMETRICS *v18; // rsi
  _QWORD v20[9]; // [rsp+40h] [rbp-48h] BYREF
  unsigned __int64 v21; // [rsp+90h] [rbp+8h] BYREF
  struct _UNIVERSAL_FONT_ID *v22; // [rsp+A8h] [rbp+20h]

  v22 = a4;
  v8 = *(_QWORD *)(*(_QWORD *)this + 96LL);
  v20[0] = v8;
  if ( (unsigned int)PFFMEMOBJ::bAllocPFEData(this, a3) )
  {
    SessionState = W32GetSessionState(v10, v9, v11);
    v13 = a5;
    v14 = 1;
    v15 = *(_QWORD *)(SessionState + 96);
    while ( 1 )
    {
      if ( v14 > a3 )
        return 1LL;
      v16 = *(_QWORD *)this;
      v21 = 0LL;
      v17 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, unsigned __int64 *))(v8 + 2888))(
              *(_QWORD *)(v16 + 104),
              *(_QWORD *)(v16 + 88),
              v14,
              &v21);
      v18 = (struct _IFIMETRICS *)v17;
      if ( !v17 )
        return 0LL;
      if ( *(_DWORD *)(v15 + 19556)
        && !v13
        && !(unsigned int)FindDefaultLinkedFontEntry((wchar_t *)(v17 + *(int *)(v17 + 8)), a2)
        || !PFFMEMOBJ::bAddEntry(this, v14, 0LL, 0LL, v18, v21, v22, v13) )
      {
        break;
      }
      ++v14;
    }
    if ( *(_QWORD *)(v8 + 3016) )
      PDEVOBJ::Free((PDEVOBJ *)v20, v18, v21);
  }
  return 0LL;
}
