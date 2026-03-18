/*
 * XREFs of NtGdiAddRemoteMMInstanceToDC @ 0x140328CA0
 * Callers:
 *     <none>
 * Callees:
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x140084B40 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x140084C80 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??0?$SEMOBJ@$0BB@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x1400B975C (--0-$SEMOBJ@$0BB@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?vUnlock@?$SEMOBJ@$0BB@@@QEAAXXZ @ 0x1400B9F50 (-vUnlock@-$SEMOBJ@$0BB@@@QEAAXXZ.c)
 *     ??0PUBLIC_PFTOBJ@@QEAA@PEAVPFT@@@Z @ 0x1400D1B54 (--0PUBLIC_PFTOBJ@@QEAA@PEAVPFT@@@Z.c)
 *     PALLOCMEM @ 0x140108044 (PALLOCMEM.c)
 *     ?bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAUFONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PEAU_UNIVERSAL_FONT_ID@@PEAH@Z @ 0x140228C20 (-bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAUFONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PEA.c)
 *     ?GreGetBaseUFIBits@@YAHPEAU_UNIVERSAL_FONT_ID@@PEAUFONTFILEVIEW@@@Z @ 0x140327550 (-GreGetBaseUFIBits@@YAHPEAU_UNIVERSAL_FONT_ID@@PEAUFONTFILEVIEW@@@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     memmove @ 0x140342600 (memmove.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

__int64 __fastcall NtGdiAddRemoteMMInstanceToDC(HDC a1, void *Src, size_t Size)
{
  size_t v3; // rdi
  unsigned int v6; // esi
  __int64 v8; // rdx
  int v9; // ecx
  __int64 SessionState; // rax
  __int64 v11; // rdx
  int v12; // ecx
  __int64 v13; // rax
  __int64 v14; // rax
  struct FONTFILEVIEW **v15; // r8
  __int64 v16; // rax
  int v17; // [rsp+40h] [rbp-188h] BYREF
  HSEMAPHORE v18; // [rsp+48h] [rbp-180h] BYREF
  _BYTE v19[16]; // [rsp+50h] [rbp-178h] BYREF
  _OWORD v20[5]; // [rsp+60h] [rbp-168h] BYREF
  __int128 v21; // [rsp+B0h] [rbp-118h]
  __int128 v22; // [rsp+C0h] [rbp-108h]
  __int64 v23; // [rsp+D0h] [rbp-F8h]
  _QWORD v24[14]; // [rsp+E0h] [rbp-E8h] BYREF
  _BYTE v25[8]; // [rsp+150h] [rbp-78h] BYREF
  _BYTE v26[4]; // [rsp+158h] [rbp-70h] BYREF
  unsigned int v27; // [rsp+15Ch] [rbp-6Ch]

  v3 = (unsigned int)Size;
  memset_0(v25, 0, 0x50uLL);
  v6 = 0;
  v17 = 0;
  memset_0(v20, 0, 0x78uLL);
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v24, a1);
  if ( v24[0] )
  {
    if ( (*(_DWORD *)(v24[0] + 36LL) & 1) == 0 && (unsigned int)v3 <= 0x50 )
    {
      memmove(v25, Src, v3);
      if ( v27 <= 0x10 )
      {
        SessionState = W32GetSessionState(v9, v8);
        SEMOBJ<17>::SEMOBJ<17>(&v18, *(_QWORD *)(SessionState + 96) + 4872LL);
        if ( (unsigned int)GreGetBaseUFIBits((struct _UNIVERSAL_FONT_ID *)v25, (struct FONTFILEVIEW *)v20) )
        {
          v13 = W32GetSessionState(v12, v11);
          PUBLIC_PFTOBJ::PUBLIC_PFTOBJ((PUBLIC_PFTOBJ *)v19, *(struct PFT **)(*(_QWORD *)(v13 + 96) + 20416LL));
          v14 = PALLOCMEM(0x80u, 1986422343LL);
          v15 = (struct FONTFILEVIEW **)v14;
          if ( v14 )
          {
            v17 = 0;
            v16 = v14 + 8;
            *v15 = (struct FONTFILEVIEW *)v16;
            *((_QWORD *)&v21 + 1) = 0LL;
            DWORD1(v22) = 0;
            *(_OWORD *)v16 = v20[0];
            *(_OWORD *)(v16 + 16) = v20[1];
            *(_OWORD *)(v16 + 32) = v20[2];
            *(_OWORD *)(v16 + 48) = v20[3];
            *(_OWORD *)(v16 + 64) = v20[4];
            *(_OWORD *)(v16 + 80) = v21;
            *(_OWORD *)(v16 + 96) = v22;
            *(_QWORD *)(v16 + 112) = v23;
            v6 = PUBLIC_PFTOBJ::bLoadRemoteFonts(
                   (PUBLIC_PFTOBJ *)v19,
                   (struct XDCOBJ *)v24,
                   v15,
                   1u,
                   (struct tagDESIGNVECTOR *)v26,
                   0LL,
                   &v17);
          }
          else
          {
            v6 = 0;
          }
        }
        SEMOBJ<17>::vUnlock(&v18);
      }
    }
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v24);
    return v6;
  }
  else
  {
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v24);
    return 0LL;
  }
}
