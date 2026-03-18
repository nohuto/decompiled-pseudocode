/*
 * XREFs of ?GrepGetTextFaceW@@YAHAEAVDCOBJ@@HPEAGH@Z @ 0x1400C6298
 * Callers:
 *     NtGdiGetTextFaceW @ 0x1401B7020 (NtGdiGetTextFaceW.c)
 * Callees:
 *     ?vUnlock@?$SEMOBJ@$0BB@@@QEAAXXZ @ 0x1400C6028 (-vUnlock@-$SEMOBJ@$0BB@@@QEAAXXZ.c)
 *     ?WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ @ 0x1400C6130 (-WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ.c)
 *     ??$GrepAcquireLockValidate@$0BB@@@YAXXZ @ 0x1400C693C (--$GrepAcquireLockValidate@$0BB@@@YAXXZ.c)
 *     ?BuildMapperParameters@@YAXAEAUPARAMETERS@MAPPER@@AEAVXDCOBJ@@_N2@Z @ 0x1400C6B4C (-BuildMapperParameters@@YAXAEAUPARAMETERS@MAPPER@@AEAVXDCOBJ@@_N2@Z.c)
 *     ?ppfeMapFont@LFONTCOREOBJ@@QEAAPEAVPFE@@AEAUPARAMETERS@MAPPER@@PEAKPEAU_POINTL@@1@Z @ 0x1400C6FC0 (-ppfeMapFont@LFONTCOREOBJ@@QEAAPEAVPFE@@AEAUPARAMETERS@MAPPER@@PEAKPEAU_POINTL@@1@Z.c)
 *     ??0DEVICE_PFTOBJ@@QEAA@XZ @ 0x1401C4AAC (--0DEVICE_PFTOBJ@@QEAA@XZ.c)
 *     ?bLoadFonts@DEVICE_PFTOBJ@@QEAAHPEAUHDEV__@@I@Z @ 0x140327194 (-bLoadFonts@DEVICE_PFTOBJ@@QEAAHPEAUHDEV__@@I@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall GrepGetTextFaceW(struct DCOBJ *a1, int a2, unsigned __int16 *a3, int a4)
{
  __int64 v4; // rax
  int v6; // r15d
  HDEV HDEV; // rsi
  Gre::Base *v8; // rcx
  __int64 v9; // rbx
  struct Gre::Base::SESSION_GLOBALS *v10; // rax
  __int64 v11; // r8
  struct Gre::Base::SESSION_GLOBALS *v12; // r13
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rbx
  bool v19; // zf
  __int64 v20; // r14
  __int64 v21; // rdx
  __int64 v22; // r8
  struct PFE *v23; // r8
  int v24; // eax
  __int64 v25; // rax
  const wchar_t *v26; // r12
  const wchar_t *v27; // rdi
  void *v28; // r13
  int v29; // ecx
  __int64 v30; // rsi
  struct Gre::Base::SESSION_GLOBALS *v31; // rax
  unsigned int v33; // ebx
  const wchar_t *v34; // r15
  int v35; // r12d
  __int64 v36; // rax
  __int64 v37; // rsi
  Gre::Base *v38; // rcx
  struct Gre::Base::SESSION_GLOBALS *v39; // rax
  int v40; // edi
  int v41; // edi
  int v42; // edi
  const wchar_t *i; // rbx
  __int64 v44; // rax
  unsigned int v45; // [rsp+30h] [rbp-99h] BYREF
  int v46; // [rsp+34h] [rbp-95h]
  int v47; // [rsp+38h] [rbp-91h]
  __int64 v48; // [rsp+40h] [rbp-89h] BYREF
  __int64 v49; // [rsp+48h] [rbp-81h]
  unsigned int v50; // [rsp+50h] [rbp-79h] BYREF
  HDEV v51; // [rsp+58h] [rbp-71h] BYREF
  HSEMAPHORE v52; // [rsp+60h] [rbp-69h] BYREF
  struct _POINTL v53; // [rsp+68h] [rbp-61h] BYREF
  void *v54; // [rsp+70h] [rbp-59h]
  _BYTE v55[96]; // [rsp+80h] [rbp-49h] BYREF

  v4 = *(_QWORD *)a1;
  v47 = a4;
  v54 = a3;
  v6 = 0;
  v46 = a2;
  v51 = *(HDEV *)(v4 + 48);
  if ( ((_DWORD)v51[10] & 0x40) == 0 )
  {
    v33 = PDEVOBJ::cFonts((PDEVOBJ *)&v51);
    if ( v33 )
    {
      DEVICE_PFTOBJ::DEVICE_PFTOBJ((DEVICE_PFTOBJ *)&v48);
      DEVICE_PFTOBJ::bLoadFonts((DEVICE_PFTOBJ *)&v48, v51, v33);
    }
  }
  HDEV = v51;
  v8 = *(Gre::Base **)(*(_QWORD *)a1 + 976LL);
  v9 = *((_QWORD *)v8 + 37);
  v10 = Gre::Base::Globals(v8);
  LOBYTE(v11) = 10;
  v12 = v10;
  v13 = HmgShareLock(v10, v9, v11, 1LL);
  v16 = v13 + 24;
  v17 = -v13;
  v18 = v16 & -(__int64)(v17 != 0);
  v48 = v18;
  if ( v18 )
  {
    v19 = (*(_BYTE *)((v16 & -(__int64)(v17 != 0)) + 4) & 1) == 0;
    v20 = v18 - 24;
    v49 = v18 - 24;
    if ( !v19 )
    {
      v40 = *(_DWORD *)v18;
      DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v12, (struct LFONT *)(v18 - 24));
      v20 = 0LL;
      v49 = 0LL;
      if ( HDEV || (HDEV = (HDEV)UserGetHDEV()) != 0LL )
      {
        v41 = v40 - 4;
        if ( v41 )
        {
          v42 = v41 - 1;
          if ( v42 )
          {
            if ( v42 != 1 )
            {
LABEL_46:
              v16 = v20 + 24;
              v18 = (v20 + 24) & -(__int64)(v20 != 0);
              v48 = v18;
              goto LABEL_4;
            }
            v14 = *((_QWORD *)HDEV + 181);
          }
          else
          {
            v14 = *((_QWORD *)HDEV + 180);
          }
        }
        else
        {
          v14 = *((_QWORD *)HDEV + 179);
        }
        if ( v14 )
        {
          LOBYTE(v15) = 10;
          v20 = HmgShareLock(v12, v14, v15, 1LL);
          v49 = v20;
        }
        goto LABEL_46;
      }
    }
  }
  else
  {
    v20 = 0LL;
    v49 = 0LL;
  }
LABEL_4:
  if ( v18 && UmfdHostLifeTimeManager::WaitForSessionRasterizerInitialization(v16, v14, v15) >= 0 )
  {
    v52 = *(HSEMAPHORE *)(*(_QWORD *)(W32GetSessionState(v16, v21, v22) + 96) + 20320LL);
    GreAcquireSemaphoreInternal(v52);
    GrepAcquireLockValidate<17>();
    v50 = 0;
    v45 = 0;
    v53 = 0LL;
    memset_0(v55, 0, sizeof(v55));
    BuildMapperParameters((struct MAPPER::PARAMETERS *)v55, a1, (*(_DWORD *)(v20 + 28) & 2) != 0, 0);
    v23 = LFONTCOREOBJ::ppfeMapFont((LFONTCOREOBJ *)&v48, (struct MAPPER::PARAMETERS *)v55, &v50, &v53, &v45);
    if ( !v23 )
    {
      SEMOBJ<17>::vUnlock(&v52);
      v39 = Gre::Base::Globals(v38);
      DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v39, (struct LFONT *)v20);
      return 0LL;
    }
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 4LL) = v45 >> 8;
    v24 = 0;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 152LL) &= ~0x10u;
    if ( (v45 & 2) != 0 && (v27 = (const wchar_t *)(v18 + 280), *(_WORD *)(v18 + 280)) )
    {
      v26 = (const wchar_t *)(v18 + 280);
    }
    else
    {
      v25 = *((_QWORD *)v23 + 4);
      v26 = (const wchar_t *)(v18 + 280);
      v27 = (const wchar_t *)(v25 + *(int *)(v25 + 8));
      v24 = (*(_DWORD *)(v25 + 48) >> 27) & 1;
    }
    v28 = v54;
    if ( v54 )
    {
      v29 = v46;
      if ( v46 >= 1 )
      {
        v30 = -1LL;
        if ( v47 && v24 )
        {
          v34 = v27;
          v35 = 0;
          if ( *v27 )
          {
            do
            {
              if ( !_wcsicmp((const wchar_t *)(v18 + 280), v34) )
                break;
              v36 = -1LL;
              do
                ++v36;
              while ( v34[v36] );
              v35 += v36 + 1;
              v34 = &v27[v35];
            }
            while ( *v34 );
            v29 = v46;
          }
          if ( *v34 )
            v27 = v34;
        }
        do
          ++v30;
        while ( v27[v30] );
        v6 = v30 + 1;
        if ( v29 < (int)v30 + 1 )
          v6 = v29;
        memmove(v28, v27, 2LL * v6);
        *((_WORD *)v28 + v6 - 1) = 0;
      }
    }
    else
    {
      v37 = -1LL;
      if ( v47 && v24 )
      {
        for ( i = v27; *i; i = &v27[v6] )
        {
          if ( !_wcsicmp(v26, i) )
            break;
          v44 = -1LL;
          do
            ++v44;
          while ( i[v44] );
          v6 += v44 + 1;
        }
        if ( *i )
          v27 = i;
      }
      do
        ++v37;
      while ( v27[v37] );
      v6 = v37 + 1;
    }
    SEMOBJ<17>::vUnlock(&v52);
  }
  if ( v20 )
  {
    v31 = Gre::Base::Globals((Gre::Base *)v16);
    DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v31, (struct LFONT *)v20);
  }
  return (unsigned int)v6;
}
