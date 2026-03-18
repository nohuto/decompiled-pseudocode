/*
 * XREFs of ?vCleanupDCs@@YAXK@Z @ 0x1400CA374
 * Callers:
 *     MultiUserCleanupDCs @ 0x1400C9D30 (MultiUserCleanupDCs.c)
 *     ?GrepCloseCurrentProcess@@YAHXZ @ 0x1401FA56C (-GrepCloseCurrentProcess@@YAHXZ.c)
 * Callees:
 *     ?bCleanDC@XDCOBJ@@QEAAH_N@Z @ 0x140019F20 (-bCleanDC@XDCOBJ@@QEAAH_N@Z.c)
 *     ??$GreReleaseSemaphoreExclusive@$0BE@$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14001AFC0 (--$GreReleaseSemaphoreExclusive@$0BE@$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreAcquireSemaphore@$0BE@$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14001B36C (--$GreAcquireSemaphore@$0BE@$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     HmgIsProcessCleanupRequiredByW32Pid @ 0x140023C30 (HmgIsProcessCleanupRequiredByW32Pid.c)
 *     HmgSafeNextObjt @ 0x140032210 (HmgSafeNextObjt.c)
 *     ?HmgLock@@YAPEAU_BASEOBJECT@@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@EW4HandleLockOptions@@@Z @ 0x140035B80 (-HmgLock@@YAPEAU_BASEOBJECT@@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@EW4HandleLockOptions@@@Z.c)
 *     ?GrepSetDCOwnerEx@@YAHAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@KHH@Z @ 0x14003B040 (-GrepSetDCOwnerEx@@YAHAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@KHH@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x14003BEB4 (--1DCOBJ@@QEAA@XZ.c)
 *     GrepDeleteDC @ 0x14003ECB0 (GrepDeleteDC.c)
 *     ?bOwnedBy@ENTRYOBJ@@QEBAHK@Z @ 0x1400CA5F0 (-bOwnedBy@ENTRYOBJ@@QEBAHK@Z.c)
 *     HmgSetLock @ 0x1400CA618 (HmgSetLock.c)
 *     ??0DCOBJ@@QEAA@XZ @ 0x14013DF28 (--0DCOBJ@@QEAA@XZ.c)
 *     HmgCheckDCForPrivateReferences @ 0x1401F0A88 (HmgCheckDCForPrivateReferences.c)
 *     XFERDCOBJ_bEndXfer @ 0x140248CC4 (XFERDCOBJ_bEndXfer.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

void __fastcall vCleanupDCs(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rbx
  int v3; // edx
  int v4; // r8d
  __int64 i; // rcx
  DC *v6; // r14
  struct HOBJ__ *v7; // rdi
  ENTRYOBJ *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // r8d
  int v12; // edx
  int v13; // r8d
  DC *v14; // rax
  __int64 v15; // rdx
  int v16; // r8d
  int v17; // edx
  int v18; // r8d
  __int64 v19; // rax
  unsigned int v20; // eax
  __int64 v21; // rdx
  int v22; // r8d
  int v23; // edx
  int v24; // r8d
  __int64 v25; // rdx
  unsigned int Objt; // esi
  int v27; // r8d
  DC *v28[8]; // [rsp+50h] [rbp-58h] BYREF
  DC *v29; // [rsp+B8h] [rbp+10h] BYREF

  v1 = (unsigned int)a1;
  v29 = 0LL;
  v2 = *(_QWORD *)(W32GetSessionState(a1) + 88);
  if ( HmgIsProcessCleanupRequiredByW32Pid(v1) )
  {
    GreAcquireSemaphore<20,>((__int64 *)v2, v3, v4);
    for ( i = 0LL; ; i = Objt )
    {
      Objt = HmgSafeNextObjt(i, 1, (__int64 **)&v29);
      if ( !Objt )
        break;
      v6 = v29;
      v7 = *(struct HOBJ__ **)v29;
      v8 = (ENTRYOBJ *)(*(__int64 (__fastcall **)(_QWORD, DC *))(**(_QWORD **)(v2 + 8) + 8LL))(*(_QWORD *)(v2 + 8), v29);
      if ( v8 )
      {
        if ( (unsigned int)ENTRYOBJ::bOwnedBy(v8, v1) )
        {
          GreReleaseSemaphoreExclusive<20,>((__int64 *)v2, v9, v11);
          while ( *((_DWORD *)v6 + 534) && !(unsigned int)XFERDCOBJ_bEndXfer(v7) )
            KeDelayExecutionThread(0, 0, *(PLARGE_INTEGER *)(v2 + 2280));
          HmgSetLock(v7);
          if ( !(unsigned int)GrepDeleteDC((HDC)v7, 12582912) )
            GrepSetDCOwnerEx((struct Gre::Base::SESSION_GLOBALS *)v2, v7, 0x80000012, 1, 0);
          GreAcquireSemaphore<20,>((__int64 *)v2, v12, v13);
        }
        else if ( (*(_DWORD *)(v10 + 8) & 0xFFFFFFFE) == 0 || (*(_DWORD *)(v10 + 8) & 0xFFFFFFFE) == 0x80000012 )
        {
          while ( 1 )
          {
            DCOBJ::DCOBJ((DCOBJ *)v28);
            v14 = (DC *)HmgLock((__int64)v28[2], (unsigned int)v7, 1, 1);
            v28[0] = v14;
            if ( v14 )
              break;
            GreReleaseSemaphoreExclusive<20,>((__int64 *)v2, v15, v16);
            KeDelayExecutionThread(0, 0, *(PLARGE_INTEGER *)(v2 + 2280));
            GreAcquireSemaphore<20,>((__int64 *)v2, v17, v18);
            v19 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v2 + 8) + 16LL))(
                    *(_QWORD *)(v2 + 8),
                    (unsigned __int16)v7 | ((unsigned int)v7 >> 8) & 0xFF0000);
            if ( !v19 )
              goto LABEL_23;
            if ( *(_BYTE *)(v19 + 14) != 1 )
              goto LABEL_23;
            v20 = *(_DWORD *)(v19 + 8) & 0xFFFFFFFE;
            if ( v20 )
            {
              if ( v20 != -2147483630 )
                goto LABEL_23;
            }
            DCOBJ::~DCOBJ((DCOBJ *)v28);
          }
          if ( (*((_DWORD *)v14 + 9) & 0x2000000) == 0 && (unsigned int)HmgCheckDCForPrivateReferences(v6) )
          {
            GreReleaseSemaphoreExclusive<20,>((__int64 *)v2, v21, v22);
            DbgkWerCaptureLiveKernelDump(L"win32kfull.sys", 400LL, 8LL, v28[0], v1, 0LL, 0LL, 0LL, 0);
            XDCOBJ::bCleanDC(v28, 0);
            GreAcquireSemaphore<20,>((__int64 *)v2, v23, v24);
          }
LABEL_23:
          DCOBJ::~DCOBJ((DCOBJ *)v28);
        }
      }
    }
    GreReleaseSemaphoreExclusive<20,>((__int64 *)v2, v25, v27);
  }
}
