/*
 * XREFs of ?UMPDDrvGetGlyphMode@@YAKPEAUDHPDEV__@@PEAU_FONTOBJ@@@Z @ 0x1400D9830
 * Callers:
 *     <none>
 * Callees:
 *     ?pfo@UMPDOBJ@@QEAAHPEAPEAU_FONTOBJ@@@Z @ 0x1400D4484 (-pfo@UMPDOBJ@@QEAAHPEAPEAU_FONTOBJ@@@Z.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1400D600C (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1400D7A00 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1400D7B24 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall UMPDDrvGetGlyphMode(struct DHPDEV__ *a1, struct _FONTOBJ *a2)
{
  UMPDOBJ *v4; // rbx
  int v5; // eax
  unsigned int v6; // ebx
  size_t Size; // [rsp+20h] [rbp-50h]
  unsigned int v9; // [rsp+30h] [rbp-40h] BYREF
  UMPDOBJ *v10; // [rsp+38h] [rbp-38h] BYREF
  _DWORD v11[2]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v12; // [rsp+48h] [rbp-28h]
  __int64 v13; // [rsp+50h] [rbp-20h]
  struct DHPDEV__ *v14; // [rsp+58h] [rbp-18h]
  struct _FONTOBJ *v15; // [rsp+60h] [rbp-10h] BYREF

  *(_WORD *)((char *)v11 + 1) = 0;
  HIBYTE(v11[0]) = 0;
  v12 = 0LL;
  v9 = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v10);
  v4 = v10;
  *(_WORD *)((char *)v11 + 1) = 0;
  HIBYTE(v11[0]) = 0;
  v12 = 0LL;
  if ( !v10 )
    goto LABEL_5;
  v11[1] = 37;
  LOBYTE(v11[0]) = 0;
  v13 = *(_QWORD *)v10;
  v14 = a1;
  v15 = a2;
  if ( !(unsigned int)UMPDOBJ::pfo(v10, (__m128i **)&v15)
    || (LODWORD(Size) = 4, v5 = UMPDOBJ::Thunk(v4, v11, 0x28u, &v9, Size), v6 = v9, v5 == -1) )
  {
LABEL_5:
    v6 = 1;
  }
  XUMPDOBJ::~XUMPDOBJ(&v10);
  return v6;
}
