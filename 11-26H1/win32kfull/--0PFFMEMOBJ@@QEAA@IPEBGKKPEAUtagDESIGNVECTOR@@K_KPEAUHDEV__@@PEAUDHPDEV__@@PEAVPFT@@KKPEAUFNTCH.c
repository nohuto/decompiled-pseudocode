/*
 * XREFs of ??0PFFMEMOBJ@@QEAA@IPEBGKKPEAUtagDESIGNVECTOR@@K_KPEAUHDEV__@@PEAUDHPDEV__@@PEAVPFT@@KKPEAUFNTCHECKSUM@@PEAPEAUFONTFILEVIEW@@PEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x14013F72C
 * Callers:
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH@Z @ 0x140102C2C (-bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH.c)
 *     ?hLoadMemFonts@PUBLIC_PFTOBJ@@QEAAPEAXPEAPEAUFONTFILEVIEW@@PEAUtagDESIGNVECTOR@@KPEAKPEAH@Z @ 0x14021C4D0 (-hLoadMemFonts@PUBLIC_PFTOBJ@@QEAAPEAXPEAPEAUFONTFILEVIEW@@PEAUtagDESIGNVECTOR@@KPEAKPEAH@Z.c)
 *     ?bLoadFonts@DEVICE_PFTOBJ@@QEAAHPEAUHDEV__@@I@Z @ 0x140327194 (-bLoadFonts@DEVICE_PFTOBJ@@QEAAHPEAUHDEV__@@I@Z.c)
 *     ?bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAUFONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PEAU_UNIVERSAL_FONT_ID@@PEAH@Z @ 0x1403273E8 (-bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAUFONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PEA.c)
 * Callees:
 *     ?bAddPvtData@PFFOBJ@@QEAAHK@Z @ 0x14013FAD8 (-bAddPvtData@PFFOBJ@@QEAAHK@Z.c)
 *     ?ComputeFileviewCheckSumInFontDriverAddressSpace@@YAKPEAPEAUFONTFILEVIEW@@I@Z @ 0x140140298 (-ComputeFileviewCheckSumInFontDriverAddressSpace@@YAKPEAPEAUFONTFILEVIEW@@I@Z.c)
 *     ComputeFileviewCheckSum @ 0x140140440 (ComputeFileviewCheckSum.c)
 *     PALLOCMEM @ 0x140183124 (PALLOCMEM.c)
 *     ?PutFNTCacheCheckSum@@YAXKK@Z @ 0x1401C61E8 (-PutFNTCacheCheckSum@@YAXKK@Z.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 */

PFFMEMOBJ *__fastcall PFFMEMOBJ::PFFMEMOBJ(
        PFFMEMOBJ *this,
        unsigned int a2,
        const unsigned __int16 *a3,
        unsigned int a4,
        unsigned int a5,
        struct tagDESIGNVECTOR *Src,
        size_t Size,
        unsigned __int64 a8,
        HDEV a9,
        struct DHPDEV__ *a10,
        struct PFT *a11,
        unsigned int a12,
        unsigned int a13,
        struct FNTCHECKSUM *a14,
        struct FONTFILEVIEW **a15,
        struct _UNIVERSAL_FONT_ID *a16,
        int a17)
{
  unsigned __int64 v18; // rsi
  __int64 v19; // r15
  unsigned int v21; // esi
  int v22; // eax
  unsigned int v23; // ebx
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 SessionState; // rax
  __int64 v32; // rcx
  __int64 v33; // rbx
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  unsigned int v38; // edx
  int v39; // ecx
  _QWORD *v40; // rax
  __int64 v41; // rax
  unsigned int v43; // [rsp+58h] [rbp+10h]

  v18 = 8LL * a2;
  v19 = a4;
  v43 = 0;
  *(_QWORD *)this = 0LL;
  *((_WORD *)this + 8) = 0;
  *((_DWORD *)this + 5) = a13;
  *((_DWORD *)this + 2) = 0;
  if ( v18 > 0xFFFFFFFF || (v21 = v18 + 224, v21 < 0xE0) )
  {
    v21 = -1;
    v22 = 0;
  }
  else
  {
    v22 = 1;
  }
  if ( a3 && v22 )
  {
    v43 = v21;
    if ( v21 + ((2 * a4 + 3) & 0xFFFFFFFC) < v21 )
    {
      v21 = -1;
      v22 = 0;
    }
    else
    {
      v21 += (2 * a4 + 3) & 0xFFFFFFFC;
      v22 = 1;
    }
  }
  if ( (_DWORD)Size )
  {
    if ( !v22 )
      return this;
    v23 = v21 + Size;
    if ( v21 + (unsigned int)Size < v21 )
      return this;
  }
  else
  {
    v23 = v21;
    v21 = 0;
    if ( !v22 )
      return this;
  }
  v24 = PALLOCMEM(v23, 1717989447LL);
  *(_QWORD *)this = v24;
  if ( v24 )
  {
    PushThreadGuardedObject(v24 + 168, v24, CleanUpPFF);
    **(_QWORD **)this = v23;
    v25 = *(_QWORD *)this;
    *(_QWORD *)(v25 + 16) = 0LL;
    *(_QWORD *)(v25 + 8) = 0LL;
    *(_QWORD *)(*(_QWORD *)this + 88LL) = a8;
    *(_QWORD *)(*(_QWORD *)this + 96LL) = a9;
    *(_QWORD *)(*(_QWORD *)this + 104LL) = a10;
    *(_QWORD *)(*(_QWORD *)this + 136LL) = a11;
    *(_DWORD *)(*(_QWORD *)this + 36LL) = a5;
    *(_DWORD *)(*(_QWORD *)this + 32LL) = v19;
    v29 = *(_QWORD *)(W32GetSessionState(a5, v26, v27) + 96);
    if ( a9 == *(HDEV *)(v29 + 24136) )
      *(_QWORD *)(a8 + 8) = *(_QWORD *)this;
    SessionState = W32GetSessionState(v29, v28, v30);
    v32 = *(_QWORD *)this;
    v33 = *(_QWORD *)(SessionState + 96);
    if ( (_DWORD)v19 )
    {
      *(_QWORD *)(v32 + 24) = v32 + v43;
      memmove(*(void **)(*(_QWORD *)this + 24LL), a3, 2 * v19);
    }
    else
    {
      *(_QWORD *)(v32 + 24) = 0LL;
    }
    *(_DWORD *)(*(_QWORD *)this + 48LL) = Size;
    v34 = *(_QWORD *)this;
    if ( (_DWORD)Size )
    {
      *(_QWORD *)(v34 + 40) = v34 + v21;
      memmove(*(void **)(*(_QWORD *)this + 40LL), Src, (unsigned int)Size);
    }
    else
    {
      *(_QWORD *)(v34 + 40) = 0LL;
    }
    if ( *(_DWORD *)(W32GetUserGdiSessionState(v34) + 24)
      && *(_BYTE *)(v33 + 13496)
      && *(_BYTE *)(*(_QWORD *)(W32GetSessionState(v36, v35, v37) + 96) + 19604LL) )
    {
      v38 = a12;
    }
    else
    {
      v38 = a12 | 0x200;
    }
    v39 = v38 | 0x1000;
    *(_QWORD *)(*(_QWORD *)this + 208LL) = a15;
    if ( !a17 )
      v39 = v38;
    *(_DWORD *)(*(_QWORD *)this + 216LL) = 0;
    *(_DWORD *)(*(_QWORD *)this + 68LL) = 0;
    *(_DWORD *)(*(_QWORD *)this + 52LL) = v39;
    *(_QWORD *)(*(_QWORD *)this + 112LL) = 0LL;
    *(_QWORD *)(*(_QWORD *)this + 120LL) = 0LL;
    *(_QWORD *)(*(_QWORD *)this + 128LL) = 0LL;
    v40 = (_QWORD *)(*(_QWORD *)this + 72LL);
    v40[1] = v40;
    *v40 = v40;
    *(_QWORD *)(*(_QWORD *)this + 152LL) = 0LL;
    v41 = *(_QWORD *)this;
    if ( (a13 & 0x1C) != 0 )
    {
      *(_DWORD *)(v41 + 56) = 0;
      *(_DWORD *)(*(_QWORD *)this + 60LL) = 0;
      PFFOBJ::bAddPvtData(this, a13);
    }
    else if ( (a13 & 0x20) != 0 )
    {
      *(_DWORD *)(v41 + 56) = 0;
      *(_DWORD *)(*(_QWORD *)this + 60LL) = 1;
    }
    else
    {
      *(_DWORD *)(v41 + 56) = 1;
      *(_DWORD *)(*(_QWORD *)this + 60LL) = 0;
    }
    *(_QWORD *)(*(_QWORD *)this + 160LL) = 0LL;
    *(_DWORD *)(*(_QWORD *)this + 144LL) = 0;
    if ( a16 )
    {
      *(_DWORD *)(*(_QWORD *)this + 144LL) = *(_DWORD *)a16;
    }
    else if ( a15 )
    {
      *(_DWORD *)(*(_QWORD *)this + 144LL) = *((_DWORD *)a14 + 1);
      if ( !*(_DWORD *)(*(_QWORD *)this + 144LL) )
      {
        *(_DWORD *)(*(_QWORD *)this + 144LL) += ComputeFileviewCheckSumInFontDriverAddressSpace(a15, a5);
        if ( (a13 & 0x10) == 0 )
          PutFNTCacheCheckSum(*(_DWORD *)a14, *(_DWORD *)(*(_QWORD *)this + 144LL));
      }
      if ( *(_DWORD *)(*(_QWORD *)this + 48LL) )
        *(_DWORD *)(*(_QWORD *)this + 144LL) += ComputeFileviewCheckSum(Src, (unsigned int)Size);
    }
  }
  return this;
}
