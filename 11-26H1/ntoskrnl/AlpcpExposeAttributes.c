/*
 * XREFs of AlpcpExposeAttributes @ 0x1409B93B0
 * Callers:
 *     AlpcpProcessConnectionRequest @ 0x1408EDC14 (AlpcpProcessConnectionRequest.c)
 *     AlpcpProcessSynchronousRequest @ 0x1409276C0 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpReceiveMessage @ 0x140927FFC (AlpcpReceiveMessage.c)
 *     AlpcpCompleteDispatchMessage @ 0x140990918 (AlpcpCompleteDispatchMessage.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireResourceSharedLite @ 0x1402FE950 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     RtlSetUserMemory @ 0x140782108 (RtlSetUserMemory.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     AlpcpReferenceConnectedPort @ 0x140905270 (AlpcpReferenceConnectedPort.c)
 *     SeCreateClientSecurityEx @ 0x1409055F0 (SeCreateClientSecurityEx.c)
 *     AlpcpGetEffectiveTokenMessage @ 0x1409058A0 (AlpcpGetEffectiveTokenMessage.c)
 *     AlpcpReferenceBlob @ 0x14098FE98 (AlpcpReferenceBlob.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x14098FEF0 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpDereferenceBlobEx @ 0x140991360 (AlpcpDereferenceBlobEx.c)
 *     AlpcpUnlockBlob @ 0x1409936F0 (AlpcpUnlockBlob.c)
 *     AlpcpExposeWorkOnBehalfAttribute @ 0x1409BA23C (AlpcpExposeWorkOnBehalfAttribute.c)
 *     ObCompleteObjectDuplication @ 0x1409BB650 (ObCompleteObjectDuplication.c)
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
  _DWORD *v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdi
  _DWORD *v23; // rcx
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
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // r8
  unsigned int v39; // ecx
  int v40; // edi
  __int64 v41; // rax
  int v42; // edx
  _DWORD *v43; // r8
  __int64 v44; // rax
  _DWORD *v45; // rcx
  __int64 v46; // rax
  __int64 v47; // rdi
  int v48; // edx
  char v49; // al
  ULONG_PTR *v50; // rax
  ULONG_PTR v51; // rax
  _DWORD *v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // rdi
  _DWORD *v55; // rcx
  _DWORD *v56; // rdi
  int v57; // edi
  __int64 v58; // rcx
  __int64 v59; // rdx
  __int64 v60; // rax
  __int64 v61; // rcx
  __int64 v62; // rax
  __int64 v63; // rdx
  ULONG_PTR v64; // rdi
  struct _KTHREAD *v65; // rax
  _QWORD *v66; // rdi
  ULONG_PTR v67; // rsi
  ULONG_PTR v68; // rdi
  __int64 v69; // rdx
  __int64 v70; // r8
  struct _KLOCK_ENTRIES *v71; // r9
  __int64 v72; // rsi
  _OWORD *v73; // rdi
  PVOID v74; // r8
  unsigned __int8 PreviousMode; // r10
  char v76; // al
  ULONG_PTR v77; // rsi
  ULONG_PTR v78; // rdi
  __int64 v79; // rdx
  __int64 v80; // r8
  struct _KLOCK_ENTRIES *v81; // r9
  char v82; // r14
  __int64 v83; // rcx
  PVOID v84; // r8
  unsigned __int8 v85; // r10
  char v86; // al
  void *v87; // rax
  void *v88; // rax
  int v89; // r9d
  __int64 v90; // rax
  __int64 v91; // rdx
  int v92; // r9d
  __int64 v93; // rax
  __int64 v94; // rdx
  int v95; // [rsp+20h] [rbp-B9h]
  char v96[4]; // [rsp+30h] [rbp-A9h] BYREF
  unsigned int v97; // [rsp+34h] [rbp-A5h] BYREF
  _DWORD *v98; // [rsp+38h] [rbp-A1h]
  ULONG_PTR BugCheckParameter2; // [rsp+40h] [rbp-99h] BYREF
  _DWORD *v100; // [rsp+48h] [rbp-91h]
  PVOID v101; // [rsp+50h] [rbp-89h]
  __int128 v102; // [rsp+58h] [rbp-81h] BYREF
  __int64 v103; // [rsp+68h] [rbp-71h] BYREF
  _BYTE v104[12]; // [rsp+70h] [rbp-69h] BYREF
  int v105; // [rsp+7Ch] [rbp-5Dh]
  PVOID Object; // [rsp+80h] [rbp-59h]
  __int128 Src; // [rsp+C0h] [rbp-19h] BYREF
  _BYTE v108[24]; // [rsp+D0h] [rbp-9h] BYREF

  v6 = a5;
  v7 = 0;
  v8 = (int)a4;
  BugCheckParameter2 = a5;
  v97 = 0;
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
      v97 = 0x80000000;
    }
    v12 = v8 & 0x40000000;
    if ( (v8 & 0x40000000) != 0 )
    {
      v101 = (PVOID)(a5 + ((v8 >> 63) & 0x18) + 8);
      v13 = *(_QWORD *)(a3 + 144);
      if ( v13 )
      {
        v67 = *(_QWORD *)(v13 + 16);
        AlpcpReferenceBlob(v67);
        v68 = *(_QWORD *)(*(_QWORD *)(a3 + 144) + 16LL);
        AlpcpLockForCachedReferenceBlob(v68, v69, v70, v71);
        v96[0] = *(_BYTE *)(v68 + 48) & 1;
        AlpcpUnlockBlob(v68);
        AlpcpDereferenceBlobEx(v67, 1);
        *(_DWORD *)(a3 + 40) |= 0x4000u;
        v72 = *(_QWORD *)(a3 + 144);
        v73 = v101;
        if ( a6 )
        {
          RtlSetUserMemory(v101, 0, 0x20uLL);
          RtlWriteULong64ToUser((_QWORD *)v101 + 2, *(_QWORD *)(v72 + 40));
          RtlWriteULong64ToUser((_QWORD *)v101 + 3, *(_QWORD *)(v72 + 48));
        }
        else
        {
          *(_OWORD *)v101 = 0LL;
          v73[1] = 0LL;
          *((_QWORD *)v73 + 2) = *(_QWORD *)(v72 + 40);
          *((_QWORD *)v73 + 3) = *(_QWORD *)(v72 + 48);
        }
        if ( v96[0] )
        {
          if ( a6 )
            RtlWriteULongToUser(v73, 0x40000);
          else
            *(_DWORD *)v73 = 0x40000;
        }
        v6 = BugCheckParameter2;
        v7 |= 0x40000000u;
        v97 = v7;
        v12 = v8 & 0x40000000;
      }
    }
    if ( (v8 & 0x20000000) == 0 )
    {
LABEL_23:
      if ( (v8 & 0x10000000) == 0 )
        goto LABEL_29;
      v20 = (_DWORD *)a1;
      v102 = 0LL;
      v21 = ((v8 >> 63) & 0x18) + 40;
      if ( (v8 & 0x40000000) == 0 )
        v21 = ((v8 >> 63) & 0x18) + 8;
      v22 = v21 + 32;
      if ( (v8 & 0x20000000) == 0 )
        v22 = v21;
      v23 = *(_DWORD **)(a3 + 152);
      BugCheckParameter2 = (ULONG_PTR)v23;
      v24 = (void *)(v6 + v22);
      LODWORD(v103) = 0;
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
        v105 = 0;
        memset_0(v104, 0, 0x44uLL);
        v28 = *(_DWORD *)(a3 + 40);
        Src = 0LL;
        memset(v108, 0, sizeof(v108));
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
            if ( v32 && (int)SeCreateClientSecurityEx(v32, v30 + 260, 0LL, (__int64)v104) >= 0 )
            {
              v33 = Object;
              v96[0] = 1;
LABEL_45:
              Src = *((_OWORD *)v33 + 1);
              *(_OWORD *)&v108[8] = *(_OWORD *)v33;
              CurrentThread = KeGetCurrentThread();
              --CurrentThread->KernelApcDisable;
              ExAcquireResourceSharedLite(*((PERESOURCE *)v33 + 6), 1u);
              *(_QWORD *)v108 = *((_QWORD *)v33 + 7);
              ExReleaseResourceLite(*((PERESOURCE *)v33 + 6));
              KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
              if ( v96[0] )
                ObfDereferenceObjectWithTag(Object, 0x63436553u);
              if ( a6 )
              {
                RtlWriteULong64ToUser((_QWORD *)BugCheckParameter2, Src);
                RtlWriteULong64ToUser((_QWORD *)(BugCheckParameter2 + 8), *((__int64 *)&Src + 1));
                RtlWriteULong64ToUser((_QWORD *)(BugCheckParameter2 + 16), *(__int64 *)v108);
              }
              else
              {
                RtlCopyVolatileMemory((void *)BugCheckParameter2, &Src, 8uLL);
                RtlCopyVolatileMemory((void *)(BugCheckParameter2 + 8), (char *)&Src + 8, 8uLL);
                RtlCopyVolatileMemory((void *)(BugCheckParameter2 + 16), v108, 8uLL);
              }
              v7 |= 0x8000000u;
              v97 = v7;
            }
LABEL_50:
            if ( (v8 & 0x2000000) == 0 )
              goto LABEL_60;
            v35 = ((v8 >> 63) & 0x18) + 40;
            if ( (v8 & 0x40000000) == 0 )
              v35 = ((v8 >> 63) & 0x18) + 8;
            v36 = v35 + 32;
            if ( (v8 & 0x20000000) == 0 )
              v36 = v35;
            v37 = v36 + 24;
            if ( (v8 & 0x10000000) == 0 )
              v37 = v36;
            v38 = v37 + 24;
            if ( (v8 & 0x8000000) == 0 )
              v38 = v37;
            goto LABEL_59;
          }
          v33 = *(PVOID *)(v30 + 80);
          if ( !v33 )
            goto LABEL_50;
        }
        v96[0] = 0;
        goto LABEL_45;
      }
      v74 = 0LL;
      LODWORD(v100) = 0;
      v101 = 0LL;
      PreviousMode = KeGetCurrentThread()->PreviousMode;
      v76 = *(_DWORD *)(a1 + 416) & 6;
      v96[0] = PreviousMode;
      if ( v76 == 2 )
      {
        v87 = (void *)AlpcpReferenceConnectedPort(*(_QWORD *)(a3 + 24), a1, 0LL, a4);
        v101 = v87;
        v74 = v87;
        if ( !v87 )
        {
          LODWORD(v98) = -1073741769;
LABEL_152:
          AlpcpDereferenceBlobEx(BugCheckParameter2, 1);
          *(_QWORD *)(a3 + 152) = 0LL;
LABEL_153:
          if ( (int)v98 >= 0 )
          {
            if ( a6 )
              RtlCopyToUser(v24, &v102, 0x18uLL);
            else
              RtlCopyVolatileMemory(v24, &v102, 0x18uLL);
            v7 |= 0x10000000u;
            v97 = v7;
          }
          goto LABEL_29;
        }
        v23 = (_DWORD *)BugCheckParameter2;
        v20 = v87;
        PreviousMode = v96[0];
      }
      if ( (v20[64] & 0x80000) != 0 )
      {
        v102 = 0LL;
        v103 = 0LL;
        if ( (v20[64] & 0x2000000) != 0 )
        {
          LODWORD(v102) = 0x40000;
          LODWORD(v103) = v23[1];
          LODWORD(v100) = 1;
LABEL_147:
          LODWORD(v98) = 0;
LABEL_148:
          v74 = v101;
          goto LABEL_149;
        }
        if ( v23[1] > 1u )
        {
          LODWORD(v98) = -1073741790;
        }
        else
        {
          v89 = *v23 & v20[80];
          if ( v89 )
          {
            v90 = *((_QWORD *)v20 + 3);
            v91 = 0LL;
            if ( (v90 & 1) == 0 )
              v91 = v90;
            if ( v91 )
            {
              LODWORD(v103) = v89;
              LODWORD(v98) = ObCompleteObjectDuplication(
                               v23 + 2,
                               v91,
                               PreviousMode,
                               (char *)&v102 + 8,
                               (char *)&v103 + 4);
              if ( (int)v98 < 0 )
                goto LABEL_148;
              goto LABEL_147;
            }
            LODWORD(v98) = -1073741790;
          }
          else
          {
            LODWORD(v98) = -1073741788;
          }
        }
      }
      else
      {
        LODWORD(v98) = -1073741790;
      }
LABEL_149:
      if ( v74 )
        ObfDereferenceObject(v74);
      if ( (_DWORD)v100 )
        goto LABEL_153;
      goto LABEL_152;
    }
    *(_DWORD *)&v108[12] = 0;
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
    *(_DWORD *)v108 = v18;
    if ( (*(_DWORD *)(a1 + 416) & 6) == 4 )
      v19 = *(_QWORD *)(a3 + 104);
    else
      v19 = *(_QWORD *)(a3 + 112);
    *((_QWORD *)&Src + 1) = v19;
    *(_DWORD *)&v108[4] = *(_DWORD *)(a3 + 264);
    *(_DWORD *)&v108[8] = *(_DWORD *)(a3 + 272);
    if ( a6 )
      RtlCopyToUser(v17, &Src, 0x20uLL);
    else
      RtlCopyVolatileMemory(v17, &Src, 0x20uLL);
    if ( (_QWORD)Src )
    {
      v7 |= 0x20000000u;
      v97 = v7;
    }
    goto LABEL_23;
  }
  v39 = 0;
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
    v97 = 0x80000000;
    v39 = 0x80000000;
  }
  v40 = v8 & 0x40000000;
  LODWORD(v100) = v8 & 0x40000000;
  if ( (v8 & 0x40000000) != 0 )
  {
    v41 = *(_QWORD *)(a3 + 144);
    v42 = 0;
    *(_QWORD *)v108 = 0LL;
    *(_DWORD *)&v108[8] = 0;
    v43 = (_DWORD *)(a5 + ((v8 >> 63) & 0xC) + 8);
    v98 = v43;
    Src = 0LL;
    if ( v41 )
    {
      v77 = *(_QWORD *)(v41 + 16);
      AlpcpReferenceBlob(v77);
      v78 = *(_QWORD *)(*(_QWORD *)(a3 + 144) + 16LL);
      AlpcpLockForCachedReferenceBlob(v78, v79, v80, v81);
      v82 = *(_BYTE *)(v78 + 48);
      AlpcpUnlockBlob(v78);
      AlpcpDereferenceBlobEx(v77, 1);
      *(_DWORD *)(a3 + 40) |= 0x4000u;
      v83 = *(_QWORD *)(a3 + 144);
      Src = 0LL;
      *(_OWORD *)v108 = 0LL;
      *(_OWORD *)v108 = *(_OWORD *)(v83 + 40);
      if ( (v82 & 1) != 0 )
        LODWORD(Src) = 0x40000;
      v42 = *(_DWORD *)&v108[8];
      v7 |= 0x40000000u;
      v6 = BugCheckParameter2;
      v39 = v7;
      v40 = (int)v100;
      v43 = v98;
      v97 = v7;
    }
    v11 = a6;
    if ( (v39 & 0x40000000) != 0 )
    {
      if ( a6 )
      {
        RtlWriteULongToUser(v43, Src);
        RtlWriteULongToUser(v98 + 1, SDWORD2(Src));
        RtlWriteULongToUser(v98 + 2, *(int *)v108);
        RtlWriteULongToUser(v98 + 3, *(int *)&v108[8]);
      }
      else
      {
        *v43 = Src;
        v43[1] = DWORD2(Src);
        v43[2] = *(_DWORD *)v108;
        v43[3] = v42;
      }
    }
  }
  else
  {
    v11 = a6;
  }
  if ( (v8 & 0x20000000) != 0 )
  {
    v44 = ((v8 >> 63) & 0xC) + 24;
    if ( !v40 )
      v44 = ((v8 >> 63) & 0xC) + 8;
    v45 = (_DWORD *)(v44 + v6);
    v46 = *(_QWORD *)(a3 + 56);
    v100 = v45;
    if ( v46 == a1 || *(_QWORD *)(a3 + 64) == a1 )
    {
      v47 = *(_QWORD *)(a3 + 128);
      if ( v46 == a1 || (BugCheckParameter2 = *(_QWORD *)(a3 + 128), *(_QWORD *)(a3 + 64) == a1) )
      {
        v48 = *(_DWORD *)(a3 + 72);
        goto LABEL_80;
      }
    }
    else
    {
      v47 = *(_QWORD *)(a3 + 120);
    }
    v48 = *(_DWORD *)(a3 + 44);
LABEL_80:
    v49 = *(_DWORD *)(a1 + 416) & 6;
    LODWORD(v98) = v48;
    v14 = v49 == 4;
    v50 = (ULONG_PTR *)(a3 + 104);
    if ( !v14 )
      v50 = (ULONG_PTR *)(a3 + 112);
    v51 = *v50;
    BugCheckParameter2 = v51;
    if ( v11 )
    {
      RtlWriteULongToUser(v45, v47);
      RtlWriteULongToUser(v100 + 2, (int)v98);
      RtlWriteULongToUser(v100 + 1, BugCheckParameter2);
      RtlWriteULongToUser(v100 + 3, *(_DWORD *)(a3 + 264));
      RtlWriteULongToUser(v100 + 4, *(_DWORD *)(a3 + 272));
    }
    else
    {
      *v45 = v47;
      v45[2] = v48;
      v45[1] = v51;
      v45[3] = *(_DWORD *)(a3 + 264);
      v45[4] = *(_DWORD *)(a3 + 272);
    }
    if ( v47 )
    {
      v7 |= 0x20000000u;
      v97 = v7;
    }
  }
  if ( (v8 & 0x10000000) == 0 )
    goto LABEL_95;
  v52 = (_DWORD *)a1;
  v102 = 0LL;
  v53 = ((v8 >> 63) & 0xC) + 24;
  if ( (v8 & 0x40000000) == 0 )
    v53 = ((v8 >> 63) & 0xC) + 8;
  Src = 0LL;
  v54 = v53 + 20;
  if ( (v8 & 0x20000000) == 0 )
    v54 = v53;
  v55 = *(_DWORD **)(a3 + 152);
  BugCheckParameter2 = (ULONG_PTR)v55;
  v56 = (_DWORD *)(v6 + v54);
  LODWORD(v103) = 0;
  *(_DWORD *)v108 = 0;
  if ( v55 )
  {
    v84 = 0LL;
    LODWORD(v100) = 0;
    v101 = 0LL;
    v85 = KeGetCurrentThread()->PreviousMode;
    v86 = *(_DWORD *)(a1 + 416) & 6;
    v96[0] = v85;
    if ( v86 == 2 )
    {
      v88 = (void *)AlpcpReferenceConnectedPort(*(_QWORD *)(a3 + 24), a1, 0LL, a4);
      v101 = v88;
      v84 = v88;
      if ( !v88 )
      {
        LODWORD(v98) = -1073741769;
LABEL_170:
        AlpcpDereferenceBlobEx(BugCheckParameter2, 1);
        *(_QWORD *)(a3 + 152) = 0LL;
LABEL_171:
        if ( (int)v98 >= 0 )
        {
          RtlCopyVolatileMemory(&v102, &Src, 0x18uLL);
          v7 |= 0x10000000u;
          v97 = v7;
        }
        goto LABEL_92;
      }
      v55 = (_DWORD *)BugCheckParameter2;
      v52 = v88;
      v85 = v96[0];
    }
    if ( (v52[64] & 0x80000) != 0 )
    {
      Src = 0LL;
      *(_QWORD *)v108 = 0LL;
      if ( (v52[64] & 0x2000000) != 0 )
      {
        LODWORD(Src) = 0x40000;
        *(_DWORD *)v108 = v55[1];
        LODWORD(v100) = 1;
LABEL_165:
        LODWORD(v98) = 0;
LABEL_166:
        v84 = v101;
        goto LABEL_167;
      }
      if ( v55[1] > 1u )
      {
        LODWORD(v98) = -1073741790;
      }
      else
      {
        v92 = *v55 & v52[80];
        if ( v92 )
        {
          v93 = *((_QWORD *)v52 + 3);
          v94 = 0LL;
          if ( (v93 & 1) == 0 )
            v94 = v93;
          if ( v94 )
          {
            *(_DWORD *)v108 = v92;
            LODWORD(v98) = ObCompleteObjectDuplication(v55 + 2, v94, v85, (char *)&Src + 8, &v108[4]);
            if ( (int)v98 < 0 )
              goto LABEL_166;
            goto LABEL_165;
          }
          LODWORD(v98) = -1073741790;
        }
        else
        {
          LODWORD(v98) = -1073741788;
        }
      }
    }
    else
    {
      LODWORD(v98) = -1073741790;
    }
LABEL_167:
    if ( v84 )
      ObfDereferenceObject(v84);
    if ( (_DWORD)v100 )
      goto LABEL_171;
    goto LABEL_170;
  }
LABEL_92:
  if ( (v7 & 0x10000000) != 0 )
  {
    if ( v11 )
    {
      RtlWriteULongToUser(v56, v102);
      RtlWriteULongToUser(v56 + 1, SDWORD2(v102));
      RtlWriteULongToUser(v56 + 2, v103);
      RtlWriteULongToUser(v56 + 3, SHIDWORD(v103));
    }
    else
    {
      *v56 = v102;
      v56[1] = DWORD2(v102);
      *((_QWORD *)v56 + 1) = v103;
    }
  }
LABEL_95:
  v57 = v8 & 0x8000000;
  if ( (v8 & 0x8000000) != 0 )
  {
    v58 = ((v8 >> 63) & 0xC) + 24;
    if ( (v8 & 0x40000000) == 0 )
      v58 = ((v8 >> 63) & 0xC) + 8;
    v59 = v58 + 20;
    if ( (v8 & 0x20000000) == 0 )
      v59 = v58;
    v60 = v59 + 16;
    if ( (v8 & 0x10000000) == 0 )
      v60 = v59;
    v101 = (PVOID)(v6 + v60);
    v105 = 0;
    memset_0(v104, 0, 0x44uLL);
    v96[0] = 0;
    BugCheckParameter2 = 0LL;
    Src = 0LL;
    memset(v108, 0, sizeof(v108));
    if ( (int)AlpcpGetEffectiveTokenMessage(a1, a3, &BugCheckParameter2, (__int64)v104, v96) >= 0 )
    {
      v64 = BugCheckParameter2;
      Src = *(_OWORD *)(BugCheckParameter2 + 16);
      *(_OWORD *)&v108[8] = *(_OWORD *)BugCheckParameter2;
      v65 = KeGetCurrentThread();
      --v65->KernelApcDisable;
      ExAcquireResourceSharedLite(*(PERESOURCE *)(v64 + 48), 1u);
      *(_QWORD *)v108 = *(_QWORD *)(v64 + 56);
      ExReleaseResourceLite(*(PERESOURCE *)(v64 + 48));
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      if ( v96[0] )
        ObfDereferenceObjectWithTag(Object, 0x63436553u);
      v66 = v101;
      if ( v11 )
      {
        RtlWriteULong64ToUser(v101, Src);
        RtlWriteULong64ToUser(v66 + 1, *((__int64 *)&Src + 1));
        RtlWriteULong64ToUser(v66 + 2, *(__int64 *)v108);
      }
      else
      {
        RtlCopyVolatileMemory(v101, &Src, 8uLL);
        RtlCopyVolatileMemory(v66 + 1, (char *)&Src + 8, 8uLL);
        RtlCopyVolatileMemory(v66 + 2, v108, 8uLL);
      }
      v7 |= 0x8000000u;
      v97 = v7;
      v57 = v8 & 0x8000000;
    }
  }
  if ( (v8 & 0x2000000) != 0 )
  {
    v61 = ((v8 >> 63) & 0xC) + 24;
    if ( (v8 & 0x40000000) == 0 )
      v61 = ((v8 >> 63) & 0xC) + 8;
    v62 = v61 + 20;
    if ( (v8 & 0x20000000) == 0 )
      v62 = v61;
    v63 = v62 + 16;
    if ( (v8 & 0x10000000) == 0 )
      v63 = v62;
    v38 = v63 + 24;
    if ( !v57 )
      v38 = v63;
LABEL_59:
    LOBYTE(v95) = v11;
    AlpcpExposeWorkOnBehalfAttribute(a1, a3, v6 + v38, &v97, v95);
    v7 = v97;
  }
LABEL_60:
  if ( v11 )
    RtlWriteULongToUser((_DWORD *)(v6 + 4), v7);
  else
    *(_DWORD *)(v6 + 4) = v7;
}
