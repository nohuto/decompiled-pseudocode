/*
 * XREFs of ?hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z @ 0x140025048
 * Callers:
 *     GreCreatePatternBrushInternal @ 0x1400243A0 (GreCreatePatternBrushInternal.c)
 * Callees:
 *     ?vUnlock@NEEDGRELOCK@@QEAAXXZ @ 0x14001CDA0 (-vUnlock@NEEDGRELOCK@@QEAAXXZ.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x140026090 (--1SURFMEM@@QEAA@XZ.c)
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHH@Z @ 0x140026360 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHH@Z.c)
 *     ?vLock@NEEDGRELOCK@@QEAAXAEAVPDEVOBJ@@@Z @ 0x1400C5300 (-vLock@NEEDGRELOCK@@QEAAXAEAVPDEVOBJ@@@Z.c)
 *     ??$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x1400C66D4 (--$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 *     ??$GreReleaseSemaphoreExclusive@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x1400C77EC (--$GreReleaseSemaphoreExclusive@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall hbmCreateClone(struct SURFACE *a1, int a2, int a3)
{
  unsigned __int64 v3; // r13
  __int64 *v5; // rax
  __int64 v6; // rsi
  __int64 v7; // rcx
  bool v8; // zf
  __int64 v9; // rdi
  int (*v10)(void); // rax
  __int64 v11; // rdx
  int v12; // r8d
  __int64 v13; // rcx
  __int64 SessionState; // rax
  __int64 v15; // r14
  __int64 v16; // r15
  __int64 v17; // rcx
  unsigned int (__fastcall *v18)(__int64, unsigned __int64, _QWORD, __int64, __int64 *, __int64 *); // rax
  int v20; // eax
  __int64 v21; // rdx
  int v22; // r8d
  __int64 v23; // [rsp+50h] [rbp-39h] BYREF
  char v24; // [rsp+58h] [rbp-31h]
  int v25; // [rsp+5Ch] [rbp-2Dh]
  struct _ERESOURCE *v26; // [rsp+60h] [rbp-29h] BYREF
  int v27; // [rsp+68h] [rbp-21h] BYREF
  int v28; // [rsp+6Ch] [rbp-1Dh]
  int v29; // [rsp+70h] [rbp-19h]
  int v30; // [rsp+74h] [rbp-15h]
  __int64 v31; // [rsp+78h] [rbp-11h]
  int v32; // [rsp+80h] [rbp-9h]
  int v33; // [rsp+84h] [rbp-5h]
  __int64 v34; // [rsp+88h] [rbp-1h] BYREF
  __int64 v35; // [rsp+90h] [rbp+7h] BYREF
  __int64 v36; // [rsp+98h] [rbp+Fh] BYREF
  int v37; // [rsp+A0h] [rbp+17h]
  int v38; // [rsp+A4h] [rbp+1Bh]

  v3 = (unsigned __int64)a1 + 24;
  v27 = *((_DWORD *)a1 + 24);
  v30 = 0;
  v33 = 0;
  if ( a2 && a3 )
  {
    if ( *((_DWORD *)a1 + 14) < a2 )
      a2 = *((_DWORD *)a1 + 14);
    v20 = *((_DWORD *)a1 + 15);
    v28 = a2;
    if ( v20 < a3 )
      a3 = v20;
    v29 = a3;
  }
  else
  {
    v28 = *((_DWORD *)a1 + 14);
    v29 = *((_DWORD *)a1 + 15);
  }
  v5 = (__int64 *)*((_QWORD *)a1 + 16);
  v31 = 0LL;
  if ( v5 )
    v31 = *v5;
  v23 = 0LL;
  v6 = 0LL;
  v32 = 1;
  v24 = 0;
  v25 = 0;
  if ( (unsigned int)SURFMEM::bCreateDIB((SURFMEM *)&v23, (struct _DEVBITMAPINFO *)&v27, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0) )
  {
    v8 = (*((_DWORD *)a1 + 28) & 0x4000) == 0;
    v9 = 0LL;
    v37 = v28;
    v38 = v29;
    v34 = 0LL;
    v36 = 0LL;
    v26 = 0LL;
    if ( !v8 )
    {
      v35 = *((_QWORD *)a1 + 6);
      v9 = v35;
      NEEDGRELOCK::vLock((NEEDGRELOCK *)&v26, (struct PDEVOBJ *)&v35);
      GreAcquireSemaphore<8,PDEVOBJ>(v9);
    }
    v10 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v7) + 24) + 624LL);
    if ( v10 && v10() >= 0 )
    {
      SessionState = W32GetSessionState(v13);
      v15 = v23;
      v16 = *(_QWORD *)(SessionState + 88);
      v18 = *(unsigned int (__fastcall **)(__int64, unsigned __int64, _QWORD, __int64, __int64 *, __int64 *))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v17) + 24) + 632LL);
      if ( !v18 || !v18((v15 + 24) & -(__int64)(v15 != 0), v3 & -(__int64)(a1 != 0LL), 0LL, v16 + 4664, &v36, &v34) )
        goto LABEL_14;
      v24 |= 1u;
    }
    else
    {
      v24 |= 1u;
    }
    v6 = *(_QWORD *)(v23 + 32);
LABEL_14:
    if ( v9 )
    {
      GreReleaseSemaphoreExclusive<8,PDEVOBJ>(v9);
      NEEDGRELOCK::vUnlock(&v26, v21, v22);
    }
    NEEDGRELOCK::vUnlock(&v26, v11, v12);
  }
  SURFMEM::~SURFMEM((SURFMEM *)&v23);
  return v6;
}
