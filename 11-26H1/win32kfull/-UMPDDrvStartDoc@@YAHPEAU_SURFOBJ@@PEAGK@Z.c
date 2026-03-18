/*
 * XREFs of ?UMPDDrvStartDoc@@YAHPEAU_SURFOBJ@@PEAGK@Z @ 0x140248320
 * Callers:
 *     <none>
 * Callees:
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1400D600C (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ?ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z @ 0x1400D70E4 (-ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z.c)
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1400D7A00 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1400D7B24 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z @ 0x1400D7C20 (-pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z.c)
 *     ?RestoreBitmap@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@PEAX1HH@Z @ 0x1400D9364 (-RestoreBitmap@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@PEAX1HH@Z.c)
 *     ?bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z @ 0x14021CFC0 (-bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall UMPDDrvStartDoc(struct _SURFOBJ *a1, unsigned __int16 *a2, int a3)
{
  unsigned int v3; // edi
  int v4; // r12d
  int v5; // r15d
  UMPDOBJ *v7; // rbx
  void *v8; // r13
  __int64 v9; // rsi
  __int64 v10; // rax
  unsigned int v11; // eax
  unsigned int v12; // eax
  size_t Size; // [rsp+20h] [rbp-69h]
  unsigned int v15; // [rsp+40h] [rbp-49h] BYREF
  int v16; // [rsp+44h] [rbp-45h] BYREF
  int v17; // [rsp+48h] [rbp-41h] BYREF
  int v18; // [rsp+4Ch] [rbp-3Dh]
  struct _SURFOBJ *v19; // [rsp+50h] [rbp-39h]
  void *v20; // [rsp+58h] [rbp-31h] BYREF
  void *v21; // [rsp+60h] [rbp-29h] BYREF
  UMPDOBJ *v22; // [rsp+68h] [rbp-21h] BYREF
  __int128 v23; // [rsp+70h] [rbp-19h] BYREF
  struct _SURFOBJ *v24[2]; // [rsp+80h] [rbp-9h] BYREF
  void *v25[2]; // [rsp+90h] [rbp+7h] BYREF

  v19 = a1;
  v3 = 1;
  v4 = 0;
  v15 = 1;
  v5 = 0;
  v16 = 0;
  v17 = 0;
  v18 = a3;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v22);
  v7 = v22;
  v20 = 0LL;
  v21 = 0LL;
  v8 = 0LL;
  v23 = 0LL;
  *(_OWORD *)v24 = 0LL;
  *(_OWORD *)v25 = 0LL;
  if ( !v22 )
    goto LABEL_21;
  v9 = -1LL;
  if ( !*((_BYTE *)v22 + 440) )
    goto LABEL_10;
  v15 = 56;
  if ( a2 )
  {
    v10 = -1LL;
    do
      ++v10;
    while ( a2[v10] );
    v11 = 2 * v10 + 2;
    if ( v11 + 7 >= v11 && ((v11 + 7) & 0xFFFFFFF8) + 56 >= 0x38 )
    {
      v15 = ((v11 + 7) & 0xFFFFFFF8) + 56;
      goto LABEL_9;
    }
LABEL_21:
    v3 = 0;
    goto LABEL_22;
  }
LABEL_9:
  v12 = UMPDOBJ::bThunkLargeBitmap(v22, v19, &v20, &v21, &v16, &v17, &v15);
  v4 = v16;
  v3 = v12;
  v5 = v17;
  v8 = v20;
  v15 = v12;
LABEL_10:
  if ( v3 )
  {
    LOBYTE(v23) = 0;
    DWORD1(v23) = 35;
    v24[0] = *(struct _SURFOBJ **)v7;
    v24[1] = v19;
    LODWORD(v25[1]) = v18;
    v25[0] = a2;
    if ( !(unsigned int)UMPDOBJ::pso(v7, (UMPDOBJ *)((char *)v7 + 64), &v24[1], v5) )
      goto LABEL_18;
    if ( v25[0] )
    {
      do
        ++v9;
      while ( *((_WORD *)v25[0] + v9) );
      if ( (unsigned __int64)(v9 + 1) >= 0x7FFFFFFF || !(unsigned int)UMPDOBJ::ThunkMemBlock(v7, v25, 2 * ((int)v9 + 1)) )
        goto LABEL_18;
    }
    LODWORD(Size) = 4;
    if ( (unsigned int)UMPDOBJ::Thunk(v7, &v23, 0x30u, &v15, Size) == -1 || (v3 = 1, !v15) )
LABEL_18:
      v3 = 0;
  }
  if ( v4 )
    UMPDOBJ::RestoreBitmap(v7, v19, v8, v21, Size, v5);
LABEL_22:
  XUMPDOBJ::~XUMPDOBJ(&v22);
  return v3;
}
