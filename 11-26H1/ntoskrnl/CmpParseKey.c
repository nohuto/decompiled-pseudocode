/*
 * XREFs of CmpParseKey @ 0x1408D19A0
 * Callers:
 *     <none>
 * Callees:
 *     CmpIsRegistryLockAcquired @ 0x140261E00 (CmpIsRegistryLockAcquired.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     PsGetPermanentSiloContext @ 0x140404430 (PsGetPermanentSiloContext.c)
 *     PsGetCurrentSilo @ 0x140413410 (PsGetCurrentSilo.c)
 *     CmpInitializeThreadInfo @ 0x14042F7B0 (CmpInitializeThreadInfo.c)
 *     PspGetJobSilo @ 0x140430120 (PspGetJobSilo.c)
 *     CmCleanupThreadInfo @ 0x1404441C0 (CmCleanupThreadInfo.c)
 *     CmpAllocatePool @ 0x14046DFF0 (CmpAllocatePool.c)
 *     CmSiFreeMemory @ 0x14048EB60 (CmSiFreeMemory.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     CmpDereferenceKeyControlBlock @ 0x1408CED20 (CmpDereferenceKeyControlBlock.c)
 *     CmpCallCallBacksEx @ 0x1408D03F0 (CmpCallCallBacksEx.c)
 *     CmpDoParseKey @ 0x1408D2240 (CmpDoParseKey.c)
 *     CmpRollbackTransactionArray @ 0x1408D67C8 (CmpRollbackTransactionArray.c)
 *     CmpFreeExtraParameter @ 0x140937FE0 (CmpFreeExtraParameter.c)
 *     CmpLockRegistry @ 0x140C5E850 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140C5E970 (CmpUnlockRegistry.c)
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
  __int64 v23; // r9
  int v24; // r15d
  struct _LIST_ENTRY *v25; // rdx
  __int64 v26; // r8
  struct _LIST_ENTRY *Blink; // rcx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v29; // rax
  int v30; // eax
  int v31; // ebx
  int v32; // eax
  __int64 v33; // r8
  __int64 v34; // r13
  __int64 v35; // rax
  __int64 v36; // r12
  __int64 v37; // r14
  unsigned int v38; // ecx
  int v39; // eax
  struct _LIST_ENTRY *CurrentSilo; // rax
  _QWORD *v41; // rdi
  _QWORD *v42; // rax
  __int64 v43; // rcx
  __int64 v45; // rcx
  bool v46; // zf
  __int64 v47; // rcx
  int v48; // eax
  unsigned int Timeout; // [rsp+20h] [rbp-E0h]
  __int64 v50; // [rsp+28h] [rbp-D8h]
  __int128 v51; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v52[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 *v53; // [rsp+70h] [rbp-90h] BYREF
  __int128 *v54; // [rsp+78h] [rbp-88h]
  int v55; // [rsp+80h] [rbp-80h] BYREF
  __int64 v56; // [rsp+88h] [rbp-78h] BYREF
  __int128 v57; // [rsp+90h] [rbp-70h] BYREF
  __int64 v58; // [rsp+A0h] [rbp-60h]
  __int64 v59; // [rsp+A8h] [rbp-58h] BYREF
  int v60; // [rsp+B0h] [rbp-50h]
  int v61; // [rsp+B4h] [rbp-4Ch]
  __int128 *v62; // [rsp+B8h] [rbp-48h]
  int v63; // [rsp+C0h] [rbp-40h]
  __int128 v64; // [rsp+C4h] [rbp-3Ch]
  __int64 v65; // [rsp+D4h] [rbp-2Ch]
  int v66; // [rsp+DCh] [rbp-24h]
  __int128 v67; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v68; // [rsp+F0h] [rbp-10h]
  __int128 v69; // [rsp+100h] [rbp+0h]
  __int128 v70; // [rsp+110h] [rbp+10h]
  __int128 v71; // [rsp+120h] [rbp+20h]
  __int128 v72; // [rsp+130h] [rbp+30h]
  __int128 v73; // [rsp+140h] [rbp+40h]
  __int128 v74; // [rsp+150h] [rbp+50h]
  __int64 v75; // [rsp+160h] [rbp+60h]
  __int128 v76; // [rsp+170h] [rbp+70h] BYREF
  __int128 v77; // [rsp+180h] [rbp+80h] BYREF
  __int64 v78; // [rsp+190h] [rbp+90h]
  char v79; // [rsp+1F0h] [rbp+F0h]
  unsigned int v80; // [rsp+1F8h] [rbp+F8h]

  v78 = 0LL;
  v77 = 0LL;
  v51 = 0LL;
  v76 = 0LL;
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v77);
  v12 = a11;
  v13 = a8;
  v14 = 0LL;
  v79 = 0;
  v15 = *a7;
  *a11 = 0LL;
  v75 = 0LL;
  v58 = 0LL;
  v52[1] = v52;
  v52[0] = v52;
  v51 = v15;
  v56 = 0LL;
  v67 = 0LL;
  v80 = 0;
  v68 = 0LL;
  v55 = 0;
  v69 = 0LL;
  v70 = 0LL;
  v71 = 0LL;
  v72 = 0LL;
  v73 = 0LL;
  v74 = 0LL;
  v57 = 0LL;
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
  v19 = v51;
  if ( (_WORD)v51 )
  {
    v20 = (_WORD *)*((_QWORD *)&v51 + 1);
    while ( *(_WORD *)(*((_QWORD *)&v51 + 1) + 2 * ((unsigned __int64)v19 >> 1) - 2) == 92 )
    {
      v46 = v19 == 2;
      v19 -= 2;
      LOWORD(v51) = v19;
      if ( v46 )
        goto LABEL_15;
    }
    if ( v19 )
    {
      v21 = WORD1(v51);
      do
      {
        if ( *v20 != 92 )
          break;
        ++v20;
        v19 -= 2;
        v21 -= 2;
        *((_QWORD *)&v51 + 1) = v20;
        LOWORD(v51) = v19;
        WORD1(v51) = v21;
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
  v23 = 65503LL;
  v24 = *(_DWORD *)(v17 + 4) & *(_DWORD *)(a1 + 96);
  *(_DWORD *)(v13 + 96) = v24;
  v25 = *(struct _LIST_ENTRY **)(a1 + 8);
  v26 = *((_QWORD *)&v51 + 1);
  Blink = PspSiloMonitorLock.Header.WaitListHead.Flink->Blink;
  if ( v25 != Blink
    || !(_WORD)v51
    || ((**((_WORD **)&v51 + 1) - 65) & 0xFFDF) != 0
    || (unsigned __int16)v51 > 2u && *(_WORD *)(*((_QWORD *)&v51 + 1) + 2LL) != 92
    || (*(_DWORD *)v13 & 0x40) != 0 )
  {
    if ( (*(_DWORD *)v13 & 0x800) != 0
      && (v25 != Blink
       || !(_WORD)v51
       || ((**((_WORD **)&v51 + 1) - 65) & 0xFFDF) != 0
       || (unsigned __int16)v51 > 2u && *(_WORD *)(*((_QWORD *)&v51 + 1) + 2LL) != 92) )
    {
      v31 = -1073741790;
      goto LABEL_54;
    }
    if ( (*(_BYTE *)(a1 + 48) & 0x10) != 0 )
      *(_DWORD *)(v13 + 24) |= 0x10u;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    if ( HIDWORD(WheapPfaLock.StateSaveArea) && !(unsigned int)CmpIsRegistryLockAcquired() )
    {
      *((_QWORD *)&v73 + 1) = 1LL;
      DWORD2(v74) = *(_DWORD *)(v13 + 28);
      *(_QWORD *)&v74 = &v51;
      LOBYTE(v75) = a4;
      HIDWORD(v74) = a5;
      DWORD2(v68) = *(_DWORD *)(v13 + 24);
      *(_QWORD *)&v68 = CmKeyObjectType;
      DWORD2(v70) = *(_DWORD *)(a3 + 16);
      *(_QWORD *)&v67 = a6;
      *((_QWORD *)&v67 + 1) = a1;
      *((_QWORD *)&v71 + 1) = v12;
      v29 = *(_QWORD *)(v13 + 72);
      if ( (v29 & 1) != 0 )
        v29 = 0LL;
      *(_QWORD *)&v73 = v29;
      *(_QWORD *)&v57 = &v67;
      DWORD2(v57) = *(_DWORD *)(v13 + 96);
      v58 = v13 + 144;
      if ( (*(_DWORD *)v13 & 1) != 0 )
      {
        LOWORD(v53) = *(_WORD *)(v13 + 4);
        WORD1(v53) = (_WORD)v53;
        v54 = *(__int128 **)(v13 + 8);
        *(_QWORD *)&v71 = v13 + 32;
        *(_QWORD *)&v69 = &v53;
        *((_QWORD *)&v69 + 1) = *(_QWORD *)(a3 + 64);
        *(_QWORD *)&v70 = a9;
        HIDWORD(v53) = 0;
        v30 = CmpCallCallBacksEx(0x1Au, (__int64)&v67, (__int64)&v57, 1, 0x1Bu, a1, (__int64)v52);
      }
      else
      {
        v30 = CmpCallCallBacksEx(0x1Cu, (__int64)&v67, (__int64)&v57, 1, 0x1Du, a1, (__int64)v52);
      }
      v31 = v30;
      if ( v30 >= 0 )
      {
        a1 = *((_QWORD *)&v67 + 1);
        *(_DWORD *)(v13 + 96) = DWORD2(v57);
        v79 = 1;
        goto LABEL_33;
      }
      if ( v30 != -1073740541 )
        goto LABEL_53;
      v31 = HIDWORD(v57);
      if ( HIDWORD(v57) == 872 )
      {
        v34 = a10;
        goto LABEL_67;
      }
      if ( HIDWORD(v57) != 260 )
      {
        v48 = HIDWORD(v70);
        *(_DWORD *)(a3 + 20) |= HIDWORD(v70);
        *(_DWORD *)(a3 + 16) &= ~(v48 | 0x2000000);
        v31 = 0;
        goto LABEL_53;
      }
      v34 = a10;
LABEL_49:
      if ( v31 != 872 )
      {
        if ( v31 != 260 )
        {
LABEL_53:
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          goto LABEL_54;
        }
        *(_DWORD *)(v13 + 96) = v24;
        CurrentSilo = PsGetCurrentSilo();
LABEL_52:
        *(_QWORD *)(v34 + 8) = CurrentSilo;
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
        v76 = v51;
        v32 = CmpDoParseKey(a1, a3, a4, a5, a6, (__int64)&v76, v13, a9, (__int64)&v56);
        v31 = v32;
        if ( v32 != 259 )
          break;
        KeWaitForSingleObject((char *)&unk_140E098A0 + 184 * *(unsigned int *)(v13 + 136), Executive, 0, 0, 0LL);
        *(_DWORD *)v13 &= ~0x100u;
      }
      if ( v32 != -1073741267 )
        break;
      if ( v80 >= 0x40 )
      {
        v34 = a10;
        v31 = -1073741772;
        v24 = *(_DWORD *)(a1 + 96) & *(_DWORD *)(a10 + 4);
        goto LABEL_64;
      }
      if ( (*(_DWORD *)(v13 + 100) & 4) != 0 )
      {
        CmpRollbackTransactionArray(*(unsigned int *)(v13 + 120), *(_QWORD *)(v13 + 128), v33, &v55);
        *(_DWORD *)(v13 + 100) &= ~4u;
        *(_DWORD *)(v13 + 120) = 0;
        *(_QWORD *)(v13 + 128) = 0LL;
      }
      ++v80;
    }
    v34 = a10;
    v24 = *(_DWORD *)(a10 + 4) & *(_DWORD *)(a1 + 96);
    if ( v32 >= 0 )
    {
      v35 = v56;
      v36 = (__int64)a11;
      v56 = 0LL;
      *a11 = v35;
      goto LABEL_37;
    }
LABEL_64:
    v36 = (__int64)a11;
LABEL_37:
    if ( !v79 )
      goto LABEL_49;
    v37 = *(_QWORD *)v36;
    HIDWORD(v70) = *(_DWORD *)(a3 + 20);
    if ( (*(_DWORD *)v13 & 1) != 0 )
    {
      if ( !HIDWORD(WheapPfaLock.StateSaveArea) || (unsigned int)CmpIsRegistryLockAcquired() || (_QWORD *)v52[0] == v52 )
        goto LABEL_44;
      v61 = 0;
      v62 = &v67;
      v38 = 27;
      v65 = 0LL;
      v53 = &v59;
      v54 = &v57;
      v50 = v37;
      Timeout = 27;
      v66 = 0;
    }
    else
    {
      if ( !HIDWORD(WheapPfaLock.StateSaveArea) || (unsigned int)CmpIsRegistryLockAcquired() || (_QWORD *)v52[0] == v52 )
        goto LABEL_44;
      v38 = 29;
      v61 = 0;
      v65 = 0LL;
      v66 = 0;
      v62 = &v67;
      v53 = &v59;
      v54 = &v57;
      v50 = v37;
      Timeout = 29;
    }
    v59 = v37;
    v60 = v31;
    v63 = v31;
    v64 = 0LL;
    CmpCallCallBacksEx(v38, (__int64)&v59, (__int64)&v53, 0, Timeout, v50, (__int64)v52);
    v31 = v63;
LABEL_44:
    if ( v31 >= 0 )
    {
      v39 = HIDWORD(v70);
      if ( HIDWORD(v70) != *(_DWORD *)(a3 + 20) )
      {
        *(_DWORD *)(a3 + 20) = HIDWORD(v70);
        *(_DWORD *)(a3 + 16) = *(_DWORD *)(a3 + 24) & ~(v39 | 0x2000000);
      }
    }
    if ( *(_QWORD *)v36 )
      *(_DWORD *)(*(_QWORD *)v36 + 96LL) = DWORD2(v57);
    goto LABEL_49;
  }
  v31 = -1073741790;
LABEL_54:
  if ( v14 )
  {
    if ( *((_QWORD *)v14 + 11) )
    {
      CmpLockRegistry(Blink, v25, v26, v23);
      CmpDereferenceKeyControlBlock(*((_QWORD *)v14 + 11));
      CmpUnlockRegistry(v47);
    }
    v41 = v14 + 144;
    v42 = (_QWORD *)*((_QWORD *)v14 + 18);
    if ( (char *)v42[1] == v14 + 144 )
    {
      v43 = *v42;
      if ( *(_QWORD **)(*v42 + 8LL) == v42 )
      {
        *v41 = v43;
        *(_QWORD *)(v43 + 8) = v41;
        if ( v42 == v41 )
        {
LABEL_60:
          CmSiFreeMemory((PPRIVILEGE_SET)v14);
          goto LABEL_61;
        }
        while ( 1 )
        {
          CmpFreeExtraParameter(v42);
          v42 = (_QWORD *)*v41;
          if ( *(_QWORD **)(*v41 + 8LL) != v41 )
            break;
          v45 = *v42;
          if ( *(_QWORD **)(*v42 + 8LL) != v42 )
            break;
          *v41 = v45;
          *(_QWORD *)(v45 + 8) = v41;
          if ( v42 == v41 )
            goto LABEL_60;
        }
      }
    }
    __fastfail(3u);
  }
LABEL_61:
  CmCleanupThreadInfo((_KAFFINITY_EX **)&v77);
  return (unsigned int)v31;
}
