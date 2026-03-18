/*
 * XREFs of ?GrepResetDC@@YAHAEAVXDCOBJ@@PEAU_devicemodeW@@PEAHPEAU_DRIVER_INFO_2W@@PEAX@Z @ 0x140155A74
 * Callers:
 *     NtGdiResetDC @ 0x1401558D0 (NtGdiResetDC.c)
 * Callees:
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1400150C0 (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400AFE30 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??$GrepReleaseLockValidate@$0BE@@@YAXXZ @ 0x1400C69D0 (--$GrepReleaseLockValidate@$0BE@@@YAXXZ.c)
 *     ??$GrepAcquireLockValidate@$0BE@@@YAXXZ @ 0x1400C6AC0 (--$GrepAcquireLockValidate@$0BE@@@YAXXZ.c)
 *     ?vUnlock@DCOBJ@@QEAAXXZ @ 0x140155DFC (-vUnlock@DCOBJ@@QEAAXXZ.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GrepResetDC(DC **this, struct _devicemodeW *a2, int *a3, struct _DRIVER_INFO_2W *a4, void *a5)
{
  int v6; // r12d
  DC *v7; // rcx
  HDC v8; // r14
  unsigned int v9; // edi
  HDC v11; // r15
  bool v12; // zf
  int v13; // ebx
  DC *v14; // rcx
  __int64 v15; // rbx
  int v16; // r15d
  HDC v17; // rax
  DC *v18; // rdx
  Gre::Base *v19; // rcx
  void (__fastcall *v20)(_QWORD, _QWORD); // rax
  HSEMAPHORE v21; // rbx
  DC *v22; // rcx
  __int64 v23; // r8
  HDC v24; // rdx
  __int64 v25; // rax
  void (__fastcall *v26)(__int64, _QWORD, _QWORD); // rax
  int v28; // [rsp+28h] [rbp-81h]
  HDC v29[2]; // [rsp+48h] [rbp-61h] BYREF
  DC *v30[20]; // [rsp+58h] [rbp-51h] BYREF
  int v31; // [rsp+108h] [rbp+5Fh]

  v6 = 0;
  v7 = *this;
  v8 = 0LL;
  v9 = 0;
  v11 = *(HDC *)v7;
  v12 = (*((_DWORD *)v7 + 9) & 0x800) == 0;
  v13 = *((_DWORD *)v7 + 9) & 0x800;
  v31 = v13;
  v29[0] = *(HDC *)v7;
  if ( !v12 )
    DC::bMakeInfoDC(v7, 0);
  v14 = *this;
  if ( (*((_DWORD *)*this + 9) & 0x100) == 0 && *((_DWORD *)v14 + 8) != 1 )
  {
    v15 = *((_QWORD *)v14 + 6);
    if ( (*(_DWORD *)(v15 + 40) & 0x80u) != 0 )
    {
      v16 = *((_DWORD *)v14 + 27);
      LOBYTE(v6) = *((_QWORD *)v14 + 62) != 0LL;
      if ( XDCOBJ::bCleanDC((XDCOBJ *)this, 0)
        && *(_DWORD *)(v15 + 8) == 1
        && (v17 = (HDC)hdcOpenDCW(&pszFormat, a2, 0LL, 0LL, *(_QWORD *)(v15 + 2552), a4, a5, 0), (v8 = v17) != 0LL) )
      {
        *(_QWORD *)(v15 + 2552) = 0LL;
        APIDCOBJ::APIDCOBJ((APIDCOBJ *)v30, v17);
        v18 = v30[0];
        if ( v30[0] )
        {
          if ( v16 > 0 )
          {
            *((_DWORD *)v30[0] + 27) = *((_DWORD *)v30[0] + 26);
            v18 = v30[0];
          }
          *((_QWORD *)v18 + 259) = *((_QWORD *)*this + 259);
          *((_QWORD *)*this + 259) = 0LL;
          v19 = (Gre::Base *)*((_QWORD *)*this + 260);
          *((_QWORD *)v30[0] + 260) = v19;
          *((_QWORD *)*this + 260) = 0LL;
          v20 = *(void (__fastcall **)(_QWORD, _QWORD))(v15 + 2736);
          if ( v20 )
            v20(*(_QWORD *)(v15 + 1784), *(_QWORD *)(*((_QWORD *)v30[0] + 6) + 1784LL));
          v21 = (HSEMAPHORE)(*(_QWORD *)Gre::Base::Globals(v19) + 1512LL);
          GreAcquireSemaphoreInternal(v21);
          GrepAcquireLockValidate<20>();
          v11 = v29[0];
          LOBYTE(v28) = 1;
          HmgSwapLockedHandleContents(v29[0], 0LL, v8, 0LL, v28);
          if ( v21 )
          {
            EtwTraceGreLockReleaseSemaphore(L"Hmgr", v21);
            GrepReleaseLockValidate<20>();
            GreReleaseSemaphoreExclusiveInternal(v21);
          }
          v9 = 1;
        }
        else
        {
          EngSetLastError(6u);
          v11 = v29[0];
        }
        APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v30);
      }
      else
      {
        v11 = v29[0];
      }
    }
    v13 = v31;
  }
  DCOBJ::vUnlock((DCOBJ *)this);
  if ( v9 )
  {
    GrepDeleteDC(v8, 0x400000LL);
    APIDCOBJ::APIDCOBJ((APIDCOBJ *)v30, v11);
    v22 = v30[0];
    if ( !v30[0] )
    {
      EngSetLastError(6u);
LABEL_24:
      v9 = 0;
LABEL_37:
      APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v30);
      return v9;
    }
    v29[0] = *((HDC *)v30[0] + 6);
    if ( v6 )
    {
      if ( !PDEVOBJ::bMakeSurface((PDEVOBJ *)v29, 0LL) )
        goto LABEL_24;
      DC::pSurface(v30[0], *((struct SURFACE **)v29[0] + 318), v23);
      v24 = v29[0];
      v25 = *((_QWORD *)v29[0] + 318);
      v12 = (*(_DWORD *)(v25 + 112) & 0x2000000) == 0;
      *a3 = *(_DWORD *)(v25 + 112) & 0x2000000;
      if ( !v12 )
        *((_QWORD *)v30[0] + 64) = *(_QWORD *)(*((_QWORD *)v24 + 318) + 56LL);
      DC::bSetDefaultRegion(v30[0]);
      v26 = (void (__fastcall *)(__int64, _QWORD, _QWORD))*((_QWORD *)v29[0] + 370);
      if ( v26 )
        v26((*((_QWORD *)v29[0] + 318) + 24LL) & -(__int64)(*((_QWORD *)v29[0] + 318) != 0LL), 0LL, 0LL);
      else
        v9 = 0;
      if ( !v9 )
        goto LABEL_37;
      v22 = v30[0];
    }
    else
    {
      *a3 = 0;
    }
    if ( v13 )
      DC::bMakeInfoDC(v22, 1);
    goto LABEL_37;
  }
  return v9;
}
