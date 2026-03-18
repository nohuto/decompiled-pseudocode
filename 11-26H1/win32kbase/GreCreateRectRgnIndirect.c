/*
 * XREFs of GreCreateRectRgnIndirect @ 0x14001E880
 * Callers:
 *     SetOrCreateRectRgnIndirectPublic @ 0x14001DA20 (SetOrCreateRectRgnIndirectPublic.c)
 *     _GetDCEx @ 0x140036140 (_GetDCEx.c)
 *     GetMonitorDC @ 0x140036C34 (GetMonitorDC.c)
 *     ?zzzUpdateUserScreen@@YAJXZ @ 0x14007FA6C (-zzzUpdateUserScreen@@YAJXZ.c)
 *     CreateEmptyRgnPublic @ 0x140081A30 (CreateEmptyRgnPublic.c)
 *     CreateMonitorRegionForDpi @ 0x1400839F0 (CreateMonitorRegionForDpi.c)
 *     CreateEmptyRgn @ 0x140134410 (CreateEmptyRgn.c)
 *     UserValidateCopyRgn @ 0x140152810 (UserValidateCopyRgn.c)
 *     NtUserGetDC @ 0x1401A2020 (NtUserGetDC.c)
 * Callees:
 *     ?set_sizeScan@REGION_CORE@@IEAAXK@Z @ 0x14000F730 (-set_sizeScan@REGION_CORE@@IEAAXK@Z.c)
 *     ?vSet@RGNOBJ@@QEAAXXZ @ 0x1400156C0 (-vSet@RGNOBJ@@QEAAXXZ.c)
 *     ?vDeleteREGION@REGION@@AEAAXXZ @ 0x140015A00 (-vDeleteREGION@REGION@@AEAAXXZ.c)
 *     ?AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@K@Z @ 0x140015AE0 (-AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@K@Z.c)
 *     ??$FreeIsolatedType@V?$CTypeIsolation@$0IAAA@$0IA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1400164D4 (--$FreeIsolatedType@V-$CTypeIsolation@$0IAAA@$0IA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 *     ?RgnCaptureLiveMemoryDumpOnZeroSizedScan@@YAXAEBVBaseRustExports@@PEBVREGION_CORE@@@Z @ 0x14001FB50 (-RgnCaptureLiveMemoryDumpOnZeroSizedScan@@YAXAEBVBaseRustExports@@PEBVREGION_CORE@@@Z.c)
 *     EngSetLastError @ 0x140020060 (EngSetLastError.c)
 *     ?get_sizeScan@REGION_CORE@@IEBAKXZ @ 0x140021850 (-get_sizeScan@REGION_CORE@@IEBAKXZ.c)
 *     ?get_sizeScanAlloc@REGION_CORE@@IEBAKXZ @ 0x140021EE0 (-get_sizeScanAlloc@REGION_CORE@@IEBAKXZ.c)
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?get_pScan@REGION_CORE@@IEAAPEAVSCAN@@XZ @ 0x1400A8710 (-get_pScan@REGION_CORE@@IEAAPEAVSCAN@@XZ.c)
 *     ?Win32FreeToPagedLookasideListImpl@@YAXPEAX0@Z @ 0x1400B80E4 (-Win32FreeToPagedLookasideListImpl@@YAXPEAX0@Z.c)
 *     ?HmgInsertObjectInternal@@YAPEAUHOBJ__@@AEAUSESSION_GLOBALS@Base@Gre@@PEAXKE@Z @ 0x1400C4460 (-HmgInsertObjectInternal@@YAPEAUHOBJ__@@AEAUSESSION_GLOBALS@Base@Gre@@PEAXKE@Z.c)
 *     ?vSet@RGNCOREOBJ@@QEAAXXZ @ 0x1400FD0A0 (-vSet@RGNCOREOBJ@@QEAAXXZ.c)
 *     ?BeginTrack@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@QEAAPEAXPEAX@Z @ 0x140113F54 (-BeginTrack@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@QEAAPEAXPEAX@Z.c)
 *     ?ReleaseReferenceCountedObjectHandle@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1401C1164 (-ReleaseReferenceCountedObjectHandle@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

struct HOBJ__ *__fastcall GreCreateRectRgnIndirect(int *a1)
{
  unsigned int v2; // eax
  unsigned __int64 v3; // rbx
  __int64 v4; // rcx
  NSInstrumentation::CReferenceTracker::CReferenceCountedType *v5; // rcx
  void *v6; // rax
  int v7; // eax
  int v8; // r10d
  int v9; // edx
  unsigned int v10; // eax
  __int64 v11; // r9
  __int64 v12; // r8
  unsigned __int64 v13; // rcx
  struct REGION *v14; // rdi
  struct SCAN *pScan; // rax
  _DWORD *v16; // r8
  __int64 v17; // rcx
  struct HOBJ__ *inserted; // rsi
  unsigned __int64 v20; // rax
  __int64 v21; // rcx
  __int64 *v22; // rax
  __int64 v23; // r14
  const struct BaseRustExports *v24; // rdi
  const struct REGION_CORE *v25; // rsi
  struct Gre::Base::SESSION_GLOBALS *v26; // rdi
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rcx
  unsigned int sizeScanAlloc; // eax
  REGION_CORE *v34; // rcx
  struct SCAN *v35; // rax
  struct SCAN *v36; // rax
  struct SCAN *v37; // rdx
  __int64 v38; // rax
  __int64 v39; // [rsp+20h] [rbp-30h] BYREF
  __int64 *v40; // [rsp+28h] [rbp-28h]
  __int64 *v41; // [rsp+30h] [rbp-20h]
  __int64 (__fastcall *v42)(); // [rsp+38h] [rbp-18h]
  unsigned __int64 v43; // [rsp+40h] [rbp-10h]
  char v44; // [rsp+48h] [rbp-8h]
  struct REGION *Region; // [rsp+70h] [rbp+20h] BYREF

  v2 = *a1 & 0xF8000000;
  if ( v2 && v2 != -134217728
    || (a1[3] & 0xF8000000) != 0 && (a1[3] & 0xF8000000) != 0xF8000000
    || (a1[2] & 0xF8000000) != 0 && (a1[2] & 0xF8000000) != 0xF8000000
    || (a1[1] & 0xF8000000) != 0 && (a1[1] & 0xF8000000) != 0xF8000000 )
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
  Region = RGNMEMOBJ::AllocateRegion(112LL);
  v3 = (unsigned __int64)Region;
  if ( Region )
  {
    RGNOBJ::vSet((RGNOBJ *)&Region);
    *(_QWORD *)(v3 + 72) = 0LL;
    *(_QWORD *)(v3 + 88) = v3 + 80;
    *(_QWORD *)(v3 + 80) = v3 + 80;
    v5 = *(NSInstrumentation::CReferenceTracker::CReferenceCountedType **)(*(_QWORD *)(W32GetSessionState(v4) + 88)
                                                                         + 72LL);
    if ( !v5 )
    {
      v6 = 0LL;
LABEL_9:
      *(_QWORD *)(v3 + 112) = v6;
      v7 = *a1;
      v8 = *a1;
      v9 = a1[2];
      if ( *a1 > v9 )
      {
        *a1 = v9;
        v8 = v9;
        v9 = v7;
        a1[2] = v7;
      }
      v10 = a1[1];
      v11 = v10;
      v12 = (unsigned int)a1[3];
      if ( (int)v10 > (int)v12 )
      {
        a1[1] = v12;
        v11 = (unsigned int)v12;
        v12 = v10;
        a1[3] = v10;
      }
      v13 = v3 + 24;
      if ( WPP_MAIN_CB.Dpc.DeferredContext )
      {
        v24 = *(const struct BaseRustExports **)WPP_MAIN_CB.Dpc.DeferredContext;
        v25 = (const struct REGION_CORE *)(v13 & -(__int64)(v3 != 0));
        (*(void (__fastcall **)(const struct REGION_CORE *, int *, __int64, __int64))(*(_QWORD *)WPP_MAIN_CB.Dpc.DeferredContext
                                                                                    + 136LL))(
          v25,
          a1,
          v12,
          v11);
        RgnCaptureLiveMemoryDumpOnZeroSizedScan(v24, v25);
      }
      else
      {
        v14 = (struct REGION *)(v13 & -(__int64)(v3 != 0));
        Region = v14;
        if ( v8 == v9 || (_DWORD)v11 == (_DWORD)v12 )
        {
          RGNCOREOBJ::vSet((RGNCOREOBJ *)&Region);
        }
        else
        {
          *(_OWORD *)((v13 & -(__int64)(v3 != 0)) + 0x1C) = *(_OWORD *)a1;
          if ( REGION_CORE::get_sizeScan((REGION_CORE *)(v13 & -(__int64)(v3 != 0))) == 56 )
          {
            pScan = REGION_CORE::get_pScan(v14);
            *((_DWORD *)pScan + 2) = a1[1];
            v16 = (_DWORD *)((char *)pScan + (unsigned int)(4 * *(_DWORD *)pScan + 16));
            v16[1] = a1[1];
            v16[2] = a1[3];
            v16[3] = *a1;
            v16[4] = a1[2];
            v17 = (unsigned int)(4 * *v16 + 16);
            *(_DWORD *)((char *)v16 + v17 + 4) = a1[3];
          }
          else
          {
            REGION_CORE::set_sizeScan(v14, 0x38u);
            *((_DWORD *)v14 + 6) = 3;
            v37 = REGION_CORE::get_pScan(v14);
            *(_DWORD *)v37 = 0;
            *((_DWORD *)v37 + 1) = 0x80000000;
            *((_DWORD *)v37 + 2) = a1[1];
            *((_DWORD *)v37 + 3) = 0;
            *((_DWORD *)v37 + 4) = 2;
            *((_DWORD *)v37 + 5) = a1[1];
            *((_DWORD *)v37 + 6) = a1[3];
            *((_DWORD *)v37 + 7) = *a1;
            *((_DWORD *)v37 + 8) = a1[2];
            *((_DWORD *)v37 + 9) = 2;
            v38 = (unsigned int)(4 * *((_DWORD *)v37 + 4) + 16);
            v17 = (unsigned int)v38;
            *(_DWORD *)((char *)v37 + v38 + 16) = 0;
            *(_DWORD *)((char *)v37 + (unsigned int)v38 + 20) = a1[3];
            *(_QWORD *)((char *)v37 + (unsigned int)v38 + 24) = 0x7FFFFFFFLL;
          }
        }
      }
      v26 = *(struct Gre::Base::SESSION_GLOBALS **)(W32GetSessionState(v17) + 88);
      v39 = 0LL;
      v40 = 0LL;
      CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(v28, v27);
      if ( CurrentThreadWin32Thread )
        v30 = *CurrentThreadWin32Thread;
      else
        v30 = 0LL;
      v31 = (v30 + 8) & -(__int64)(v30 != 0);
      v41 = &v39;
      v42 = UnexpectedThreadTerminationHandler<HmgInsertObjectHelper>::OnUnexpectedThreadTerminationStatic;
      if ( v31 )
      {
        v32 = *(_QWORD *)(((v30 + 8) & -(__int64)(v30 != 0)) + 0x58);
        if ( *(_QWORD *)(v32 + 8) != v31 + 88 )
          goto LABEL_42;
        v39 = *(_QWORD *)(v31 + 88);
        v40 = (__int64 *)(v31 + 88);
        *(_QWORD *)(v32 + 8) = &v39;
        *(_QWORD *)(v31 + 88) = &v39;
      }
      else
      {
        v40 = &v39;
        v39 = (__int64)&v39;
      }
      v43 = 0LL;
      v44 = 0;
      inserted = HmgInsertObjectInternal(v26, (struct OBJECT *)v3, 1u, 4u);
      v20 = v43;
      if ( inserted )
        v20 = v3;
      v43 = v20;
      if ( v20 && !v44 )
        _InterlockedDecrement16((volatile signed __int16 *)(v20 + 12));
      v21 = v39;
      v22 = v40;
      if ( *(__int64 **)(v39 + 8) != &v39 || (__int64 *)*v40 != &v39 )
LABEL_42:
        __fastfail(3u);
      *v40 = v39;
      *(_QWORD *)(v21 + 8) = v22;
      if ( !inserted )
      {
        v23 = *(_QWORD *)(W32GetSessionState(v21) + 88);
        if ( v3 )
        {
          if ( v3 != *(_QWORD *)(v23 + 4264) )
          {
            if ( WPP_MAIN_CB.Dpc.DeferredContext )
            {
              (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)WPP_MAIN_CB.Dpc.DeferredContext + 112LL))(v3 + 24);
            }
            else if ( *(_QWORD *)(v3 + 24) )
            {
              sizeScanAlloc = REGION_CORE::get_sizeScanAlloc((REGION_CORE *)(v3 + 24));
              v34 = (REGION_CORE *)(v3 + 24);
              if ( sizeScanAlloc == 112 )
              {
                v35 = REGION_CORE::get_pScan(v34);
                Win32FreeToPagedLookasideListImpl(*(void **)(v23 + 4240), v35);
              }
              else if ( REGION_CORE::get_sizeScanAlloc(v34) > 0x70 )
              {
                v36 = REGION_CORE::get_pScan((REGION_CORE *)(v3 + 24));
                GreDeleteFastMutex(v36);
              }
              *(_QWORD *)(v3 + 24) = 0LL;
            }
            if ( *(_QWORD *)(v3 + 112) )
            {
              ReleaseReferenceCountedObjectHandle(2LL);
              *(_QWORD *)(v3 + 112) = 0LL;
            }
            FreeIsolatedType<NSInstrumentation::CTypeIsolation<32768,128>>(v3);
          }
        }
      }
      return inserted;
    }
    v6 = NSInstrumentation::CReferenceTracker::CReferenceCountedType::BeginTrack(v5, (void *)v3);
    if ( v6 )
      goto LABEL_9;
    REGION::vDeleteREGION((REGION *)v3);
  }
  EngSetLastError(8u);
  return 0LL;
}
