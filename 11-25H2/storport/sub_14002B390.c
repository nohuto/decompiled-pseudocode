/*
 * XREFs of sub_14002B390 @ 0x14002B390
 * Callers:
 *     sub_140022EC0 @ 0x140022EC0 (sub_140022EC0.c)
 * Callees:
 *     sub_140001CE8 @ 0x140001CE8 (sub_140001CE8.c)
 *     sub_14000F84C @ 0x14000F84C (sub_14000F84C.c)
 *     sub_140017A20 @ 0x140017A20 (sub_140017A20.c)
 *     sub_1400229C8 @ 0x1400229C8 (sub_1400229C8.c)
 *     sub_140027440 @ 0x140027440 (sub_140027440.c)
 *     sub_140034B00 @ 0x140034B00 (sub_140034B00.c)
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140053A04 @ 0x140053A04 (sub_140053A04.c)
 *     sub_1400556F8 @ 0x1400556F8 (sub_1400556F8.c)
 *     sub_140056004 @ 0x140056004 (sub_140056004.c)
 *     sub_1400567A0 @ 0x1400567A0 (sub_1400567A0.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     sub_14006AD74 @ 0x14006AD74 (sub_14006AD74.c)
 *     sub_14009D9B4 @ 0x14009D9B4 (sub_14009D9B4.c)
 *     sub_1400A3CEC @ 0x1400A3CEC (sub_1400A3CEC.c)
 *     sub_1400A3D54 @ 0x1400A3D54 (sub_1400A3D54.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14013C5D0 (_guard_dispatch_icall.c)
 */

char __fastcall sub_14002B390(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // r12
  _BYTE *v3; // r13
  PIRP v4; // rbx
  char v5; // si
  unsigned __int64 v6; // rdi
  __int64 v7; // r8
  __int64 v8; // r15
  _BYTE *v9; // r14
  unsigned int v10; // r11d
  unsigned int v11; // r9d
  __int64 v12; // rcx
  __int64 v13; // r10
  __int64 v14; // r8
  int v15; // ecx
  int v16; // ecx
  unsigned __int64 v17; // rcx
  int v18; // ebp
  __int64 v19; // r9
  __int64 v20; // rcx
  __int64 v21; // r9
  __int64 v22; // r9
  char v23; // si
  int v24; // eax
  _BYTE *v25; // rdi
  unsigned int v26; // ebx
  unsigned int v27; // r11d
  __int64 v28; // rcx
  __int64 v29; // r10
  int v30; // ecx
  int v31; // ecx
  unsigned __int64 v32; // rcx
  _BYTE *v33; // rbx
  unsigned int v34; // r11d
  unsigned int v35; // r10d
  __int64 v36; // rcx
  int v37; // ecx
  int v38; // ecx
  unsigned __int64 v39; // rcx
  int v40; // eax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rdi
  LARGE_INTEGER ByteOffset; // rbx
  unsigned int v43; // eax
  __int64 v44; // rax
  __int64 v45; // rbx
  unsigned __int8 v46; // di
  unsigned __int8 v47; // si
  unsigned __int8 v48; // r15
  unsigned __int8 v49; // r14
  _BYTE *v50; // r9
  __int64 v51; // r10
  unsigned int v52; // ebp
  unsigned int v53; // r11d
  __int64 v54; // rcx
  unsigned __int64 v55; // rdx
  __int64 v56; // rbx
  __int64 v57; // r8
  int v58; // ecx
  int v59; // ecx
  char v60; // dl
  _BYTE *v61; // rcx
  _BYTE *v62; // rax
  unsigned int v63; // eax
  unsigned __int64 v64; // rdx
  unsigned __int64 v65; // rcx
  __int64 v66; // rbp
  _QWORD *v67; // rax
  PIRP v68; // r15
  ULONG_PTR v69; // rax
  PIO_SECURITY_CONTEXT SecurityContext; // rdi
  __int64 SecurityQos; // rsi
  __int64 v72; // rbp
  int *v73; // r15
  __int64 v74; // rbx
  int *v75; // r14
  KIRQL CurrentIrql; // al
  KSPIN_LOCK *v77; // rcx
  char v78; // al
  int v79; // r9d
  __int64 v80; // rcx
  __int64 v81; // r8
  _QWORD *v82; // rax
  __int64 v83; // rcx
  __int64 v84; // rdx
  _QWORD *v85; // rax
  char v86; // al
  int v87; // r9d
  __int64 v88; // rcx
  __int64 v89; // r8
  _QWORD *v90; // rax
  __int64 v91; // rcx
  __int64 v92; // rdx
  _QWORD *v93; // rax
  __int64 v94; // rdx
  __int64 v95; // rcx
  __int64 v96; // r9
  __int64 v97; // rdx
  __int64 v98; // rcx
  __int64 v99; // rcx
  __int64 v100; // rdx
  __int64 v101; // rax
  __int64 v102; // r14
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER v104; // rbx
  unsigned int AccessState; // r9d
  unsigned int v106; // edx
  __int64 v107; // rcx
  unsigned __int64 DesiredAccess; // rax
  __int64 v109; // r8
  LARGE_INTEGER v110; // rax
  LARGE_INTEGER v111; // rdx
  DWORD LowPart; // ecx
  unsigned __int64 v113; // r8
  char v114; // r9
  LONGLONG v115; // r9
  unsigned int v116; // r11d
  unsigned int v117; // edx
  __int64 v118; // rcx
  unsigned __int64 v119; // r9
  __int64 v120; // r8
  int v121; // eax
  bool v122; // zf
  int AccessState_high; // eax
  int v124; // eax
  unsigned __int64 v125; // r8
  signed __int32 v126; // eax
  signed __int32 v127; // ett
  __int64 v128; // rdi
  __int64 v129; // rbx
  __int64 v130; // rcx
  __int64 v131; // rdx
  _DWORD *v132; // rax
  void *v133; // rdx
  __int64 v134; // rdx
  char v135; // r15
  unsigned __int8 v136; // r11
  char v137; // bl
  char v138; // r14
  char v139; // bp
  unsigned __int8 *v140; // rdi
  unsigned int v141; // esi
  unsigned int v142; // r10d
  __int64 v143; // rcx
  unsigned __int64 v144; // r8
  __int64 v145; // r9
  int v146; // ecx
  int v147; // ecx
  unsigned __int64 v148; // rcx
  char *v149; // rcx
  char v150; // r8
  char *v151; // rax
  unsigned int v152; // eax
  unsigned __int64 v153; // r8
  __int64 v155; // rbp
  __int64 v156; // rdx
  char v157; // [rsp+60h] [rbp-98h]
  PIRP Irp; // [rsp+70h] [rbp-88h]
  unsigned int v160; // [rsp+78h] [rbp-80h]
  int v161; // [rsp+7Ch] [rbp-7Ch]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+80h] [rbp-78h] BYREF
  union _LARGE_INTEGER PerformanceFrequency[2]; // [rsp+98h] [rbp-60h] BYREF
  __int128 v164; // [rsp+A8h] [rbp-50h] BYREF

  v2 = *(_QWORD *)(a2 + 168);
  v3 = 0LL;
  v4 = *(PIRP *)(a2 + 160);
  v5 = 0;
  v6 = a2;
  *(_QWORD *)&v164 = a2;
  v7 = a1;
  v8 = 0LL;
  v157 = 0;
  v9 = 0LL;
  Irp = v4;
  if ( *(_BYTE *)(v2 + 2) != 40 )
  {
    v9 = (_BYTE *)(v2 + 4);
    v5 = *(_BYTE *)(v2 + 4);
    v161 = *(_DWORD *)(v2 + 12);
    v157 = v5;
    v160 = *(_DWORD *)(v2 + 16);
    goto LABEL_13;
  }
  v8 = v2;
  v161 = *(_DWORD *)(v2 + 24);
  v160 = *(_DWORD *)(v2 + 60);
  if ( !*(_DWORD *)(v2 + 20) )
  {
    v10 = *(_DWORD *)(v2 + 56);
    v11 = 0;
    if ( v10 )
    {
      while ( 1 )
      {
        v12 = *(unsigned int *)(v2 + 4LL * v11 + 120);
        if ( (unsigned int)v12 < 0x80 )
          goto LABEL_11;
        a2 = *(unsigned int *)(v2 + 16);
        if ( (unsigned int)v12 > (unsigned int)a2 )
          goto LABEL_11;
        v13 = v12 + v2;
        v14 = (unsigned int)v12;
        v15 = *(_DWORD *)(v12 + v2) - 64;
        if ( !v15 )
          goto LABEL_9;
        v16 = v15 - 1;
        if ( v16 )
          break;
        v17 = v14 + 56;
LABEL_10:
        if ( v17 <= a2 )
        {
          v5 = *(_BYTE *)(v13 + 8);
          v9 = (_BYTE *)(v13 + 8);
          v157 = v5;
LABEL_12:
          v7 = a1;
          goto LABEL_13;
        }
LABEL_11:
        if ( ++v11 >= v10 )
          goto LABEL_12;
      }
      if ( v16 != 1 )
        goto LABEL_11;
LABEL_9:
      v17 = v14 + 40;
      goto LABEL_10;
    }
  }
LABEL_13:
  if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
    && (HIDWORD(off_140168120->Timer) & 8) != 0
    && BYTE1(off_140168120->Timer) >= 2u )
  {
    sub_1400556F8(off_140168120->AttachedDevice, 56LL, &unk_14014D880, v7, v2, *(_BYTE *)(v2 + 3) & 0x3F);
  }
  v18 = *(_BYTE *)(v2 + 3) & 0x3F;
  if ( v18 != 5 && ((v5 - 8) & 0xDF) != 0 && v18 != 37 )
  {
    v20 = a1;
    goto LABEL_86;
  }
  v19 = *(_QWORD *)(v6 + 160);
  v20 = a1;
  if ( !v19
    || !a1
    || (*(_BYTE *)(a1 + 136) & 2) == 0
    || (v21 = *(_QWORD *)(v19 + 184), *(_BYTE *)v21 != 15)
    || ((v22 = *(_QWORD *)(v21 + 8), v23 = *(_BYTE *)(v22 + 2), v23 != 40)
      ? (v24 = *(unsigned __int8 *)(v22 + 2))
      : (v24 = *(_DWORD *)(v22 + 20)),
        v24) )
  {
LABEL_71:
    if ( v18 == 5 || ((v157 - 8) & 0xDF) == 0 )
      ++*(_DWORD *)(v20 + 2280);
    CurrentStackLocation = v4->Tail.Overlay.CurrentStackLocation;
    ByteOffset = CurrentStackLocation->Parameters.Read.ByteOffset;
    if ( *(_BYTE *)(v20 + 3368) && (dword_1401691F8 & 1) == 0
      || (v43 = *(_DWORD *)(v20 + 1928), ByteOffset.LowPart >= v43) && v43 && (*(_BYTE *)(v2 + 3) & 0x3F) != 0x25 )
    {
      if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
        && (HIDWORD(off_140168120->Timer) & 8) != 0
        && BYTE1(off_140168120->Timer) >= 3u )
      {
        sub_1400A3CEC(off_140168120->AttachedDevice, 58LL, v7, a1, ByteOffset.LowPart, v2);
      }
      v20 = a1;
      *(_BYTE *)(v2 + 3) = 4;
      if ( v157 == 8 )
        *v9 = 40;
      goto LABEL_86;
    }
    if ( off_140168120 == (PDEVICE_OBJECT)&off_140168120 || (HIDWORD(off_140168120->Timer) & 8) == 0 )
    {
      v155 = a1;
    }
    else
    {
      v155 = a1;
      if ( BYTE1(off_140168120->Timer) >= 4u )
        sub_1400A3CEC(off_140168120->AttachedDevice, 57LL, v7, a1, ByteOffset.LowPart, v2);
    }
    v156 = v164;
    CurrentStackLocation->Parameters.Read.ByteOffset.QuadPart = ByteOffset.QuadPart + 1;
    sub_140034B00(v155, v156, v9);
    return 0;
  }
  if ( v23 != 40 )
  {
    v33 = (_BYTE *)(v22 + 72);
    goto LABEL_62;
  }
  v25 = 0LL;
  if ( *(_DWORD *)(v22 + 20) )
    goto LABEL_49;
  v26 = *(_DWORD *)(v22 + 56);
  v27 = 0;
  if ( !v26 )
    goto LABEL_49;
  while ( 1 )
  {
    v28 = *(unsigned int *)(v22 + 4LL * v27 + 120);
    if ( (unsigned int)v28 < 0x80 )
      goto LABEL_45;
    a2 = *(unsigned int *)(v22 + 16);
    if ( (unsigned int)v28 >= (unsigned int)a2 )
      goto LABEL_45;
    v29 = v28 + v22;
    v7 = (unsigned int)v28;
    v30 = *(_DWORD *)(v28 + v22);
    if ( v30 == 64 )
      break;
    v31 = v30 - 65;
    if ( !v31 )
    {
      v32 = v7 + 56;
      goto LABEL_44;
    }
    if ( v31 == 1 && v7 + 40 <= a2 )
    {
      if ( *(_DWORD *)(v29 + 12) )
        v25 = (_BYTE *)(v29 + 32);
      goto LABEL_49;
    }
LABEL_45:
    if ( ++v27 >= v26 )
      goto LABEL_49;
  }
  v32 = v7 + 40;
LABEL_44:
  if ( v32 > a2 )
    goto LABEL_45;
  if ( *(_BYTE *)(v29 + 10) )
    v25 = (_BYTE *)(v29 + 24);
LABEL_49:
  v33 = v25;
  if ( !*(_DWORD *)(v22 + 20) )
  {
    v34 = *(_DWORD *)(v22 + 56);
    v35 = 0;
    if ( v34 )
    {
      while ( 2 )
      {
        v36 = *(unsigned int *)(v22 + 4LL * v35 + 120);
        if ( (unsigned int)v36 >= 0x80 )
        {
          a2 = *(unsigned int *)(v22 + 16);
          if ( (unsigned int)v36 < (unsigned int)a2 )
          {
            v7 = (unsigned int)v36;
            v37 = *(_DWORD *)(v36 + v22);
            if ( v37 == 64 )
              goto LABEL_56;
            v38 = v37 - 65;
            if ( !v38 )
            {
              v39 = v7 + 56;
              goto LABEL_57;
            }
            if ( v38 == 1 )
            {
LABEL_56:
              v39 = v7 + 40;
LABEL_57:
              if ( v39 <= a2 )
                break;
            }
          }
        }
        if ( ++v35 >= v34 )
          break;
        continue;
      }
    }
  }
LABEL_62:
  v20 = a1;
  if ( !v33
    || ((*v33 - 10) & 0x5F) != 0
    || !*(_DWORD *)(a1 + 932)
    || (v23 != 40 ? (v40 = *(_DWORD *)(v22 + 12)) : (v40 = *(_DWORD *)(v22 + 24)),
        (v40 & 0x1000) == 0 || !*(_QWORD *)(a1 + 3440)) )
  {
    v4 = Irp;
    goto LABEL_71;
  }
LABEL_86:
  if ( v8 )
  {
    v44 = *(_QWORD *)(v20 + 24);
    if ( *(_DWORD *)v44 == 1094997074 && (*(_BYTE *)(v44 + 111) & 4) != 0 )
      *(_DWORD *)(v8 + 44) = 0;
  }
  if ( (v161 & 0x100) == 0 && !*(_BYTE *)(v20 + 756) )
  {
    sub_14009D9B4(v20, a2, v7);
    *(_BYTE *)(v2 + 3) |= 0x40u;
  }
  v45 = v164;
  v46 = 0;
  v47 = 0;
  v48 = 0;
  v49 = 0;
  v50 = 0LL;
  v51 = *(_QWORD *)(v164 + 168);
  if ( *(_BYTE *)(v51 + 2) != 40 )
  {
    v50 = *(_BYTE **)(v51 + 32);
    v46 = *(_BYTE *)(v51 + 11);
    goto LABEL_105;
  }
  if ( !*(_DWORD *)(v51 + 20) )
  {
    v52 = *(_DWORD *)(v51 + 56);
    v53 = 0;
    if ( v52 )
    {
      while ( 2 )
      {
        v54 = *(unsigned int *)(v51 + 4LL * v53 + 120);
        if ( (unsigned int)v54 >= 0x80 )
        {
          v55 = *(unsigned int *)(v51 + 16);
          if ( (unsigned int)v54 < (unsigned int)v55 )
          {
            v56 = v54 + v51;
            v57 = (unsigned int)v54;
            v58 = *(_DWORD *)(v54 + v51);
            if ( v58 == 64 )
            {
              v65 = v57 + 40;
            }
            else
            {
              v59 = v58 - 65;
              if ( v59 )
              {
                if ( v59 == 1 && v57 + 40 <= v55 )
                {
                  v50 = *(_BYTE **)(v56 + 24);
                  goto LABEL_103;
                }
                goto LABEL_119;
              }
              v65 = v57 + 56;
            }
            if ( v65 <= v55 )
            {
              v50 = *(_BYTE **)(v56 + 16);
LABEL_103:
              v46 = *(_BYTE *)(v56 + 9);
LABEL_104:
              v45 = v164;
              break;
            }
          }
        }
LABEL_119:
        if ( ++v53 >= v52 )
          goto LABEL_104;
        continue;
      }
    }
  }
LABEL_105:
  if ( *(char *)(v51 + 3) < 0 && v50 && v46 )
  {
    v60 = 0;
    v61 = &v50[v46];
    v62 = v50 + 8;
    if ( (unsigned __int8)((*v50 & 0x7F) - 114) <= 1u )
    {
      if ( v62 <= v61 )
      {
        v48 = v50[2];
        v47 = v50[1] & 0xF;
        v49 = v50[3];
        goto LABEL_125;
      }
    }
    else if ( v62 <= v61 )
    {
      v47 = v50[2] & 0xF;
      v63 = v46;
      if ( (unsigned int)(unsigned __int8)v50[7] + 8 <= v46 )
        v63 = (unsigned __int8)v50[7] + 8;
      v64 = (unsigned __int64)&v50[v63];
      if ( (unsigned __int64)(v50 + 13) <= v64 )
        v48 = v50[12];
      if ( (unsigned __int64)(v50 + 14) <= v64 )
        v49 = v50[13];
LABEL_125:
      v60 = 1;
    }
    if ( v60 )
    {
      if ( off_140168120 == (PDEVICE_OBJECT)&off_140168120
        || (HIDWORD(off_140168120->Timer) & 8) == 0
        || BYTE1(off_140168120->Timer) < 3u )
      {
        v66 = a1;
      }
      else
      {
        v66 = a1;
        sub_1400A3D54(off_140168120->AttachedDevice, v47, off_140168120, a1, v51, v47, v48, v49);
      }
      v67 = &unk_140148000;
      while ( *(_BYTE *)v67 != v47 || *((_BYTE *)v67 + 1) != v48 || *((_BYTE *)v67 + 2) != v49 )
      {
        v67 += 2;
        if ( !v67[1] )
          goto LABEL_139;
      }
      ((void (__fastcall *)(__int64, __int64))v67[1])(v66, v45);
    }
  }
LABEL_139:
  if ( (*(_BYTE *)(v2 + 3) & 0x3F) == 5 || ((v157 - 8) & 0xDF) == 0 )
  {
    v68 = Irp;
    Irp->IoStatus.Status = -1073741661;
  }
  else
  {
    v68 = Irp;
    Irp->IoStatus.Status = sub_1400229C8(*(_BYTE *)(v2 + 3));
  }
  v69 = v160;
  if ( (*(_BYTE *)(v2 + 3) & 0x3F) != 0x12 )
    v69 = 0LL;
  v68->IoStatus.Information = v69;
  SecurityContext = v68->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
  if ( BYTE2(SecurityContext->SecurityQos) == 40 )
    SecurityQos = (__int64)SecurityContext[4].SecurityQos;
  else
    SecurityQos = (__int64)SecurityContext[2].SecurityQos;
  v72 = *(_QWORD *)(SecurityQos + 224);
  if ( (*(_BYTE *)(SecurityQos + 16) & 2) == 0 )
    goto LABEL_182;
  v73 = *(int **)(v72 + 560);
  v74 = SecurityQos + 48;
  v75 = &v73[16 * *(unsigned int *)(SecurityQos + 84) + 16];
  memset(&LockHandle, 0, sizeof(LockHandle));
  CurrentIrql = KeGetCurrentIrql();
  v77 = (KSPIN_LOCK *)(v75 + 10);
  if ( CurrentIrql != 2 )
  {
    KeAcquireInStackQueuedSpinLock(v77, &LockHandle);
    v86 = *(_BYTE *)(SecurityQos + 16);
    v87 = *v73;
    if ( (v86 & 2) != 0 )
    {
      *(_BYTE *)(SecurityQos + 16) = v86 & 0xFD;
      v88 = *(_QWORD *)v74;
      v89 = *(_QWORD *)v75;
      if ( *(_QWORD *)(*(_QWORD *)v74 + 8LL) != v74 )
        goto LABEL_187;
      v90 = *(_QWORD **)(SecurityQos + 56);
      if ( *v90 != v74 )
        goto LABEL_187;
      *v90 = v88;
      *(_QWORD *)(v88 + 8) = v90;
      if ( (*(_DWORD *)(SecurityQos + 96) & 1) != 0 )
      {
        v91 = SecurityQos + 64;
        if ( *((_QWORD *)v75 + 4) == SecurityQos + 64 )
          *((_QWORD *)v75 + 4) = *(_QWORD *)v91;
        v92 = *(_QWORD *)v91;
        if ( *(_QWORD *)(*(_QWORD *)v91 + 8LL) != v91 )
          goto LABEL_187;
        v93 = *(_QWORD **)(SecurityQos + 72);
        if ( *v93 != v91 )
          goto LABEL_187;
        *v93 = v92;
        *(_QWORD *)(v92 + 8) = v93;
        *(_DWORD *)(SecurityQos + 96) &= ~1u;
      }
      if ( (v87 & 4) == 0 && v89 == v74 )
      {
        if ( *(int **)v75 == v75 )
          v75[12] = -1;
        else
          v75[12] = *(_DWORD *)(*(_QWORD *)v75 + 32LL);
      }
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    goto LABEL_179;
  }
  KeAcquireInStackQueuedSpinLockAtDpcLevel(v77, &LockHandle);
  v78 = *(_BYTE *)(SecurityQos + 16);
  v79 = *v73;
  if ( (v78 & 2) == 0 )
    goto LABEL_164;
  *(_BYTE *)(SecurityQos + 16) = v78 & 0xFD;
  v80 = *(_QWORD *)v74;
  v81 = *(_QWORD *)v75;
  if ( *(_QWORD *)(*(_QWORD *)v74 + 8LL) != v74 )
    goto LABEL_187;
  v82 = *(_QWORD **)(SecurityQos + 56);
  if ( *v82 != v74 )
    goto LABEL_187;
  *v82 = v80;
  *(_QWORD *)(v80 + 8) = v82;
  if ( (*(_DWORD *)(SecurityQos + 96) & 1) == 0 )
    goto LABEL_159;
  v83 = SecurityQos + 64;
  if ( *((_QWORD *)v75 + 4) == SecurityQos + 64 )
    *((_QWORD *)v75 + 4) = *(_QWORD *)v83;
  v84 = *(_QWORD *)v83;
  if ( *(_QWORD *)(*(_QWORD *)v83 + 8LL) != v83 || (v85 = *(_QWORD **)(SecurityQos + 72), *v85 != v83) )
LABEL_187:
    __fastfail(3u);
  *v85 = v84;
  *(_QWORD *)(v84 + 8) = v85;
  *(_DWORD *)(SecurityQos + 96) &= ~1u;
LABEL_159:
  if ( (v79 & 4) == 0 && v81 == v74 )
  {
    if ( *(int **)v75 == v75 )
      v75[12] = -1;
    else
      v75[12] = *(_DWORD *)(*(_QWORD *)v75 + 32LL);
  }
LABEL_164:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
LABEL_179:
  v68 = Irp;
  if ( byte_140168DAA )
  {
    v164 = 0LL;
    IoGetActivityIdIrp(Irp, &v164);
    if ( byte_1401694F2 < 0 )
      sub_140001CE8(v95, v94, (__int64)&v164, v96, 4);
  }
LABEL_182:
  sub_140027440(SecurityQos, *(_QWORD *)(*(_QWORD *)(v72 + 24) + 8LL));
  if ( (unsigned int)sub_1400567A0(v98, v97) )
  {
    v101 = *(_QWORD *)(v72 + 3600);
    if ( v101 && *(_QWORD *)(v101 + 104) )
    {
LABEL_185:
      sub_14006AD74(v72, SecurityQos);
    }
    else
    {
      v99 = *(_QWORD *)(v72 + 24);
      if ( *(_QWORD *)(v99 + 5616) )
      {
        v100 = SecurityQos;
        goto LABEL_192;
      }
    }
  }
  else
  {
    v99 = *(_QWORD *)(v72 + 24);
    if ( *(_QWORD *)(v99 + 5624) )
    {
      v100 = SecurityQos;
      if ( (*(_BYTE *)(v99 + 112) & 0x10) != 0 )
        goto LABEL_185;
LABEL_192:
      sub_140056004(v99, v100);
    }
  }
  if ( BYTE2(SecurityContext->SecurityQos) == 40 )
  {
    if ( (*(_BYTE *)(SecurityQos + 16) & 0x40) != 0 )
    {
      v102 = *(_QWORD *)(SecurityQos + 752);
      PerformanceFrequency[0].QuadPart = 1LL;
      if ( v102 )
      {
        if ( byte_140168724 )
          PerformanceCounter = KeQueryPerformanceCounter(PerformanceFrequency);
        else
          PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
        v104 = PerformanceCounter;
        *(_BYTE *)(v102 + 3) = BYTE3(SecurityContext->SecurityQos);
        *(_DWORD *)(v102 + 12) = SecurityContext[1].SecurityQos;
        if ( ((__int64)SecurityContext[1].SecurityQos & 0x40) != 0 )
          *(_DWORD *)(v102 + 16) = HIDWORD(SecurityContext[2].AccessState);
        if ( BYTE3(SecurityContext->SecurityQos) == 48 )
          *(_DWORD *)(v102 + 64) = SecurityContext[1].FullCreateOptions;
        if ( !SecurityContext->FullCreateOptions )
        {
          AccessState = (unsigned int)SecurityContext[2].AccessState;
          v106 = 0;
          if ( AccessState )
          {
            while ( 1 )
            {
              v107 = *((unsigned int *)&SecurityContext[5].SecurityQos + v106);
              if ( (unsigned int)v107 >= 0x80 )
              {
                DesiredAccess = SecurityContext->DesiredAccess;
                if ( (unsigned int)v107 <= (unsigned int)DesiredAccess )
                {
                  v109 = (__int64)SecurityContext + v107;
                  if ( *(_DWORD *)((char *)&SecurityContext->SecurityQos + v107) == 64 && v107 + 40 <= DesiredAccess )
                    break;
                }
              }
              if ( ++v106 >= AccessState )
                goto LABEL_210;
            }
            *(_BYTE *)(v102 + 4) = *(_BYTE *)(v109 + 8);
            *(_QWORD *)(v102 + 32) = *(_QWORD *)(v109 + 16);
            *(_BYTE *)(v102 + 11) = *(_BYTE *)(v109 + 9);
          }
          else
          {
LABEL_210:
            *(_BYTE *)(v102 + 3) = 48;
            *(_DWORD *)(v102 + 64) = -1073741811;
          }
        }
        if ( byte_140168724 )
          v110 = KeQueryPerformanceCounter(0LL);
        else
          v110.QuadPart = KeQueryUnbiasedInterruptTime();
        if ( v110.QuadPart <= 0 || v110.QuadPart >= v104.QuadPart )
          v113 = v110.QuadPart - v104.QuadPart;
        else
          v113 = v110.QuadPart - v104.QuadPart - 1;
        if ( byte_140168724 )
        {
          LowPart = PerformanceFrequency[0].LowPart;
          v114 = 0;
          if ( PerformanceFrequency[0].QuadPart && v113 )
          {
            v115 = v113 / PerformanceFrequency[0].QuadPart;
            v113 = 1000 * (v113 % PerformanceFrequency[0].QuadPart);
            v111.QuadPart = 10000 * (v113 % PerformanceFrequency[0].QuadPart) % PerformanceFrequency[0].QuadPart;
            v114 = 10000 * (v113 % PerformanceFrequency[0].QuadPart) / PerformanceFrequency[0].QuadPart
                 + 16 * (-24 * v115 + v113 / PerformanceFrequency[0].QuadPart);
          }
        }
        else
        {
          v114 = v113;
        }
        if ( (byte_1401694F0 & 0x40) != 0 )
          sub_140053A04(LowPart, v111.LowPart, v113, (unsigned int)L"Translate STORAGE_REQUEST_BLOCK result", v114);
      }
      *(_QWORD *)(*(_QWORD *)(SecurityQos + 752) + 48LL) = *(_QWORD *)(SecurityQos + 176);
      *(_QWORD *)(*(_QWORD *)(SecurityQos + 752) + 24LL) = *(_QWORD *)(SecurityQos + 184);
      *(_QWORD *)(*(_QWORD *)(SecurityQos + 752) + 56LL) = 0LL;
      *(_QWORD *)(*(_QWORD *)(SecurityQos + 752) + 40LL) = 0LL;
      v68->Tail.Overlay.CurrentStackLocation->Parameters.WMI.ProviderId = *(_QWORD *)(SecurityQos + 752);
      *(_BYTE *)(SecurityQos + 16) &= ~0x40u;
      *(_QWORD *)(SecurityQos + 752) = 0LL;
    }
    else
    {
      SecurityContext[4].SecurityQos = 0LL;
      *(_QWORD *)&SecurityContext[2].DesiredAccess = *(_QWORD *)(SecurityQos + 184);
      SecurityContext[4].AccessState = 0LL;
      if ( *(_QWORD *)(SecurityQos + 192) )
      {
        if ( ((__int64)SecurityContext[1].SecurityQos & 0xC0) == 0xC0 )
        {
          v116 = (unsigned int)SecurityContext[2].AccessState;
          v117 = 0;
          if ( v116 )
          {
            while ( 1 )
            {
              v118 = *((unsigned int *)&SecurityContext[5].SecurityQos + v117);
              if ( (unsigned int)v118 >= 0x80 )
              {
                v119 = SecurityContext->DesiredAccess;
                if ( (unsigned int)v118 <= (unsigned int)v119 )
                {
                  v120 = (__int64)SecurityContext + v118;
                  if ( *(_DWORD *)((char *)&SecurityContext->SecurityQos + v118) == 1 && v118 + 24 <= v119 )
                    break;
                }
              }
              if ( ++v117 >= v116 )
                goto LABEL_238;
            }
            if ( v120 )
              *(_QWORD *)(v120 + 16) = *(_QWORD *)(SecurityQos + 192);
          }
        }
      }
LABEL_238:
      if ( byte_1401688AC )
      {
        v121 = (int)SecurityContext[1].SecurityQos;
        if ( (v121 & 0x2000000) != 0 )
          LODWORD(SecurityContext[1].SecurityQos) = v121 & 0xFDFFFFFF;
      }
    }
  }
  else
  {
    v122 = byte_1401688AC == 0;
    SecurityContext[2].SecurityQos = *(PSECURITY_QUALITY_OF_SERVICE *)(SecurityQos + 176);
    SecurityContext[1].SecurityQos = *(PSECURITY_QUALITY_OF_SERVICE *)(SecurityQos + 184);
    SecurityContext[2].AccessState = 0LL;
    *(_QWORD *)&SecurityContext[1].DesiredAccess = 0LL;
    if ( !v122 )
    {
      AccessState_high = HIDWORD(SecurityContext->AccessState);
      if ( (AccessState_high & 0x2000000) != 0 )
        HIDWORD(SecurityContext->AccessState) = AccessState_high & 0xFDFFFFFF;
    }
  }
  sub_140017A20(SecurityQos, 1);
  if ( BYTE2(SecurityContext->SecurityQos) == 40 )
    v124 = (int)SecurityContext[1].SecurityQos;
  else
    v124 = HIDWORD(SecurityContext->AccessState);
  if ( (v124 & 0x4000) == 0 )
  {
    v125 = (unsigned __int64)HIDWORD(KeGetPcr()[1].LockArray) << 6;
    v126 = *(_DWORD *)(v125 + *(_QWORD *)(v72 + 40));
    if ( (v126 & 1) != 0 )
    {
LABEL_251:
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v72 + 1032), 0xFFFFFFFF) == 1 )
        KeSetEvent((PRKEVENT)(v72 + 520), 0, 0);
    }
    else
    {
      while ( 1 )
      {
        v127 = v126;
        v126 = _InterlockedCompareExchange((volatile signed __int32 *)(v125 + *(_QWORD *)(v72 + 40)), v126 - 2, v126);
        if ( v127 == v126 )
          break;
        if ( (v126 & 1) != 0 )
          goto LABEL_251;
      }
    }
  }
  if ( off_140168120 == (PDEVICE_OBJECT)&off_140168120 || (HIDWORD(off_140168120->Timer) & 8) == 0 )
  {
    v129 = a1;
    v128 = (__int64)Irp;
  }
  else
  {
    v128 = (__int64)Irp;
    v129 = a1;
    if ( BYTE1(off_140168120->Timer) >= 2u )
      sub_1400556F8(off_140168120->AttachedDevice, 59LL, &unk_14014D880, a1, Irp, Irp->IoStatus.Status);
  }
  if ( (qword_140168458 & 0x10) != 0 )
    sub_14000F84C(*(_QWORD *)(v129 + 24), v128, v2);
  v122 = byte_140168DAA == 0;
  *(_BYTE *)(v128 + 141) = -84;
  if ( v122 )
    goto LABEL_318;
  *(_OWORD *)&PerformanceFrequency[0].LowPart = 0LL;
  IoGetActivityIdIrp(v128, PerformanceFrequency);
  v131 = *(_QWORD *)(v128 + 184);
  if ( *(_BYTE *)v131 == 14 )
  {
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_318;
    v133 = &unk_140148B18;
    goto LABEL_317;
  }
  if ( *(_BYTE *)v131 != 15 )
  {
    if ( *(_BYTE *)v131 != 27 )
      goto LABEL_318;
    if ( *(_BYTE *)(v131 + 1) == 7 && !*(_DWORD *)(v131 + 8) )
    {
      if ( (byte_1401694F2 & 0x40) != 0 )
      {
        v132 = *(_DWORD **)(v128 + 56);
        if ( v132 )
          LODWORD(v3) = *v132;
        sub_140056AB0(v130, v131, (unsigned int)PerformanceFrequency, v128, (char)v3, *(_DWORD *)(v128 + 48));
      }
      goto LABEL_318;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_318;
    v133 = &unk_140149FE8;
LABEL_317:
    sub_140052F3C(v130, v133, PerformanceFrequency, v128, *(_DWORD *)(v128 + 48));
    goto LABEL_318;
  }
  if ( byte_1401694F1 >= 0 )
    goto LABEL_318;
  v134 = *(_QWORD *)(v131 + 8);
  v135 = 0;
  v136 = 0;
  v137 = 0;
  v138 = 0;
  v139 = 0;
  if ( *(_BYTE *)(v134 + 2) == 40 )
  {
    v140 = 0LL;
    if ( *(_DWORD *)(v134 + 20) )
      goto LABEL_318;
    v141 = *(_DWORD *)(v134 + 56);
    v142 = 0;
    if ( !v141 )
      goto LABEL_294;
    while ( 2 )
    {
      v143 = *(unsigned int *)(v134 + 4LL * v142 + 120);
      if ( (unsigned int)v143 >= 0x80 )
      {
        v144 = *(unsigned int *)(v134 + 16);
        if ( (unsigned int)v143 < (unsigned int)v144 )
        {
          v145 = (unsigned int)v143;
          v146 = *(_DWORD *)(v134 + v143) - 64;
          if ( v146 )
          {
            v147 = v146 - 1;
            if ( v147 )
            {
              if ( v147 == 1 && v145 + 40 <= v144 )
              {
                if ( *(_DWORD *)(v134 + v145 + 12) )
                  v140 = (unsigned __int8 *)(v134 + v145 + 32);
                v3 = *(_BYTE **)(v134 + v145 + 24);
                goto LABEL_293;
              }
              goto LABEL_288;
            }
            v148 = v145 + 56;
          }
          else
          {
            v148 = v145 + 40;
          }
          if ( v148 <= v144 )
          {
            if ( *(_BYTE *)(v134 + v145 + 10) )
              v140 = (unsigned __int8 *)(v134 + v145 + 24);
            v3 = *(_BYTE **)(v134 + v145 + 16);
LABEL_293:
            v135 = *(_BYTE *)(v134 + v145 + 8);
            v136 = *(_BYTE *)(v134 + v145 + 9);
LABEL_294:
            if ( v140 )
            {
              LODWORD(v149) = *v140;
              v128 = (__int64)Irp;
              goto LABEL_297;
            }
            goto LABEL_318;
          }
        }
      }
LABEL_288:
      if ( ++v142 >= v141 )
        goto LABEL_294;
      continue;
    }
  }
  LODWORD(v149) = *(unsigned __int8 *)(v134 + 72);
  v3 = *(_BYTE **)(v134 + 32);
  v136 = *(_BYTE *)(v134 + 11);
  v135 = *(_BYTE *)(v134 + 4);
  if ( *(_BYTE *)(v134 + 2) )
    goto LABEL_318;
LABEL_297:
  LOBYTE(v149) = (_BYTE)v149 - 8;
  if ( ((unsigned __int8)v149 & 0x5D) == 0 )
  {
    if ( *(_BYTE *)(v134 + 3) == 1 || !v3 || !v136 )
      goto LABEL_313;
    v150 = 0;
    v149 = &v3[v136];
    v151 = v3 + 8;
    if ( (unsigned __int8)((*v3 & 0x7F) - 114) <= 1u )
    {
      if ( v151 <= v149 )
      {
        v138 = v3[2];
        v137 = v3[1] & 0xF;
        v139 = v3[3];
        goto LABEL_311;
      }
    }
    else if ( v151 <= v149 )
    {
      v137 = v3[2] & 0xF;
      v152 = v136;
      if ( (unsigned int)(unsigned __int8)v3[7] + 8 <= v136 )
        v152 = (unsigned __int8)v3[7] + 8;
      v149 = v3 + 13;
      v153 = (unsigned __int64)&v3[v152];
      if ( (unsigned __int64)(v3 + 13) <= v153 )
        v138 = v3[12];
      if ( (unsigned __int64)(v3 + 14) <= v153 )
        v139 = *v149;
LABEL_311:
      v150 = 1;
    }
    if ( !v150 )
    {
LABEL_313:
      v139 = 0;
      v138 = 0;
      v137 = 0;
    }
    sub_140052E64(
      (_DWORD)v149,
      v134,
      (unsigned int)PerformanceFrequency,
      v128,
      *(_DWORD *)(v128 + 48),
      *(_BYTE *)(v134 + 3),
      v135,
      v137,
      v138,
      v139,
      v128);
  }
LABEL_318:
  IofCompleteRequest(Irp, 0);
  return 1;
}
