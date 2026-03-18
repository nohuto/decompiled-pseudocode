/*
 * XREFs of PruneModesByDisplayDeviceCaps @ 0x140029454
 * Callers:
 *     DrvBuildDevmodeList @ 0x140150FE4 (DrvBuildDevmodeList.c)
 * Callees:
 *     ?UpdateMonitorDevicesOnGraphicsDevice@EnsureMonitorDevices@@AEAAXPEAUtagGRAPHICS_DEVICE@@@Z @ 0x140029040 (-UpdateMonitorDevicesOnGraphicsDevice@EnsureMonitorDevices@@AEAAXPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     PruneMode @ 0x140029930 (PruneMode.c)
 *     GetMonitorCapability @ 0x140029B44 (GetMonitorCapability.c)
 *     PALLOCMEM @ 0x1400420F8 (PALLOCMEM.c)
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ??1EnsureMonitorDevices@@QEAA@XZ @ 0x14015DDBC (--1EnsureMonitorDevices@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PruneModesByDisplayDeviceCaps(struct tagGRAPHICS_DEVICE *a1, unsigned int a2, __int64 a3)
{
  int v3; // eax
  unsigned int v5; // edi
  struct tagGRAPHICS_DEVICE *v6; // rsi
  unsigned int v7; // r12d
  __int64 v8; // rax
  _DWORD *v9; // r14
  unsigned int v10; // r15d
  int v11; // r9d
  __int64 v12; // r13
  __int64 v13; // r10
  unsigned int v14; // edi
  unsigned int v15; // esi
  int v16; // ecx
  __int64 DxgkWin32kInterface; // rax
  __int64 v18; // r9
  int MonitorCapability; // eax
  PVOID v20; // rcx
  bool v21; // cf
  unsigned int v22; // eax
  unsigned int v23; // eax
  unsigned int v24; // eax
  __int64 v25; // rcx
  unsigned int v26; // r12d
  char *v27; // rdx
  __int64 v28; // r12
  struct tagGRAPHICS_DEVICE *v29; // r10
  bool v30; // zf
  int v31; // r11d
  int v32; // r9d
  int v33; // edx
  unsigned int v34; // ecx
  unsigned int v35; // edx
  int v36; // r9d
  int v37; // eax
  unsigned int v39; // r14d
  __int64 v40; // r8
  char v41; // [rsp+30h] [rbp-89h]
  int v42; // [rsp+34h] [rbp-85h]
  unsigned int v43; // [rsp+34h] [rbp-85h]
  __int64 v44; // [rsp+38h] [rbp-81h]
  char *v45; // [rsp+38h] [rbp-81h]
  unsigned int v47; // [rsp+40h] [rbp-79h]
  char *v48; // [rsp+48h] [rbp-71h] BYREF
  unsigned int v49; // [rsp+50h] [rbp-69h]
  unsigned int v50; // [rsp+54h] [rbp-65h]
  unsigned int v51; // [rsp+58h] [rbp-61h]
  PVOID Object; // [rsp+60h] [rbp-59h] BYREF
  __int128 v53; // [rsp+68h] [rbp-51h] BYREF
  __int64 v54; // [rsp+78h] [rbp-41h]
  unsigned int v55; // [rsp+80h] [rbp-39h] BYREF
  int v56; // [rsp+84h] [rbp-35h]
  unsigned int v57; // [rsp+88h] [rbp-31h]
  int v58; // [rsp+8Ch] [rbp-2Dh]
  unsigned int v59; // [rsp+90h] [rbp-29h]
  int v60; // [rsp+94h] [rbp-25h]
  char v61[8]; // [rsp+98h] [rbp-21h] BYREF
  unsigned int v62; // [rsp+A0h] [rbp-19h]
  PVOID P; // [rsp+A8h] [rbp-11h]
  struct tagGRAPHICS_DEVICE *v64; // [rsp+B0h] [rbp-9h]
  __int64 v65; // [rsp+B8h] [rbp-1h]
  __int128 v66; // [rsp+C0h] [rbp+7h] BYREF
  int v67; // [rsp+D0h] [rbp+17h]

  v3 = *((_DWORD *)a1 + 40);
  v65 = a3;
  v5 = a2;
  v6 = a1;
  v64 = a1;
  if ( (v3 & 0x800000) != 0 )
  {
    v41 = 1;
    v7 = 0;
  }
  else
  {
    v41 = 0;
    v7 = 56;
  }
  v55 = v7;
  LODWORD(Object) = -1;
  v56 = -1;
  LODWORD(v48) = 0;
  v57 = 0;
  v49 = -1;
  v58 = -1;
  v50 = 0;
  v59 = 0;
  v51 = -1;
  v60 = -1;
  v62 = 0;
  P = 0LL;
  *((_DWORD *)a1 + 40) = v3 & 0xF7FFFFFF;
  EnsureMonitorDevices::UpdateMonitorDevicesOnGraphicsDevice((EnsureMonitorDevices *)v61, a1);
  if ( !v62 )
  {
    if ( !_bittest((const signed __int32 *)v6 + 40, 0x17u) )
      goto LABEL_59;
    v39 = 0;
    while ( v5 )
    {
      v40 = *(_QWORD *)(a3 + 16LL * --v5 + 8);
      if ( *(unsigned __int16 *)(v40 + 68) + *(unsigned __int16 *)(v40 + 70) != 244 || (*(_DWORD *)(v40 + 240) & 1) != 0 )
      {
        ++v39;
      }
      else
      {
        *(_DWORD *)(a3 + 16LL * v5) = 1;
        *((_DWORD *)v6 + 40) |= 0x8000000u;
      }
    }
    if ( P )
      ExFreePoolWithTag(P, 0);
    return v39;
  }
  v8 = PALLOCMEM(868 * v62, 1986356295LL);
  v9 = (_DWORD *)v8;
  if ( !v8 )
  {
    EnsureMonitorDevices::~EnsureMonitorDevices((EnsureMonitorDevices *)v61);
    return v5;
  }
  v10 = v62;
  v11 = 0;
  v12 = 0LL;
  v42 = 0;
  v13 = v8 + 4LL * v62;
  v44 = v13;
  if ( !v62 )
    goto LABEL_57;
  v14 = (unsigned int)Object;
  v15 = (unsigned int)v48;
  do
  {
    v67 = 0;
    v66 = 0LL;
    LODWORD(v66) = 0;
    v16 = (*((_BYTE *)P + 20 * v12) & 1) != 0;
    LODWORD(v66) = v16;
    if ( (*((_DWORD *)P + 5 * v12) & 2) == 0 )
    {
      v16 |= 2u;
      LODWORD(v66) = v16;
    }
    if ( *((int *)P + 5 * v12) >= 0 )
    {
      v16 |= 0x80000000;
      LODWORD(v66) = v16;
    }
    if ( (*((_DWORD *)P + 5 * v12) & 0x40000000) == 0 )
    {
      v16 |= 0x40000000u;
      LODWORD(v66) = v16;
    }
    DWORD1(v66) = *((_DWORD *)P + 5 * v12 + 1);
    *((_QWORD *)&v66 + 1) = *(_QWORD *)((char *)P + 20 * v12 + 8);
    LOBYTE(v67) = *((_BYTE *)P + 20 * v12 + 16);
    v9[v12] = 0;
    if ( (v16 & 3) != 3 )
      goto LABEL_28;
    v48 = 0LL;
    v54 = 0LL;
    Object = 0LL;
    v53 = 0LL;
    DxgkWin32kInterface = DxDdGetDxgkWin32kInterface();
    if ( (*(int (__fastcall **)(char *, _QWORD, PVOID *, char **))(DxgkWin32kInterface + 456))(
           (char *)&v66 + 8,
           DWORD1(v66),
           &Object,
           &v48) >= 0 )
    {
      LOBYTE(v18) = v41;
      MonitorCapability = GetMonitorCapability(v48, v44, &v53, v18);
      v20 = Object;
      if ( v7 <= (unsigned int)v53 )
        v7 = v53;
      v21 = v14 < DWORD1(v53);
      v9[v12] = MonitorCapability;
      if ( !v21 )
        v14 = DWORD1(v53);
      v22 = v49;
      if ( v15 <= DWORD2(v53) )
        v15 = DWORD2(v53);
      v55 = v7;
      if ( v49 >= HIDWORD(v53) )
        v22 = HIDWORD(v53);
      v49 = v22;
      v58 = v22;
      v23 = v50;
      v56 = v14;
      if ( v50 <= (unsigned int)v54 )
        v23 = v54;
      v50 = v23;
      v59 = v23;
      v24 = v51;
      v57 = v15;
      if ( v51 >= HIDWORD(v54) )
        v24 = HIDWORD(v54);
      v51 = v24;
      v60 = v24;
      ObfDereferenceObject(v20);
      v11 = v42;
      v13 = v44;
LABEL_28:
      v25 = (unsigned int)v9[v12];
      v11 += v25;
      v42 = v11;
      v13 += 24 * v25;
      v44 = v13;
      goto LABEL_29;
    }
    v11 = v42;
    v13 = v44;
LABEL_29:
    v10 = v62;
    v12 = (unsigned int)(v12 + 1);
  }
  while ( (unsigned int)v12 < v62 );
  v5 = a2;
  v6 = v64;
  if ( v11 )
    goto LABEL_31;
LABEL_57:
  if ( (*((_DWORD *)v6 + 40) & 0x800000) != 0 )
  {
LABEL_31:
    v26 = 0;
    v43 = 0;
    if ( v5 )
    {
      v27 = (char *)&v9[v10];
      v48 = v27;
      do
      {
        v45 = v27;
        v28 = 0LL;
        v29 = *(struct tagGRAPHICS_DEVICE **)(v65 + 16LL * (v5 - 1) + 8);
        v64 = v29;
        while ( 1 )
        {
          v30 = (_DWORD)v28 == v10;
          if ( (unsigned int)v28 >= v10 )
            break;
          v31 = 0;
          v32 = *((_DWORD *)P + 5 * v28);
          v33 = v32 & 1 | 2;
          if ( (v32 & 2) != 0 )
            v33 = *((_DWORD *)P + 5 * v28) & 1;
          v34 = v33 | 0x80000000;
          if ( v32 < 0 )
            v34 = v33;
          v35 = v9[v28];
          v36 = v32 & 0x40000000;
          v47 = v35;
          if ( v35 )
          {
            v37 = v34 | 0x40000000;
            if ( v36 )
              v37 = v34;
            v31 = PruneMode((_DWORD)v29, (_DWORD)v45, v35, (unsigned int)&v55, v37);
            v29 = v64;
            v45 += 24 * v47;
          }
          if ( (*((_DWORD *)v6 + 40) & 0x800000) != 0
            && *((unsigned __int16 *)v29 + 34) + *((unsigned __int16 *)v29 + 35) == 244 )
          {
            if ( (*((_DWORD *)v29 + 60) & 1) == 0 )
              goto LABEL_48;
          }
          else if ( v31 )
          {
LABEL_48:
            *(_DWORD *)(v65 + 16LL * (v5 - 1)) = 1;
            *((_DWORD *)v6 + 40) |= 0x8000000u;
            v30 = (_DWORD)v28 == v10;
            break;
          }
          v28 = (unsigned int)(v28 + 1);
        }
        if ( v30 )
          ++v43;
        v27 = v48;
        --v5;
      }
      while ( v5 );
      v26 = v43;
    }
    GreDeleteFastMutex(v9);
    if ( P )
      ExFreePoolWithTag(P, 0);
    return v26;
  }
  else
  {
    GreDeleteFastMutex(v9);
LABEL_59:
    if ( P )
      ExFreePoolWithTag(P, 0);
    return v5;
  }
}
