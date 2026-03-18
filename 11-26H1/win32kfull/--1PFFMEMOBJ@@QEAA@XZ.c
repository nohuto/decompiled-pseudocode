/*
 * XREFs of ??1PFFMEMOBJ@@QEAA@XZ @ 0x140213954
 * Callers:
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH@Z @ 0x140102C2C (-bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH.c)
 *     ?hLoadMemFonts@PUBLIC_PFTOBJ@@QEAAPEAXPEAPEAUFONTFILEVIEW@@PEAUtagDESIGNVECTOR@@KPEAKPEAH@Z @ 0x14021C4D0 (-hLoadMemFonts@PUBLIC_PFTOBJ@@QEAAPEAXPEAPEAUFONTFILEVIEW@@PEAUtagDESIGNVECTOR@@KPEAKPEAH@Z.c)
 *     ?bLoadFonts@DEVICE_PFTOBJ@@QEAAHPEAUHDEV__@@I@Z @ 0x140327194 (-bLoadFonts@DEVICE_PFTOBJ@@QEAAHPEAUHDEV__@@I@Z.c)
 *     ?bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAUFONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PEAU_UNIVERSAL_FONT_ID@@PEAH@Z @ 0x1403273E8 (-bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAUFONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PEA.c)
 * Callees:
 *     ?bRemovePvtData@PFFOBJ@@QEAAHPEAUtagPvtData@@@Z @ 0x140106044 (-bRemovePvtData@PFFOBJ@@QEAAHPEAUtagPvtData@@@Z.c)
 *     ?vPFFC_DeleteAndCleanup@PFFOBJ@@QEAAXXZ @ 0x140329940 (-vPFFC_DeleteAndCleanup@PFFOBJ@@QEAAXXZ.c)
 */

void __fastcall PFFMEMOBJ::~PFFMEMOBJ(PFFMEMOBJ *this)
{
  __int64 v2; // rcx
  __int64 v3; // rdx

  if ( (*((_BYTE *)this + 16) & 2) == 0 )
  {
    v2 = *(_QWORD *)this;
    if ( v2 )
    {
      PopThreadGuardedObject(v2 + 168);
      if ( *((_DWORD *)this + 2) )
      {
        v3 = *(_QWORD *)(*(_QWORD *)this + 152LL);
        if ( (*((_DWORD *)this + 5) & 0x2C) != 0 )
          --*(_DWORD *)(v3 + 4);
        else
          --*(_DWORD *)v3;
        if ( !*(_DWORD *)(v3 + 4) && !*(_DWORD *)v3 )
          PFFOBJ::bRemovePvtData(this, (struct tagPvtData *)v3);
      }
      PFFOBJ::vPFFC_DeleteAndCleanup(this);
    }
  }
}
