/*
 * XREFs of sub_14018AB38 @ 0x14018AB38
 * Callers:
 *     sub_14018C298 @ 0x14018C298 (sub_14018C298.c)
 * Callees:
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     sub_14006E068 @ 0x14006E068 (sub_14006E068.c)
 *     sub_14006E36C @ 0x14006E36C (sub_14006E36C.c)
 *     sub_1400C990C @ 0x1400C990C (sub_1400C990C.c)
 *     sub_1400C9A34 @ 0x1400C9A34 (sub_1400C9A34.c)
 *     sub_1400C9B38 @ 0x1400C9B38 (sub_1400C9B38.c)
 *     sub_1400CB67C @ 0x1400CB67C (sub_1400CB67C.c)
 *     sub_1400CDB80 @ 0x1400CDB80 (sub_1400CDB80.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

__int64 __fastcall sub_14018AB38(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  __int64 v4; // rcx
  int v5; // edi
  unsigned __int64 v6; // r13
  __int64 v7; // r15
  int v8; // esi
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // r12
  bool v12; // zf
  unsigned __int64 v13; // rcx
  __int64 v14; // rdx
  int *v15; // rax
  __int64 v16; // rcx
  const char *v17; // rax
  int v18; // ecx
  const char *v19; // rax
  LARGE_INTEGER v20; // rax
  LARGE_INTEGER v21; // rbx
  PIO_WORKITEM v22; // rsi
  __int64 v23; // r15
  int v24; // eax
  _QWORD *v25; // rdx
  _QWORD *v26; // rax
  _DWORD *v27; // r15
  int v28; // ecx
  LARGE_INTEGER PerformanceCounter; // rax
  unsigned __int64 v30; // r8
  unsigned __int64 v31; // r9
  unsigned __int64 v32; // r8
  unsigned __int64 v33; // r9
  const EVENT_DESCRIPTOR *v34; // rdx
  unsigned __int64 v35; // rdx
  char v36; // bl
  char v37; // r12
  _BYTE *v38; // r9
  unsigned __int8 v39; // r10
  char v40; // r11
  char v41; // r8
  char *v42; // rbx
  unsigned int v43; // r13d
  unsigned __int64 v44; // r15
  __int64 v45; // r8
  int v46; // ecx
  char v47; // cl
  char v48; // r15
  _BYTE *v49; // rax
  unsigned int v50; // eax
  char v51; // al
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-E0h]
  __int64 v54; // [rsp+28h] [rbp-D8h]
  __int64 v55; // [rsp+30h] [rbp-D0h]
  __int64 v56; // [rsp+38h] [rbp-C8h]
  __int64 v57; // [rsp+40h] [rbp-C0h]
  __int64 v58; // [rsp+48h] [rbp-B8h]
  char v59; // [rsp+60h] [rbp-A0h]
  char v60; // [rsp+60h] [rbp-A0h]
  char v61; // [rsp+61h] [rbp-9Fh] BYREF
  char v62; // [rsp+62h] [rbp-9Eh]
  unsigned __int64 v63; // [rsp+68h] [rbp-98h] BYREF
  __int64 v64; // [rsp+70h] [rbp-90h]
  const char *v65; // [rsp+78h] [rbp-88h]
  volatile signed __int32 *v66; // [rsp+80h] [rbp-80h]
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+88h] [rbp-78h] BYREF
  PIO_WORKITEM IoWorkItem; // [rsp+90h] [rbp-70h]
  _QWORD Dst[4]; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int64 v70; // [rsp+C0h] [rbp-40h]
  __int64 v71; // [rsp+C8h] [rbp-38h]
  char v72; // [rsp+D0h] [rbp-30h]
  struct _KEVENT Event; // [rsp+D8h] [rbp-28h] BYREF
  GUID v74; // [rsp+F0h] [rbp-10h] BYREF
  char Str2[256]; // [rsp+100h] [rbp+0h] BYREF

  v64 = a1;
  v3 = a1;
  memset_0(Dst, 0, 0x50uLL);
  v4 = *(_QWORD *)(a2 + 184);
  v5 = 0;
  *(_QWORD *)(a2 + 56) = 0LL;
  v6 = 0LL;
  v61 = 0;
  PerformanceFrequency.QuadPart = 0LL;
  v65 = 0LL;
  *(_QWORD *)&v74.Data1 = v4;
  v63 = 0LL;
  v59 = 0;
  v66 = 0LL;
  if ( (*(_BYTE *)(v3 + 144) & 1) == 0 || !*(_QWORD *)(v3 + 592) )
  {
    v8 = -1073741637;
    goto LABEL_13;
  }
  v7 = *(_QWORD *)(a2 + 24);
  if ( v7
    && *(_DWORD *)(v4 + 16) >= 0x40u
    && *(_WORD *)v7 == 1
    && *(_WORD *)(v7 + 2) >= 0x40u
    && (unsigned __int16)(*(_WORD *)(v7 + 16) + 16) > 0xEu )
  {
    if ( *(_DWORD *)(v4 + 8) < 0x20u )
    {
      v8 = -1073741789;
      goto LABEL_13;
    }
    v9 = sub_1400CDB80(v3, *(_QWORD *)(v7 + 8) ^ v3, 0, 0LL);
    v11 = v9;
    if ( !v9 )
    {
      v8 = -1073741275;
      goto LABEL_13;
    }
    v16 = *(_QWORD *)(v9 + 32);
    v62 = 1;
    if ( *(_WORD *)(v7 + 16) == 0xFFFF )
    {
      if ( (v16 & 4) != 0 )
      {
LABEL_25:
        if ( (v16 & 2) == 0 && (*(_WORD *)(v7 + 18) || *(_WORD *)(v7 + 20)) )
        {
          v8 = -1073741811;
          goto LABEL_98;
        }
        if ( *(_DWORD *)(v7 + 56) )
        {
          v8 = sub_14006E36C(0, Str2);
          if ( v8 < 0 )
            goto LABEL_98;
          KeEnterCriticalRegion();
          ExAcquireResourceSharedLite((PERESOURCE)&stru_1401692A0.DeviceQueue.32, 1u);
          v59 = 1;
          v17 = (const char *)sub_14006E068(*(_DWORD *)(v7 + 56));
          v65 = v17;
          if ( !v17 )
            goto LABEL_34;
          if ( strnicmp(v17 + 20, Str2, 0x100uLL) )
            goto LABEL_36;
          v18 = *(_DWORD *)(v7 + 60);
          if ( v18 )
          {
            v19 = (const char *)sub_14006E068(v18);
            v66 = (volatile signed __int32 *)v19;
            if ( !v19 )
            {
LABEL_34:
              v8 = -1073741275;
              goto LABEL_96;
            }
            if ( strnicmp(v19 + 20, (const char *)(v11 + 60), 0x100uLL) )
            {
LABEL_36:
              v8 = -1073740007;
              goto LABEL_96;
            }
          }
          v3 = v64;
        }
        if ( (byte_1401694F9 & 4) != 0 )
          sub_1400C9A34(
            v11 + 60,
            &stru_14014A158,
            v10,
            *(_DWORD *)(v3 + 56),
            v3 + 1032,
            *(const wchar_t **)(v3 + 1016),
            (const char *)(v11 + 60),
            *(_WORD *)(v7 + 16));
        if ( byte_140168724 )
          v20 = KeQueryPerformanceCounter(&PerformanceFrequency);
        else
          v20.QuadPart = KeQueryUnbiasedInterruptTime();
        v21 = v20;
        if ( KeGetCurrentNodeNumber() == *(_DWORD *)(*(_QWORD *)(v11 + 24) + 16LL) )
        {
          v24 = sub_1400CB67C(v11, v7, (__int64)v65, (__int64)v66, &v61, (PVOID *)&v63);
          v6 = v63;
          v8 = v24;
          v23 = (__int64)v65;
        }
        else
        {
          IoWorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(v3 + 8));
          v22 = IoWorkItem;
          if ( !IoWorkItem )
          {
            v8 = -1073741670;
            goto LABEL_69;
          }
          Dst[1] = v7;
          v23 = (__int64)v65;
          Dst[2] = v65;
          Dst[0] = v11;
          Dst[3] = v66;
          v70 = 0LL;
          v71 = 0LL;
          KeInitializeEvent(&Event, NotificationEvent, 0);
          if ( (unsigned __int8)IoQueueWorkItemToNode(
                                  v22,
                                  sub_1400CB8A0,
                                  1LL,
                                  Dst,
                                  *(_DWORD *)(*(_QWORD *)(v11 + 24) + 16LL)) )
          {
            KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
            v8 = v71;
            if ( (int)v71 >= 0 )
            {
              v6 = v70;
              v61 = v72;
              v63 = v70;
            }
          }
          else
          {
            v8 = -1073741823;
          }
          IoFreeWorkItem(IoWorkItem);
        }
        if ( v8 >= 0 )
        {
          if ( v23 )
          {
            _InterlockedAdd((volatile signed __int32 *)(v23 + 16), 1u);
            if ( v66 )
              _InterlockedAdd(v66 + 4, 1u);
            v6 = v63;
          }
          if ( v61 )
          {
            KeEnterCriticalRegion();
            ExAcquireResourceExclusiveLite((PERESOURCE)(v11 + 632), 1u);
            v25 = *(_QWORD **)(v11 + 616);
            v26 = (_QWORD *)(v6 + 64);
            if ( *v25 != v11 + 608 )
              __fastfail(3u);
            *v26 = v11 + 608;
            *(_QWORD *)(v6 + 72) = v25;
            *v25 = v26;
            *(_QWORD *)(v11 + 616) = v26;
            ++*(_DWORD *)(v11 + 624);
            ExReleaseResourceLite((PERESOURCE)(v11 + 632));
            KeLeaveCriticalRegion();
          }
          ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v11 + 40));
          v27 = *(_DWORD **)(a2 + 24);
          v62 = 0;
          memset_0(v27, 0, *(unsigned int *)(*(_QWORD *)&v74.Data1 + 8LL));
          v28 = v27[1] | 1;
          *v27 = 2097153;
          v27[1] = v28;
          if ( (*(_BYTE *)(v6 + 136) & 4) != 0 )
            v27[1] = v28 | 8;
          *((_QWORD *)v27 + 1) = v6 ^ v64;
          *((_WORD *)v27 + 8) = *(_WORD *)(v6 + 4);
          v27[5] = *(_DWORD *)(v6 + 572);
          if ( *(_DWORD *)(v6 + 572) == 1 )
          {
            *((_WORD *)v27 + 12) = *(_WORD *)(v6 + 20);
            *((_WORD *)v27 + 13) = *(_WORD *)(v6 + 8);
          }
          ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v6 + 552));
          *(_QWORD *)(a2 + 56) = *((unsigned __int16 *)v27 + 1);
        }
LABEL_69:
        if ( byte_140168724 )
          PerformanceCounter = KeQueryPerformanceCounter(0LL);
        else
          PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
        if ( v8 < 0 )
        {
          if ( (byte_1401694FA & 4) != 0 )
          {
            if ( PerformanceCounter.QuadPart <= 0 || PerformanceCounter.QuadPart >= v21.QuadPart )
              v32 = PerformanceCounter.QuadPart - v21.QuadPart;
            else
              v32 = PerformanceCounter.QuadPart - v21.QuadPart - 1;
            if ( byte_140168724 )
            {
              v33 = 0LL;
              if ( PerformanceFrequency.QuadPart && v32 )
                v33 = 10000
                    * (1000 * (v32 % PerformanceFrequency.QuadPart) % PerformanceFrequency.QuadPart)
                    / PerformanceFrequency.QuadPart
                    + 10000
                    * (1000 * (v32 / PerformanceFrequency.QuadPart)
                     + 1000 * (v32 % PerformanceFrequency.QuadPart) / PerformanceFrequency.QuadPart);
            }
            else
            {
              v33 = v32;
            }
            sub_1400C990C(
              v64 + 1032,
              v33 / 0xA,
              v64,
              *(_DWORD *)(v64 + 56),
              v64 + 1032,
              *(const wchar_t **)(v64 + 1016),
              (const char *)(v11 + 60),
              v8,
              v57,
              v33 / 0xA);
          }
        }
        else if ( (byte_1401694FA & 2) != 0 )
        {
          if ( PerformanceCounter.QuadPart <= 0 || PerformanceCounter.QuadPart >= v21.QuadPart )
            v30 = PerformanceCounter.QuadPart - v21.QuadPart;
          else
            v30 = PerformanceCounter.QuadPart - v21.QuadPart - 1;
          if ( byte_140168724 )
          {
            v31 = 0LL;
            if ( PerformanceFrequency.QuadPart && v30 )
              v31 = 10000
                  * (1000 * (v30 % PerformanceFrequency.QuadPart) % PerformanceFrequency.QuadPart)
                  / PerformanceFrequency.QuadPart
                  + 10000
                  * (1000 * (v30 / PerformanceFrequency.QuadPart)
                   + 1000 * (v30 % PerformanceFrequency.QuadPart) / PerformanceFrequency.QuadPart);
          }
          else
          {
            v31 = v30;
          }
          sub_1400C9B38(
            v11 + 60,
            v31 / 0xA,
            v64 + 1032,
            *(_DWORD *)(v64 + 56),
            v64 + 1032,
            *(const wchar_t **)(v64 + 1016),
            (const char *)(v11 + 60),
            *(_WORD *)(v6 + 4),
            v31 / 0xA);
        }
        if ( !v59 )
        {
LABEL_97:
          if ( !v62 )
            goto LABEL_13;
LABEL_98:
          ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v11 + 40));
          goto LABEL_13;
        }
LABEL_96:
        ExReleaseResourceLite((PERESOURCE)&stru_1401692A0.DeviceQueue.32);
        KeLeaveCriticalRegion();
        goto LABEL_97;
      }
    }
    else if ( (v16 & 4) == 0 )
    {
      goto LABEL_25;
    }
    v8 = -1073741637;
    goto LABEL_98;
  }
  v8 = -1073741811;
LABEL_13:
  v12 = byte_140168DAA == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v8;
  if ( v12 )
    goto LABEL_156;
  v74 = 0LL;
  IoGetActivityIdIrp(a2, &v74);
  v14 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v14 == 14 )
  {
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_156;
    v34 = &stru_140148B18;
    goto LABEL_155;
  }
  if ( *(_BYTE *)v14 != 15 )
  {
    if ( *(_BYTE *)v14 != 27 )
      goto LABEL_156;
    if ( *(_BYTE *)(v14 + 1) == 7 && !*(_DWORD *)(v14 + 8) )
    {
      if ( (byte_1401694F2 & 0x40) != 0 )
      {
        v15 = *(int **)(a2 + 56);
        if ( v15 )
          v5 = *v15;
        LODWORD(v54) = *(_DWORD *)(a2 + 48);
        LODWORD(Timeout) = v5;
        sub_140056AB0(v13, v14, &v74, a2, Timeout, v54);
      }
      goto LABEL_156;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_156;
    v34 = &stru_140149FE8;
LABEL_155:
    LODWORD(Timeout) = *(_DWORD *)(a2 + 48);
    sub_140052F3C(v13, v34, &v74, a2, Timeout);
    goto LABEL_156;
  }
  if ( byte_1401694F1 >= 0 )
    goto LABEL_156;
  v35 = *(_QWORD *)(v14 + 8);
  v36 = 0;
  v37 = 0;
  v61 = 0;
  v38 = 0LL;
  v60 = 0;
  v39 = 0;
  v40 = 0;
  v41 = 0;
  if ( *(_BYTE *)(v35 + 2) != 40 )
  {
    v47 = *(_BYTE *)(v35 + 72);
    v38 = *(_BYTE **)(v35 + 32);
    v39 = *(_BYTE *)(v35 + 11);
    v37 = *(_BYTE *)(v35 + 4);
    if ( !*(_BYTE *)(v35 + 2) )
      goto LABEL_131;
    goto LABEL_156;
  }
  v42 = 0LL;
  v62 = 0;
  if ( *(_DWORD *)(v35 + 20) )
    goto LABEL_156;
  v43 = 0;
  LODWORD(v63) = *(_DWORD *)(v35 + 56);
  if ( !(_DWORD)v63 )
    goto LABEL_128;
  while ( 1 )
  {
    v13 = *(unsigned int *)(v35 + 4LL * v43 + 120);
    if ( (unsigned int)v13 >= 0x80 )
    {
      v44 = *(unsigned int *)(v35 + 16);
      if ( (unsigned int)v13 < (unsigned int)v44 )
        break;
    }
LABEL_121:
    if ( ++v43 >= (unsigned int)v63 )
      goto LABEL_127;
  }
  v45 = (unsigned int)v13;
  v46 = *(_DWORD *)(v13 + v35) - 64;
  if ( v46 )
  {
    v13 = (unsigned int)(v46 - 1);
    if ( (_DWORD)v13 )
    {
      if ( (_DWORD)v13 == 1 )
      {
        v13 = v45 + 40;
        if ( v45 + 40 <= v44 )
        {
          if ( *(_DWORD *)(v45 + v35 + 12) )
            v42 = (char *)(v45 + v35 + 32);
          v38 = *(_BYTE **)(v45 + v35 + 24);
          goto LABEL_126;
        }
      }
    }
    else
    {
      v13 = v45 + 56;
      if ( v45 + 56 <= v44 )
      {
        v62 = 1;
        if ( *(_BYTE *)(v45 + v35 + 10) )
          v42 = (char *)(v45 + v35 + 24);
        v37 = *(_BYTE *)(v45 + v35 + 8);
        v38 = *(_BYTE **)(v45 + v35 + 16);
        v39 = *(_BYTE *)(v45 + v35 + 9);
      }
    }
    goto LABEL_120;
  }
  v13 = v45 + 40;
  if ( v45 + 40 > v44 )
  {
LABEL_120:
    if ( v62 )
      goto LABEL_127;
    goto LABEL_121;
  }
  if ( *(_BYTE *)(v45 + v35 + 10) )
    v42 = (char *)(v45 + v35 + 24);
  v38 = *(_BYTE **)(v45 + v35 + 16);
LABEL_126:
  v39 = *(_BYTE *)(v45 + v35 + 9);
  v37 = *(_BYTE *)(v45 + v35 + 8);
LABEL_127:
  v41 = 0;
LABEL_128:
  if ( v42 )
  {
    v47 = *v42;
    v36 = 0;
LABEL_131:
    LOBYTE(v13) = v47 - 8;
    if ( (v13 & 0x5D) == 0 )
    {
      v48 = *(_BYTE *)(v35 + 3);
      if ( v48 == 1 || !v38 || !v39 )
        goto LABEL_151;
      LOBYTE(v35) = 0;
      v13 = (unsigned __int64)&v38[v39];
      v49 = v38 + 8;
      if ( (unsigned __int8)((*v38 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v49 <= v13 )
        {
          LOBYTE(v35) = 1;
          v36 = v38[2];
          v40 = v38[1] & 0xF;
          v41 = v38[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v49 <= v13 )
        {
          v40 = v38[2] & 0xF;
          v50 = v39;
          if ( (unsigned int)(unsigned __int8)v38[7] + 8 <= v39 )
            v50 = (unsigned __int8)v38[7] + 8;
          v13 = (unsigned __int64)(v38 + 13);
          v35 = (unsigned __int64)&v38[v50];
          if ( (unsigned __int64)(v38 + 13) > v35 )
            v61 = 0;
          else
            v61 = v38[12];
          if ( (unsigned __int64)(v38 + 14) > v35 )
            v60 = 0;
          else
            v60 = *(_BYTE *)v13;
          LOBYTE(v35) = 1;
        }
        v41 = v60;
        v36 = v61;
      }
      if ( (_BYTE)v35 )
      {
        LOBYTE(v5) = v36;
        v51 = v41;
      }
      else
      {
LABEL_151:
        v40 = 0;
        v51 = 0;
      }
      LOBYTE(v58) = v51;
      LOBYTE(v57) = v5;
      LOBYTE(v56) = v40;
      LOBYTE(v55) = v37;
      LOBYTE(v54) = v48;
      LODWORD(Timeout) = *(_DWORD *)(a2 + 48);
      sub_140052E64(v13, v35, &v74, a2, Timeout, v54, v55, v56, v57, v58, a2);
    }
  }
LABEL_156:
  IofCompleteRequest((PIRP)a2, 0);
  return (unsigned int)v8;
}
