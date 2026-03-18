/*
 * XREFs of ?UMPDDrvCompletePDEV@@YAXPEAUDHPDEV__@@PEAUHDEV__@@@Z @ 0x14023B1D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1400D600C (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1400D7A00 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1400D7B24 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

void __fastcall UMPDDrvCompletePDEV(struct DHPDEV__ *a1, _QWORD *a2)
{
  size_t Size; // [rsp+20h] [rbp-50h]
  UMPDOBJ *v5; // [rsp+30h] [rbp-40h] BYREF
  __int128 v6; // [rsp+38h] [rbp-38h] BYREF
  __int128 v7; // [rsp+48h] [rbp-28h]
  __int64 v8; // [rsp+58h] [rbp-18h]

  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v5);
  v8 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  if ( v5 )
  {
    LOBYTE(v6) = 0;
    DWORD1(v6) = 1;
    *(_QWORD *)&v7 = *(_QWORD *)v5;
    v8 = a2[2];
    *((_QWORD *)&v7 + 1) = a1;
    LODWORD(Size) = 0;
    UMPDOBJ::Thunk(v5, &v6, 0x28u, 0LL, Size);
  }
  XUMPDOBJ::~XUMPDOBJ(&v5);
}
