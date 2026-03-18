/*
 * XREFs of ?pstro@UMPDOBJ@@QEAAHPEAPEAU_STROBJ@@@Z @ 0x1400D45AC
 * Callers:
 *     ?UMPDDrvTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x1400D5BD0 (-UMPDDrvTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRU.c)
 * Callees:
 *     ?ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z @ 0x1400D70E4 (-ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z.c)
 *     ?ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXKPEAX@Z @ 0x1400D7414 (-ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXKPEAX@Z.c)
 *     ?CopyToUser@UMPDOBJ@@QEAAXPEAXQEAX_K@Z @ 0x14034A3A8 (-CopyToUser@UMPDOBJ@@QEAAXPEAXQEAX_K@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall UMPDOBJ::pstro(UMPDOBJ *this, struct _STROBJ **a2)
{
  void *v4; // rsi
  unsigned int v5; // ebx
  char *v6; // r14
  unsigned int v7; // edi
  void *v9; // [rsp+38h] [rbp-80h] BYREF
  void *v10; // [rsp+40h] [rbp-78h] BYREF
  __int64 Src; // [rsp+48h] [rbp-70h] BYREF
  _OWORD v12[2]; // [rsp+50h] [rbp-68h] BYREF
  char *v13; // [rsp+70h] [rbp-48h]
  void *v14; // [rsp+78h] [rbp-40h]

  v4 = *a2;
  v5 = 0;
  if ( *a2 )
  {
    v10 = (void *)*((_QWORD *)v4 + 5);
    if ( !v10 || (unsigned int)UMPDOBJ::ThunkMemBlock(this, &v10, 2 * *(_DWORD *)v4) )
    {
      v6 = (char *)*((_QWORD *)v4 + 4);
      v9 = v6;
      if ( !v6 )
      {
LABEL_11:
        v12[0] = *(_OWORD *)v4;
        v12[1] = *((_OWORD *)v4 + 1);
        v14 = v10;
        v13 = v6;
        LOBYTE(v5) = (unsigned int)UMPDOBJ::ThunkDDIOBJ(this, (UMPDOBJ *)((char *)this + 192), (void **)a2, 0x30u, v12) != 0;
        return v5;
      }
      if ( (unsigned int)UMPDOBJ::ThunkMemBlock(this, &v9, 24 * *(_DWORD *)v4) )
      {
        Src = 0LL;
        v7 = 0;
        v6 = (char *)v9;
        while ( v7 < *(_DWORD *)v4 )
        {
          UMPDOBJ::CopyToUser(this, &v6[16 * v7 + 8 + 8 * v7], &Src, 8uLL);
          ++v7;
        }
        goto LABEL_11;
      }
    }
    return 0LL;
  }
  return 1LL;
}
