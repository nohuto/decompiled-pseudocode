/*
 * XREFs of ?hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z @ 0x140087050
 * Callers:
 *     GreCreatePatternBrushInternal @ 0x140086E10 (GreCreatePatternBrushInternal.c)
 * Callees:
 *     ?vUnlock@NEEDGRELOCK@@QEAAXXZ @ 0x140045DD0 (-vUnlock@NEEDGRELOCK@@QEAAXXZ.c)
 *     ?vLock@NEEDGRELOCK@@QEAAXAEAVPDEVOBJ@@@Z @ 0x140086540 (-vLock@NEEDGRELOCK@@QEAAXAEAVPDEVOBJ@@@Z.c)
 *     ??$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x14008675C (--$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$07P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140086CA8 (--$GreReleaseSemaphoreCommon@$07P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x14008C0E0 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x14008CAD0 (--1SURFMEM@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall hbmCreateClone(struct SURFACE *a1, int a2, int a3)
{
  int v3; // eax
  __int64 *v5; // rax
  __int64 v6; // rsi
  bool v7; // zf
  __int64 v8; // rdi
  int (*v9)(void); // rax
  __int64 v10; // rcx
  __int64 SessionState; // rax
  __int64 v12; // r14
  __int64 v13; // r15
  unsigned int (__fastcall *v14)(__int64, unsigned __int64, _QWORD, __int64, __int64 *, __int64 *); // r10
  int v16; // eax
  __int64 v17; // [rsp+60h] [rbp-39h] BYREF
  char v18; // [rsp+68h] [rbp-31h]
  int v19; // [rsp+6Ch] [rbp-2Dh]
  struct _ERESOURCE *v20; // [rsp+70h] [rbp-29h] BYREF
  int v21; // [rsp+78h] [rbp-21h] BYREF
  int v22; // [rsp+7Ch] [rbp-1Dh]
  int v23; // [rsp+80h] [rbp-19h]
  int v24; // [rsp+84h] [rbp-15h]
  __int64 v25; // [rsp+88h] [rbp-11h]
  int v26; // [rsp+90h] [rbp-9h]
  int v27; // [rsp+94h] [rbp-5h]
  __int64 v28; // [rsp+98h] [rbp-1h] BYREF
  __int64 v29; // [rsp+A0h] [rbp+7h] BYREF
  __int64 v30; // [rsp+A8h] [rbp+Fh] BYREF
  int v31; // [rsp+B0h] [rbp+17h]
  int v32; // [rsp+B4h] [rbp+1Bh]

  v3 = *((_DWORD *)a1 + 24);
  v24 = 0;
  v27 = 0;
  v21 = v3;
  if ( a2 && a3 )
  {
    if ( *((_DWORD *)a1 + 14) < a2 )
      a2 = *((_DWORD *)a1 + 14);
    v16 = *((_DWORD *)a1 + 15);
    v22 = a2;
    if ( v16 < a3 )
      a3 = v16;
    v23 = a3;
  }
  else
  {
    v22 = *((_DWORD *)a1 + 14);
    v23 = *((_DWORD *)a1 + 15);
  }
  v5 = (__int64 *)*((_QWORD *)a1 + 16);
  v25 = 0LL;
  if ( v5 )
    v25 = *v5;
  v6 = 0LL;
  v26 = 1;
  v17 = 0LL;
  v18 = 0;
  v19 = 0;
  if ( (unsigned int)SURFMEM::bCreateDIB(
                       (SURFMEM *)&v17,
                       (struct _DEVBITMAPINFO *)&v21,
                       0LL,
                       0LL,
                       0,
                       0LL,
                       0LL,
                       0,
                       1,
                       0,
                       0) )
  {
    v7 = (*((_DWORD *)a1 + 28) & 0x4000) == 0;
    v8 = 0LL;
    v31 = v22;
    v32 = v23;
    v28 = 0LL;
    v30 = 0LL;
    v20 = 0LL;
    if ( !v7 )
    {
      v29 = *((_QWORD *)a1 + 6);
      v8 = v29;
      NEEDGRELOCK::vLock((NEEDGRELOCK *)&v20, (struct PDEVOBJ *)&v29);
      GreAcquireSemaphore<8,PDEVOBJ>(v8);
    }
    v9 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 624LL);
    if ( !v9
      || v9() < 0
      || (SessionState = W32GetSessionState(v10),
          v12 = v17,
          v13 = *(_QWORD *)(SessionState + 88),
          (v14 = *(unsigned int (__fastcall **)(__int64, unsigned __int64, _QWORD, __int64, __int64 *, __int64 *))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 632LL)) != 0LL)
      && v14(
           (v12 + 24) & -(__int64)(v12 != 0),
           ((unsigned __int64)a1 + 24) & -(__int64)(a1 != 0LL),
           0LL,
           v13 + 4552,
           &v30,
           &v28) )
    {
      v18 |= 1u;
      v6 = *(_QWORD *)(v17 + 32);
    }
    if ( v8 )
    {
      GreReleaseSemaphoreCommon<8,void (*)(HSEMAPHORE__ *)>(
        (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
        *(_QWORD *)(v8 + 48));
      NEEDGRELOCK::vUnlock(&v20);
    }
    NEEDGRELOCK::vUnlock(&v20);
  }
  SURFMEM::~SURFMEM((SURFMEM *)&v17);
  return v6;
}
