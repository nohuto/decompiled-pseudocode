/*
 * XREFs of NtGdiGetPixel @ 0x14009FD70
 * Callers:
 *     <none>
 * Callees:
 *     ??0XCLIPOBJ@@QEAA@XZ @ 0x140013B48 (--0XCLIPOBJ@@QEAA@XZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x14008026C (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x140084B40 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x140084C80 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1400872EC (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x140087BA4 (--0DLODCOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14008A870 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?SrcSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1400A0160 (-SrcSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     bCvtPts1 @ 0x1400A0334 (bCvtPts1.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NtGdiGetPixel(HDC a1, LONG a2, int a3)
{
  __int64 v5; // rdi
  __int64 v6; // r9
  __int64 v7; // r8
  struct REGION *v8; // rdx
  int v9; // ecx
  int v10; // esi
  Gre::Base *v11; // rcx
  __int64 v12; // rbx
  struct Gre::Base::SESSION_GLOBALS *v13; // r9
  int v14; // eax
  __int64 v15; // r9
  unsigned int v16; // ebx
  unsigned int v18; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v19; // [rsp+68h] [rbp-98h] BYREF
  char v20; // [rsp+70h] [rbp-90h]
  int v21; // [rsp+74h] [rbp-8Ch]
  _DWORD v22[2]; // [rsp+78h] [rbp-88h] BYREF
  __int64 v23; // [rsp+80h] [rbp-80h]
  __int64 v24; // [rsp+88h] [rbp-78h]
  __int64 v25; // [rsp+90h] [rbp-70h]
  __int64 v26; // [rsp+98h] [rbp-68h] BYREF
  DC *v27[14]; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v28; // [rsp+110h] [rbp+10h] BYREF
  __int64 v29; // [rsp+120h] [rbp+20h]
  int v30; // [rsp+128h] [rbp+28h]
  _QWORD v31[14]; // [rsp+130h] [rbp+30h] BYREF
  __int128 v32; // [rsp+1A0h] [rbp+A0h] BYREF
  _DWORD v33[2]; // [rsp+1B0h] [rbp+B0h] BYREF
  int v34; // [rsp+1B8h] [rbp+B8h]
  int v35; // [rsp+1BCh] [rbp+BCh]
  _BYTE v36[4]; // [rsp+1C0h] [rbp+C0h] BYREF
  int v37; // [rsp+1C4h] [rbp+C4h]
  int v38; // [rsp+1C8h] [rbp+C8h]
  int v39; // [rsp+1CCh] [rbp+CCh]
  int v40; // [rsp+1D0h] [rbp+D0h]

  v18 = -1;
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v27, a1);
  if ( v27[0] )
  {
    bSpDwmValidateSurface((struct XDCOBJ *)v27, a2, a3, 1, 1);
    DLODCOBJ::DLODCOBJ((DLODCOBJ *)v31);
    v29 = 0LL;
    v28 = 0LL;
    v30 = 0;
    v31[0] = 0LL;
    memset(&v31[10], 0, 24);
    if ( DEVLOCKOBJ::bLock((DEVLOCKOBJ *)&v28, (struct XDCOBJ *)v27, 0) )
    {
      v5 = *((_QWORD *)v27[0] + 62);
      if ( v5 )
      {
        if ( (unsigned int)SrcSurfaceAccessCheck(*((struct SURFACE **)v27[0] + 62)) )
        {
          DC::QuickInitXform(v27[0], &v26, 516LL);
          *(_QWORD *)&v32 = __PAIR64__(a3, a2);
          if ( (*(_BYTE *)(v26 + 32) & 0x43) != 0x43 )
          {
            bCvtPts1(v26, &v32, 1LL, v6);
            a3 = DWORD1(v32);
            a2 = v32;
          }
          v34 = a2 + 1;
          v35 = a3 + 1;
          v7 = *((_DWORD *)v27[0] + 10) & 1LL;
          v33[0] = a2 + *((_DWORD *)v27[0] + 2 * v7 + 254);
          v34 = a2 + 1 + *((_DWORD *)v27[0] + 2 * v7 + 254);
          v33[1] = a3 + *((_DWORD *)v27[0] + 2 * v7 + 255);
          v35 = a3 + 1 + *((_DWORD *)v27[0] + 2 * v7 + 255);
          XDCOBJ::prgnEffRao(v27);
          XCLIPOBJ::XCLIPOBJ((XCLIPOBJ *)v36);
          XCLIPOBJ::vSetup((XCLIPOBJ *)v36, v8, (const struct ERECTL *)v33, 0);
          if ( v37 != v39 && v38 != v40 )
          {
            v9 = *((_DWORD *)v27[0] + 30);
            if ( (v9 & 1) == 0 || !*(_QWORD *)(*((_QWORD *)v27[0] + 122) + 248LL) || (v10 = 1, (v9 & 0x10000000) == 0) )
              v10 = 0;
            v18 = 0;
            v22[0] = *(_DWORD *)(v5 + 96);
            v23 = 1LL;
            v25 = 1LL;
            v22[1] = 1;
            v24 = 0LL;
            v32 = 0LL;
            if ( v22[0] == 1 )
            {
              LODWORD(v32) = 7;
              DWORD2(v32) = 8;
            }
            else if ( v22[0] == 2 )
            {
              LODWORD(v32) = 1;
              DWORD2(v32) = 2;
            }
            else
            {
              DWORD2(v32) = 1;
            }
            v19 = 0LL;
            v20 = 0;
            v21 = 0;
            if ( SURFMEM::bCreateDIB((SURFMEM *)&v19, (struct _DEVBITMAPINFO *)v22, &v18, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
            {
              v12 = *(_QWORD *)(v5 + 48);
              DWORD1(v32) = 0;
              HIDWORD(v32) = 1;
              v13 = Gre::Base::Globals(v11);
              if ( (*(_DWORD *)(v5 + 112) & 0x400) != 0 )
                v14 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, __int128 *, _DWORD *))(v12 + 2832))(
                        (v19 + 24) & -(__int64)(v19 != 0),
                        v5 + 24,
                        0LL,
                        (__int64)v13 + 4552,
                        &v32,
                        v33);
              else
                v14 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD, char *, __int128 *, _DWORD *))EngCopyBits)(
                        (v19 + 24) & -(__int64)(v19 != 0),
                        v5 + 24,
                        0LL,
                        (char *)v13 + 4552,
                        &v32,
                        v33);
              if ( v14 && !v10 )
                v18 = ulIndexToRGB(*(_QWORD *)(v5 + 128), *((_QWORD *)v27[0] + 11), v18, v15);
            }
            SURFMEM::~SURFMEM((SURFMEM *)&v19);
          }
        }
      }
    }
    DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)&v28);
  }
  v16 = v18;
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v27);
  return v16;
}
