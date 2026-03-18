/*
 * XREFs of CmpParseKey @ 0x1408CB3F0
 * Callers:
 *     <none>
 * Callees:
 *     CmpIsRegistryLockAcquired @ 0x140262890 (CmpIsRegistryLockAcquired.c)
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     PsGetPermanentSiloContext @ 0x14040B340 (PsGetPermanentSiloContext.c)
 *     PsGetCurrentSilo @ 0x14041BBC0 (PsGetCurrentSilo.c)
 *     CmpInitializeThreadInfo @ 0x14043CF00 (CmpInitializeThreadInfo.c)
 *     PspGetJobSilo @ 0x14043D870 (PspGetJobSilo.c)
 *     CmCleanupThreadInfo @ 0x14044C0A0 (CmCleanupThreadInfo.c)
 *     CmpAllocatePool @ 0x140474870 (CmpAllocatePool.c)
 *     CmSiFreeMemory @ 0x140495010 (CmSiFreeMemory.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     CmpDereferenceKeyControlBlock @ 0x1408C8770 (CmpDereferenceKeyControlBlock.c)
 *     CmpCallCallBacksEx @ 0x1408C9E40 (CmpCallCallBacksEx.c)
 *     CmpDoParseKey @ 0x1408CBC90 (CmpDoParseKey.c)
 *     CmpRollbackTransactionArray @ 0x1408D0204 (CmpRollbackTransactionArray.c)
 *     CmpFreeExtraParameter @ 0x140975FD0 (CmpFreeExtraParameter.c)
 *     CmpLockRegistry @ 0x140C58850 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140C58970 (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmpParseKey(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int8 a4,
        int a5,
        __int64 a6,
        __int128 *a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        _QWORD *a11)
{
  _QWORD *v12; // rbx
  __int64 v13; // rdi
  char *v14; // rsi
  __int128 v15; // xmm2
  POBJECT_TYPE *v16; // r10
  __int64 v17; // r15
  __int64 JobSilo; // rbx
  unsigned __int16 v19; // cx
  _WORD *v20; // rdx
  __int16 v21; // ax
  char *Pool; // rax
  int v23; // r15d
  struct _LIST_ENTRY *v24; // rdx
  struct _LIST_ENTRY *Blink; // rcx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v27; // rax
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // r8
  int v31; // ebx
  int v32; // eax
  __int64 v33; // r13
  __int64 v34; // rax
  __int64 v35; // r12
  __int64 v36; // r14
  unsigned int v37; // ecx
  int v38; // eax
  struct _LIST_ENTRY *CurrentSilo; // rax
  _QWORD *v40; // rdi
  _QWORD *v41; // rax
  __int64 v42; // rcx
  __int64 v44; // rcx
  bool v45; // zf
  __int64 v46; // rcx
  int v47; // eax
  unsigned int Timeout; // [rsp+20h] [rbp-E0h]
  __int64 v49; // [rsp+28h] [rbp-D8h]
  __int128 v50; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v51[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 *v52; // [rsp+70h] [rbp-90h] BYREF
  __int128 *v53; // [rsp+78h] [rbp-88h]
  int v54; // [rsp+80h] [rbp-80h] BYREF
  __int64 v55; // [rsp+88h] [rbp-78h] BYREF
  __int128 v56; // [rsp+90h] [rbp-70h] BYREF
  __int64 v57; // [rsp+A0h] [rbp-60h]
  __int64 v58; // [rsp+A8h] [rbp-58h] BYREF
  int v59; // [rsp+B0h] [rbp-50h]
  int v60; // [rsp+B4h] [rbp-4Ch]
  __int128 *v61; // [rsp+B8h] [rbp-48h]
  int v62; // [rsp+C0h] [rbp-40h]
  __int128 v63; // [rsp+C4h] [rbp-3Ch]
  __int64 v64; // [rsp+D4h] [rbp-2Ch]
  int v65; // [rsp+DCh] [rbp-24h]
  __int128 v66; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v67; // [rsp+F0h] [rbp-10h]
  __int128 v68; // [rsp+100h] [rbp+0h]
  __int128 v69; // [rsp+110h] [rbp+10h]
  __int128 v70; // [rsp+120h] [rbp+20h]
  __int128 v71; // [rsp+130h] [rbp+30h]
  __int128 v72; // [rsp+140h] [rbp+40h]
  __int128 v73; // [rsp+150h] [rbp+50h]
  __int64 v74; // [rsp+160h] [rbp+60h]
  __int128 v75; // [rsp+170h] [rbp+70h] BYREF
  __int128 v76; // [rsp+180h] [rbp+80h] BYREF
  __int64 v77; // [rsp+190h] [rbp+90h]
  char v78; // [rsp+1F0h] [rbp+F0h]
  unsigned int v79; // [rsp+1F8h] [rbp+F8h]

  v77 = 0LL;
  v76 = 0LL;
  v50 = 0LL;
  v75 = 0LL;
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v76);
  v12 = a11;
  v13 = a8;
  v14 = 0LL;
  v78 = 0;
  v15 = *a7;
  *a11 = 0LL;
  v74 = 0LL;
  v57 = 0LL;
  v51[1] = v51;
  v51[0] = v51;
  v50 = v15;
  v55 = 0LL;
  v66 = 0LL;
  v79 = 0;
  v67 = 0LL;
  v54 = 0;
  v68 = 0LL;
  v69 = 0LL;
  v70 = 0LL;
  v71 = 0LL;
  v72 = 0LL;
  v73 = 0LL;
  v56 = 0LL;
  if ( v16 != CmKeyObjectType )
  {
    v31 = -1073741788;
    goto LABEL_61;
  }
  v17 = a10;
  if ( (struct _LIST_ENTRY *)a1 == PspSiloMonitorLock.Header.WaitListHead.Flink )
  {
    JobSilo = *(_QWORD *)(a10 + 8);
    while ( 1 )
    {
      a7 = 0LL;
      PsGetPermanentSiloContext(JobSilo, CmpSiloContextSlot, (unsigned __int64 *)&a7);
      if ( a7 )
      {
        a1 = *((_QWORD *)a7 + 4);
        if ( a1 )
          break;
      }
      if ( JobSilo )
        JobSilo = PspGetJobSilo(*(_QWORD *)(JobSilo + 1304));
      else
        JobSilo = 0LL;
    }
    v12 = a11;
  }
  v19 = v50;
  if ( (_WORD)v50 )
  {
    v20 = (_WORD *)*((_QWORD *)&v50 + 1);
    while ( *(_WORD *)(*((_QWORD *)&v50 + 1) + 2 * ((unsigned __int64)v19 >> 1) - 2) == 92 )
    {
      v45 = v19 == 2;
      v19 -= 2;
      LOWORD(v50) = v19;
      if ( v45 )
        goto LABEL_15;
    }
    if ( v19 )
    {
      v21 = WORD1(v50);
      do
      {
        if ( *v20 != 92 )
          break;
        ++v20;
        v19 -= 2;
        v21 -= 2;
        *((_QWORD *)&v50 + 1) = v20;
        LOWORD(v50) = v19;
        WORD1(v50) = v21;
      }
      while ( v19 );
    }
  }
LABEL_15:
  if ( !v13 )
  {
    Pool = (char *)CmpAllocatePool(0x40uLL);
    v14 = Pool;
    if ( Pool )
    {
      memset_0(Pool, 0, 0x60uLL);
      *(_OWORD *)(v14 + 100) = 0LL;
      *(_OWORD *)(v14 + 116) = 0LL;
      *(_QWORD *)(v14 + 132) = 0LL;
      *((_DWORD *)v14 + 35) = 0;
      memset_0(v14 + 160, 0, 0xE0uLL);
      *((_DWORD *)v14 + 24) = -1;
      *((_QWORD *)v14 + 19) = v14 + 144;
      *((_QWORD *)v14 + 18) = v14 + 144;
      memset_0(v14 + 384, 0, 0x50uLL);
    }
    v13 = (__int64)v14;
  }
  v23 = *(_DWORD *)(v17 + 4) & *(_DWORD *)(a1 + 96);
  *(_DWORD *)(v13 + 96) = v23;
  v24 = *(struct _LIST_ENTRY **)(a1 + 8);
  Blink = PspSiloMonitorLock.Header.WaitListHead.Flink->Blink;
  if ( v24 != Blink
    || !(_WORD)v50
    || ((**((_WORD **)&v50 + 1) - 65) & 0xFFDF) != 0
    || (unsigned __int16)v50 > 2u && *(_WORD *)(*((_QWORD *)&v50 + 1) + 2LL) != 92
    || (*(_DWORD *)v13 & 0x40) != 0 )
  {
    if ( (*(_DWORD *)v13 & 0x800) != 0
      && (v24 != Blink
       || !(_WORD)v50
       || ((**((_WORD **)&v50 + 1) - 65) & 0xFFDF) != 0
       || (unsigned __int16)v50 > 2u && *(_WORD *)(*((_QWORD *)&v50 + 1) + 2LL) != 92) )
    {
      v31 = -1073741790;
      goto LABEL_54;
    }
    if ( (*(_BYTE *)(a1 + 48) & 0x10) != 0 )
      *(_DWORD *)(v13 + 24) |= 0x10u;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    if ( WheapPfaLock.ExpectedRunTime && !(unsigned int)CmpIsRegistryLockAcquired() )
    {
      *((_QWORD *)&v72 + 1) = 1LL;
      DWORD2(v73) = *(_DWORD *)(v13 + 28);
      *(_QWORD *)&v73 = &v50;
      LOBYTE(v74) = a4;
      HIDWORD(v73) = a5;
      DWORD2(v67) = *(_DWORD *)(v13 + 24);
      *(_QWORD *)&v67 = CmKeyObjectType;
      DWORD2(v69) = *(_DWORD *)(a3 + 16);
      *(_QWORD *)&v66 = a6;
      *((_QWORD *)&v66 + 1) = a1;
      *((_QWORD *)&v70 + 1) = v12;
      v27 = *(_QWORD *)(v13 + 72);
      if ( (v27 & 1) != 0 )
        v27 = 0LL;
      *(_QWORD *)&v72 = v27;
      *(_QWORD *)&v56 = &v66;
      DWORD2(v56) = *(_DWORD *)(v13 + 96);
      v57 = v13 + 144;
      if ( (*(_DWORD *)v13 & 1) != 0 )
      {
        LOWORD(v52) = *(_WORD *)(v13 + 4);
        WORD1(v52) = (_WORD)v52;
        v53 = *(__int128 **)(v13 + 8);
        *(_QWORD *)&v70 = v13 + 32;
        *(_QWORD *)&v68 = &v52;
        *((_QWORD *)&v68 + 1) = *(_QWORD *)(a3 + 64);
        *(_QWORD *)&v69 = a9;
        HIDWORD(v52) = 0;
        v28 = CmpCallCallBacksEx(0x1Au, (__int64)&v66, (__int64)&v56, 1, 0x1Bu, a1, (__int64)v51);
      }
      else
      {
        v28 = CmpCallCallBacksEx(0x1Cu, (__int64)&v66, (__int64)&v56, 1, 0x1Du, a1, (__int64)v51);
      }
      v31 = v28;
      if ( v28 >= 0 )
      {
        a1 = *((_QWORD *)&v66 + 1);
        *(_DWORD *)(v13 + 96) = DWORD2(v56);
        v78 = 1;
        goto LABEL_33;
      }
      if ( v28 != -1073740541 )
        goto LABEL_53;
      v31 = HIDWORD(v56);
      if ( HIDWORD(v56) == 872 )
      {
        v33 = a10;
        goto LABEL_67;
      }
      if ( HIDWORD(v56) != 260 )
      {
        v47 = HIDWORD(v69);
        *(_DWORD *)(a3 + 20) |= HIDWORD(v69);
        *(_DWORD *)(a3 + 16) &= ~(v47 | 0x2000000);
        v31 = 0;
        goto LABEL_53;
      }
      v33 = a10;
LABEL_49:
      if ( v31 != 872 )
      {
        if ( v31 != 260 )
        {
LABEL_53:
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v29, v30);
          goto LABEL_54;
        }
        *(_DWORD *)(v13 + 96) = v23;
        CurrentSilo = PsGetCurrentSilo();
LABEL_52:
        *(_QWORD *)(v33 + 8) = CurrentSilo;
        goto LABEL_53;
      }
LABEL_67:
      CurrentSilo = 0LL;
      *(_QWORD *)(v13 + 64) = 0LL;
      goto LABEL_52;
    }
    while ( 1 )
    {
LABEL_33:
      while ( 1 )
      {
        v75 = v50;
        v32 = CmpDoParseKey(a1, a3, a4, a5, a6, (__int64)&v75, v13, a9, (__int64)&v55);
        v31 = v32;
        if ( v32 != 259 )
          break;
        KeWaitForSingleObject((char *)&unk_140E098A0 + 184 * *(unsigned int *)(v13 + 136), Executive, 0, 0, 0LL);
        *(_DWORD *)v13 &= ~0x100u;
      }
      if ( v32 != -1073741267 )
        break;
      if ( v79 >= 0x40 )
      {
        v33 = a10;
        v31 = -1073741772;
        v23 = *(_DWORD *)(a1 + 96) & *(_DWORD *)(a10 + 4);
        goto LABEL_64;
      }
      if ( (*(_DWORD *)(v13 + 100) & 4) != 0 )
      {
        CmpRollbackTransactionArray(*(unsigned int *)(v13 + 120), *(_QWORD *)(v13 + 128), v30, &v54);
        *(_DWORD *)(v13 + 100) &= ~4u;
        *(_DWORD *)(v13 + 120) = 0;
        *(_QWORD *)(v13 + 128) = 0LL;
      }
      ++v79;
    }
    v33 = a10;
    v23 = *(_DWORD *)(a10 + 4) & *(_DWORD *)(a1 + 96);
    if ( v32 >= 0 )
    {
      v34 = v55;
      v35 = (__int64)a11;
      v55 = 0LL;
      *a11 = v34;
      goto LABEL_37;
    }
LABEL_64:
    v35 = (__int64)a11;
LABEL_37:
    if ( !v78 )
      goto LABEL_49;
    v36 = *(_QWORD *)v35;
    HIDWORD(v69) = *(_DWORD *)(a3 + 20);
    if ( (*(_DWORD *)v13 & 1) != 0 )
    {
      if ( !WheapPfaLock.ExpectedRunTime || (unsigned int)CmpIsRegistryLockAcquired() || (_QWORD *)v51[0] == v51 )
        goto LABEL_44;
      v60 = 0;
      v61 = &v66;
      v37 = 27;
      v64 = 0LL;
      v52 = &v58;
      v53 = &v56;
      v49 = v36;
      Timeout = 27;
      v65 = 0;
    }
    else
    {
      if ( !WheapPfaLock.ExpectedRunTime || (unsigned int)CmpIsRegistryLockAcquired() || (_QWORD *)v51[0] == v51 )
        goto LABEL_44;
      v37 = 29;
      v60 = 0;
      v64 = 0LL;
      v65 = 0;
      v61 = &v66;
      v52 = &v58;
      v53 = &v56;
      v49 = v36;
      Timeout = 29;
    }
    v58 = v36;
    v59 = v31;
    v62 = v31;
    v63 = 0LL;
    CmpCallCallBacksEx(v37, (__int64)&v58, (__int64)&v52, 0, Timeout, v49, (__int64)v51);
    v31 = v62;
LABEL_44:
    if ( v31 >= 0 )
    {
      v38 = HIDWORD(v69);
      if ( HIDWORD(v69) != *(_DWORD *)(a3 + 20) )
      {
        *(_DWORD *)(a3 + 20) = HIDWORD(v69);
        *(_DWORD *)(a3 + 16) = *(_DWORD *)(a3 + 24) & ~(v38 | 0x2000000);
      }
    }
    if ( *(_QWORD *)v35 )
      *(_DWORD *)(*(_QWORD *)v35 + 96LL) = DWORD2(v56);
    goto LABEL_49;
  }
  v31 = -1073741790;
LABEL_54:
  if ( v14 )
  {
    if ( *((_QWORD *)v14 + 11) )
    {
      CmpLockRegistry(Blink);
      CmpDereferenceKeyControlBlock(*((_QWORD *)v14 + 11));
      CmpUnlockRegistry(v46);
    }
    v40 = v14 + 144;
    v41 = (_QWORD *)*((_QWORD *)v14 + 18);
    if ( (char *)v41[1] == v14 + 144 )
    {
      v42 = *v41;
      if ( *(_QWORD **)(*v41 + 8LL) == v41 )
      {
        *v40 = v42;
        *(_QWORD *)(v42 + 8) = v40;
        if ( v41 == v40 )
        {
LABEL_60:
          CmSiFreeMemory((PPRIVILEGE_SET)v14);
          goto LABEL_61;
        }
        while ( 1 )
        {
          CmpFreeExtraParameter(v41);
          v41 = (_QWORD *)*v40;
          if ( *(_QWORD **)(*v40 + 8LL) != v40 )
            break;
          v44 = *v41;
          if ( *(_QWORD **)(*v41 + 8LL) != v41 )
            break;
          *v40 = v44;
          *(_QWORD *)(v44 + 8) = v40;
          if ( v41 == v40 )
            goto LABEL_60;
        }
      }
    }
    __fastfail(3u);
  }
LABEL_61:
  CmCleanupThreadInfo((_KAFFINITY_EX **)&v76);
  return (unsigned int)v31;
}
