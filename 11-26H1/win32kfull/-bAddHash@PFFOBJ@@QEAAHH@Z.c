/*
 * XREFs of ?bAddHash@PFFOBJ@@QEAAHH@Z @ 0x140104F04
 * Callers:
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH@Z @ 0x140102C2C (-bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH.c)
 *     ?hLoadMemFonts@PUBLIC_PFTOBJ@@QEAAPEAXPEAPEAUFONTFILEVIEW@@PEAUtagDESIGNVECTOR@@KPEAKPEAH@Z @ 0x14021C4D0 (-hLoadMemFonts@PUBLIC_PFTOBJ@@QEAAPEAXPEAPEAUFONTFILEVIEW@@PEAUtagDESIGNVECTOR@@KPEAKPEAH@Z.c)
 *     ?bLoadFonts@DEVICE_PFTOBJ@@QEAAHPEAUHDEV__@@I@Z @ 0x140327194 (-bLoadFonts@DEVICE_PFTOBJ@@QEAAHPEAUHDEV__@@I@Z.c)
 *     ?bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAUFONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PEAU_UNIVERSAL_FONT_ID@@PEAH@Z @ 0x1403273E8 (-bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAUFONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PEA.c)
 * Callees:
 *     ?UmfdIsUmfdTrueTypePff@@YA_NPEBVPFF@@@Z @ 0x140101D70 (-UmfdIsUmfdTrueTypePff@@YA_NPEBVPFF@@@Z.c)
 *     ?bInsert@FHOBJ@@QEAAHAEAVPFEOBJ@@@Z @ 0x140105540 (-bInsert@FHOBJ@@QEAAHAEAVPFEOBJ@@@Z.c)
 *     ?bInPrivatePFT@PFFOBJ@@QEBAHXZ @ 0x140105C4C (-bInPrivatePFT@PFFOBJ@@QEBAHXZ.c)
 */

__int64 __fastcall PFFOBJ::bAddHash(__int64 **this, __int64 a2, __int64 a3)
{
  int v3; // r12d
  __int64 v5; // rdi
  Gre::Base *v6; // rcx
  struct Gre::Base::SESSION_GLOBALS *v7; // rax
  __int64 *v8; // rax
  __int64 *v9; // rbx
  __int64 *v10; // rsi
  __int64 *v11; // r14
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 i; // rbx
  _QWORD v19[2]; // [rsp+20h] [rbp-30h] BYREF
  _QWORD v20[2]; // [rsp+30h] [rbp-20h] BYREF
  _QWORD v21[2]; // [rsp+40h] [rbp-10h] BYREF
  __int64 v22; // [rsp+80h] [rbp+30h] BYREF

  v3 = a2;
  v5 = *(_QWORD *)(W32GetSessionState(this, a2, a3) + 96);
  v7 = Gre::Base::Globals(v6);
  ++*(_DWORD *)(*((_QWORD *)v7 + 232) + 1573016LL);
  v8 = *this;
  if ( (*this)[11] )
  {
    v9 = *(__int64 **)((-(__int64)((unsigned int)PFFOBJ::bInPrivatePFT((PFFOBJ *)this) != 0) & 0xFFFFFFFFFFFFFFF8uLL)
                     + v5
                     + 20392);
    v10 = v9 + 1;
    v11 = v9 + 2;
    if ( UmfdIsUmfdTrueTypePff((const struct PFF *)*this, v12, v13) )
      ++*(_DWORD *)(v5 + 20344);
  }
  else
  {
    v10 = v8 + 14;
    v9 = v8 + 15;
    v11 = v8 + 16;
  }
  v14 = *v11;
  v15 = *v9;
  v16 = *v10;
  v20[0] = v9;
  v20[1] = v15;
  v21[0] = v10;
  v21[1] = v16;
  v19[0] = v11;
  v19[1] = v14;
  if ( !v14 || !v15 || !v16 )
    return 0LL;
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)*this + 54); i = (unsigned int)(i + 1) )
  {
    v22 = (*this)[i + 28];
    if ( !(unsigned int)FHOBJ::bInsert((FHOBJ *)v19, (struct PFEOBJ *)&v22)
      || !v3
      && (!(unsigned int)FHOBJ::bInsert((FHOBJ *)v20, (struct PFEOBJ *)&v22)
       || !(unsigned int)FHOBJ::bInsert((FHOBJ *)v21, (struct PFEOBJ *)&v22)) )
    {
      return 0LL;
    }
  }
  return 1LL;
}
