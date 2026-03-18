/*
 * XREFs of ?UMPDDrvDestroyFont@@YAXPEAU_FONTOBJ@@@Z @ 0x14034AD10
 * Callers:
 *     <none>
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x14006FDD0 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?pfo@UMPDOBJ@@QEAAHPEAPEAU_FONTOBJ@@@Z @ 0x1400D4484 (-pfo@UMPDOBJ@@QEAAHPEAPEAU_FONTOBJ@@@Z.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1400D600C (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1400D7A00 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1400D7B24 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

void __fastcall UMPDDrvDestroyFont(struct _FONTOBJ *a1)
{
  UMPDOBJ *v2; // rbx
  size_t Size; // [rsp+20h] [rbp-50h]
  __int64 v4; // [rsp+30h] [rbp-40h] BYREF
  UMPDOBJ *v5; // [rsp+38h] [rbp-38h] BYREF
  __int128 v6; // [rsp+40h] [rbp-30h] BYREF
  __int128 v7; // [rsp+50h] [rbp-20h]
  struct _FONTOBJ *v8; // [rsp+60h] [rbp-10h] BYREF

  LODWORD(v4) = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v5);
  v2 = v5;
  v8 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  if ( v5 )
  {
    if ( a1 )
    {
      DWORD1(v6) = 43;
      LOBYTE(v6) = 0;
      *(_QWORD *)&v7 = *(_QWORD *)v5;
      *((_QWORD *)&v7 + 1) = a1[1].pvConsumer;
      v8 = a1;
      if ( (unsigned int)UMPDOBJ::pfo(v5, (__m128i **)&v8) )
      {
        LODWORD(Size) = 4;
        UMPDOBJ::Thunk(v2, &v6, 0x28u, &v4, Size);
      }
    }
  }
  v4 = 0LL;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v4);
  XUMPDOBJ::~XUMPDOBJ(&v5);
}
