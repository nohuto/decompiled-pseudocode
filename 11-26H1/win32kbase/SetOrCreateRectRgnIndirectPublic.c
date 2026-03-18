/*
 * XREFs of SetOrCreateRectRgnIndirectPublic @ 0x14001DA20
 * Callers:
 *     ?zzzUpdateUserScreen@@YAJXZ @ 0x14007FA6C (-zzzUpdateUserScreen@@YAJXZ.c)
 * Callees:
 *     ?set_sizeScan@REGION_CORE@@IEAAXK@Z @ 0x14000F730 (-set_sizeScan@REGION_CORE@@IEAAXK@Z.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x14001AE40 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?vUnlock@?$SEMOBJ@$0BE@@@QEAAXXZ @ 0x14001AEB0 (-vUnlock@-$SEMOBJ@$0BE@@@QEAAXXZ.c)
 *     ??$GreAcquireSemaphoreCommon@$0BE@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14001B5C0 (--$GreAcquireSemaphoreCommon@$0BE@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x14001C690 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x14001E0D0 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z.c)
 *     ?UpdateUserRgn@RGNOBJ@@QEAAXXZ @ 0x14001E310 (-UpdateUserRgn@RGNOBJ@@QEAAXXZ.c)
 *     GreCreateRectRgnIndirect @ 0x14001E880 (GreCreateRectRgnIndirect.c)
 *     ??0HANDLELOCK@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@W4HandleLockOptions@@@Z @ 0x14001F150 (--0HANDLELOCK@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@W4HandleLockOptions@@@Z.c)
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x14001F3A0 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?RgnCaptureLiveMemoryDumpOnZeroSizedScan@@YAXAEBVBaseRustExports@@PEBVREGION_CORE@@@Z @ 0x14001FB50 (-RgnCaptureLiveMemoryDumpOnZeroSizedScan@@YAXAEBVBaseRustExports@@PEBVREGION_CORE@@@Z.c)
 *     ?get_sizeScan@REGION_CORE@@IEBAKXZ @ 0x140021850 (-get_sizeScan@REGION_CORE@@IEBAKXZ.c)
 *     HmgDecProcessHandleCount @ 0x140056DC4 (HmgDecProcessHandleCount.c)
 *     ?get_pScan@REGION_CORE@@IEAAPEAVSCAN@@XZ @ 0x1400A8710 (-get_pScan@REGION_CORE@@IEAAPEAVSCAN@@XZ.c)
 *     HmgIncProcessHandleCount @ 0x1400C5A0C (HmgIncProcessHandleCount.c)
 *     ?vSet@RGNCOREOBJ@@QEAAXXZ @ 0x1400FD0A0 (-vSet@RGNCOREOBJ@@QEAAXXZ.c)
 *     ?Pid@HANDLELOCK@@QEAAXK@Z @ 0x1400FEB6C (-Pid@HANDLELOCK@@QEAAXK@Z.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall SetOrCreateRectRgnIndirectPublic(HRGN *a1, unsigned int *a2)
{
  unsigned int v2; // ebx
  unsigned int v4; // edi
  unsigned int v5; // esi
  unsigned int v6; // r14d
  unsigned int v7; // r15d
  __int64 v8; // rdx
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 v11; // rcx
  _QWORD **v12; // rax
  const struct REGION_CORE *v14; // rdi
  const struct BaseRustExports *v15; // rbx
  __int64 RectRgnIndirect; // rax
  __int64 v17; // rsi
  __int64 v18; // rcx
  _QWORD *v19; // rbx
  __int64 v20; // rcx
  unsigned int *v21; // rdi
  __int64 v22; // rdx
  int v23; // r8d
  __int64 v24; // rsi
  unsigned int v25; // edi
  REGION_CORE *v26; // r14
  struct SCAN *pScan; // rax
  _DWORD *v28; // r8
  struct SCAN *v29; // rax
  char *v30; // rdx
  __int64 v31; // rax
  HSEMAPHORE v32; // [rsp+28h] [rbp-39h] BYREF
  unsigned int *v33; // [rsp+30h] [rbp-31h] BYREF
  int v34; // [rsp+38h] [rbp-29h]
  char v35; // [rsp+3Dh] [rbp-24h]
  __int64 v36; // [rsp+40h] [rbp-21h]
  __int64 v37; // [rsp+48h] [rbp-19h] BYREF
  __int64 v38; // [rsp+50h] [rbp-11h] BYREF
  _QWORD **v39; // [rsp+58h] [rbp-9h]
  int v40; // [rsp+78h] [rbp+17h]
  __int128 v41; // [rsp+80h] [rbp+1Fh] BYREF

  v2 = 0;
  if ( *a1 )
  {
    v4 = a2[3];
    v5 = a2[2];
    v6 = a2[1];
    v7 = *a2;
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)&v37, *a1, 0, 0);
    v8 = v37;
    if ( v37 )
    {
      *(_QWORD *)&v41 = __PAIR64__(v6, v7);
      v9 = v7;
      *((_QWORD *)&v41 + 1) = __PAIR64__(v4, v5);
      v10 = v6;
      if ( ((v7 & 0xF8000000) == 0 || (v7 & 0xF8000000) == -134217728)
        && ((v4 & 0xF8000000) == 0 || (v4 & 0xF8000000) == 0xF8000000)
        && ((v5 & 0xF8000000) == 0 || (v5 & 0xF8000000) == 0xF8000000)
        && (((v6 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0 )
      {
        if ( (int)v7 > (int)v5 )
        {
          v9 = v5;
          LODWORD(v41) = v5;
          v5 = v7;
          DWORD2(v41) = v7;
        }
        if ( (int)v6 > (int)v4 )
        {
          v10 = v4;
          DWORD1(v41) = v4;
          v4 = v6;
          HIDWORD(v41) = v6;
        }
        if ( WPP_MAIN_CB.Dpc.DeferredContext )
        {
          v14 = (const struct REGION_CORE *)(v37 + 24);
          v15 = *(const struct BaseRustExports **)WPP_MAIN_CB.Dpc.DeferredContext;
          (*(void (__fastcall **)(__int64, __int128 *, __int64, __int64))(*(_QWORD *)WPP_MAIN_CB.Dpc.DeferredContext
                                                                        + 136LL))(
            v37 + 24,
            &v41,
            v10,
            v9);
          RgnCaptureLiveMemoryDumpOnZeroSizedScan(v15, v14);
        }
        else
        {
          v26 = (REGION_CORE *)(v37 + 24);
          v32 = (HSEMAPHORE)(v37 + 24);
          if ( (_DWORD)v9 == v5 || (_DWORD)v10 == v4 )
          {
            RGNCOREOBJ::vSet((RGNCOREOBJ *)&v32);
          }
          else
          {
            *(_OWORD *)(v37 + 52) = v41;
            if ( REGION_CORE::get_sizeScan(v26) == 56 )
            {
              pScan = REGION_CORE::get_pScan(v26);
              *((_DWORD *)pScan + 2) = DWORD1(v41);
              v28 = (_DWORD *)((char *)pScan + (unsigned int)(4 * *(_DWORD *)pScan + 16));
              v28[1] = DWORD1(v41);
              v28[2] = HIDWORD(v41);
              v28[3] = v41;
              v28[4] = DWORD2(v41);
              *(_DWORD *)((char *)v28 + (unsigned int)(4 * *v28 + 16) + 4) = HIDWORD(v41);
            }
            else
            {
              REGION_CORE::set_sizeScan(v26, 0x38u);
              *((_DWORD *)v26 + 6) = 3;
              v29 = REGION_CORE::get_pScan(v26);
              *(_DWORD *)v29 = 0;
              v30 = (char *)v29 + 16;
              *((_DWORD *)v29 + 1) = 0x80000000;
              *((_DWORD *)v29 + 2) = DWORD1(v41);
              *((_DWORD *)v29 + 3) = 0;
              *((_DWORD *)v29 + 4) = 2;
              *((_DWORD *)v29 + 5) = DWORD1(v41);
              *((_DWORD *)v29 + 6) = HIDWORD(v41);
              *((_DWORD *)v29 + 7) = v41;
              *((_DWORD *)v29 + 8) = DWORD2(v41);
              *((_DWORD *)v29 + 9) = 2;
              v31 = (unsigned int)(4 * *((_DWORD *)v29 + 4) + 16);
              *(_DWORD *)&v30[v31] = 0;
              *(_DWORD *)&v30[(unsigned int)v31 + 4] = HIDWORD(v41);
              *(_QWORD *)&v30[(unsigned int)v31 + 8] = 0x7FFFFFFFLL;
            }
          }
        }
        v8 = v37;
        v2 = 1;
      }
    }
    if ( !v40 )
    {
      RGNOBJ::UpdateUserRgn((RGNOBJ *)&v37);
      v8 = v37;
    }
    if ( v8 )
      _InterlockedDecrement16((volatile signed __int16 *)(v8 + 12));
    v11 = v38;
    v12 = v39;
    if ( *(__int64 **)(v38 + 8) != &v38 || *v39 != &v38 )
      __fastfail(3u);
    *v39 = (_QWORD *)v38;
    *(_QWORD *)(v11 + 8) = v12;
  }
  else
  {
    RectRgnIndirect = GreCreateRectRgnIndirect(a2);
    *a1 = (HRGN)RectRgnIndirect;
    v17 = RectRgnIndirect;
    if ( RectRgnIndirect )
    {
      PsGetCurrentProcessId();
      v19 = *(_QWORD **)(W32GetSessionState(v18) + 88);
      v32 = (HSEMAPHORE)(*v19 + 1512LL);
      GreAcquireSemaphoreCommon<20,void (*)(HSEMAPHORE__ *)>(v20, v32);
      HANDLELOCK::HANDLELOCK(&v33, v19, v17, 1LL);
      if ( v34 )
      {
        v21 = v33;
        if ( *((_BYTE *)v33 + 14) == 4
          && *((_WORD *)v33 + 6) == WORD1(v17)
          && ((v24 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v36 + 8) + 96LL))(
                       *(_QWORD *)(v36 + 8),
                       *v33),
               GreGetCurrentThread(),
               !*(_WORD *)(v24 + 12))
           || *(struct _KTHREAD **)(v24 + 16) == KeGetCurrentThread()) )
        {
          v25 = v21[2] & 0xFFFFFFFE;
          if ( v25 && (unsigned int)HmgIncProcessHandleCount(0LL) )
          {
            HmgDecProcessHandleCount(v19, v25);
            HANDLELOCK::Pid((HANDLELOCK *)&v33, 0);
            *(_WORD *)(v24 + 14) &= ~0x10u;
          }
        }
        else
        {
          v35 = 1;
        }
        HANDLELOCK::vUnlock((HANDLELOCK *)&v33);
      }
      HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v33);
      SEMOBJ<20>::vUnlock(&v32, v22, v23);
      return 1;
    }
  }
  return v2;
}
