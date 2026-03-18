/*
 * XREFs of ?GrepGetCharSet@@YAKAEAVDCOBJ@@@Z @ 0x1400FE5E8
 * Callers:
 *     ?GrepGetTextCharsetInfo@@YAHAEAVDCOBJ@@PEAUtagFONTSIGNATURE@@K@Z @ 0x1400FE144 (-GrepGetTextCharsetInfo@@YAHAEAVDCOBJ@@PEAUtagFONTSIGNATURE@@K@Z.c)
 *     GreGetCharSet @ 0x1400FE588 (GreGetCharSet.c)
 * Callees:
 *     ?vUnlock@?$SEMOBJ@$0BB@@@QEAAXXZ @ 0x1400C6028 (-vUnlock@-$SEMOBJ@$0BB@@@QEAAXXZ.c)
 *     ?WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ @ 0x1400C6130 (-WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ.c)
 *     ?BuildMapperParameters@@YAXAEAUPARAMETERS@MAPPER@@AEAVXDCOBJ@@_N2@Z @ 0x1400C6B4C (-BuildMapperParameters@@YAXAEAUPARAMETERS@MAPPER@@AEAVXDCOBJ@@_N2@Z.c)
 *     ?ppfeMapFont@LFONTCOREOBJ@@QEAAPEAVPFE@@AEAUPARAMETERS@MAPPER@@PEAKPEAU_POINTL@@1@Z @ 0x1400C6FC0 (-ppfeMapFont@LFONTCOREOBJ@@QEAAPEAVPFE@@AEAUPARAMETERS@MAPPER@@PEAKPEAU_POINTL@@1@Z.c)
 *     ??$GreAcquireSemaphoreCommon@$0BB@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400FE8E0 (--$GreAcquireSemaphoreCommon@$0BB@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0DEVICE_PFTOBJ@@QEAA@XZ @ 0x1401C4AAC (--0DEVICE_PFTOBJ@@QEAA@XZ.c)
 *     ?bLoadFonts@DEVICE_PFTOBJ@@QEAAHPEAUHDEV__@@I@Z @ 0x140327194 (-bLoadFonts@DEVICE_PFTOBJ@@QEAAHPEAUHDEV__@@I@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall GrepGetCharSet(struct DCOBJ *a1)
{
  __int64 v2; // rcx
  HDEV HDEV; // r14
  Gre::Base *v5; // rcx
  __int64 v6; // rbx
  struct Gre::Base::SESSION_GLOBALS *v7; // rax
  __int64 v8; // r8
  struct Gre::Base::SESSION_GLOBALS *v9; // r12
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rcx
  __int64 v14; // rax
  _DWORD *v15; // rbx
  bool v16; // zf
  __int64 v17; // rdi
  __int64 v18; // rdx
  __int64 v19; // r8
  Gre::Base *v20; // rcx
  struct Gre::Base::SESSION_GLOBALS *v21; // rax
  struct Gre::Base::SESSION_GLOBALS *v22; // rax
  unsigned int v23; // ebx
  int v24; // esi
  int v25; // esi
  int v26; // esi
  unsigned int v27; // [rsp+30h] [rbp-79h] BYREF
  _DWORD *v28; // [rsp+38h] [rbp-71h] BYREF
  _DWORD *v29; // [rsp+40h] [rbp-69h]
  unsigned int v30; // [rsp+48h] [rbp-61h] BYREF
  HDEV v31; // [rsp+50h] [rbp-59h] BYREF
  struct _POINTL v32; // [rsp+58h] [rbp-51h] BYREF
  HSEMAPHORE v33; // [rsp+60h] [rbp-49h] BYREF
  _BYTE v34[96]; // [rsp+70h] [rbp-39h] BYREF

  v30 = 0;
  v2 = *(_QWORD *)a1;
  v32 = 0LL;
  v27 = 0;
  if ( (*(_DWORD *)(*(_QWORD *)(v2 + 976) + 152LL) & 0x10) == 0 )
    return *(unsigned int *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 4LL);
  v31 = *(HDEV *)(v2 + 48);
  if ( ((_DWORD)v31[10] & 0x40) == 0 )
  {
    v23 = PDEVOBJ::cFonts((PDEVOBJ *)&v31);
    if ( v23 )
    {
      DEVICE_PFTOBJ::DEVICE_PFTOBJ((DEVICE_PFTOBJ *)&v28);
      DEVICE_PFTOBJ::bLoadFonts((DEVICE_PFTOBJ *)&v28, v31, v23);
    }
  }
  HDEV = v31;
  v5 = *(Gre::Base **)(*(_QWORD *)a1 + 976LL);
  v6 = *((_QWORD *)v5 + 37);
  v7 = Gre::Base::Globals(v5);
  LOBYTE(v8) = 10;
  v9 = v7;
  v10 = HmgShareLock(v7, v6, v8, 1LL);
  v13 = v10 + 24;
  v14 = -v10;
  v15 = (_DWORD *)(v13 & -(__int64)(v14 != 0));
  v28 = v15;
  if ( v15 )
  {
    v16 = (*(_BYTE *)((v13 & -(__int64)(v14 != 0)) + 4) & 1) == 0;
    v17 = (__int64)(v15 - 6);
    v29 = v15 - 6;
    if ( !v16 )
    {
      v24 = *v15;
      DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v9, (struct LFONT *)(v15 - 6));
      v17 = 0LL;
      v29 = 0LL;
      if ( HDEV || (HDEV = (HDEV)UserGetHDEV()) != 0LL )
      {
        v25 = v24 - 4;
        if ( v25 )
        {
          v26 = v25 - 1;
          if ( v26 )
          {
            if ( v26 != 1 )
            {
LABEL_24:
              v13 = v17 + 24;
              v15 = (_DWORD *)((v17 + 24) & -(__int64)(v17 != 0));
              v28 = v15;
              goto LABEL_6;
            }
            v11 = *((_QWORD *)HDEV + 181);
          }
          else
          {
            v11 = *((_QWORD *)HDEV + 180);
          }
        }
        else
        {
          v11 = *((_QWORD *)HDEV + 179);
        }
        if ( v11 )
        {
          LOBYTE(v12) = 10;
          v17 = HmgShareLock(v9, v11, v12, 1LL);
          v29 = (_DWORD *)v17;
        }
        goto LABEL_24;
      }
    }
  }
  else
  {
    v17 = 0LL;
    v29 = 0LL;
  }
LABEL_6:
  if ( v15 && UmfdHostLifeTimeManager::WaitForSessionRasterizerInitialization(v13, v11, v12) >= 0 )
  {
    v33 = *(HSEMAPHORE *)(*(_QWORD *)(W32GetSessionState(v13, v18, v19) + 96) + 20320LL);
    GreAcquireSemaphoreCommon<17,void (*)(HSEMAPHORE__ *)>(GreAcquireSemaphoreInternal);
    memset_0(v34, 0, sizeof(v34));
    BuildMapperParameters((struct MAPPER::PARAMETERS *)v34, a1, (*(_DWORD *)(v17 + 28) & 2) != 0, 0);
    if ( LFONTCOREOBJ::ppfeMapFont((LFONTCOREOBJ *)&v28, (struct MAPPER::PARAMETERS *)v34, &v30, &v32, &v27) )
    {
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 4LL) = v27 >> 8;
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 152LL) &= ~0x10u;
    }
    SEMOBJ<17>::vUnlock(&v33);
    v21 = Gre::Base::Globals(v20);
    DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v21, (struct LFONT *)v17);
    return *(unsigned int *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 4LL);
  }
  if ( v17 )
  {
    v22 = Gre::Base::Globals((Gre::Base *)v13);
    DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v22, (struct LFONT *)v17);
  }
  return 0x10000LL;
}
