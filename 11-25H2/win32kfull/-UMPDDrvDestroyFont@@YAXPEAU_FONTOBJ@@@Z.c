/*
 * XREFs of ?UMPDDrvDestroyFont@@YAXPEAU_FONTOBJ@@@Z @ 0x140334E00
 * Callers:
 *     <none>
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x140017244 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1400D2E48 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1400D2F30 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1400D425C (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ?pfo@UMPDOBJ@@QEAAHPEAPEAU_FONTOBJ@@@Z @ 0x1400D4D34 (-pfo@UMPDOBJ@@QEAAHPEAPEAU_FONTOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

void __fastcall UMPDDrvDestroyFont(struct _FONTOBJ *a1)
{
  __int64 v2; // r8
  UMPDOBJ *v3; // rbx
  size_t Size; // [rsp+20h] [rbp-50h]
  __int64 v5; // [rsp+30h] [rbp-40h] BYREF
  UMPDOBJ *v6; // [rsp+38h] [rbp-38h] BYREF
  __int128 Src; // [rsp+40h] [rbp-30h] BYREF
  __int128 v8; // [rsp+50h] [rbp-20h]
  struct _FONTOBJ *v9; // [rsp+60h] [rbp-10h] BYREF

  LODWORD(v5) = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v6);
  v3 = v6;
  v9 = 0LL;
  Src = 0LL;
  v8 = 0LL;
  if ( v6 )
  {
    if ( a1 )
    {
      DWORD1(Src) = 43;
      LOBYTE(Src) = 0;
      *(_QWORD *)&v8 = *(_QWORD *)v6;
      *((_QWORD *)&v8 + 1) = a1[1].pvConsumer;
      v9 = a1;
      if ( (unsigned int)UMPDOBJ::pfo(v6, &v9, v2) )
      {
        LODWORD(Size) = 4;
        UMPDOBJ::Thunk(v3, &Src, 0x28u, &v5, Size);
      }
    }
  }
  v5 = 0LL;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v5);
  XUMPDOBJ::~XUMPDOBJ(&v6);
}
