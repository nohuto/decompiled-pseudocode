/*
 * XREFs of ?UMPDDrvDisableSurface@@YAXPEAUDHPDEV__@@@Z @ 0x14021F000
 * Callers:
 *     <none>
 * Callees:
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1400D2E48 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1400D2F30 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1400D425C (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

void __fastcall UMPDDrvDisableSurface(struct DHPDEV__ *a1)
{
  size_t v2; // [rsp+20h] [rbp-48h]
  UMPDOBJ *v3; // [rsp+30h] [rbp-38h] BYREF
  __int128 Src; // [rsp+38h] [rbp-30h] BYREF
  __int128 v5; // [rsp+48h] [rbp-20h]

  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v3);
  Src = 0LL;
  v5 = 0LL;
  if ( v3 )
  {
    LODWORD(v2) = 0;
    DWORD1(Src) = 4;
    LOBYTE(Src) = 0;
    *(_QWORD *)&v5 = *(_QWORD *)v3;
    *((_QWORD *)&v5 + 1) = a1;
    UMPDOBJ::Thunk(v3, &Src, 0x20u, 0LL, v2);
  }
  XUMPDOBJ::~XUMPDOBJ(&v3);
}
