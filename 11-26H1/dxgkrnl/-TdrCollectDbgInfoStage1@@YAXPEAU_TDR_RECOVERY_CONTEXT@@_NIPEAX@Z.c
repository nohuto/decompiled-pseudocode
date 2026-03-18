/*
 * XREFs of ?TdrCollectDbgInfoStage1@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_NIPEAX@Z @ 0x140389910
 * Callers:
 *     ?TdrAllowToDebugEngineTimeout@@YA_NPEAU_VIDSCH_NODE@@PEAVDXGADAPTER@@@Z @ 0x1401D8B50 (-TdrAllowToDebugEngineTimeout@@YA_NPEAU_VIDSCH_NODE@@PEAVDXGADAPTER@@@Z.c)
 *     ?TdrIsRecoveryRequired@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1401D9910 (-TdrIsRecoveryRequired@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x14000A5B0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x140011704 (McTemplateK0pqq_EtwWriteTransfer.c)
 *     McTemplateK0pt_EtwWriteTransfer @ 0x140012744 (McTemplateK0pt_EtwWriteTransfer.c)
 *     ?RtlStringCbCopyA@@YAJPEAD_KPEBD@Z @ 0x14002EE60 (-RtlStringCbCopyA@@YAJPEAD_KPEBD@Z.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x14002F850 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     DpiGetDbgInfoAdapters @ 0x14006D75C (DpiGetDbgInfoAdapters.c)
 *     DpiGetAdapterDebugData @ 0x14008560C (DpiGetAdapterDebugData.c)
 *     DpiGetGlobalDebugData @ 0x140085690 (DpiGetGlobalDebugData.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     memmove @ 0x1400A5B00 (memmove.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?TdrGetDbgOwnerTag@@YA_KPEBU_TDR_RECOVERY_CONTEXT@@@Z @ 0x14018EB58 (-TdrGetDbgOwnerTag@@YA_KPEBU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ??0CTDR_DUMP_BUFFER@@QEAA@GPEAXK@Z @ 0x140192A80 (--0CTDR_DUMP_BUFFER@@QEAA@GPEAXK@Z.c)
 *     ?AddSegment@CTDR_DUMP_BUFFER@@QEAAPEAXKK@Z @ 0x140193360 (-AddSegment@CTDR_DUMP_BUFFER@@QEAAPEAXKK@Z.c)
 *     ?TdrIsDisplayOnlyTdr@@YA_NW4_TDR_TIMEOUT_REASON@@@Z @ 0x140194CF4 (-TdrIsDisplayOnlyTdr@@YA_NW4_TDR_TIMEOUT_REASON@@@Z.c)
 *     ??0CTDR_DUMP_BUFFER_CANARY@@QEAA@PEAXK@Z @ 0x140195874 (--0CTDR_DUMP_BUFFER_CANARY@@QEAA@PEAXK@Z.c)
 *     ?TdrFreePool@@YAXPEAX@Z @ 0x1401D9240 (-TdrFreePool@@YAXPEAX@Z.c)
 *     ?TdrRetrieveSecondaryBucketingKey@@YAXPEAU_TDR_RECOVERY_CONTEXT@@PEAK@Z @ 0x1401D9DCC (-TdrRetrieveSecondaryBucketingKey@@YAXPEAU_TDR_RECOVERY_CONTEXT@@PEAK@Z.c)
 *     ?TdrUpdateDbgReport@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@_N@Z @ 0x1401D9E70 (-TdrUpdateDbgReport@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@_N@Z.c)
 *     ?ShrinkLastSegment@CTDR_DUMP_BUFFER@@AEAAXXZ @ 0x14038A6D0 (-ShrinkLastSegment@CTDR_DUMP_BUFFER@@AEAAXXZ.c)
 *     ?_DdiCollectDbgInfoNoLocks@DXGADAPTER@@QEAAJPEAU_DXGKARG_COLLECTDBGINFO2@@@Z @ 0x14038A744 (-_DdiCollectDbgInfoNoLocks@DXGADAPTER@@QEAAJPEAU_DXGKARG_COLLECTDBGINFO2@@@Z.c)
 *     ?Check@CTDR_DUMP_BUFFER_CANARY@@QEBA_NXZ @ 0x140411CDC (-Check@CTDR_DUMP_BUFFER_CANARY@@QEBA_NXZ.c)
 */

void __fastcall TdrCollectDbgInfoStage1(struct _TDR_RECOVERY_CONTEXT *a1, char a2, unsigned int a3, __int128 *a4)
{
  int v4; // eax
  __int64 Pool2; // rax
  CTDR_DUMP_BUFFER *v9; // rax
  __int64 v10; // rdx
  unsigned int *v11; // rbx
  __int64 v12; // rax
  void *v13; // rax
  void *v14; // rbx
  unsigned int *v15; // rbx
  unsigned int v16; // edi
  unsigned __int16 v17; // r14
  unsigned int v18; // r12d
  unsigned int RecentEvents; // eax
  unsigned int v20; // ebx
  void *v21; // rax
  unsigned int *v22; // rbx
  char v23; // r12
  void *v24; // rax
  _DWORD *v25; // rdx
  int v26; // ecx
  __int64 *v27; // r12
  unsigned int v28; // r15d
  __int64 v29; // rax
  _DWORD *v30; // rdi
  _DWORD *v31; // rbx
  __int64 v32; // rax
  DXGADAPTER *v33; // r15
  int v34; // r14d
  __int64 *v35; // rax
  __int64 v36; // r11
  __int64 v37; // rcx
  _BYTE *v38; // r10
  __int64 v39; // rax
  const char *v40; // r8
  unsigned int *v41; // rbx
  char *v42; // rax
  char *v43; // rbx
  int SmbiosInfo; // eax
  unsigned int *v45; // rbx
  char *v46; // rax
  __int64 v47; // rbx
  int AdapterDebugData; // eax
  unsigned int *v49; // rbx
  int v50; // ecx
  unsigned int v51; // ebx
  unsigned int v52; // edi
  char *v53; // rax
  char *v54; // r14
  __int64 v55; // r15
  int v56; // ebx
  unsigned int *v57; // rbx
  int v58; // ecx
  CTDR_DUMP_BUFFER *v59; // rbx
  __int64 v60; // rdi
  char *v61; // rax
  char *v62; // rbx
  __int64 v63; // rax
  __int64 v64; // r9
  unsigned int *v65; // rbx
  char *v66; // rax
  __int64 v67; // rbx
  int GlobalDebugData; // eax
  unsigned int *v69; // rbx
  unsigned __int16 i; // di
  int v71; // r15d
  char *v72; // rax
  char *v73; // r14
  int v74; // edx
  int v75; // ecx
  _DWORD *v76; // rax
  unsigned int *v77; // rbx
  unsigned __int64 DbgOwnerTag; // rdi
  int v79; // edx
  unsigned int v80; // r12d
  __int64 v81; // r14
  __int64 v82; // r15
  __int64 v83; // rcx
  char v84; // [rsp+50h] [rbp-B0h]
  unsigned int v86[2]; // [rsp+58h] [rbp-A8h] BYREF
  int v87; // [rsp+60h] [rbp-A0h] BYREF
  int v88; // [rsp+64h] [rbp-9Ch]
  __int64 v89; // [rsp+68h] [rbp-98h]
  __int64 v90; // [rsp+70h] [rbp-90h]
  __int64 v91; // [rsp+78h] [rbp-88h]
  __int128 v92; // [rsp+80h] [rbp-80h]
  void *v93; // [rsp+90h] [rbp-70h]
  __int128 v94; // [rsp+98h] [rbp-68h] BYREF
  _DWORD v95[28]; // [rsp+B0h] [rbp-50h] BYREF
  unsigned __int64 retaddr; // [rsp+168h] [rbp+68h]

  v4 = *((_DWORD *)a1 + 4);
  v86[0] = a3;
  if ( v4 == 6 || (v84 = 0, v4 == 12) )
    v84 = 1;
  if ( !*((_QWORD *)a1 + 357) )
  {
    Pool2 = ExAllocatePool2(256LL, 17172484LL, 1380209782LL);
    *((_QWORD *)a1 + 357) = Pool2;
    if ( Pool2 )
    {
      v9 = (CTDR_DUMP_BUFFER *)ExAllocatePool2(256LL, 32LL, 1380209782LL);
      if ( v9 )
        v11 = (unsigned int *)CTDR_DUMP_BUFFER::CTDR_DUMP_BUFFER(v9, v10, *((_DWORD **)a1 + 357));
      else
        v11 = 0LL;
      *((_QWORD *)a1 + 359) = v11;
      if ( v11 )
      {
        CTDR_DUMP_BUFFER::ShrinkLastSegment((CTDR_DUMP_BUFFER *)v11);
        *((_QWORD *)a1 + 358) = v11[6];
        v12 = ExAllocatePool2(256LL, 36LL, 1380209782LL);
        *((_QWORD *)a1 + 360) = v12;
        if ( !v12 )
          *((_DWORD *)a1 + 29) |= 2u;
        *((_DWORD *)a1 + 38) = *((_DWORD *)a1 + 4);
        *((_QWORD *)a1 + 20) = *((_QWORD *)a1 + 3);
        *((_DWORD *)a1 + 42) = *((_DWORD *)a1 + 14);
        *((_QWORD *)a1 + 22) = *((_QWORD *)a1 + 8);
        *((_QWORD *)a1 + 23) = *((_QWORD *)a1 + 9);
        *((_QWORD *)a1 + 24) = *((_QWORD *)a1 + 13);
        memmove((char *)a1 + 200, &g_TdrHistory, 0xA18uLL);
        v13 = CTDR_DUMP_BUFFER::AddSegment(*((CTDR_DUMP_BUFFER **)a1 + 359), 0xFFFF, 0xAB0u);
        v14 = v13;
        if ( v13 )
        {
          memmove(v13, (char *)a1 + 112, 0xAB0uLL);
          *((_QWORD *)a1 + 361) = v14;
        }
        else
        {
          *((_DWORD *)a1 + 29) |= 0x80000000;
        }
        v15 = (unsigned int *)*((_QWORD *)a1 + 359);
        CTDR_DUMP_BUFFER::ShrinkLastSegment((CTDR_DUMP_BUFFER *)v15);
        *((_QWORD *)a1 + 358) = v15[6];
        *((_DWORD *)a1 + 35) = 0xFFFF;
        if ( a2 )
          TdrUpdateDbgReport(a1, 0);
        v87 = 1;
        v88 = 32;
        v16 = 0;
        v89 = 0x4000000020LL;
        v17 = 0;
        v91 = 0x4000000020LL;
        LODWORD(v92) = 32;
        v90 = 0x4000000040LL;
        *(_QWORD *)((char *)&v92 + 4) = 64LL;
        do
        {
          if ( v16 >= 0x5000 )
            break;
          v18 = *(&v87 + v17);
          RecentEvents = WdLogGetRecentEvents(v17, v18, 0LL, 0LL);
          v20 = 20480 - v16;
          if ( RecentEvents + v16 <= 0x5000 )
            v20 = RecentEvents;
          if ( v20 )
          {
            v21 = CTDR_DUMP_BUFFER::AddSegment(*((CTDR_DUMP_BUFFER **)a1 + 359), (unsigned int)v17 + 16, v20);
            if ( v21 )
              v20 = WdLogGetRecentEvents(v17, v18, v21, v20);
            else
              *((_DWORD *)a1 + 29) |= 0x80000000;
          }
          v16 += v20;
          ++v17;
        }
        while ( v17 < 0xBu );
        v22 = (unsigned int *)*((_QWORD *)a1 + 359);
        CTDR_DUMP_BUFFER::ShrinkLastSegment((CTDR_DUMP_BUFFER *)v22);
        v23 = a2;
        *((_QWORD *)a1 + 358) = v22[6];
        *((_DWORD *)a1 + 35) = 27;
        if ( a2 )
          TdrUpdateDbgReport(a1, 0);
        v24 = CTDR_DUMP_BUFFER::AddSegment(*((CTDR_DUMP_BUFFER **)a1 + 359), 1, 0x1000004u);
        v93 = v24;
        v25 = v24;
        if ( v24 )
        {
          v26 = *((_DWORD *)a1 + 4);
          if ( v26 == 6 || (v87 = 279, v26 == 12) )
            v87 = 321;
          v89 = (__int64)v24;
          v88 = 0;
          v91 = *((_QWORD *)a1 + 360);
          v27 = 0LL;
          v90 = 0x1000000LL;
          v92 = 0LL;
          LODWORD(v92) = v26;
          v94 = 0LL;
          if ( v26 == 3 )
          {
            a4 = &v94;
            LODWORD(v94) = *((_DWORD *)a1 + 20);
            v28 = 16;
            DWORD1(v94) = *((_DWORD *)a1 + 23);
            *((_QWORD *)&v94 + 1) = *((_QWORD *)a1 + 12);
          }
          else
          {
            if ( v26 == 6 && a4 )
            {
              v29 = *((_QWORD *)a4 + 4);
              if ( v29 )
                v27 = *(__int64 **)(v29 + 472);
              *((_QWORD *)a4 + 4) = 0LL;
            }
            v28 = v86[0];
          }
          v30 = v25 + 0x400000;
          DWORD1(v92) = v28;
          *((_QWORD *)&v92 + 1) = a4;
          v31 = 0LL;
          v25[0x400000] = 5394245;
          v32 = *((_QWORD *)a1 + 360);
          if ( v32 )
          {
            v31 = (_DWORD *)(v32 + 32);
            *(_DWORD *)(v32 + 32) = 5394245;
          }
          v33 = (DXGADAPTER *)*((_QWORD *)a1 + 4);
          if ( TdrIsDisplayOnlyTdr(*((_DWORD *)a1 + 4)) )
          {
            v34 = DXGADAPTER::_DdiCollectDbgInfoNoLocks(v33, (struct _DXGKARG_COLLECTDBGINFO2 *)&v87);
          }
          else
          {
            DXGADAPTER::AcquireDdiSync((__int64)v33, 1);
            v34 = DXGADAPTER::_DdiCollectDbgInfoNoLocks(v33, (struct _DXGKARG_COLLECTDBGINFO2 *)&v87);
            DXGADAPTER::ReleaseDdiSync(v33);
          }
          if ( v34 == -2147483643 )
          {
            *((_DWORD *)a1 + 29) |= 0x40000000u;
          }
          else if ( v34 == -1073741822 )
          {
            *((_DWORD *)a1 + 29) |= 4u;
          }
          else if ( v34 >= 0 )
          {
            if ( (_DWORD)v92 == 6 )
            {
              if ( a4 )
              {
                v35 = (__int64 *)*((_QWORD *)a4 + 4);
                if ( v35 || (v35 = v27) != 0LL )
                {
                  v36 = *v35;
                  if ( *v35 )
                  {
                    v37 = *(_QWORD *)(*(_QWORD *)(v36 + 16) + 40LL);
                    if ( v37 )
                    {
                      v38 = (char *)a1 + 2821;
                      *((_QWORD *)a1 + 351) = *(_QWORD *)(v37 + 56);
                      v39 = *(_QWORD *)(v37 + 64);
                      if ( !v39
                        || (v40 = *(const char **)(v39 + 96)) == 0LL
                        || (int)RtlStringCbCopyA((char *)a1 + 2821, 15LL, v40) < 0 )
                      {
                        *v38 = 0;
                      }
                      *((_DWORD *)a1 + 709) = *(_DWORD *)(v36 + 144);
                    }
                  }
                }
              }
            }
          }
          else
          {
            *((_DWORD *)a1 + 29) |= 0x80000000;
          }
          if ( RtlCompareMemory(v30, "EOR", 4uLL) != 4 )
          {
            *((_DWORD *)a1 + 29) |= 0x40000000u;
            WdLogSingleEntry3(1LL, a1, v93, 0x1000000LL);
            WdLogGlobalForLineNumber = 1553;
          }
          if ( v31 )
          {
            if ( RtlCompareMemory(v31, "EOR", 4uLL) != 4 )
            {
              *((_DWORD *)a1 + 29) |= 0x40000000u;
              WdLogSingleEntry3(1LL, a1, *((_QWORD *)a1 + 360), 32LL);
              WdLogGlobalForLineNumber = 1564;
            }
            *v31 = 0;
          }
          v23 = a2;
          *v30 = 0;
        }
        else
        {
          *((_DWORD *)a1 + 29) |= 0x80000000;
        }
        v41 = (unsigned int *)*((_QWORD *)a1 + 359);
        CTDR_DUMP_BUFFER::ShrinkLastSegment((CTDR_DUMP_BUFFER *)v41);
        *((_QWORD *)a1 + 358) = v41[6];
        *((_DWORD *)a1 + 35) = 1;
        if ( v23 )
          TdrUpdateDbgReport(a1, 0);
        v42 = (char *)CTDR_DUMP_BUFFER::AddSegment(*((CTDR_DUMP_BUFFER **)a1 + 359), 2, 0x4004u);
        v43 = v42;
        if ( v42 )
        {
          CTDR_DUMP_BUFFER_CANARY::CTDR_DUMP_BUFFER_CANARY((CTDR_DUMP_BUFFER_CANARY *)v86, v42, 0x4000);
          SmbiosInfo = DMgrGetSmbiosInfo(v43, 0x4000LL);
          if ( SmbiosInfo == -2147483643 )
          {
            *((_DWORD *)a1 + 29) |= 0x40000000u;
          }
          else if ( SmbiosInfo < 0 )
          {
            *((_DWORD *)a1 + 29) |= 0x80000000;
          }
          if ( !CTDR_DUMP_BUFFER_CANARY::Check((CTDR_DUMP_BUFFER_CANARY *)v86) )
          {
            *((_DWORD *)a1 + 29) |= 0x40000000u;
            WdLogSingleEntry3(1LL, a1, v43, 0x4000LL);
            WdLogGlobalForLineNumber = 1616;
          }
          if ( *(_QWORD *)v86 )
            **(_DWORD **)v86 = 0;
        }
        else
        {
          *((_DWORD *)a1 + 29) |= 0x80000000;
        }
        v45 = (unsigned int *)*((_QWORD *)a1 + 359);
        CTDR_DUMP_BUFFER::ShrinkLastSegment((CTDR_DUMP_BUFFER *)v45);
        *((_QWORD *)a1 + 358) = v45[6];
        *((_DWORD *)a1 + 35) = 2;
        if ( v23 )
          TdrUpdateDbgReport(a1, 0);
        v46 = (char *)CTDR_DUMP_BUFFER::AddSegment(*((CTDR_DUMP_BUFFER **)a1 + 359), 6, 0x404u);
        v47 = (__int64)v46;
        if ( v46 )
        {
          CTDR_DUMP_BUFFER_CANARY::CTDR_DUMP_BUFFER_CANARY((CTDR_DUMP_BUFFER_CANARY *)v86, v46, 1024);
          AdapterDebugData = DpiGetAdapterDebugData(*(_QWORD *)(*((_QWORD *)a1 + 4) + 216LL), v47);
          if ( AdapterDebugData == -2147483643 )
          {
            *((_DWORD *)a1 + 29) |= 0x40000000u;
          }
          else if ( AdapterDebugData < 0 )
          {
            *((_DWORD *)a1 + 29) |= 0x80000000;
          }
          if ( !CTDR_DUMP_BUFFER_CANARY::Check((CTDR_DUMP_BUFFER_CANARY *)v86) )
          {
            *((_DWORD *)a1 + 29) |= 0x40000000u;
            WdLogSingleEntry3(1LL, a1, v47, 1024LL);
            WdLogGlobalForLineNumber = 1669;
          }
          if ( *(_QWORD *)v86 )
            **(_DWORD **)v86 = 0;
        }
        else
        {
          *((_DWORD *)a1 + 29) |= 0x80000000;
        }
        v49 = (unsigned int *)*((_QWORD *)a1 + 359);
        CTDR_DUMP_BUFFER::ShrinkLastSegment((CTDR_DUMP_BUFFER *)v49);
        *((_QWORD *)a1 + 358) = v49[6];
        *((_DWORD *)a1 + 35) = 6;
        if ( v23 )
          TdrUpdateDbgReport(a1, 0);
        if ( !TdrIsDisplayOnlyTdr(*((_DWORD *)a1 + 4)) && !v84 )
        {
          v51 = 195072;
          if ( v50 != 3 )
            v51 = 0x2000;
          v52 = 8;
          if ( v50 != 3 )
            v52 = 3;
          v53 = (char *)CTDR_DUMP_BUFFER::AddSegment(*((CTDR_DUMP_BUFFER **)a1 + 359), v52, v51 + 4);
          v54 = v53;
          if ( v53 )
          {
            CTDR_DUMP_BUFFER_CANARY::CTDR_DUMP_BUFFER_CANARY((CTDR_DUMP_BUFFER_CANARY *)v86, v53, v51);
            v55 = v51;
            v56 = (*(__int64 (__fastcall **)(struct _TDR_RECOVERY_CONTEXT *, char *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 4) + 3168LL) + 736LL) + 8LL)
                                                                                            + 624LL))(
                    a1,
                    v54,
                    v51);
            if ( v56 == -2147483643 )
            {
              *((_DWORD *)a1 + 29) |= 0x40000000u;
            }
            else if ( v56 < 0 )
            {
              *((_DWORD *)a1 + 29) |= 0x80000000;
            }
            if ( CTDR_DUMP_BUFFER_CANARY::Check((CTDR_DUMP_BUFFER_CANARY *)v86) )
            {
              if ( v56 < 0 )
                *((_DWORD *)a1 + 29) |= 0x40000000u;
            }
            else
            {
              *((_DWORD *)a1 + 29) |= 0x40000000u;
              WdLogSingleEntry4(1LL, a1, v54, v55, v52);
              WdLogGlobalForLineNumber = 1736;
            }
            if ( *(_QWORD *)v86 )
              **(_DWORD **)v86 = 0;
          }
          else
          {
            *((_DWORD *)a1 + 29) |= 0x80000000;
          }
          v57 = (unsigned int *)*((_QWORD *)a1 + 359);
          CTDR_DUMP_BUFFER::ShrinkLastSegment((CTDR_DUMP_BUFFER *)v57);
          *((_QWORD *)a1 + 358) = v57[6];
          *((_DWORD *)a1 + 35) = v52;
          if ( v23 )
            TdrUpdateDbgReport(a1, 0);
        }
        v58 = *((_DWORD *)a1 + 4);
        if ( v58 != 3 && !TdrIsDisplayOnlyTdr(v58) && !v84 )
        {
          v59 = (CTDR_DUMP_BUFFER *)*((_QWORD *)a1 + 359);
          CTDR_DUMP_BUFFER::ShrinkLastSegment(v59);
          v60 = (unsigned int)(*((_DWORD *)v59 + 4) - *((_DWORD *)v59 + 6) - 10248);
          v61 = (char *)CTDR_DUMP_BUFFER::AddSegment(*((CTDR_DUMP_BUFFER **)a1 + 359), 4, (int)v60 + 4);
          v62 = v61;
          if ( v61 )
          {
            CTDR_DUMP_BUFFER_CANARY::CTDR_DUMP_BUFFER_CANARY((CTDR_DUMP_BUFFER_CANARY *)v86, v61, v60);
            v63 = *((_QWORD *)a1 + 360);
            if ( v63 )
              v64 = *(unsigned int *)(v63 + 4);
            else
              v64 = 0LL;
            if ( !(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, char *, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 4) + 3168LL) + 760LL) + 8LL)
                                                                                              + 336LL))(
                    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 4) + 3168LL) + 768LL),
                    *((unsigned int *)a1 + 14),
                    *((_QWORD *)a1 + 8),
                    v64,
                    v62,
                    v60) )
              *((_DWORD *)a1 + 29) |= 0x40000000u;
            if ( !CTDR_DUMP_BUFFER_CANARY::Check((CTDR_DUMP_BUFFER_CANARY *)v86) )
            {
              *((_DWORD *)a1 + 29) |= 0x40000000u;
              WdLogSingleEntry3(1LL, a1, v62, v60);
              WdLogGlobalForLineNumber = 1814;
            }
            if ( *(_QWORD *)v86 )
              **(_DWORD **)v86 = 0;
          }
          else
          {
            *((_DWORD *)a1 + 29) |= 0x80000000;
          }
          v65 = (unsigned int *)*((_QWORD *)a1 + 359);
          CTDR_DUMP_BUFFER::ShrinkLastSegment((CTDR_DUMP_BUFFER *)v65);
          *((_QWORD *)a1 + 358) = v65[6];
          *((_DWORD *)a1 + 35) = 4;
          if ( v23 )
            TdrUpdateDbgReport(a1, 0);
        }
        v66 = (char *)CTDR_DUMP_BUFFER::AddSegment(*((CTDR_DUMP_BUFFER **)a1 + 359), 9, 0xCu);
        v67 = (__int64)v66;
        if ( v66 )
        {
          CTDR_DUMP_BUFFER_CANARY::CTDR_DUMP_BUFFER_CANARY((CTDR_DUMP_BUFFER_CANARY *)v86, v66, 8);
          GlobalDebugData = DpiGetGlobalDebugData(v67);
          if ( GlobalDebugData == -2147483643 )
          {
            *((_DWORD *)a1 + 29) |= 0x40000000u;
          }
          else if ( GlobalDebugData < 0 )
          {
            *((_DWORD *)a1 + 29) |= 0x80000000;
          }
          if ( !CTDR_DUMP_BUFFER_CANARY::Check((CTDR_DUMP_BUFFER_CANARY *)v86) )
          {
            *((_DWORD *)a1 + 29) |= 0x40000000u;
            WdLogSingleEntry3(1LL, a1, v67, 8LL);
            WdLogGlobalForLineNumber = 1866;
          }
          if ( *(_QWORD *)v86 )
            **(_DWORD **)v86 = 0;
        }
        else
        {
          *((_DWORD *)a1 + 29) |= 0x80000000;
        }
        v69 = (unsigned int *)*((_QWORD *)a1 + 359);
        CTDR_DUMP_BUFFER::ShrinkLastSegment((CTDR_DUMP_BUFFER *)v69);
        *((_QWORD *)a1 + 358) = v69[6];
        *((_DWORD *)a1 + 35) = 9;
        if ( v23 )
          TdrUpdateDbgReport(a1, 0);
        memset(v95, 0, sizeof(v95));
        if ( (int)DpiGetDbgInfoAdapters((__int64)v95) >= 0 )
        {
          for ( i = 0; i < 7u; ++i )
          {
            v71 = v95[4 * i];
            if ( !v71 )
              break;
            v72 = (char *)CTDR_DUMP_BUFFER::AddSegment(*((CTDR_DUMP_BUFFER **)a1 + 359), (unsigned int)i + 32, 0x14u);
            v73 = v72;
            if ( !v72 )
            {
              *((_DWORD *)a1 + 29) |= 0x80000000;
              break;
            }
            CTDR_DUMP_BUFFER_CANARY::CTDR_DUMP_BUFFER_CANARY((CTDR_DUMP_BUFFER_CANARY *)v86, v72, 16);
            v74 = v95[4 * i + 3];
            *((_DWORD *)v73 + 1) = v95[4 * i + 1];
            *((_DWORD *)v73 + 2) = v95[4 * i + 2];
            v75 = *((_DWORD *)v73 + 3);
            *(_DWORD *)v73 = v71;
            *((_DWORD *)v73 + 3) = v75 ^ (v75 ^ v74) & 1 ^ ((unsigned __int8)v74 ^ (unsigned __int8)(v75 ^ (v75 ^ v74) & 1)) & 2;
            if ( !CTDR_DUMP_BUFFER_CANARY::Check((CTDR_DUMP_BUFFER_CANARY *)v86) )
            {
              *((_DWORD *)a1 + 29) |= 0x40000000u;
              WdLogSingleEntry3(1LL, a1, v73, 16LL);
              WdLogGlobalForLineNumber = 1930;
              if ( *(_QWORD *)v86 )
                **(_DWORD **)v86 = 0;
              break;
            }
            v76 = *(_DWORD **)v86;
            if ( *(_QWORD *)v86 )
            {
              *(_QWORD *)v86 = 0LL;
              *v76 = 0;
            }
            v77 = (unsigned int *)*((_QWORD *)a1 + 359);
            CTDR_DUMP_BUFFER::ShrinkLastSegment((CTDR_DUMP_BUFFER *)v77);
            *((_QWORD *)a1 + 358) = v77[6];
            *((_DWORD *)a1 + 35) = i + 32;
            if ( a2 )
              TdrUpdateDbgReport(a1, 0);
          }
        }
        if ( *((_BYTE *)a1 + 2921) )
        {
          DbgOwnerTag = TdrGetDbgOwnerTag(a1);
          if ( ((DbgOwnerTag + 1) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
            DbgOwnerTag = retaddr;
          v86[0] = 0;
          TdrRetrieveSecondaryBucketingKey(a1, v86);
          v79 = *((_DWORD *)a1 + 4);
          if ( v79 == 6 || v79 == 12 )
            v80 = (*((_BYTE *)a1 + 2820) != 0) + 321;
          else
            v80 = 279;
          v81 = v86[0];
          v82 = *((_QWORD *)a1 + 351);
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000000000LL) != 0 )
            McTemplateK0pt_EtwWriteTransfer((__int64)&DxgkControlGuid_Context, (__int64)&TdrCaptureDumpStart);
          if ( (int)DbgkWerCaptureLiveKernelDump(
                      L"WATCHDOG",
                      v80,
                      a1,
                      DbgOwnerTag,
                      v81,
                      v82,
                      a1,
                      TdrCaptureLiveKernelDumpCallback,
                      1) < 0 )
            DbgkWerCaptureLiveKernelDump(
              L"WATCHDOG",
              v80,
              a1,
              DbgOwnerTag,
              v81,
              v82,
              a1,
              TdrCaptureLiveKernelDumpCallback,
              3);
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000000000LL) != 0 )
            McTemplateK0pqq_EtwWriteTransfer(v83, (__int64)&TdrCaptureDumpFinish);
          *((_BYTE *)a1 + 2922) = 1;
        }
      }
      else
      {
        *((_DWORD *)a1 + 29) |= 2u;
        TdrFreePool(*((void **)a1 + 357));
        *((_QWORD *)a1 + 357) = 0LL;
      }
    }
    else
    {
      *((_DWORD *)a1 + 29) |= 2u;
    }
  }
}
