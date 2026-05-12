/*
 * XREFs of sub_14003EC20 @ 0x14003EC20
 * Callers:
 *     <none>
 * Callees:
 *     sub_140001CE8 @ 0x140001CE8 (sub_140001CE8.c)
 *     sub_14000F84C @ 0x14000F84C (sub_14000F84C.c)
 *     sub_140016754 @ 0x140016754 (sub_140016754.c)
 *     sub_140017A20 @ 0x140017A20 (sub_140017A20.c)
 *     sub_14001F6B0 @ 0x14001F6B0 (sub_14001F6B0.c)
 *     sub_140021110 @ 0x140021110 (sub_140021110.c)
 *     sub_140021280 @ 0x140021280 (sub_140021280.c)
 *     sub_1400229C8 @ 0x1400229C8 (sub_1400229C8.c)
 *     sub_140027440 @ 0x140027440 (sub_140027440.c)
 *     sub_140037A5C @ 0x140037A5C (sub_140037A5C.c)
 *     sub_14003F840 @ 0x14003F840 (sub_14003F840.c)
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140053A04 @ 0x140053A04 (sub_140053A04.c)
 *     sub_1400556F8 @ 0x1400556F8 (sub_1400556F8.c)
 *     sub_140056004 @ 0x140056004 (sub_140056004.c)
 *     sub_1400567A0 @ 0x1400567A0 (sub_1400567A0.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     sub_140066768 @ 0x140066768 (sub_140066768.c)
 *     sub_14006AD74 @ 0x14006AD74 (sub_14006AD74.c)
 *     sub_14009DB74 @ 0x14009DB74 (sub_14009DB74.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

void __fastcall sub_14003EC20(_QWORD *a1)
{
  __int64 v1; // r15
  __int64 v2; // r13
  __int64 v3; // r12
  unsigned int v4; // edx
  unsigned int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // r14d
  unsigned int v8; // eax
  unsigned int v9; // eax
  int v10; // eax
  int v11; // edi
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rcx
  char v15; // al
  __int64 v16; // rax
  unsigned __int8 v17; // bl
  __int64 v18; // rsi
  __int64 v19; // rbx
  __int64 v20; // rsi
  bool v21; // zf
  __int64 v22; // r15
  __int64 v23; // rcx
  __int64 v24; // rbx
  __int64 v25; // r14
  __int64 *v26; // rbx
  KSPIN_LOCK *v27; // r14
  KIRQL CurrentIrql; // al
  KSPIN_LOCK *v29; // rcx
  int v30; // r9d
  char v31; // al
  __int64 *v32; // rcx
  KSPIN_LOCK v33; // r8
  __int64 **v34; // rax
  __int64 *v35; // rcx
  KSPIN_LOCK v36; // rdx
  __int64 **v37; // rax
  int v38; // r9d
  char v39; // al
  __int64 *v40; // rcx
  KSPIN_LOCK v41; // r8
  __int64 **v42; // rax
  __int64 *v43; // rcx
  KSPIN_LOCK v44; // rdx
  __int64 **v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r9
  __int64 v49; // rbx
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // rcx
  __int64 v53; // rdx
  __int64 v54; // rax
  __int64 v55; // r14
  LARGE_INTEGER v56; // rax
  LARGE_INTEGER v57; // rbx
  unsigned int v58; // r8d
  __int64 v59; // rcx
  unsigned __int64 v60; // rax
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER v62; // rdx
  DWORD LowPart; // ecx
  unsigned __int64 v64; // r8
  char v65; // r9
  LONGLONG v66; // r9
  unsigned int v67; // r14d
  unsigned int v68; // r8d
  __int64 v69; // rdx
  __int64 v70; // rcx
  unsigned __int64 v71; // r10
  int v72; // eax
  int v73; // eax
  int v74; // eax
  unsigned __int64 v75; // r8
  signed __int32 v76; // eax
  signed __int32 v77; // ett
  __int64 v78; // rbx
  unsigned __int64 v79; // rcx
  __int64 v80; // rdx
  int *v81; // rax
  void *v82; // rdx
  __int64 v83; // rdx
  char v84; // bl
  char v85; // si
  _BYTE *v86; // r9
  unsigned __int8 v87; // r10
  char v88; // r11
  char v89; // r12
  char *v90; // rbx
  unsigned int v91; // r15d
  unsigned __int64 v92; // r14
  __int64 v93; // r8
  int v94; // ecx
  char v95; // cl
  char v96; // r8
  _BYTE *v97; // rax
  char *v98; // r12
  unsigned int v99; // eax
  char v100; // al
  char v101; // [rsp+60h] [rbp-A0h] BYREF
  char v102; // [rsp+61h] [rbp-9Fh] BYREF
  char v103; // [rsp+62h] [rbp-9Eh] BYREF
  char v104; // [rsp+63h] [rbp-9Dh] BYREF
  unsigned int v105; // [rsp+64h] [rbp-9Ch] BYREF
  unsigned int v106; // [rsp+6Ch] [rbp-94h]
  int *v107; // [rsp+70h] [rbp-90h]
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+78h] [rbp-88h] BYREF
  __int64 v109; // [rsp+80h] [rbp-80h]
  _QWORD *v110; // [rsp+88h] [rbp-78h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+90h] [rbp-70h] BYREF
  __int128 v112; // [rsp+A8h] [rbp-58h] BYREF
  __int128 v113; // [rsp+B8h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v114; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v115; // [rsp+F0h] [rbp-10h]
  __int64 v116; // [rsp+F8h] [rbp-8h]
  __int64 v117; // [rsp+100h] [rbp+0h]
  __int64 v118; // [rsp+108h] [rbp+8h]
  unsigned int *v119; // [rsp+110h] [rbp+10h]
  __int64 v120; // [rsp+118h] [rbp+18h]
  char *v121; // [rsp+120h] [rbp+20h]
  __int64 v122; // [rsp+128h] [rbp+28h]
  char *v123; // [rsp+130h] [rbp+30h]
  __int64 v124; // [rsp+138h] [rbp+38h]
  char *v125; // [rsp+140h] [rbp+40h]
  __int64 v126; // [rsp+148h] [rbp+48h]
  char *v127; // [rsp+150h] [rbp+50h]
  __int64 v128; // [rsp+158h] [rbp+58h]

  v1 = a1[21];
  v2 = a1[20];
  v3 = a1[28];
  v110 = a1;
  v4 = *(unsigned __int8 *)(v1 + 2);
  *(_QWORD *)&v112 = v1;
  v5 = v4;
  if ( (_BYTE)v4 == 40 )
  {
    v6 = *(unsigned int *)(v1 + 20);
    v7 = *(_DWORD *)(v1 + 60);
    v106 = *(_DWORD *)(v1 + 20);
  }
  else
  {
    v7 = *(_DWORD *)(v1 + 16);
    v6 = v4;
    v106 = v4;
  }
  if ( (_DWORD)v6 != 16 )
  {
    if ( (_BYTE)v4 == 40 )
      v5 = *(_DWORD *)(v1 + 20);
    _InterlockedDecrement((volatile signed __int32 *)(v3 + 1396));
    v8 = v5 - 18;
    if ( v8 && (v9 = v8 - 1) != 0 )
    {
      if ( v9 == 13 )
        sub_14009DB74(v3);
    }
    else
    {
      sub_140066768(*(_QWORD *)(v3 + 24));
    }
  }
  v10 = *(unsigned __int8 *)(v1 + 2);
  if ( (_BYTE)v10 == 40 )
    v10 = *(_DWORD *)(v1 + 20);
  LOBYTE(v11) = 0;
  if ( v10 == 16 && (unsigned int)dword_140168178 > 5 && (unsigned __int8)sub_14003F840(v6, 0x400000000000LL) )
  {
    v14 = *(_QWORD *)(v3 + 24);
    v116 = 16LL;
    v118 = 16LL;
    v115 = v14 + 5064;
    v117 = v3 + 2104;
    v105 = *(_DWORD *)(v14 + 56);
    v119 = &v105;
    v102 = *(_BYTE *)(v3 + 104);
    v121 = &v102;
    v101 = *(_BYTE *)(v3 + 105);
    v123 = &v101;
    v103 = *(_BYTE *)(v3 + 106);
    v125 = &v103;
    v120 = 4LL;
    v122 = 1LL;
    v124 = 1LL;
    v126 = 1LL;
    v15 = *(_BYTE *)(v1 + 3) & 0x3F;
    v128 = 1LL;
    v104 = v15;
    v127 = &v104;
    sub_140037A5C(v14, (unsigned __int8 *)dword_14015660A, v12, v13, 9u, &v114);
  }
  v16 = *(_QWORD *)(v2 + 184);
  v17 = *(_BYTE *)(v16 + 16) & 3;
  *(_QWORD *)(v16 + 16) = 0LL;
  v18 = *(_QWORD *)(v3 + 24);
  if ( (v17 & 1) != 0 && sub_140021280(v3) )
  {
    PoFxIdleComponent(**(_QWORD **)(v3 + 1872), 0LL, 0LL);
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v3 + 1864));
  }
  if ( v17 >= 2u && *(_QWORD *)(v18 + 4960) )
    sub_140021110(v18, 0LL, 0LL);
  v19 = (__int64)v110;
  if ( (*((_BYTE *)v110 + 17) & 2) != 0 )
  {
    sub_14001F6B0(v3, *((_DWORD *)v110 + 187));
    *(_BYTE *)(v19 + 17) &= ~2u;
  }
  *(_DWORD *)(v2 + 48) = sub_1400229C8(*(_BYTE *)(v1 + 3));
  *(_QWORD *)(v2 + 56) = v7;
  v20 = *(_QWORD *)(*(_QWORD *)(v2 + 184) + 8LL);
  v21 = *(_BYTE *)(v20 + 2) == 40;
  if ( *(_BYTE *)(v20 + 2) == 40 )
    v22 = *(_QWORD *)(v20 + 96);
  else
    v22 = *(_QWORD *)(v20 + 48);
  v23 = *(_QWORD *)(v22 + 224);
  v109 = v23;
  if ( v21 )
    v24 = *(_QWORD *)(v20 + 96);
  else
    v24 = *(_QWORD *)(v20 + 48);
  if ( (*(_BYTE *)(v24 + 16) & 2) != 0 )
  {
    v25 = *(unsigned int *)(v24 + 84) + 1LL;
    v107 = *(int **)(v23 + 560);
    v26 = (__int64 *)(v24 + 48);
    v27 = (KSPIN_LOCK *)&v107[16 * v25];
    memset(&LockHandle, 0, sizeof(LockHandle));
    CurrentIrql = KeGetCurrentIrql();
    v29 = v27 + 5;
    if ( CurrentIrql == 2 )
    {
      KeAcquireInStackQueuedSpinLockAtDpcLevel(v29, &LockHandle);
      v30 = *v107;
      v31 = *((_BYTE *)v26 - 32);
      if ( (v31 & 2) == 0 )
      {
LABEL_48:
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
LABEL_63:
        if ( byte_140168DAA )
        {
          v113 = 0LL;
          IoGetActivityIdIrp(v2, &v113);
          if ( byte_1401694F2 < 0 )
            sub_140001CE8(v47, v46, (__int64)&v113, v48, 4);
        }
        goto LABEL_66;
      }
      *((_BYTE *)v26 - 32) = v31 & 0xFD;
      v32 = (__int64 *)*v26;
      v33 = *v27;
      if ( *(__int64 **)(*v26 + 8) == v26 )
      {
        v34 = (__int64 **)v26[1];
        if ( *v34 == v26 )
        {
          *v34 = v32;
          v32[1] = (__int64)v34;
          if ( (v26[6] & 1) == 0 )
          {
LABEL_43:
            if ( (v30 & 4) == 0 && (__int64 *)v33 == v26 )
            {
              if ( (KSPIN_LOCK *)*v27 == v27 )
                *((_DWORD *)v27 + 12) = -1;
              else
                *((_DWORD *)v27 + 12) = *(_DWORD *)(*v27 + 32);
            }
            goto LABEL_48;
          }
          v35 = v26 + 2;
          if ( (__int64 *)v27[4] == v26 + 2 )
            v27[4] = *v35;
          v36 = *v35;
          if ( *(__int64 **)(*v35 + 8) == v35 )
          {
            v37 = (__int64 **)v26[3];
            if ( *v37 == v35 )
            {
              *v37 = (__int64 *)v36;
              *(_QWORD *)(v36 + 8) = v37;
              *((_DWORD *)v26 + 12) &= ~1u;
              goto LABEL_43;
            }
          }
        }
      }
LABEL_71:
      __fastfail(3u);
    }
    KeAcquireInStackQueuedSpinLock(v29, &LockHandle);
    v38 = *v107;
    v39 = *((_BYTE *)v26 - 32);
    if ( (v39 & 2) != 0 )
    {
      *((_BYTE *)v26 - 32) = v39 & 0xFD;
      v40 = (__int64 *)*v26;
      v41 = *v27;
      if ( *(__int64 **)(*v26 + 8) != v26 )
        goto LABEL_71;
      v42 = (__int64 **)v26[1];
      if ( *v42 != v26 )
        goto LABEL_71;
      *v42 = v40;
      v40[1] = (__int64)v42;
      if ( (v26[6] & 1) != 0 )
      {
        v43 = v26 + 2;
        if ( (__int64 *)v27[4] == v26 + 2 )
          v27[4] = *v43;
        v44 = *v43;
        if ( *(__int64 **)(*v43 + 8) != v43 )
          goto LABEL_71;
        v45 = (__int64 **)v26[3];
        if ( *v45 != v43 )
          goto LABEL_71;
        *v45 = (__int64 *)v44;
        *(_QWORD *)(v44 + 8) = v45;
        *((_DWORD *)v26 + 12) &= ~1u;
      }
      if ( (v38 & 4) == 0 && (__int64 *)v41 == v26 )
      {
        if ( (KSPIN_LOCK *)*v27 == v27 )
          *((_DWORD *)v27 + 12) = -1;
        else
          *((_DWORD *)v27 + 12) = *(_DWORD *)(*v27 + 32);
      }
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    goto LABEL_63;
  }
LABEL_66:
  v49 = v109;
  sub_140027440(v22, *(_QWORD *)(*(_QWORD *)(v109 + 24) + 8LL));
  if ( (unsigned int)sub_1400567A0(v51, v50) )
  {
    v54 = *(_QWORD *)(v49 + 3600);
    if ( v54 && *(_QWORD *)(v54 + 104) )
    {
      v53 = v22;
      goto LABEL_69;
    }
    v52 = *(_QWORD *)(v49 + 24);
    if ( !*(_QWORD *)(v52 + 5616) )
      goto LABEL_78;
    v53 = v22;
LABEL_77:
    sub_140056004(v52, v53);
    goto LABEL_78;
  }
  v52 = *(_QWORD *)(v49 + 24);
  if ( *(_QWORD *)(v52 + 5624) )
  {
    v53 = v22;
    if ( (*(_BYTE *)(v52 + 112) & 0x10) != 0 )
    {
LABEL_69:
      sub_14006AD74(v49, v53);
      goto LABEL_78;
    }
    goto LABEL_77;
  }
LABEL_78:
  if ( *(_BYTE *)(v20 + 2) == 40 )
  {
    if ( (*(_BYTE *)(v22 + 16) & 0x40) != 0 )
    {
      v55 = *(_QWORD *)(v22 + 752);
      PerformanceFrequency.QuadPart = 1LL;
      if ( v55 )
      {
        if ( byte_140168724 )
          v56 = KeQueryPerformanceCounter(&PerformanceFrequency);
        else
          v56.QuadPart = KeQueryUnbiasedInterruptTime();
        v57 = v56;
        *(_BYTE *)(v55 + 3) = *(_BYTE *)(v20 + 3);
        *(_DWORD *)(v55 + 12) = *(_DWORD *)(v20 + 24);
        if ( (*(_DWORD *)(v20 + 24) & 0x40) != 0 )
          *(_DWORD *)(v55 + 16) = *(_DWORD *)(v20 + 60);
        if ( *(_BYTE *)(v20 + 3) == 48 )
          *(_DWORD *)(v55 + 64) = *(_DWORD *)(v20 + 44);
        if ( !*(_DWORD *)(v20 + 20) )
        {
          v58 = 0;
          if ( *(_DWORD *)(v20 + 56) )
          {
            while ( 1 )
            {
              v59 = *(unsigned int *)(v20 + 4LL * v58 + 120);
              if ( (unsigned int)v59 >= 0x80 )
              {
                v60 = *(unsigned int *)(v20 + 16);
                if ( (unsigned int)v59 <= (unsigned int)v60 && *(_DWORD *)(v59 + v20) == 64 && v59 + 40 <= v60 )
                  break;
              }
              if ( ++v58 >= *(_DWORD *)(v20 + 56) )
                goto LABEL_95;
            }
            *(_BYTE *)(v55 + 4) = *(_BYTE *)((unsigned int)v59 + v20 + 8);
            *(_QWORD *)(v55 + 32) = *(_QWORD *)((unsigned int)v59 + v20 + 16);
            *(_BYTE *)(v55 + 11) = *(_BYTE *)((unsigned int)v59 + v20 + 9);
          }
          else
          {
LABEL_95:
            *(_BYTE *)(v55 + 3) = 48;
            *(_DWORD *)(v55 + 64) = -1073741811;
          }
        }
        if ( byte_140168724 )
          PerformanceCounter = KeQueryPerformanceCounter(0LL);
        else
          PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
        if ( PerformanceCounter.QuadPart <= 0 || PerformanceCounter.QuadPart >= v57.QuadPart )
          v64 = PerformanceCounter.QuadPart - v57.QuadPart;
        else
          v64 = PerformanceCounter.QuadPart - v57.QuadPart - 1;
        if ( byte_140168724 )
        {
          LowPart = PerformanceFrequency.LowPart;
          v65 = 0;
          if ( PerformanceFrequency.QuadPart && v64 )
          {
            v66 = v64 / PerformanceFrequency.QuadPart;
            v64 = 1000 * (v64 % PerformanceFrequency.QuadPart);
            v62.QuadPart = 10000 * (v64 % PerformanceFrequency.QuadPart) % PerformanceFrequency.QuadPart;
            v65 = 10000 * (v64 % PerformanceFrequency.QuadPart) / PerformanceFrequency.QuadPart
                + 16 * (-24 * v66 + v64 / PerformanceFrequency.QuadPart);
          }
        }
        else
        {
          v65 = v64;
        }
        if ( (byte_1401694F0 & 0x40) != 0 )
          sub_140053A04(LowPart, v62.LowPart, v64, (unsigned int)L"Translate STORAGE_REQUEST_BLOCK result", v65);
        v49 = v109;
      }
      *(_QWORD *)(*(_QWORD *)(v22 + 752) + 48LL) = *(_QWORD *)(v22 + 176);
      *(_QWORD *)(*(_QWORD *)(v22 + 752) + 24LL) = *(_QWORD *)(v22 + 184);
      *(_QWORD *)(*(_QWORD *)(v22 + 752) + 56LL) = 0LL;
      *(_QWORD *)(*(_QWORD *)(v22 + 752) + 40LL) = 0LL;
      *(_QWORD *)(*(_QWORD *)(v2 + 184) + 8LL) = *(_QWORD *)(v22 + 752);
      *(_BYTE *)(v22 + 16) &= ~0x40u;
      *(_QWORD *)(v22 + 752) = 0LL;
    }
    else
    {
      *(_QWORD *)(v20 + 96) = 0LL;
      *(_QWORD *)(v20 + 64) = *(_QWORD *)(v22 + 184);
      *(_QWORD *)(v20 + 104) = 0LL;
      v107 = *(int **)(v22 + 192);
      if ( v107 )
      {
        if ( (*(_BYTE *)(v20 + 24) & 0xC0) == 0xC0 )
        {
          v67 = *(_DWORD *)(v20 + 56);
          v68 = 0;
          if ( v67 )
          {
            while ( 1 )
            {
              v69 = 0LL;
              v70 = *(unsigned int *)(v20 + 4LL * v68 + 120);
              if ( (unsigned int)v70 >= 0x80 )
              {
                v71 = *(unsigned int *)(v20 + 16);
                if ( (unsigned int)v70 <= (unsigned int)v71 && *(_DWORD *)(v70 + v20) == 1 && v70 + 24 <= v71 )
                  break;
              }
              if ( ++v68 >= v67 )
                goto LABEL_123;
            }
            v69 = v70 + v20;
LABEL_123:
            if ( v69 )
              *(_QWORD *)(v69 + 16) = v107;
          }
        }
      }
      if ( byte_1401688AC )
      {
        v72 = *(_DWORD *)(v20 + 24);
        if ( (v72 & 0x2000000) != 0 )
          *(_DWORD *)(v20 + 24) = v72 & 0xFDFFFFFF;
      }
    }
  }
  else
  {
    v21 = byte_1401688AC == 0;
    *(_QWORD *)(v20 + 48) = *(_QWORD *)(v22 + 176);
    *(_QWORD *)(v20 + 24) = *(_QWORD *)(v22 + 184);
    *(_QWORD *)(v20 + 56) = 0LL;
    *(_QWORD *)(v20 + 40) = 0LL;
    if ( !v21 )
    {
      v73 = *(_DWORD *)(v20 + 12);
      if ( (v73 & 0x2000000) != 0 )
        *(_DWORD *)(v20 + 12) = v73 & 0xFDFFFFFF;
    }
  }
  sub_140017A20(v22, 1);
  if ( *(_BYTE *)(v20 + 2) == 40 )
    v74 = *(_DWORD *)(v20 + 24);
  else
    v74 = *(_DWORD *)(v20 + 12);
  if ( (v74 & 0x4000) == 0 )
  {
    v75 = (unsigned __int64)HIDWORD(KeGetPcr()[1].LockArray) << 6;
    v76 = *(_DWORD *)(v75 + *(_QWORD *)(v49 + 40));
    while ( (v76 & 1) == 0 )
    {
      v77 = v76;
      v76 = _InterlockedCompareExchange((volatile signed __int32 *)(v75 + *(_QWORD *)(v49 + 40)), v76 - 2, v76);
      if ( v77 == v76 )
        goto LABEL_140;
    }
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v49 + 1032), 0xFFFFFFFF) == 1 )
      KeSetEvent((PRKEVENT)(v49 + 520), 0, 0);
  }
LABEL_140:
  if ( v106 == 16 )
  {
    v78 = (__int64)v110;
    sub_140017A20((__int64)v110, 1);
    sub_140016754(*(_QWORD *)(v3 + 24), v78 - 48);
  }
  else
  {
    *(_DWORD *)(v3 + 1856) = 0;
  }
  if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
    && (HIDWORD(off_140168120->Timer) & 8) != 0
    && BYTE1(off_140168120->Timer) >= 4u )
  {
    sub_1400556F8(off_140168120->AttachedDevice, 24LL, &unk_14014D880, v3, v2, *(_DWORD *)(v2 + 48));
  }
  if ( (qword_140168458 & 0x10) != 0 )
    sub_14000F84C(*(_QWORD *)(v3 + 24), v2, v112);
  v21 = byte_140168DAA == 0;
  *(_BYTE *)(v2 + 141) = -84;
  if ( v21 )
    goto LABEL_214;
  v112 = 0LL;
  IoGetActivityIdIrp(v2, &v112);
  v80 = *(_QWORD *)(v2 + 184);
  if ( *(_BYTE *)v80 == 14 )
  {
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_214;
    v82 = &unk_140148B18;
    goto LABEL_213;
  }
  if ( *(_BYTE *)v80 != 15 )
  {
    if ( *(_BYTE *)v80 != 27 )
      goto LABEL_214;
    if ( *(_BYTE *)(v80 + 1) == 7 && !*(_DWORD *)(v80 + 8) )
    {
      if ( (byte_1401694F2 & 0x40) != 0 )
      {
        v81 = *(int **)(v2 + 56);
        if ( v81 )
          v11 = *v81;
        sub_140056AB0(v79, v80, (unsigned int)&v112, v2, v11, *(_DWORD *)(v2 + 48));
      }
      goto LABEL_214;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_214;
    v82 = &unk_140149FE8;
LABEL_213:
    sub_140052F3C(v79, v82, &v112, v2, *(_DWORD *)(v2 + 48));
    goto LABEL_214;
  }
  if ( byte_1401694F1 >= 0 )
    goto LABEL_214;
  v83 = *(_QWORD *)(v80 + 8);
  v84 = 0;
  v85 = 0;
  v101 = 0;
  v86 = 0LL;
  v87 = 0;
  v88 = 0;
  v89 = 0;
  if ( *(_BYTE *)(v83 + 2) != 40 )
  {
    v95 = *(_BYTE *)(v83 + 72);
    v86 = *(_BYTE **)(v83 + 32);
    v87 = *(_BYTE *)(v83 + 11);
    v85 = *(_BYTE *)(v83 + 4);
    if ( !*(_BYTE *)(v83 + 2) )
      goto LABEL_189;
    goto LABEL_214;
  }
  v90 = 0LL;
  v102 = 0;
  if ( *(_DWORD *)(v83 + 20) )
    goto LABEL_214;
  v91 = 0;
  v105 = *(_DWORD *)(v83 + 56);
  if ( !v105 )
    goto LABEL_186;
  while ( 1 )
  {
    v79 = *(unsigned int *)(v83 + 4LL * v91 + 120);
    if ( (unsigned int)v79 >= 0x80 )
    {
      v92 = *(unsigned int *)(v83 + 16);
      if ( (unsigned int)v79 < (unsigned int)v92 )
        break;
    }
LABEL_180:
    if ( ++v91 >= v105 )
      goto LABEL_186;
  }
  v93 = (unsigned int)v79;
  v94 = *(_DWORD *)(v79 + v83) - 64;
  if ( v94 )
  {
    LODWORD(v79) = v94 - 1;
    if ( (_DWORD)v79 )
    {
      if ( (_DWORD)v79 == 1 )
      {
        LODWORD(v79) = v93 + 40;
        if ( v93 + 40 <= v92 )
        {
          if ( *(_DWORD *)(v93 + v83 + 12) )
            v90 = (char *)(v93 + v83 + 32);
          v86 = *(_BYTE **)(v93 + v83 + 24);
          goto LABEL_185;
        }
      }
    }
    else
    {
      LODWORD(v79) = v93 + 56;
      if ( v93 + 56 <= v92 )
      {
        v102 = 1;
        if ( *(_BYTE *)(v93 + v83 + 10) )
          v90 = (char *)(v93 + v83 + 24);
        v85 = *(_BYTE *)(v93 + v83 + 8);
        v86 = *(_BYTE **)(v93 + v83 + 16);
        v87 = *(_BYTE *)(v93 + v83 + 9);
      }
    }
    goto LABEL_179;
  }
  LODWORD(v79) = v93 + 40;
  if ( v93 + 40 > v92 )
  {
LABEL_179:
    if ( v102 )
      goto LABEL_186;
    goto LABEL_180;
  }
  if ( *(_BYTE *)(v93 + v83 + 10) )
    v90 = (char *)(v93 + v83 + 24);
  v86 = *(_BYTE **)(v93 + v83 + 16);
LABEL_185:
  v87 = *(_BYTE *)(v93 + v83 + 9);
  v85 = *(_BYTE *)(v93 + v83 + 8);
LABEL_186:
  if ( v90 )
  {
    v95 = *v90;
    v84 = 0;
LABEL_189:
    LOBYTE(v79) = v95 - 8;
    if ( (v79 & 0x5D) == 0 )
    {
      if ( *(_BYTE *)(v83 + 3) == 1 || !v86 || !v87 )
        goto LABEL_209;
      v96 = 0;
      v79 = (unsigned __int64)&v86[v87];
      v97 = v86 + 8;
      if ( (unsigned __int8)((*v86 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v97 <= v79 )
        {
          v96 = 1;
          v84 = v86[2];
          v88 = v86[1] & 0xF;
          v89 = v86[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v97 <= v79 )
        {
          v98 = v86 + 13;
          v88 = v86[2] & 0xF;
          v99 = v87;
          if ( (unsigned int)(unsigned __int8)v86[7] + 8 <= v87 )
            v99 = (unsigned __int8)v86[7] + 8;
          v79 = (unsigned __int64)&v86[v99];
          if ( (unsigned __int64)v98 > v79 )
            v101 = 0;
          else
            v101 = v86[12];
          if ( (unsigned __int64)(v86 + 14) > v79 )
            v89 = 0;
          else
            v89 = *v98;
          v96 = 1;
        }
        v84 = v101;
      }
      if ( v96 )
      {
        LOBYTE(v11) = v84;
        v100 = v89;
      }
      else
      {
LABEL_209:
        v88 = 0;
        v100 = 0;
      }
      sub_140052E64(
        v79,
        v83,
        (unsigned int)&v112,
        v2,
        *(_DWORD *)(v2 + 48),
        *(_BYTE *)(v83 + 3),
        v85,
        v88,
        v11,
        v100,
        v2);
    }
  }
LABEL_214:
  IofCompleteRequest((PIRP)v2, 0);
}
