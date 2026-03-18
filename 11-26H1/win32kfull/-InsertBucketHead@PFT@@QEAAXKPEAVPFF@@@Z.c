/*
 * XREFs of ?InsertBucketHead@PFT@@QEAAXKPEAVPFF@@@Z @ 0x140326D30
 * Callers:
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH@Z @ 0x140102C2C (-bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH.c)
 *     ?hLoadMemFonts@PUBLIC_PFTOBJ@@QEAAPEAXPEAPEAUFONTFILEVIEW@@PEAUtagDESIGNVECTOR@@KPEAKPEAH@Z @ 0x14021C4D0 (-hLoadMemFonts@PUBLIC_PFTOBJ@@QEAAPEAXPEAPEAUFONTFILEVIEW@@PEAUtagDESIGNVECTOR@@KPEAKPEAH@Z.c)
 *     ?bLoadFonts@DEVICE_PFTOBJ@@QEAAHPEAUHDEV__@@I@Z @ 0x140327194 (-bLoadFonts@DEVICE_PFTOBJ@@QEAAHPEAUHDEV__@@I@Z.c)
 *     ?bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAUFONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PEAU_UNIVERSAL_FONT_ID@@PEAH@Z @ 0x1403273E8 (-bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAUFONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PEA.c)
 * Callees:
 *     <none>
 */

void __fastcall PFT::InsertBucketHead(PFT *this, unsigned int a2, struct PFF *a3)
{
  __int64 v3; // r9
  __int64 v4; // rdx
  __int64 v5; // rax

  v3 = a2;
  v4 = *((_QWORD *)this + a2 + 5);
  if ( v4 )
  {
    v5 = *(_QWORD *)(v4 + 16);
    *((_QWORD *)a3 + 2) = v5;
    *((_QWORD *)a3 + 1) = v4;
    *(_QWORD *)(v4 + 16) = a3;
    if ( v5 )
      *(_QWORD *)(v5 + 8) = a3;
  }
  *((_QWORD *)this + v3 + 5) = a3;
}
