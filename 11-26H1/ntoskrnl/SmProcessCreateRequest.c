/*
 * XREFs of SmProcessCreateRequest @ 0x140ADC4D4
 * Callers:
 *     SmpDirtyStoreCreate @ 0x140ADC3B8 (SmpDirtyStoreCreate.c)
 *     SmSetStoreInformation @ 0x140B307BC (SmSetStoreInformation.c)
 * Callees:
 *     SmKmStoreDereference @ 0x140265080 (SmKmStoreDereference.c)
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1403EA560 (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?SmStStart@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PARAMETERS@@@Z @ 0x1403EE368 (-SmStStart@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PARAMETERS@@@Z.c)
 *     SmAllocEx @ 0x1403EEAF0 (SmAllocEx.c)
 *     CmSiFreeMemory @ 0x14048EB60 (CmSiFreeMemory.c)
 *     ?SmStInitialize@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140492234 (-SmStInitialize@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     KeGetIdealNodeNumberProcess @ 0x1404E9DE4 (KeGetIdealNodeNumberProcess.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     ?SmFirstTimeInit@@YAJPEAU_SM_PARTITION@@K@Z @ 0x14064098C (-SmFirstTimeInit@@YAJPEAU_SM_PARTITION@@K@Z.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     SeSinglePrivilegeCheck @ 0x14090DE50 (SeSinglePrivilegeCheck.c)
 *     ProbeForWrite @ 0x140925C90 (ProbeForWrite.c)
 *     SmKmStoreAdd @ 0x140B0CD9C (SmKmStoreAdd.c)
 *     SmKmStoreDelete @ 0x140B22710 (SmKmStoreDelete.c)
 *     SmKmStoreCreatePrepare @ 0x140B34EC8 (SmKmStoreCreatePrepare.c)
 */

__int64 __fastcall SmProcessCreateRequest(struct _SM_PARTITION *a1, volatile void *a2, int a3, KPROCESSOR_MODE a4)
{
  __int64 v7; // rsi
  int LockNV; // edi
  int TimeInit; // ebx
  __int64 v10; // rdx
  _DWORD *v11; // rbx
  int v12; // eax
  unsigned __int16 IdealNodeNumberProcess; // ax
  unsigned int v14; // r8d
  __int64 v15; // rax
  __int64 v16; // r8
  struct _KLOCK_ENTRIES *v17; // r9
  _KPROCESS *v18; // rax
  signed __int32 v20[8]; // [rsp+0h] [rbp-128h] BYREF
  int v21; // [rsp+20h] [rbp-108h]
  int v22; // [rsp+24h] [rbp-104h]
  _KPROCESS *Process; // [rsp+28h] [rbp-100h]
  volatile void *Address; // [rsp+38h] [rbp-F0h]
  __int64 v25; // [rsp+40h] [rbp-E8h]
  __int128 v26; // [rsp+48h] [rbp-E0h] BYREF
  __int128 v27; // [rsp+58h] [rbp-D0h]
  __int128 v28; // [rsp+68h] [rbp-C0h]
  struct _SM_PARTITION *v29; // [rsp+78h] [rbp-B0h]
  int v30; // [rsp+80h] [rbp-A8h] BYREF
  char v31; // [rsp+88h] [rbp-A0h] BYREF
  unsigned int v32; // [rsp+98h] [rbp-90h]

  Address = a2;
  v29 = a1;
  v7 = 0LL;
  v25 = 0LL;
  LockNV = -1;
  v21 = -1;
  Process = KeGetCurrentThread()->ApcState.Process;
  memset_0(&v30, 0, 0x58uLL);
  if ( a3 != 88 )
  {
    TimeInit = -1073741306;
    goto LABEL_31;
  }
  if ( a4 )
  {
    ProbeForWrite(Address, 0x58uLL, 8u);
    RtlCopyFromUser(&v30, (void *)Address, 0x58uLL);
  }
  else
  {
    RtlCopyVolatileMemory(&v30, (const void *)Address, 0x58uLL);
  }
  v26 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  LOBYTE(v10) = a4;
  TimeInit = SmKmStoreCreatePrepare(&v30, v10, &v26);
  if ( TimeInit >= 0 )
  {
    v11 = (_DWORD *)v26;
    v12 = *(_DWORD *)v26;
    if ( (*(_DWORD *)v26 & 0x20000) == 0 || (v12 & 0x300) != 0 )
      goto LABEL_8;
    if ( !(_BYTE)v12 && (v12 & 0xB0000) != 0x20000 && !SeSinglePrivilegeCheck(SeLockMemoryPrivilege, a4) )
    {
      TimeInit = -1073741790;
      goto LABEL_31;
    }
    if ( (*v11 & 0x200FF) == 0x20000 && v11[2] > 0x20000u )
    {
LABEL_8:
      TimeInit = -1073741637;
      goto LABEL_31;
    }
    if ( (v30 & 0x200) != 0 )
    {
      BYTE4(v28) = BYTE6(Process[3].PerProcessorCycleTimes);
      IdealNodeNumberProcess = KeGetIdealNodeNumberProcess((__int64)Process);
      DWORD2(v28) = IdealNodeNumberProcess + 1;
      v14 = IdealNodeNumberProcess | 0x80000000;
    }
    else
    {
      BYTE4(v28) = -1;
      v14 = -1;
    }
    v15 = SmAllocEx(3232LL, 0x74536D73u, v14);
    v7 = v15;
    if ( v15 )
    {
      SMKM_STORE<SM_TRAITS>::SmStInitialize(v15);
      TimeInit = SmFirstTimeInit(a1, v11[2], v16, v17);
      if ( TimeInit >= 0 )
      {
        *((_QWORD *)&v26 + 1) = a1;
        *(_QWORD *)&v27 = *((_QWORD *)a1 + 285);
        *((_QWORD *)&v27 + 1) = *((_QWORD *)a1 + 284);
        HIDWORD(v28) = *((_DWORD *)a1 + 564);
        TimeInit = SMKM_STORE<SM_TRAITS>::SmStStart(v7, (__int64 *)&v26);
        if ( TimeInit >= 0 )
        {
          *(_QWORD *)&v26 = &v31;
          *((_QWORD *)&v26 + 1) = *(_QWORD *)(v7 + 2632);
          *((_QWORD *)&v27 + 1) = v32;
          v18 = 0LL;
          if ( (v30 & 0x200) != 0 )
            v18 = Process;
          *(_QWORD *)&v27 = v18;
          Process = (_KPROCESS *)(v7 + 2464);
          TimeInit = SmKmStoreAdd(a1, v7, &v26, v7 + 2464, v21);
          if ( TimeInit >= 0 )
          {
            LockNV = Process->Header.LockNV;
            v21 = Process->Header.LockNV;
            _InterlockedOr(v20, 0);
            *((_BYTE *)a1 + 2312) = 5;
            v7 = 0LL;
            v25 = 0LL;
            v22 = 1;
            TimeInit = 0;
            if ( a4 )
              RtlWriteULongToUser((_DWORD *)Address + 20, LockNV);
            else
              *((_DWORD *)Address + 20) = LockNV;
            if ( (v30 & 0x100) != 0 )
              LockNV = -1;
          }
        }
      }
    }
    else
    {
      TimeInit = -1073741670;
    }
  }
LABEL_31:
  if ( LockNV != -1 )
    SmKmStoreDereference((__int64)a1, LockNV);
  if ( v7 )
  {
    SMKM_STORE<SM_TRAITS>::SmStCleanup(v7);
    CmSiFreeMemory((PPRIVILEGE_SET)v7);
  }
  return (unsigned int)TimeInit;
}
