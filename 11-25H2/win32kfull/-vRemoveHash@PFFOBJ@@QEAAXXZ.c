/*
 * XREFs of ?vRemoveHash@PFFOBJ@@QEAAXXZ @ 0x14010ED5C
 * Callers:
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH@Z @ 0x1400B663C (-bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH.c)
 *     ?bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z @ 0x140106A9C (-bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z.c)
 *     ?hLoadMemFonts@PUBLIC_PFTOBJ@@QEAAPEAXPEAPEAUFONTFILEVIEW@@PEAUtagDESIGNVECTOR@@KPEAKPEAH@Z @ 0x14010DAC8 (-hLoadMemFonts@PUBLIC_PFTOBJ@@QEAAPEAXPEAPEAUFONTFILEVIEW@@PEAUtagDESIGNVECTOR@@KPEAKPEAH@Z.c)
 *     ?bUnloadAllButPermanentFonts@PFTOBJ@@QEAAHH@Z @ 0x14010FBC0 (-bUnloadAllButPermanentFonts@PFTOBJ@@QEAAHH@Z.c)
 *     ?bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAUFONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PEAU_UNIVERSAL_FONT_ID@@PEAH@Z @ 0x140228C20 (-bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAUFONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PEA.c)
 *     ?bLoadFonts@DEVICE_PFTOBJ@@QEAAHPEAUHDEV__@@I@Z @ 0x14030F174 (-bLoadFonts@DEVICE_PFTOBJ@@QEAAHPEAUHDEV__@@I@Z.c)
 * Callees:
 *     ?bInPrivatePFT@PFFOBJ@@QEBAHXZ @ 0x140107828 (-bInPrivatePFT@PFFOBJ@@QEBAHXZ.c)
 *     ?UmfdIsUmfdTrueTypePff@@YA_NPEBVPFF@@@Z @ 0x140108C2C (-UmfdIsUmfdTrueTypePff@@YA_NPEBVPFF@@@Z.c)
 *     ?vDelete@FHOBJ@@QEAAXAEAVPFEOBJ@@@Z @ 0x14010EF44 (-vDelete@FHOBJ@@QEAAXAEAVPFEOBJ@@@Z.c)
 *     ?vFree@FHOBJ@@QEAAXXZ @ 0x14010FA60 (-vFree@FHOBJ@@QEAAXXZ.c)
 */

void __fastcall PFFOBJ::vRemoveHash(PFFOBJ *this, __int64 a2, __int64 a3)
{
  __int64 v4; // rdi
  Gre::Base *v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  _QWORD *v11; // rbx
  __int64 v12; // rcx
  _QWORD *v13; // r14
  _QWORD *v14; // r15
  __int64 v15; // r12
  __int64 v16; // rcx
  bool v17; // zf
  __int64 v18; // rcx
  __int64 v19; // rcx
  _QWORD v20[2]; // [rsp+20h] [rbp-30h] BYREF
  _QWORD v21[2]; // [rsp+30h] [rbp-20h] BYREF
  _QWORD *v22; // [rsp+40h] [rbp-10h] BYREF
  __int64 v23; // [rsp+48h] [rbp-8h]
  __int64 v24; // [rsp+80h] [rbp+30h] BYREF

  v4 = *(_QWORD *)(W32GetSessionState(this, a2, a3) + 96);
  v6 = *((_QWORD *)Gre::Base::Globals(v5) + 221);
  ++*(_DWORD *)(v6 + 1573016);
  v8 = *(_QWORD *)this;
  if ( *(_QWORD *)(*(_QWORD *)this + 88LL) )
  {
    if ( PFFOBJ::bInPrivatePFT(this, v6, v7) )
      v11 = *(_QWORD **)(v4 + 20408);
    else
      v11 = *(_QWORD **)(v4 + 20416);
    v12 = *(_QWORD *)this;
    v13 = v11 + 1;
    v14 = v11 + 2;
    v20[1] = v11[1];
    v15 = 0LL;
    v21[1] = *v11;
    v23 = v11[2];
    v20[0] = v11 + 1;
    v21[0] = v11;
    v22 = v11 + 2;
    if ( *(_DWORD *)(v12 + 216) )
    {
      do
      {
        v24 = *(_QWORD *)(v12 + 8 * v15 + 224);
        if ( (*(_DWORD *)(v24 + 12) & 8) == 0 )
        {
          if ( v13 && *v13 )
          {
            FHOBJ::vDelete((FHOBJ *)v20, (struct PFEOBJ *)&v24);
            v13 = (_QWORD *)v20[0];
          }
          if ( v11 && *v11 )
          {
            FHOBJ::vDelete((FHOBJ *)v21, (struct PFEOBJ *)&v24);
            v11 = (_QWORD *)v21[0];
          }
        }
        if ( v14 && *v14 )
        {
          FHOBJ::vDelete((FHOBJ *)&v22, (struct PFEOBJ *)&v24);
          v14 = v22;
        }
        v12 = *(_QWORD *)this;
        v15 = (unsigned int)(v15 + 1);
      }
      while ( (unsigned int)v15 < *(_DWORD *)(*(_QWORD *)this + 216LL) );
    }
    if ( UmfdIsUmfdTrueTypePff((const struct PFF *)v12, v9, v10) )
      --*(_DWORD *)(v4 + 20368);
  }
  else
  {
    v22 = (_QWORD *)(v8 + 112);
    v16 = *(_QWORD *)(v8 + 112);
    v23 = v16;
    if ( v8 != -112 && v16 )
      FHOBJ::vFree((FHOBJ *)&v22);
    v17 = *(_QWORD *)this == -120LL;
    v22 = (_QWORD *)(*(_QWORD *)this + 120LL);
    v18 = *v22;
    v23 = *v22;
    if ( !v17 && v18 )
      FHOBJ::vFree((FHOBJ *)&v22);
    v17 = *(_QWORD *)this == -128LL;
    v22 = (_QWORD *)(*(_QWORD *)this + 128LL);
    v19 = *v22;
    v23 = *v22;
    if ( !v17 && v19 )
      FHOBJ::vFree((FHOBJ *)&v22);
  }
}
