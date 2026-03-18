/*
 * XREFs of ?UMPDDrvIcmCheckBitmapBits@@YAHPEAUDHPDEV__@@PEAXPEAU_SURFOBJ@@PEAE@Z @ 0x14034B890
 * Callers:
 *     <none>
 * Callees:
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1400D600C (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1400D785C (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1400D7A00 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1400D7B24 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z @ 0x1400D7C20 (-pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z.c)
 *     ?RestoreBitmap@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@PEAX1HH@Z @ 0x1400D9364 (-RestoreBitmap@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@PEAX1HH@Z.c)
 *     ?bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z @ 0x14021CFC0 (-bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall UMPDDrvIcmCheckBitmapBits(struct DHPDEV__ *a1, void *a2, struct _SURFOBJ *a3, unsigned __int8 *a4)
{
  int v5; // r12d
  int v6; // r15d
  void *v9; // r13
  UMPDOBJ *v10; // rbx
  __int64 v11; // rax
  unsigned int v12; // esi
  unsigned int v13; // edi
  unsigned int v14; // eax
  size_t Size; // [rsp+20h] [rbp-79h]
  unsigned int v17; // [rsp+40h] [rbp-59h] BYREF
  int v18; // [rsp+44h] [rbp-55h] BYREF
  int v19; // [rsp+48h] [rbp-51h] BYREF
  void *v20; // [rsp+50h] [rbp-49h] BYREF
  void *v21; // [rsp+58h] [rbp-41h] BYREF
  UMPDOBJ *v22; // [rsp+60h] [rbp-39h] BYREF
  unsigned __int8 *v23; // [rsp+68h] [rbp-31h]
  _DWORD v24[2]; // [rsp+70h] [rbp-29h] BYREF
  __int64 v25; // [rsp+78h] [rbp-21h]
  __int64 v26; // [rsp+80h] [rbp-19h]
  struct DHPDEV__ *v27; // [rsp+88h] [rbp-11h]
  void *v28; // [rsp+90h] [rbp-9h]
  struct _SURFOBJ *v29; // [rsp+98h] [rbp-1h] BYREF
  unsigned __int8 *v30; // [rsp+A0h] [rbp+7h]

  v23 = a4;
  *(_WORD *)((char *)v24 + 1) = 0;
  HIBYTE(v24[0]) = 0;
  v25 = 0LL;
  v5 = 0;
  v18 = 0;
  v6 = 0;
  v19 = 0;
  v17 = 1;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v22);
  v9 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  *(_WORD *)((char *)v24 + 1) = 0;
  HIBYTE(v24[0]) = 0;
  v25 = 0LL;
  v10 = v22;
  if ( !v22 )
    goto LABEL_14;
  v24[1] = 66;
  LOBYTE(v24[0]) = 0;
  v11 = *(_QWORD *)v22;
  v28 = a2;
  v12 = a3->sizlBitmap.cx * a3->sizlBitmap.cy;
  v26 = v11;
  v27 = a1;
  v13 = 1;
  v30 = v23;
  v29 = a3;
  if ( !*((_BYTE *)v22 + 440) )
    goto LABEL_6;
  if ( v12 + 7 < v12 || ((v12 + 7) & 0xFFFFFFF8) + 64 < 0x40 )
  {
LABEL_14:
    v13 = 0;
    goto LABEL_15;
  }
  v17 = ((v12 + 7) & 0xFFFFFFF8) + 64;
  v14 = UMPDOBJ::bThunkLargeBitmap(v22, a3, &v20, &v21, &v18, &v19, &v17);
  v5 = v18;
  v13 = v14;
  v6 = v19;
  v9 = v20;
  v17 = v14;
LABEL_6:
  if ( v13 )
  {
    if ( !(unsigned int)UMPDOBJ::pso(v10, (UMPDOBJ *)((char *)v10 + 64), &v29, v6)
      || (v13 = 1, (v30 = (unsigned __int8 *)UMPDOBJ::_AllocUserMem(v10, v12, 1)) == 0LL)
      || (LODWORD(Size) = 4, (unsigned int)UMPDOBJ::Thunk(v10, v24, 0x38u, &v17, Size) == -1)
      || !v17 )
    {
      v13 = 0;
    }
  }
  if ( v5 )
    UMPDOBJ::RestoreBitmap(v10, a3, v9, v21, Size, v6);
LABEL_15:
  XUMPDOBJ::~XUMPDOBJ(&v22);
  return v13;
}
