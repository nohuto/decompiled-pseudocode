/*
 * XREFs of ?UMPDDrvDisableSurface@@YAXPEAUDHPDEV__@@@Z @ 0x1402597B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1400D600C (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1400D7A00 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1400D7B24 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

void __fastcall UMPDDrvDisableSurface(struct DHPDEV__ *a1)
{
  size_t Size; // [rsp+20h] [rbp-48h]
  UMPDOBJ *v3; // [rsp+30h] [rbp-38h] BYREF
  __int128 v4; // [rsp+38h] [rbp-30h] BYREF
  __int128 v5; // [rsp+48h] [rbp-20h]

  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v3);
  v4 = 0LL;
  v5 = 0LL;
  if ( v3 )
  {
    DWORD1(v4) = 4;
    LOBYTE(v4) = 0;
    *(_QWORD *)&v5 = *(_QWORD *)v3;
    *((_QWORD *)&v5 + 1) = a1;
    LODWORD(Size) = 0;
    UMPDOBJ::Thunk(v3, &v4, 0x20u, 0LL, Size);
  }
  XUMPDOBJ::~XUMPDOBJ(&v3);
}
