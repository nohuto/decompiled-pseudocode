/*
 * XREFs of PruneModesByDisplayDeviceCaps @ 0x140080A98
 * Callers:
 *     DrvBuildDevmodeList @ 0x14004BF38 (DrvBuildDevmodeList.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ?UpdateMonitorDevicesOnGraphicsDevice@EnsureMonitorDevices@@AEAAXPEAUtagGRAPHICS_DEVICE@@@Z @ 0x140049CA4 (-UpdateMonitorDevicesOnGraphicsDevice@EnsureMonitorDevices@@AEAAXPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     PALLOCMEM @ 0x14004C634 (PALLOCMEM.c)
 *     PruneMode @ 0x140080EE0 (PruneMode.c)
 *     ?GetMonitorDevice@EnsureMonitorDevices@@QEBAXKAEAUtagVIDEO_MONITOR_DEVICE@@@Z @ 0x1400810F0 (-GetMonitorDevice@EnsureMonitorDevices@@QEBAXKAEAUtagVIDEO_MONITOR_DEVICE@@@Z.c)
 *     GetMonitorCapability @ 0x140081188 (GetMonitorCapability.c)
 *     ??1EnsureMonitorDevices@@QEAA@XZ @ 0x140120630 (--1EnsureMonitorDevices@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PruneModesByDisplayDeviceCaps(struct tagGRAPHICS_DEVICE *a1, unsigned int a2, __int64 a3)
{
  int v3; // eax
  unsigned int v5; // edi
  struct tagGRAPHICS_DEVICE *v6; // rsi
  unsigned int v7; // r13d
  __int64 v8; // rax
  char *v9; // r14
  unsigned int v10; // r12d
  __int64 v11; // r15
  int v12; // esi
  unsigned int v13; // edi
  __int64 v14; // rcx
  char v15; // al
  __int64 DxgkWin32kInterface; // rax
  __int64 v17; // r9
  int MonitorCapability; // eax
  PVOID v19; // rcx
  bool v20; // cf
  int v21; // eax
  unsigned int v22; // eax
  unsigned int v23; // eax
  unsigned int v24; // eax
  __int64 v25; // rcx
  bool v26; // zf
  unsigned int v27; // r15d
  __int64 v28; // rcx
  char *v29; // rdx
  int v30; // r11d
  __int64 v31; // r13
  struct tagGRAPHICS_DEVICE *v32; // r10
  int v33; // r9d
  int v34; // edx
  int v35; // ecx
  unsigned int v36; // eax
  int v37; // ecx
  unsigned int v38; // eax
  unsigned int v39; // eax
  unsigned int v41; // r14d
  __int64 v42; // r8
  char v43; // [rsp+30h] [rbp-89h]
  unsigned int v45; // [rsp+34h] [rbp-85h]
  char *v46; // [rsp+38h] [rbp-81h] BYREF
  unsigned int v47; // [rsp+40h] [rbp-79h]
  unsigned int v48; // [rsp+44h] [rbp-75h]
  unsigned int v49; // [rsp+48h] [rbp-71h]
  unsigned int v50; // [rsp+4Ch] [rbp-6Dh]
  __int64 v51; // [rsp+50h] [rbp-69h]
  PVOID Object; // [rsp+58h] [rbp-61h] BYREF
  __int128 v53; // [rsp+60h] [rbp-59h] BYREF
  __int64 v54; // [rsp+70h] [rbp-49h]
  unsigned int v55; // [rsp+78h] [rbp-41h] BYREF
  int v56; // [rsp+7Ch] [rbp-3Dh]
  int v57; // [rsp+80h] [rbp-39h]
  int v58; // [rsp+84h] [rbp-35h]
  unsigned int v59; // [rsp+88h] [rbp-31h]
  int v60; // [rsp+8Ch] [rbp-2Dh]
  char v61[8]; // [rsp+90h] [rbp-29h] BYREF
  unsigned int v62; // [rsp+98h] [rbp-21h]
  PVOID P; // [rsp+A0h] [rbp-19h]
  __int64 v64; // [rsp+A8h] [rbp-11h]
  struct tagGRAPHICS_DEVICE *v65; // [rsp+B0h] [rbp-9h]
  __int128 v66; // [rsp+B8h] [rbp-1h] BYREF
  int v67; // [rsp+C8h] [rbp+Fh]

  v3 = *((_DWORD *)a1 + 40);
  v64 = a3;
  v5 = a2;
  v6 = a1;
  v65 = a1;
  if ( (v3 & 0x800000) != 0 )
  {
    v43 = 1;
    v7 = 0;
  }
  else
  {
    v43 = 0;
    v7 = 56;
  }
  v55 = v7;
  v62 = 0;
  P = 0LL;
  v56 = -1;
  v47 = 0;
  v57 = 0;
  v48 = -1;
  v58 = -1;
  v49 = 0;
  v59 = 0;
  v50 = -1;
  v60 = -1;
  *((_DWORD *)a1 + 40) = v3 & 0xF7FFFFFF;
  EnsureMonitorDevices::UpdateMonitorDevicesOnGraphicsDevice((EnsureMonitorDevices *)v61, a1);
  if ( !v62 )
  {
    if ( !_bittest((const signed __int32 *)v6 + 40, 0x17u) )
      goto LABEL_53;
    v41 = 0;
    while ( v5 )
    {
      v42 = *(_QWORD *)(a3 + 16LL * --v5 + 8);
      if ( *(unsigned __int16 *)(v42 + 68) + *(unsigned __int16 *)(v42 + 70) != 244 || (*(_DWORD *)(v42 + 240) & 1) != 0 )
      {
        ++v41;
      }
      else
      {
        *(_DWORD *)(a3 + 16LL * v5) = 1;
        *((_DWORD *)v6 + 40) |= 0x8000000u;
      }
    }
    if ( P )
      ExFreePoolWithTag(P, 0);
    return v41;
  }
  v8 = PALLOCMEM(868 * v62, 1986356295LL);
  v9 = (char *)v8;
  if ( !v8 )
  {
    EnsureMonitorDevices::~EnsureMonitorDevices((EnsureMonitorDevices *)v61);
    return v5;
  }
  v10 = v62;
  v11 = 0LL;
  LODWORD(v46) = 0;
  v51 = v8 + 4LL * v62;
  if ( !v62 )
    goto LABEL_50;
  v12 = (int)v46;
  v13 = -1;
  do
  {
    v67 = 0;
    v66 = 0LL;
    EnsureMonitorDevices::GetMonitorDevice((EnsureMonitorDevices *)v61, v11, (struct tagVIDEO_MONITOR_DEVICE *)&v66);
    v15 = v66;
    *(_DWORD *)&v9[4 * v11] = 0;
    if ( (v15 & 3) == 3 )
    {
      v46 = 0LL;
      Object = 0LL;
      v54 = 0LL;
      v53 = 0LL;
      DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v14);
      if ( (*(int (__fastcall **)(char *, _QWORD, PVOID *, char **))(DxgkWin32kInterface + 456))(
             (char *)&v66 + 8,
             DWORD1(v66),
             &Object,
             &v46) < 0 )
        goto LABEL_23;
      LOBYTE(v17) = v43;
      MonitorCapability = GetMonitorCapability(v46, v51, &v53, v17);
      v19 = Object;
      if ( v7 <= (unsigned int)v53 )
        v7 = v53;
      v20 = v13 < DWORD1(v53);
      *(_DWORD *)&v9[4 * v11] = MonitorCapability;
      if ( !v20 )
        v13 = DWORD1(v53);
      v21 = v47;
      v55 = v7;
      if ( v47 <= DWORD2(v53) )
        v21 = DWORD2(v53);
      v47 = v21;
      v57 = v21;
      v22 = v48;
      v56 = v13;
      if ( v48 >= HIDWORD(v53) )
        v22 = HIDWORD(v53);
      v48 = v22;
      v58 = v22;
      v23 = v49;
      if ( v49 <= (unsigned int)v54 )
        v23 = v54;
      v49 = v23;
      v59 = v23;
      v24 = v50;
      if ( v50 >= HIDWORD(v54) )
        v24 = HIDWORD(v54);
      v50 = v24;
      v60 = v24;
      ObfDereferenceObject(v19);
    }
    v25 = *(unsigned int *)&v9[4 * v11];
    v12 += v25;
    v51 += 24 * v25;
LABEL_23:
    v10 = v62;
    v11 = (unsigned int)(v11 + 1);
  }
  while ( (unsigned int)v11 < v62 );
  v5 = a2;
  v26 = v12 == 0;
  v6 = v65;
  if ( !v26 )
    goto LABEL_25;
LABEL_50:
  if ( (*((_DWORD *)v6 + 40) & 0x800000) != 0 )
  {
LABEL_25:
    v27 = 0;
    if ( v5 )
    {
      v28 = v64;
      v29 = &v9[4 * v10];
      v46 = v29;
      do
      {
        Object = v29;
        --v5;
        v30 = (int)v29;
        v51 = 16LL * v5;
        v31 = 0LL;
        v32 = *(struct tagGRAPHICS_DEVICE **)(v51 + v28 + 8);
        v65 = v32;
        while ( (unsigned int)v31 < v10 )
        {
          v33 = 0;
          v34 = *((_DWORD *)P + 5 * v31);
          v35 = v34 & 1;
          if ( (v34 & 2) == 0 )
            v35 |= 2u;
          v36 = v35 | 0x80000000;
          if ( v34 < 0 )
            v36 = v35;
          v37 = v36 | 0x40000000;
          if ( (v34 & 0x40000000) != 0 )
            v37 = v36;
          v38 = *(_DWORD *)&v9[4 * v31];
          v45 = v38;
          if ( v38 )
          {
            v33 = PruneMode((_DWORD)v32, v30, v38, (unsigned int)&v55, v37);
            v32 = v65;
            v30 = (_DWORD)Object + 24 * v45;
            Object = (char *)Object + 24 * v45;
          }
          if ( (*((_DWORD *)v6 + 40) & 0x800000) != 0
            && *((unsigned __int16 *)v32 + 35) + *((unsigned __int16 *)v32 + 34) == 244 )
          {
            if ( (*((_DWORD *)v32 + 60) & 1) == 0 )
              goto LABEL_42;
          }
          else if ( v33 )
          {
LABEL_42:
            v28 = v64;
            *(_DWORD *)(v51 + v64) = 1;
            *((_DWORD *)v6 + 40) |= 0x8000000u;
            goto LABEL_43;
          }
          v31 = (unsigned int)(v31 + 1);
        }
        v28 = v64;
LABEL_43:
        v29 = v46;
        v39 = v27 + 1;
        if ( (_DWORD)v31 != v10 )
          v39 = v27;
        v27 = v39;
      }
      while ( v5 );
    }
    GreDeleteFastMutex(v9);
    if ( P )
      ExFreePoolWithTag(P, 0);
    return v27;
  }
  else
  {
    GreDeleteFastMutex(v9);
LABEL_53:
    if ( P )
      ExFreePoolWithTag(P, 0);
    return v5;
  }
}
