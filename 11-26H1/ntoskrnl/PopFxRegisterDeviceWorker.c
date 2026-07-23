/*
 * XREFs of PopFxRegisterDeviceWorker @ 0x140B1DC50
 * Callers:
 *     PoFxRegisterCoreDevice @ 0x1407D0040 (PoFxRegisterCoreDevice.c)
 *     PopFxRegisterDevice @ 0x140B52230 (PopFxRegisterDevice.c)
 * Callees:
 *     IoAllocateIrp @ 0x14026BA40 (IoAllocateIrp.c)
 *     PopFxActivateComponent @ 0x14037C8F0 (PopFxActivateComponent.c)
 *     PopFxBugCheck @ 0x1403BAB64 (PopFxBugCheck.c)
 *     PopFxRegisterDeviceWithPep @ 0x14043C668 (PopFxRegisterDeviceWithPep.c)
 *     KeInitializeEvent @ 0x140460680 (KeInitializeEvent.c)
 *     PopPlRegisterComponent @ 0x1404DC810 (PopPlRegisterComponent.c)
 *     PopPlRegisterDevice @ 0x1404E8C8C (PopPlRegisterDevice.c)
 *     IoInitializeRemoveLockEx @ 0x1404EE240 (IoInitializeRemoveLockEx.c)
 *     PopFxFindAcpiDeviceByUniqueId @ 0x1404F3FA8 (PopFxFindAcpiDeviceByUniqueId.c)
 *     PopFxCreateDeviceCommon @ 0x1405077F0 (PopFxCreateDeviceCommon.c)
 *     PopFxReleaseAcpiRefDevice @ 0x1406083BC (PopFxReleaseAcpiRefDevice.c)
 *     PopFxVerifyDependencies @ 0x140B1E298 (PopFxVerifyDependencies.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopFxRegisterDeviceWorker(
        ULONG_PTR a1,
        const UNICODE_STRING *a2,
        __int128 *a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6,
        char a7,
        __int64 a8,
        _QWORD *a9)
{
  __int64 v9; // rsi
  __int64 v10; // r12
  int v11; // ebx
  PVOID v14; // r13
  struct _KLOCK_ENTRIES *j; // r9
  _DWORD *v16; // r14
  unsigned int v17; // r10d
  unsigned int v18; // r11d
  unsigned int i; // r8d
  __int64 v20; // r8
  __int64 v21; // rcx
  int AcpiDeviceByUniqueId; // eax
  __int64 v23; // rdx
  __int64 v24; // r8
  char *v25; // rdi
  char *Pool2; // r15
  ULONG_PTR v27; // r14
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  char *v33; // rbx
  char *v34; // rax
  __int64 v35; // r12
  __int64 v36; // r9
  unsigned int v37; // ebx
  PIRP Irp; // rax
  int v39; // ebx
  __int64 v41; // r12
  __int64 v42; // r9
  __int64 v43; // r10
  __int64 v44; // rdx
  __int64 v45; // r8
  __int64 v46; // rdx
  int v47; // r8d
  __int64 v48; // rbx
  __int64 v49; // rdx
  unsigned int v50; // eax
  unsigned int v51; // ecx
  unsigned int v52; // eax
  unsigned int v53; // ecx
  __int64 v54; // r8
  __int64 v55; // rcx
  _DWORD *v56; // r15
  __int64 v57; // r11
  int DeviceCommon; // eax
  __int128 v59; // xmm0
  __int64 v60; // r8
  int v61; // eax
  char *v62; // r10
  unsigned int v63; // edx
  __int64 v64; // rcx
  unsigned int *v65; // rax
  char *v66; // rdx
  __int64 v67; // rdx
  __int64 v68; // rax
  unsigned __int64 v69; // rcx
  unsigned int v70; // r10d
  __int64 v71; // r8
  char *v72; // rcx
  _QWORD *v73; // rcx
  __int64 v74; // rax
  PVOID v75; // [rsp+30h] [rbp-B8h] BYREF
  char *v76; // [rsp+38h] [rbp-B0h]
  char *v77; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v78; // [rsp+48h] [rbp-A0h]
  PVOID P; // [rsp+50h] [rbp-98h]
  __int64 v80; // [rsp+58h] [rbp-90h]
  char *v81; // [rsp+60h] [rbp-88h]
  char *v82; // [rsp+68h] [rbp-80h]
  __int64 v83; // [rsp+70h] [rbp-78h]
  __int64 v84; // [rsp+78h] [rbp-70h]
  __int64 v85; // [rsp+80h] [rbp-68h]
  __int64 v86; // [rsp+88h] [rbp-60h]
  __int64 v87; // [rsp+90h] [rbp-58h]
  __int64 v88; // [rsp+98h] [rbp-50h]
  __int64 v89; // [rsp+A0h] [rbp-48h]
  unsigned int v93; // [rsp+110h] [rbp+28h]

  v9 = a5;
  v10 = 0LL;
  v75 = 0LL;
  v77 = 0LL;
  v11 = -1;
  LODWORD(v76) = -1;
  v14 = 0LL;
  if ( !a5 || (a8 & 0x18) == 0x18 )
    return (unsigned int)-1073741811;
  P = (PVOID)ExAllocatePool2(0x100uLL);
  v16 = P;
  if ( !P )
    return (unsigned int)-1073741670;
  v17 = 0;
  v93 = 0;
  v18 = 0;
  for ( i = 0; i < (unsigned int)v9; ++i )
  {
    v49 = a4 + 56LL * i;
    v50 = *(_DWORD *)(v49 + 28);
    if ( !v50
      || v50 > 1 && (!*(_QWORD *)a3 || !*((_QWORD *)a3 + 1) || !*((_QWORD *)a3 + 2) || *(_DWORD *)(v49 + 24) >= v50)
      || (v51 = v50 + v17, v50 + v17 < v17) )
    {
LABEL_51:
      v39 = -1073741811;
      goto LABEL_28;
    }
    v52 = *(_DWORD *)(v49 + 40);
    v17 = v51;
    if ( v52 )
    {
      if ( v52 >= (unsigned int)v9 )
        goto LABEL_51;
      v53 = v52 + v18;
      if ( v52 + v18 < v18 )
        goto LABEL_51;
      v93 = v52 + v18;
      for ( j = 0LL; (unsigned int)j < *(_DWORD *)(v49 + 40); j = (struct _KLOCK_ENTRIES *)(unsigned int)((_DWORD)j + 1) )
      {
        v57 = *(unsigned int *)(*(_QWORD *)(v49 + 48) + 4LL * (unsigned int)j);
        if ( (unsigned int)v57 >= (unsigned int)v9 )
          goto LABEL_51;
        ++v16[3 * v57 + 2];
      }
      v18 = v53;
    }
    if ( (*(_BYTE *)(v49 + 16) & 4) != 0 )
    {
      if ( v11 != -1 )
        goto LABEL_51;
      v11 = i;
      LODWORD(v76) = i;
    }
  }
  v81 = 0LL;
  v78 = 0LL;
  v82 = 0LL;
  v80 = 480 * v9;
  v20 = 480 * v9 + 24LL * v17;
  v21 = v20 + 312;
  if ( a7 <= 0 )
  {
    v21 = 480 * v9 + 24LL * v17;
    v20 = 0LL;
  }
  v89 = v20;
  v85 = v21;
  if ( v18 )
  {
    v78 = v21;
    v10 = v21 + 8LL * v18;
    v21 = v10 + 8LL * v18;
    v85 = v21;
  }
  v88 = (unsigned int)(PopFxRuntimeLogNumberEntries * v9);
  v84 = v21 + 24 * v88;
  v86 = 8 * (int)v9 + 16;
  v87 = v86 + 40 * v9;
  v83 = v87 + 24LL * v17;
  AcpiDeviceByUniqueId = PopFxFindAcpiDeviceByUniqueId(a2, (unsigned __int64 **)&v75, v86, j);
  v14 = v75;
  if ( AcpiDeviceByUniqueId >= 0 )
  {
    v25 = (char *)v75;
    _InterlockedOr((volatile signed __int32 *)v75 + 58, 1u);
LABEL_12:
    IoInitializeRemoveLockEx((PIO_REMOVE_LOCK)(v25 + 240), 0x4D584650u, 0, 0, 0x20u);
    Pool2 = (char *)ExAllocatePool2(0x40uLL);
    if ( Pool2 )
    {
      v27 = ExAllocatePool2(0x40uLL);
      if ( v27 )
      {
        v28 = *a3;
        v29 = a3[1];
        *((_DWORD *)v25 + 217) = v9;
        *((_QWORD *)v25 + 109) = Pool2;
        *((_OWORD *)v25 + 7) = v28;
        v30 = a3[2];
        *((_OWORD *)v25 + 8) = v29;
        v31 = a3[3];
        *((_OWORD *)v25 + 9) = v30;
        v32 = a3[4];
        *((_OWORD *)v25 + 10) = v31;
        *((_OWORD *)v25 + 11) = v32;
        *((_QWORD *)v25 + 24) = a6;
        *((_DWORD *)v25 + 238) = v11;
        v33 = &Pool2[8 * v9];
        *((_QWORD *)v25 + 80) = 0LL;
        *(_QWORD *)(v25 + 652) = 5LL;
        *((_QWORD *)v25 + 164) = v25 + 1304;
        *((_QWORD *)v25 + 163) = v25 + 1304;
        *(_QWORD *)v27 = a8;
        v34 = &Pool2[v80];
        *(_DWORD *)(v27 + 8) = v9;
        v76 = v34;
        if ( v93 )
        {
          v81 = &Pool2[v78];
          v82 = &Pool2[v10];
        }
        v35 = 0LL;
        v77 = (char *)(v27 + v86);
        v75 = (PVOID)(v27 + v87);
        v36 = -16LL - (_QWORD)Pool2;
        v78 = -16LL - v27;
        while ( (unsigned int)v35 < (unsigned int)v9 )
        {
          *(_QWORD *)(*((_QWORD *)v25 + 109) + 8 * v35) = v33;
          v80 = 56LL * (unsigned int)v35;
          if ( (unsigned __int64)&v33[v36 + 16] > v84 - 472 )
            goto LABEL_22;
          v59 = *(_OWORD *)(56LL * (unsigned int)v35 + a4);
          *((_DWORD *)v33 + 4) = v35;
          *((_QWORD *)v33 + 10) = v25;
          *(_OWORD *)v33 = v59;
          *((_QWORD *)v33 + 5) = PopFxComponentWork;
          *((_QWORD *)v33 + 6) = v33;
          *((_QWORD *)v33 + 3) = 0LL;
          KeInitializeEvent((PRKEVENT)(v33 + 104), NotificationEvent, 1u);
          v60 = v80;
          *((_QWORD *)v33 + 16) = 0LL;
          *((_DWORD *)v33 + 39) = *(_DWORD *)(v60 + a4 + 28);
          *((_QWORD *)v33 + 20) = v76;
          *((_DWORD *)v33 + 42) = *(_DWORD *)(v60 + a4 + 24);
          *((_QWORD *)v33 + 25) = 0LL;
          *((_DWORD *)v33 + 54) = 0;
          *((_DWORD *)v33 + 53) = -1;
          *((_QWORD *)v33 + 58) = v33 + 456;
          *((_QWORD *)v33 + 57) = v33 + 456;
          *((_QWORD *)v33 + 56) = v33 + 440;
          *((_QWORD *)v33 + 55) = v33 + 440;
          v61 = *(_DWORD *)(v60 + a4 + 40);
          if ( v61 )
          {
            v62 = v81;
            v63 = 0;
            *((_QWORD *)v33 + 22) = v81;
            *((_DWORD *)v33 + 43) = v61;
            do
            {
              v64 = v63++;
              *(_DWORD *)v62 = *(_DWORD *)(*(_QWORD *)(v60 + a4 + 48) + 4 * v64);
              v62 += 8;
            }
            while ( v63 < *((_DWORD *)v33 + 43) );
            v81 = v62;
          }
          v65 = (unsigned int *)P;
          if ( *((_DWORD *)P + 3 * v35 + 2) )
          {
            v66 = v82;
            *((_QWORD *)v33 + 24) = v82;
            v82 = &v66[8 * v65[3 * v35 + 2]];
          }
          v67 = (__int64)v77;
          v68 = v83;
          v69 = (unsigned __int64)&v77[v78 + 16];
          *(_QWORD *)(v27 + 8 * v35 + 16) = v77;
          if ( v69 > v68 - 40 )
            goto LABEL_22;
          v70 = 0;
          *(_OWORD *)v67 = *(_OWORD *)(v60 + a4);
          *(_QWORD *)(v67 + 16) = *(_QWORD *)(v60 + a4 + 16);
          *(_DWORD *)(v67 + 28) = *(_DWORD *)(v60 + a4 + 28);
          *(_QWORD *)(v67 + 32) = v75;
          *(_DWORD *)(v67 + 24) = *(_DWORD *)(v60 + a4 + 24);
          v36 = -16LL - (_QWORD)Pool2;
          v78 = -16LL - v27;
          while ( v70 < *((_DWORD *)v33 + 39) )
          {
            v71 = *(_QWORD *)(v60 + a4 + 32);
            if ( v76 - Pool2 > (unsigned __int64)(v84 - 24) )
              goto LABEL_22;
            v72 = v76;
            *((_DWORD *)v76 + 4) = *(_DWORD *)(v71 + 24LL * v70 + 16);
            *(_QWORD *)v72 = *(_QWORD *)(v71 + 24LL * v70);
            *((_QWORD *)v72 + 1) = *(_QWORD *)(v71 + 24LL * v70 + 8);
            v76 = v72 + 24;
            if ( (char *)v75 - v27 > (char *)(v83 - 24) )
              goto LABEL_22;
            v73 = v75;
            *((_DWORD *)v75 + 4) = *(_DWORD *)(v71 + 24LL * v70 + 16);
            *v73 = *(_QWORD *)(v71 + 24LL * v70);
            v74 = *(_QWORD *)(v71 + 24LL * v70 + 8);
            v60 = v80;
            v73[1] = v74;
            v75 = v73 + 3;
            ++v70;
          }
          v77 += 40;
          v33 += 472;
          v35 = (unsigned int)(v35 + 1);
        }
        *((_DWORD *)v25 + 220) = v88;
        *((_QWORD *)v25 + 111) = &Pool2[v85];
        if ( !v93 || (v39 = PopFxVerifyDependencies(P, v25, (unsigned int)v9, v36), v39 >= 0) )
        {
          v37 = 0;
          if ( (_DWORD)v9 )
          {
            v41 = 0LL;
            do
            {
              v42 = 0LL;
              v43 = *(_QWORD *)(v41 + *((_QWORD *)v25 + 109));
              if ( *(_DWORD *)(v43 + 172) )
              {
                do
                {
                  v54 = *(_QWORD *)(*((_QWORD *)v25 + 109) + 8LL * *(unsigned int *)(*(_QWORD *)(v43 + 176) + 8 * v42));
                  v55 = *(unsigned int *)(v54 + 188);
                  *(_DWORD *)(*(_QWORD *)(v54 + 192) + 8 * v55) = v37;
                  *(_DWORD *)(*(_QWORD *)(v54 + 192) + 8 * v55 + 4) = v42;
                  v42 = (unsigned int)(v42 + 1);
                  ++*(_DWORD *)(v54 + 188);
                }
                while ( (unsigned int)v42 < *(_DWORD *)(v43 + 172) );
              }
              PopFxActivateComponent((__int64)v25, v43, 0, 1);
              ++v37;
              v41 += 8LL;
            }
            while ( v37 < (unsigned int)v9 );
          }
          if ( a7 > 0 )
          {
            *((_QWORD *)v25 + 3) = &Pool2[v89];
            Irp = IoAllocateIrp(a7 + 2, 0);
            *((_QWORD *)v25 + 2) = Irp;
            if ( !Irp )
            {
LABEL_22:
              v39 = -1073741670;
              goto LABEL_23;
            }
          }
          if ( !(unsigned __int8)PopFxRegisterDeviceWithPep(a1, (int)a2, (__int64)v25, (struct _KLOCK_ENTRIES *)v27) )
            PopFxBugCheck(0x601uLL, (ULONG_PTR)v25, v27, 0LL);
          PopPlRegisterDevice((__int64)v25, v44, v45);
          if ( (*(_QWORD *)v27 & 0x10) == 0
            && ((*(_QWORD *)v27 & 8) != 0 || PopPoFxSystemIrpWaitForReportDevicePoweredReg) )
          {
            _InterlockedOr((volatile signed __int32 *)v25 + 216, 0x80u);
          }
          if ( (*(_BYTE *)v27 & 0x20) != 0 )
            _InterlockedOr((volatile signed __int32 *)v25 + 216, 0x1000u);
          if ( (*(_BYTE *)v27 & 0x40) != 0 )
            _InterlockedOr((volatile signed __int32 *)v25 + 216, 1u);
          v48 = (__int64)&Pool2[8 * v9];
          if ( (_DWORD)v9 )
          {
            v56 = (_DWORD *)(v27 + v86 + 28);
            do
            {
              if ( (*(_BYTE *)(v56 - 3) & 2) != 0 )
                *(_DWORD *)(v48 + 92) |= 2u;
              *(_DWORD *)(v48 + 156) = *v56;
              PopPlRegisterComponent(v48, v46, v47);
              v48 += 472LL;
              v56 += 10;
              --v9;
            }
            while ( v9 );
          }
          Pool2 = 0LL;
          *a9 = v25;
          v25 = 0LL;
          v39 = 0;
        }
LABEL_23:
        ExFreePoolWithTag((PVOID)v27, 0x4D584650u);
      }
      else
      {
        v39 = -1073741670;
      }
      v16 = P;
    }
    else
    {
      v39 = -1073741670;
    }
    if ( v25 && !v14 )
      ExFreePoolWithTag(v25, 0x4D584650u);
    if ( Pool2 )
      ExFreePoolWithTag(Pool2, 0x4D584650u);
    goto LABEL_28;
  }
  if ( AcpiDeviceByUniqueId == -1073741738 )
  {
    v14 = v75;
    v39 = -1073741661;
  }
  else
  {
    DeviceCommon = PopFxCreateDeviceCommon((__int64)a2, v23, v24, 0, (__int64 *)&v77);
    v25 = v77;
    v39 = DeviceCommon;
    if ( v77 )
    {
      v11 = (int)v76;
      goto LABEL_12;
    }
  }
LABEL_28:
  ExFreePoolWithTag(v16, 0x4D584650u);
  if ( v14 )
    PopFxReleaseAcpiRefDevice((__int64)v14, (void *)0x66466F50);
  return (unsigned int)v39;
}
