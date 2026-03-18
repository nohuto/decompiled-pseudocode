/*
 * XREFs of ?vSetUniqueness@PFFOBJ@@QEAAXXZ @ 0x14010F6AC
 * Callers:
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH@Z @ 0x1400B663C (-bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH.c)
 *     ?hLoadMemFonts@PUBLIC_PFTOBJ@@QEAAPEAXPEAPEAUFONTFILEVIEW@@PEAUtagDESIGNVECTOR@@KPEAKPEAH@Z @ 0x14010DAC8 (-hLoadMemFonts@PUBLIC_PFTOBJ@@QEAAPEAXPEAPEAUFONTFILEVIEW@@PEAUtagDESIGNVECTOR@@KPEAKPEAH@Z.c)
 * Callees:
 *     ?iHash@@YAIPEBGI@Z @ 0x14010F8A8 (-iHash@@YAIPEBGI@Z.c)
 */

void __fastcall PFFOBJ::vSetUniqueness(PFFOBJ *this, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  unsigned int v5; // eax
  __int64 v6; // r10

  v4 = *(_QWORD *)(W32GetSessionState(this, a2, a3) + 96);
  *(_DWORD *)(*(_QWORD *)this + 148LL) = ++*(_DWORD *)(v4 + 20400);
  v5 = iHash(
         *(const unsigned __int16 **)(*(_QWORD *)this + 24LL),
         *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 136LL) + 24LL));
  *(_DWORD *)(v6 + 148) = *(_DWORD *)(v6 + 148) & 0xFFFFFF | (v5 << 24);
}
