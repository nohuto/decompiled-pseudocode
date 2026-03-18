/*
 * XREFs of ?UMPDDrvCompletePDEV@@YAXPEAUDHPDEV__@@PEAUHDEV__@@@Z @ 0x140207E90
 * Callers:
 *     <none>
 * Callees:
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1400D2E48 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1400D2F30 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1400D425C (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

void __fastcall UMPDDrvCompletePDEV(struct DHPDEV__ *a1, _QWORD *a2)
{
  size_t v4; // [rsp+20h] [rbp-50h]
  UMPDOBJ *v5; // [rsp+30h] [rbp-40h] BYREF
  __int128 Src; // [rsp+38h] [rbp-38h] BYREF
  __int128 v7; // [rsp+48h] [rbp-28h]
  __int64 v8; // [rsp+58h] [rbp-18h]

  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v5);
  v8 = 0LL;
  Src = 0LL;
  v7 = 0LL;
  if ( v5 )
  {
    LODWORD(v4) = 0;
    LOBYTE(Src) = 0;
    DWORD1(Src) = 1;
    *(_QWORD *)&v7 = *(_QWORD *)v5;
    v8 = a2[2];
    *((_QWORD *)&v7 + 1) = a1;
    UMPDOBJ::Thunk(v5, &Src, 0x28u, 0LL, v4);
  }
  XUMPDOBJ::~XUMPDOBJ(&v5);
}
