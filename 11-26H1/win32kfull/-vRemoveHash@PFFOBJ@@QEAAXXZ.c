/*
 * XREFs of ?vRemoveHash@PFFOBJ@@QEAAXXZ @ 0x140104D2C
 * Callers:
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH@Z @ 0x140102C2C (-bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH.c)
 *     ?bUnloadAllButPermanentFonts@PFTOBJ@@QEAAHH@Z @ 0x14020EAF0 (-bUnloadAllButPermanentFonts@PFTOBJ@@QEAAHH@Z.c)
 *     ?hLoadMemFonts@PUBLIC_PFTOBJ@@QEAAPEAXPEAPEAUFONTFILEVIEW@@PEAUtagDESIGNVECTOR@@KPEAKPEAH@Z @ 0x14021C4D0 (-hLoadMemFonts@PUBLIC_PFTOBJ@@QEAAPEAXPEAPEAUFONTFILEVIEW@@PEAUtagDESIGNVECTOR@@KPEAKPEAH@Z.c)
 *     ?bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@IK@Z @ 0x14028B4D4 (-bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@IK@Z.c)
 *     ?bLoadFonts@DEVICE_PFTOBJ@@QEAAHPEAUHDEV__@@I@Z @ 0x140327194 (-bLoadFonts@DEVICE_PFTOBJ@@QEAAHPEAUHDEV__@@I@Z.c)
 *     ?bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAUFONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PEAU_UNIVERSAL_FONT_ID@@PEAH@Z @ 0x1403273E8 (-bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAUFONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PEA.c)
 * Callees:
 *     ?UmfdIsUmfdTrueTypePff@@YA_NPEBVPFF@@@Z @ 0x140101D70 (-UmfdIsUmfdTrueTypePff@@YA_NPEBVPFF@@@Z.c)
 *     ?vDelete@FHOBJ@@QEAAXAEAVPFEOBJ@@@Z @ 0x140105050 (-vDelete@FHOBJ@@QEAAXAEAVPFEOBJ@@@Z.c)
 *     ?bInPrivatePFT@PFFOBJ@@QEBAHXZ @ 0x140105C4C (-bInPrivatePFT@PFFOBJ@@QEBAHXZ.c)
 *     ?vFree@FHOBJ@@QEAAXXZ @ 0x14020ED44 (-vFree@FHOBJ@@QEAAXXZ.c)
 */

void __fastcall PFFOBJ::vRemoveHash(PFFOBJ *this, __int64 a2, __int64 a3)
{
  __int64 v4; // r12
  Gre::Base *v5; // rcx
  struct Gre::Base::SESSION_GLOBALS *v6; // rax
  __int64 v7; // rax
  __int64 v8; // r15
  __int64 v9; // rdx
  _QWORD *v10; // rdi
  __int64 v11; // r8
  const struct PFF *v12; // rcx
  _QWORD *v13; // rsi
  _QWORD *v14; // r14
  __int64 v15; // rcx
  bool v16; // zf
  __int64 v17; // rcx
  __int64 v18; // rcx
  _QWORD v19[2]; // [rsp+20h] [rbp-30h] BYREF
  _QWORD v20[2]; // [rsp+30h] [rbp-20h] BYREF
  _QWORD *v21; // [rsp+40h] [rbp-10h] BYREF
  __int64 v22; // [rsp+48h] [rbp-8h]
  __int64 v23; // [rsp+80h] [rbp+30h] BYREF

  v4 = *(_QWORD *)(W32GetSessionState(this, a2, a3) + 96);
  v6 = Gre::Base::Globals(v5);
  ++*(_DWORD *)(*((_QWORD *)v6 + 232) + 1573016LL);
  v7 = *(_QWORD *)this;
  if ( *(_QWORD *)(*(_QWORD *)this + 88LL) )
  {
    v8 = 0LL;
    v10 = *(_QWORD **)((-(__int64)((unsigned int)PFFOBJ::bInPrivatePFT(this) != 0) & 0xFFFFFFFFFFFFFFF8uLL) + v4 + 20392);
    v12 = *(const struct PFF **)this;
    v20[0] = v10;
    v13 = v10 + 1;
    v14 = v10 + 2;
    v19[1] = v10[1];
    v20[1] = *v10;
    v22 = v10[2];
    v19[0] = v10 + 1;
    v21 = v10 + 2;
    if ( *((_DWORD *)v12 + 54) )
    {
      do
      {
        v23 = *((_QWORD *)v12 + v8 + 28);
        if ( (*(_DWORD *)(v23 + 12) & 8) == 0 )
        {
          if ( v13 && *v13 )
          {
            FHOBJ::vDelete((FHOBJ *)v19, (struct PFEOBJ *)&v23);
            v13 = (_QWORD *)v19[0];
          }
          if ( v10 && *v10 )
          {
            FHOBJ::vDelete((FHOBJ *)v20, (struct PFEOBJ *)&v23);
            v10 = (_QWORD *)v20[0];
          }
        }
        if ( v14 && *v14 )
        {
          FHOBJ::vDelete((FHOBJ *)&v21, (struct PFEOBJ *)&v23);
          v14 = v21;
        }
        v12 = *(const struct PFF **)this;
        v8 = (unsigned int)(v8 + 1);
      }
      while ( (unsigned int)v8 < *(_DWORD *)(*(_QWORD *)this + 216LL) );
    }
    if ( UmfdIsUmfdTrueTypePff(v12, v9, v11) )
      --*(_DWORD *)(v4 + 20344);
  }
  else
  {
    v21 = (_QWORD *)(v7 + 112);
    v15 = *(_QWORD *)(v7 + 112);
    v22 = v15;
    if ( v7 != -112 && v15 )
      FHOBJ::vFree((FHOBJ *)&v21);
    v16 = *(_QWORD *)this == -120LL;
    v21 = (_QWORD *)(*(_QWORD *)this + 120LL);
    v17 = *v21;
    v22 = *v21;
    if ( !v16 && v17 )
      FHOBJ::vFree((FHOBJ *)&v21);
    v16 = *(_QWORD *)this == -128LL;
    v21 = (_QWORD *)(*(_QWORD *)this + 128LL);
    v18 = *v21;
    v22 = *v21;
    if ( !v16 && v18 )
      FHOBJ::vFree((FHOBJ *)&v21);
  }
}
