/*
 * XREFs of AlpcpExposeAttributes @ 0x140972B20
 * Callers:
 *     AlpcpProcessConnectionRequest @ 0x1408E7654 (AlpcpProcessConnectionRequest.c)
 *     AlpcpProcessSynchronousRequest @ 0x1408F7730 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpReceiveMessage @ 0x1408F806C (AlpcpReceiveMessage.c)
 *     AlpcpCompleteDispatchMessage @ 0x1409BF938 (AlpcpCompleteDispatchMessage.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireResourceSharedLite @ 0x1402B3C80 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140733080 (RtlCopyVolatileMemory.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     RtlCopyToUser @ 0x14077F284 (RtlCopyToUser.c)
 *     RtlSetUserMemory @ 0x14077F608 (RtlSetUserMemory.c)
 *     RtlWriteULong64ToUser @ 0x14077F758 (RtlWriteULong64ToUser.c)
 *     RtlWriteULongToUser @ 0x14077F7A0 (RtlWriteULongToUser.c)
 *     AlpcpReferenceConnectedPort @ 0x140929760 (AlpcpReferenceConnectedPort.c)
 *     SeCreateClientSecurityEx @ 0x140929AE0 (SeCreateClientSecurityEx.c)
 *     AlpcpGetEffectiveTokenMessage @ 0x140929D90 (AlpcpGetEffectiveTokenMessage.c)
 *     ObCompleteObjectDuplication @ 0x1409714E0 (ObCompleteObjectDuplication.c)
 *     AlpcpExposeWorkOnBehalfAttribute @ 0x1409739AC (AlpcpExposeWorkOnBehalfAttribute.c)
 *     AlpcpReferenceBlob @ 0x1409BEEB8 (AlpcpReferenceBlob.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x1409BEF10 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpDereferenceBlobEx @ 0x1409C0380 (AlpcpDereferenceBlobEx.c)
 *     AlpcpUnlockBlob @ 0x1409C2710 (AlpcpUnlockBlob.c)
 */

void __fastcall AlpcpExposeAttributes(__int64 a1, int a2, __int64 a3, struct _KLOCK_ENTRIES *a4, ULONG_PTR a5, char a6)
{
  ULONG_PTR v6; // rsi
  int v7; // r15d
  __int64 v8; // r12
  char v11; // r14
  int v12; // ecx
  __int64 v13; // rax
  bool v14; // zf
  __int64 v15; // rcx
  __int64 v16; // r9
  void *v17; // r9
  int v18; // eax
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdi
  ULONG_PTR v23; // rcx
  void *v24; // rdi
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rax
  int v28; // eax
  __int64 v29; // rdi
  __int64 v30; // rdi
  int v31; // ecx
  __int64 v32; // rcx
  PVOID v33; // rdi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // r8
  unsigned int v41; // ecx
  int v42; // edi
  __int64 v43; // rax
  int v44; // edx
  _DWORD *v45; // r8
  __int64 v46; // rax
  _DWORD *v47; // rcx
  __int64 v48; // rax
  __int64 v49; // rdi
  int v50; // edx
  char v51; // al
  ULONG_PTR *v52; // rax
  ULONG_PTR v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // rdi
  ULONG_PTR v57; // rcx
  _DWORD *v58; // rdi
  int v59; // edi
  __int64 v60; // rcx
  __int64 v61; // rdx
  __int64 v62; // rax
  __int64 v63; // rcx
  __int64 v64; // rax
  __int64 v65; // rdx
  ULONG_PTR v66; // rdi
  struct _KTHREAD *v67; // rax
  __int64 v68; // rdx
  __int64 v69; // r8
  _QWORD *v70; // rdi
  ULONG_PTR v71; // rsi
  ULONG_PTR v72; // rdi
  __int64 v73; // rsi
  _OWORD *v74; // rdi
  PVOID v75; // r8
  char PreviousMode; // r10
  char v77; // al
  ULONG_PTR v78; // rsi
  ULONG_PTR v79; // rdi
  char v80; // r14
  __int64 v81; // rcx
  PVOID v82; // r8
  char v83; // r10
  char v84; // al
  void *v85; // rax
  void *v86; // rax
  int v87; // r9d
  __int64 v88; // rax
  __int64 v89; // rdx
  int v90; // r9d
  __int64 v91; // rax
  __int64 v92; // rdx
  int v93; // [rsp+20h] [rbp-B9h]
  char v94[4]; // [rsp+30h] [rbp-A9h] BYREF
  unsigned int v95; // [rsp+34h] [rbp-A5h] BYREF
  _DWORD *v96; // [rsp+38h] [rbp-A1h]
  ULONG_PTR BugCheckParameter2; // [rsp+40h] [rbp-99h] BYREF
  _DWORD *v98; // [rsp+48h] [rbp-91h]
  PVOID v99; // [rsp+50h] [rbp-89h]
  __int128 v100; // [rsp+58h] [rbp-81h] BYREF
  __int64 v101; // [rsp+68h] [rbp-71h] BYREF
  _BYTE v102[12]; // [rsp+70h] [rbp-69h] BYREF
  int v103; // [rsp+7Ch] [rbp-5Dh]
  PVOID Object; // [rsp+80h] [rbp-59h]
  __int128 Src; // [rsp+C0h] [rbp-19h] BYREF
  _BYTE v106[24]; // [rsp+D0h] [rbp-9h] BYREF

  v6 = a5;
  v7 = 0;
  v8 = (int)a4;
  BugCheckParameter2 = a5;
  v95 = 0;
  if ( a2 >= 0 )
  {
    v11 = a6;
    if ( (int)a4 < 0 && *(_QWORD *)(a3 + 136) )
    {
      if ( a6 )
      {
        RtlWriteULongToUser((_DWORD *)(a5 + 8), 0);
        RtlWriteULong64ToUser((_QWORD *)(a5 + 24), *(_QWORD *)(*(_QWORD *)(a3 + 136) + 8LL));
      }
      else
      {
        *(_DWORD *)(a5 + 8) = 0;
        *(_QWORD *)(a5 + 24) = *(_QWORD *)(*(_QWORD *)(a3 + 136) + 8LL);
      }
      v7 = 0x80000000;
      v95 = 0x80000000;
    }
    v12 = v8 & 0x40000000;
    if ( (v8 & 0x40000000) != 0 )
    {
      v99 = (PVOID)(a5 + ((v8 >> 63) & 0x18) + 8);
      v13 = *(_QWORD *)(a3 + 144);
      if ( v13 )
      {
        v71 = *(_QWORD *)(v13 + 16);
        AlpcpReferenceBlob(v71);
        v72 = *(_QWORD *)(*(_QWORD *)(a3 + 144) + 16LL);
        AlpcpLockForCachedReferenceBlob(v72);
        v94[0] = *(_BYTE *)(v72 + 48) & 1;
        AlpcpUnlockBlob(v72);
        AlpcpDereferenceBlobEx(v71);
        *(_DWORD *)(a3 + 40) |= 0x4000u;
        v73 = *(_QWORD *)(a3 + 144);
        v74 = v99;
        if ( a6 )
        {
          RtlSetUserMemory(v99, 0, 0x20uLL);
          RtlWriteULong64ToUser((_QWORD *)v99 + 2, *(_QWORD *)(v73 + 40));
          RtlWriteULong64ToUser((_QWORD *)v99 + 3, *(_QWORD *)(v73 + 48));
        }
        else
        {
          *(_OWORD *)v99 = 0LL;
          v74[1] = 0LL;
          *((_QWORD *)v74 + 2) = *(_QWORD *)(v73 + 40);
          *((_QWORD *)v74 + 3) = *(_QWORD *)(v73 + 48);
        }
        if ( v94[0] )
        {
          if ( a6 )
            RtlWriteULongToUser(v74, 0x40000);
          else
            *(_DWORD *)v74 = 0x40000;
        }
        v6 = BugCheckParameter2;
        v7 |= 0x40000000u;
        v95 = v7;
        v12 = v8 & 0x40000000;
      }
    }
    if ( (v8 & 0x20000000) == 0 )
    {
LABEL_23:
      if ( (v8 & 0x10000000) == 0 )
        goto LABEL_29;
      v20 = a1;
      v100 = 0LL;
      v21 = ((v8 >> 63) & 0x18) + 40;
      if ( (v8 & 0x40000000) == 0 )
        v21 = ((v8 >> 63) & 0x18) + 8;
      v22 = v21 + 32;
      if ( (v8 & 0x20000000) == 0 )
        v22 = v21;
      v23 = *(_QWORD *)(a3 + 152);
      BugCheckParameter2 = v23;
      v24 = (void *)(v6 + v22);
      LODWORD(v101) = 0;
      if ( !v23 )
      {
LABEL_29:
        if ( (v8 & 0x8000000) == 0 )
          goto LABEL_50;
        v25 = ((v8 >> 63) & 0x18) + 40;
        if ( (v8 & 0x40000000) == 0 )
          v25 = ((v8 >> 63) & 0x18) + 8;
        v26 = v25 + 32;
        if ( (v8 & 0x20000000) == 0 )
          v26 = v25;
        v27 = v26 + 24;
        if ( (v8 & 0x10000000) == 0 )
          v27 = v26;
        BugCheckParameter2 = v6 + v27;
        v103 = 0;
        memset_0(v102, 0, 0x44uLL);
        v28 = *(_DWORD *)(a3 + 40);
        Src = 0LL;
        memset(v106, 0, sizeof(v106));
        if ( (v28 & 0x80u) != 0 )
          goto LABEL_50;
        v29 = *(_QWORD *)(a3 + 136);
        if ( v29 )
        {
          if ( *(int *)(v29 + 36) < 1 )
            goto LABEL_50;
          v33 = *(PVOID *)(v29 + 48);
        }
        else
        {
          v30 = *(_QWORD *)(a3 + 24);
          if ( (*(_DWORD *)(a1 + 416) & 6) != 2 )
            goto LABEL_50;
          if ( !v30 )
            goto LABEL_50;
          v31 = *(_DWORD *)(v30 + 416);
          if ( (v31 & 6) != 4 )
            goto LABEL_50;
          if ( (v31 & 0x400) != 0 )
          {
            v32 = *(_QWORD *)(a3 + 32);
            if ( v32 && (int)SeCreateClientSecurityEx(v32, v30 + 260, 0LL, (__int64)v102) >= 0 )
            {
              v33 = Object;
              v94[0] = 1;
LABEL_45:
              Src = *((_OWORD *)v33 + 1);
              *(_OWORD *)&v106[8] = *(_OWORD *)v33;
              CurrentThread = KeGetCurrentThread();
              --CurrentThread->KernelApcDisable;
              ExAcquireResourceSharedLite(*((PERESOURCE *)v33 + 6), 1u);
              *(_QWORD *)v106 = *((_QWORD *)v33 + 7);
              ExReleaseResourceLite(*((PERESOURCE *)v33 + 6));
              KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v35, v36);
              if ( v94[0] )
                ObfDereferenceObjectWithTag(Object, 0x63436553u);
              if ( a6 )
              {
                RtlWriteULong64ToUser((_QWORD *)BugCheckParameter2, Src);
                RtlWriteULong64ToUser((_QWORD *)(BugCheckParameter2 + 8), *((__int64 *)&Src + 1));
                RtlWriteULong64ToUser((_QWORD *)(BugCheckParameter2 + 16), *(__int64 *)v106);
              }
              else
              {
                RtlCopyVolatileMemory((void *)BugCheckParameter2, &Src, 8uLL);
                RtlCopyVolatileMemory((void *)(BugCheckParameter2 + 8), (char *)&Src + 8, 8uLL);
                RtlCopyVolatileMemory((void *)(BugCheckParameter2 + 16), v106, 8uLL);
              }
              v7 |= 0x8000000u;
              v95 = v7;
            }
LABEL_50:
            if ( (v8 & 0x2000000) == 0 )
              goto LABEL_60;
            v37 = ((v8 >> 63) & 0x18) + 40;
            if ( (v8 & 0x40000000) == 0 )
              v37 = ((v8 >> 63) & 0x18) + 8;
            v38 = v37 + 32;
            if ( (v8 & 0x20000000) == 0 )
              v38 = v37;
            v39 = v38 + 24;
            if ( (v8 & 0x10000000) == 0 )
              v39 = v38;
            v40 = v39 + 24;
            if ( (v8 & 0x8000000) == 0 )
              v40 = v39;
            goto LABEL_59;
          }
          v33 = *(PVOID *)(v30 + 80);
          if ( !v33 )
            goto LABEL_50;
        }
        v94[0] = 0;
        goto LABEL_45;
      }
      v75 = 0LL;
      LODWORD(v98) = 0;
      v99 = 0LL;
      PreviousMode = KeGetCurrentThread()->PreviousMode;
      v77 = *(_DWORD *)(a1 + 416) & 6;
      v94[0] = PreviousMode;
      if ( v77 == 2 )
      {
        v85 = (void *)AlpcpReferenceConnectedPort(*(_QWORD *)(a3 + 24), a1, 0LL, a4);
        v99 = v85;
        v75 = v85;
        if ( !v85 )
        {
          LODWORD(v96) = -1073741769;
LABEL_152:
          AlpcpDereferenceBlobEx(BugCheckParameter2);
          *(_QWORD *)(a3 + 152) = 0LL;
LABEL_153:
          if ( (int)v96 >= 0 )
          {
            if ( a6 )
              RtlCopyToUser(v24, &v100, 0x18uLL);
            else
              RtlCopyVolatileMemory(v24, &v100, 0x18uLL);
            v7 |= 0x10000000u;
            v95 = v7;
          }
          goto LABEL_29;
        }
        v23 = BugCheckParameter2;
        v20 = (__int64)v85;
        PreviousMode = v94[0];
      }
      if ( (*(_DWORD *)(v20 + 256) & 0x80000) != 0 )
      {
        v100 = 0LL;
        v101 = 0LL;
        if ( (*(_DWORD *)(v20 + 256) & 0x2000000) != 0 )
        {
          LODWORD(v100) = 0x40000;
          LODWORD(v101) = *(_DWORD *)(v23 + 4);
          LODWORD(v98) = 1;
LABEL_147:
          LODWORD(v96) = 0;
LABEL_148:
          v75 = v99;
          goto LABEL_149;
        }
        if ( *(_DWORD *)(v23 + 4) > 1u )
        {
          LODWORD(v96) = -1073741790;
        }
        else
        {
          v87 = *(_DWORD *)v23 & *(_DWORD *)(v20 + 320);
          if ( v87 )
          {
            v88 = *(_QWORD *)(v20 + 24);
            v89 = 0LL;
            if ( (v88 & 1) == 0 )
              v89 = v88;
            if ( v89 )
            {
              LODWORD(v101) = v87;
              LODWORD(v96) = ObCompleteObjectDuplication(
                               (__int64 *)(v23 + 8),
                               v89,
                               PreviousMode,
                               (unsigned __int64 *)&v100 + 1,
                               (int *)&v101 + 1);
              if ( (int)v96 < 0 )
                goto LABEL_148;
              goto LABEL_147;
            }
            LODWORD(v96) = -1073741790;
          }
          else
          {
            LODWORD(v96) = -1073741788;
          }
        }
      }
      else
      {
        LODWORD(v96) = -1073741790;
      }
LABEL_149:
      if ( v75 )
        ObfDereferenceObject(v75);
      if ( (_DWORD)v98 )
        goto LABEL_153;
      goto LABEL_152;
    }
    *(_DWORD *)&v106[12] = 0;
    v14 = v12 == 0;
    v15 = *(_QWORD *)(a3 + 56);
    v16 = ((v8 >> 63) & 0x18) + 40;
    if ( v14 )
      v16 = ((v8 >> 63) & 0x18) + 8;
    v17 = (void *)(v6 + v16);
    if ( v15 == a1 || *(_QWORD *)(a3 + 64) == a1 )
    {
      *(_QWORD *)&Src = *(_QWORD *)(a3 + 128);
      if ( v15 == a1 )
        goto LABEL_135;
    }
    else
    {
      *(_QWORD *)&Src = *(_QWORD *)(a3 + 120);
    }
    if ( *(_QWORD *)(a3 + 64) != a1 )
    {
      v18 = *(_DWORD *)(a3 + 44);
      goto LABEL_17;
    }
LABEL_135:
    v18 = *(_DWORD *)(a3 + 72);
LABEL_17:
    *(_DWORD *)v106 = v18;
    if ( (*(_DWORD *)(a1 + 416) & 6) == 4 )
      v19 = *(_QWORD *)(a3 + 104);
    else
      v19 = *(_QWORD *)(a3 + 112);
    *((_QWORD *)&Src + 1) = v19;
    *(_DWORD *)&v106[4] = *(_DWORD *)(a3 + 264);
    *(_DWORD *)&v106[8] = *(_DWORD *)(a3 + 272);
    if ( a6 )
      RtlCopyToUser(v17, &Src, 0x20uLL);
    else
      RtlCopyVolatileMemory(v17, &Src, 0x20uLL);
    if ( (_QWORD)Src )
    {
      v7 |= 0x20000000u;
      v95 = v7;
    }
    goto LABEL_23;
  }
  v41 = 0;
  if ( (int)a4 < 0 && *(_QWORD *)(a3 + 136) )
  {
    if ( a6 )
    {
      RtlWriteULongToUser((_DWORD *)(a5 + 8), 0);
      RtlWriteULongToUser((_DWORD *)(a5 + 16), *(_DWORD *)(*(_QWORD *)(a3 + 136) + 8LL));
    }
    else
    {
      *(_DWORD *)(a5 + 8) = 0;
      *(_DWORD *)(a5 + 16) = *(_DWORD *)(*(_QWORD *)(a3 + 136) + 8LL);
    }
    v7 = 0x80000000;
    v95 = 0x80000000;
    v41 = 0x80000000;
  }
  v42 = v8 & 0x40000000;
  LODWORD(v98) = v8 & 0x40000000;
  if ( (v8 & 0x40000000) != 0 )
  {
    v43 = *(_QWORD *)(a3 + 144);
    v44 = 0;
    *(_QWORD *)v106 = 0LL;
    *(_DWORD *)&v106[8] = 0;
    v45 = (_DWORD *)(a5 + ((v8 >> 63) & 0xC) + 8);
    v96 = v45;
    Src = 0LL;
    if ( v43 )
    {
      v78 = *(_QWORD *)(v43 + 16);
      AlpcpReferenceBlob(v78);
      v79 = *(_QWORD *)(*(_QWORD *)(a3 + 144) + 16LL);
      AlpcpLockForCachedReferenceBlob(v79);
      v80 = *(_BYTE *)(v79 + 48);
      AlpcpUnlockBlob(v79);
      AlpcpDereferenceBlobEx(v78);
      *(_DWORD *)(a3 + 40) |= 0x4000u;
      v81 = *(_QWORD *)(a3 + 144);
      Src = 0LL;
      *(_OWORD *)v106 = 0LL;
      *(_OWORD *)v106 = *(_OWORD *)(v81 + 40);
      if ( (v80 & 1) != 0 )
        LODWORD(Src) = 0x40000;
      v44 = *(_DWORD *)&v106[8];
      v7 |= 0x40000000u;
      v6 = BugCheckParameter2;
      v41 = v7;
      v42 = (int)v98;
      v45 = v96;
      v95 = v7;
    }
    v11 = a6;
    if ( (v41 & 0x40000000) != 0 )
    {
      if ( a6 )
      {
        RtlWriteULongToUser(v45, Src);
        RtlWriteULongToUser(v96 + 1, SDWORD2(Src));
        RtlWriteULongToUser(v96 + 2, *(int *)v106);
        RtlWriteULongToUser(v96 + 3, *(int *)&v106[8]);
      }
      else
      {
        *v45 = Src;
        v45[1] = DWORD2(Src);
        v45[2] = *(_DWORD *)v106;
        v45[3] = v44;
      }
    }
  }
  else
  {
    v11 = a6;
  }
  if ( (v8 & 0x20000000) != 0 )
  {
    v46 = ((v8 >> 63) & 0xC) + 24;
    if ( !v42 )
      v46 = ((v8 >> 63) & 0xC) + 8;
    v47 = (_DWORD *)(v46 + v6);
    v48 = *(_QWORD *)(a3 + 56);
    v98 = v47;
    if ( v48 == a1 || *(_QWORD *)(a3 + 64) == a1 )
    {
      v49 = *(_QWORD *)(a3 + 128);
      if ( v48 == a1 || (BugCheckParameter2 = *(_QWORD *)(a3 + 128), *(_QWORD *)(a3 + 64) == a1) )
      {
        v50 = *(_DWORD *)(a3 + 72);
        goto LABEL_80;
      }
    }
    else
    {
      v49 = *(_QWORD *)(a3 + 120);
    }
    v50 = *(_DWORD *)(a3 + 44);
LABEL_80:
    v51 = *(_DWORD *)(a1 + 416) & 6;
    LODWORD(v96) = v50;
    v14 = v51 == 4;
    v52 = (ULONG_PTR *)(a3 + 104);
    if ( !v14 )
      v52 = (ULONG_PTR *)(a3 + 112);
    v53 = *v52;
    BugCheckParameter2 = v53;
    if ( v11 )
    {
      RtlWriteULongToUser(v47, v49);
      RtlWriteULongToUser(v98 + 2, (int)v96);
      RtlWriteULongToUser(v98 + 1, BugCheckParameter2);
      RtlWriteULongToUser(v98 + 3, *(_DWORD *)(a3 + 264));
      RtlWriteULongToUser(v98 + 4, *(_DWORD *)(a3 + 272));
    }
    else
    {
      *v47 = v49;
      v47[2] = v50;
      v47[1] = v53;
      v47[3] = *(_DWORD *)(a3 + 264);
      v47[4] = *(_DWORD *)(a3 + 272);
    }
    if ( v49 )
    {
      v7 |= 0x20000000u;
      v95 = v7;
    }
  }
  if ( (v8 & 0x10000000) == 0 )
    goto LABEL_95;
  v54 = a1;
  v100 = 0LL;
  v55 = ((v8 >> 63) & 0xC) + 24;
  if ( (v8 & 0x40000000) == 0 )
    v55 = ((v8 >> 63) & 0xC) + 8;
  Src = 0LL;
  v56 = v55 + 20;
  if ( (v8 & 0x20000000) == 0 )
    v56 = v55;
  v57 = *(_QWORD *)(a3 + 152);
  BugCheckParameter2 = v57;
  v58 = (_DWORD *)(v6 + v56);
  LODWORD(v101) = 0;
  *(_DWORD *)v106 = 0;
  if ( v57 )
  {
    v82 = 0LL;
    LODWORD(v98) = 0;
    v99 = 0LL;
    v83 = KeGetCurrentThread()->PreviousMode;
    v84 = *(_DWORD *)(a1 + 416) & 6;
    v94[0] = v83;
    if ( v84 == 2 )
    {
      v86 = (void *)AlpcpReferenceConnectedPort(*(_QWORD *)(a3 + 24), a1, 0LL, a4);
      v99 = v86;
      v82 = v86;
      if ( !v86 )
      {
        LODWORD(v96) = -1073741769;
LABEL_170:
        AlpcpDereferenceBlobEx(BugCheckParameter2);
        *(_QWORD *)(a3 + 152) = 0LL;
LABEL_171:
        if ( (int)v96 >= 0 )
        {
          RtlCopyVolatileMemory(&v100, &Src, 0x18uLL);
          v7 |= 0x10000000u;
          v95 = v7;
        }
        goto LABEL_92;
      }
      v57 = BugCheckParameter2;
      v54 = (__int64)v86;
      v83 = v94[0];
    }
    if ( (*(_DWORD *)(v54 + 256) & 0x80000) != 0 )
    {
      Src = 0LL;
      *(_QWORD *)v106 = 0LL;
      if ( (*(_DWORD *)(v54 + 256) & 0x2000000) != 0 )
      {
        LODWORD(Src) = 0x40000;
        *(_DWORD *)v106 = *(_DWORD *)(v57 + 4);
        LODWORD(v98) = 1;
LABEL_165:
        LODWORD(v96) = 0;
LABEL_166:
        v82 = v99;
        goto LABEL_167;
      }
      if ( *(_DWORD *)(v57 + 4) > 1u )
      {
        LODWORD(v96) = -1073741790;
      }
      else
      {
        v90 = *(_DWORD *)v57 & *(_DWORD *)(v54 + 320);
        if ( v90 )
        {
          v91 = *(_QWORD *)(v54 + 24);
          v92 = 0LL;
          if ( (v91 & 1) == 0 )
            v92 = v91;
          if ( v92 )
          {
            *(_DWORD *)v106 = v90;
            LODWORD(v96) = ObCompleteObjectDuplication(
                             (__int64 *)(v57 + 8),
                             v92,
                             v83,
                             (unsigned __int64 *)&Src + 1,
                             (int *)&v106[4]);
            if ( (int)v96 < 0 )
              goto LABEL_166;
            goto LABEL_165;
          }
          LODWORD(v96) = -1073741790;
        }
        else
        {
          LODWORD(v96) = -1073741788;
        }
      }
    }
    else
    {
      LODWORD(v96) = -1073741790;
    }
LABEL_167:
    if ( v82 )
      ObfDereferenceObject(v82);
    if ( (_DWORD)v98 )
      goto LABEL_171;
    goto LABEL_170;
  }
LABEL_92:
  if ( (v7 & 0x10000000) != 0 )
  {
    if ( v11 )
    {
      RtlWriteULongToUser(v58, v100);
      RtlWriteULongToUser(v58 + 1, SDWORD2(v100));
      RtlWriteULongToUser(v58 + 2, v101);
      RtlWriteULongToUser(v58 + 3, SHIDWORD(v101));
    }
    else
    {
      *v58 = v100;
      v58[1] = DWORD2(v100);
      *((_QWORD *)v58 + 1) = v101;
    }
  }
LABEL_95:
  v59 = v8 & 0x8000000;
  if ( (v8 & 0x8000000) != 0 )
  {
    v60 = ((v8 >> 63) & 0xC) + 24;
    if ( (v8 & 0x40000000) == 0 )
      v60 = ((v8 >> 63) & 0xC) + 8;
    v61 = v60 + 20;
    if ( (v8 & 0x20000000) == 0 )
      v61 = v60;
    v62 = v61 + 16;
    if ( (v8 & 0x10000000) == 0 )
      v62 = v61;
    v99 = (PVOID)(v6 + v62);
    v103 = 0;
    memset_0(v102, 0, 0x44uLL);
    v94[0] = 0;
    BugCheckParameter2 = 0LL;
    Src = 0LL;
    memset(v106, 0, sizeof(v106));
    if ( (int)AlpcpGetEffectiveTokenMessage(a1, a3, &BugCheckParameter2, (__int64)v102, v94) >= 0 )
    {
      v66 = BugCheckParameter2;
      Src = *(_OWORD *)(BugCheckParameter2 + 16);
      *(_OWORD *)&v106[8] = *(_OWORD *)BugCheckParameter2;
      v67 = KeGetCurrentThread();
      --v67->KernelApcDisable;
      ExAcquireResourceSharedLite(*(PERESOURCE *)(v66 + 48), 1u);
      *(_QWORD *)v106 = *(_QWORD *)(v66 + 56);
      ExReleaseResourceLite(*(PERESOURCE *)(v66 + 48));
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v68, v69);
      if ( v94[0] )
        ObfDereferenceObjectWithTag(Object, 0x63436553u);
      v70 = v99;
      if ( v11 )
      {
        RtlWriteULong64ToUser(v99, Src);
        RtlWriteULong64ToUser(v70 + 1, *((__int64 *)&Src + 1));
        RtlWriteULong64ToUser(v70 + 2, *(__int64 *)v106);
      }
      else
      {
        RtlCopyVolatileMemory(v99, &Src, 8uLL);
        RtlCopyVolatileMemory(v70 + 1, (char *)&Src + 8, 8uLL);
        RtlCopyVolatileMemory(v70 + 2, v106, 8uLL);
      }
      v7 |= 0x8000000u;
      v95 = v7;
      v59 = v8 & 0x8000000;
    }
  }
  if ( (v8 & 0x2000000) != 0 )
  {
    v63 = ((v8 >> 63) & 0xC) + 24;
    if ( (v8 & 0x40000000) == 0 )
      v63 = ((v8 >> 63) & 0xC) + 8;
    v64 = v63 + 20;
    if ( (v8 & 0x20000000) == 0 )
      v64 = v63;
    v65 = v64 + 16;
    if ( (v8 & 0x10000000) == 0 )
      v65 = v64;
    v40 = v65 + 24;
    if ( !v59 )
      v40 = v65;
LABEL_59:
    LOBYTE(v93) = v11;
    AlpcpExposeWorkOnBehalfAttribute(a1, a3, v6 + v40, &v95, v93);
    v7 = v95;
  }
LABEL_60:
  if ( v11 )
    RtlWriteULongToUser((_DWORD *)(v6 + 4), v7);
  else
    *(_DWORD *)(v6 + 4) = v7;
}
