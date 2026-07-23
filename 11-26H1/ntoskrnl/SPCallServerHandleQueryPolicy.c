/*
 * XREFs of SPCallServerHandleQueryPolicy @ 0x140A27458
 * Callers:
 *     SPCall2ServerInternal @ 0x140A24430 (SPCall2ServerInternal.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     KeResetEvent @ 0x140397930 (KeResetEvent.c)
 *     KeReleaseMutex @ 0x1403E02E0 (KeReleaseMutex.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     KeQueryTimeIncrement @ 0x14044EAA0 (KeQueryTimeIncrement.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwOpenKey @ 0x140728200 (ZwOpenKey.c)
 *     ZwUpdateWnfStateData @ 0x14072BC00 (ZwUpdateWnfStateData.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SPCallServerHandleQueryPolicy(__int64 a1, void *a2, unsigned int a3, __int64 a4)
{
  unsigned int *v6; // r13
  unsigned int v7; // edi
  unsigned int *v8; // rcx
  unsigned int *v9; // rax
  unsigned int i; // r8d
  __int64 v11; // r9
  unsigned int *v12; // rdx
  int v13; // esi
  unsigned int *v15; // rax
  bool v16; // cc
  __int64 v17; // r10
  unsigned int j; // r9d
  unsigned __int64 v19; // r8
  unsigned int *v20; // rdx
  _WORD *v21; // rcx
  unsigned __int64 v22; // rax
  unsigned int *v23; // r12
  unsigned __int64 v24; // rdx
  unsigned int v25; // r15d
  WCHAR *Pool2; // rax
  WCHAR *v27; // rbx
  unsigned int *v28; // rcx
  unsigned int *v29; // rax
  unsigned int k; // r8d
  __int64 v31; // r9
  unsigned int *v32; // rdx
  unsigned int v33; // r8d
  unsigned int *v34; // rax
  __int64 v35; // rax
  unsigned int *v36; // rdx
  unsigned int v37; // r13d
  int v38; // r12d
  unsigned int v39; // r13d
  __int64 v40; // rbx
  __int64 v41; // rcx
  int v42; // ebx
  unsigned __int64 v43; // r15
  int v44; // eax
  int v45; // ecx
  double v46; // xmm0_8
  int v47; // eax
  unsigned int v48; // r15d
  __int64 v49; // r12
  NTSTATUS v50; // edx
  _DWORD *v51; // rax
  int v52; // esi
  __int64 v53; // r8
  unsigned __int64 v54; // rdx
  unsigned int m; // ecx
  unsigned int v56; // eax
  __int64 v57; // r8
  int v58; // r11d
  _DWORD *v59; // rdx
  unsigned int n; // ecx
  unsigned int v61; // eax
  __int64 v62; // r8
  unsigned int *v63; // rdx
  unsigned int ii; // ecx
  unsigned int v65; // eax
  __int64 v66; // r8
  unsigned int v67; // r11d
  _DWORD *v68; // rdx
  unsigned int jj; // ecx
  unsigned int v70; // eax
  __int64 v71; // r8
  _DWORD *v72; // rdx
  unsigned int kk; // ecx
  unsigned int v74; // eax
  unsigned int v75; // eax
  unsigned int v76; // eax
  unsigned int v77; // eax
  unsigned int v78; // eax
  unsigned int v79; // ecx
  unsigned int v80; // eax
  unsigned int v81; // eax
  int v82; // ecx
  unsigned int v83; // r9d
  unsigned int v84; // eax
  unsigned int v85; // edx
  unsigned int v86; // r8d
  int v87; // r10d
  int v88; // r9d
  unsigned int v89; // edx
  unsigned int v90; // r8d
  unsigned int v91; // edx
  unsigned __int64 v92; // rax
  __int64 v93; // rbx
  unsigned int *Src; // [rsp+48h] [rbp-49h]
  int v95; // [rsp+50h] [rbp-41h]
  unsigned int v96; // [rsp+54h] [rbp-3Dh] BYREF
  unsigned int v97; // [rsp+58h] [rbp-39h]
  int v98; // [rsp+5Ch] [rbp-35h] BYREF
  unsigned int v99; // [rsp+60h] [rbp-31h]
  unsigned int v100; // [rsp+64h] [rbp-2Dh]
  __int64 v101; // [rsp+68h] [rbp-29h]
  int v102; // [rsp+70h] [rbp-21h] BYREF
  HANDLE KeyHandle; // [rsp+78h] [rbp-19h] BYREF
  unsigned int v104; // [rsp+80h] [rbp-11h]
  WCHAR *v105; // [rsp+88h] [rbp-9h]
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-1h] BYREF
  UNICODE_STRING v107; // [rsp+A0h] [rbp+Fh] BYREF
  LARGE_INTEGER Timeout; // [rsp+B0h] [rbp+1Fh] BYREF
  int v109; // [rsp+B8h] [rbp+27h]

  v96 = a3;
  KeyHandle = a2;
  v102 = 0;
  v97 = 0;
  Src = 0LL;
  Timeout.QuadPart = 0LL;
  v6 = 0LL;
  v7 = 0;
  DestinationString = 0LL;
  if ( !a1 )
    return (unsigned int)-1073741811;
  if ( !a2 )
    return (unsigned int)-1073741811;
  if ( !a4 )
    return (unsigned int)-1073741811;
  v8 = *(unsigned int **)(a1 + 8);
  if ( !v8 || *(_DWORD *)a1 <= 3u )
    return (unsigned int)-1073741811;
  v9 = v8;
  for ( i = 0; ; ++i )
  {
    v11 = *v9;
    v12 = v9 + 1;
    if ( i >= 3 )
      break;
    if ( v12 < v9 )
      return (unsigned int)-1073741675;
    v9 = (unsigned int *)((char *)v12 + v11);
    if ( (unsigned int *)((char *)v12 + v11) < v12 )
      return (unsigned int)-1073741675;
  }
  if ( v12 < v9 )
    return (unsigned int)-1073741675;
  v15 = 0LL;
  if ( (_DWORD)v11 )
    v15 = v12;
  if ( (_DWORD)v11 != 8 )
    return (unsigned int)-1073741789;
  v16 = *(_DWORD *)a1 <= 4u;
  v17 = *(_QWORD *)v15;
  v101 = *(_QWORD *)v15;
  if ( v16 )
    return (unsigned int)-1073741811;
  for ( j = 0; ; ++j )
  {
    v19 = *v8;
    v20 = v8 + 1;
    if ( j >= 4 )
      break;
    if ( v20 < v8 )
      return (unsigned int)-1073741675;
    v8 = (unsigned int *)((char *)v20 + v19);
    if ( (unsigned int *)((char *)v20 + v19) < v20 )
      return (unsigned int)-1073741675;
  }
  if ( v20 < v8 )
    return (unsigned int)-1073741675;
  if ( !(_DWORD)v19 )
    return (unsigned int)-1073741762;
  v21 = v8 + 1;
  if ( (v19 & 1) != 0 )
    return (unsigned int)-1073741762;
  v22 = v19 >> 1;
  if ( *((_WORD *)v20 + (v19 >> 1) - 1) || !v20 )
    return (unsigned int)-1073741762;
  v23 = v20;
  if ( !v22 )
    goto LABEL_204;
  v101 = v17;
  do
  {
    if ( !*v21 )
      break;
    ++v21;
    --v22;
  }
  while ( v22 );
  if ( v22 )
    v24 = (v19 >> 1) - v22;
  else
LABEL_204:
    v24 = 0LL;
  if ( !v22 || 2 * v24 + 2 != v19 || 2 * (unsigned int)((2 * v24) >> 1) == -2 )
    return (unsigned int)-1073741762;
  v25 = 2 * ((2 * v24) >> 1) + 2;
  Pool2 = (WCHAR *)ExAllocatePool2(0x100uLL);
  v27 = Pool2;
  if ( !Pool2 )
    return (unsigned int)-1073741801;
  memmove(Pool2, v23, v25);
  v28 = *(unsigned int **)(a1 + 8);
  if ( v28 && *(_DWORD *)a1 > 5u )
  {
    v29 = *(unsigned int **)(a1 + 8);
    for ( k = 0; ; ++k )
    {
      v31 = *v29;
      v32 = v29 + 1;
      if ( k >= 5 )
        break;
      if ( v32 < v29 )
        goto LABEL_43;
      v29 = (unsigned int *)((char *)v32 + v31);
      if ( (unsigned int *)((char *)v32 + v31) < v32 )
        goto LABEL_43;
    }
    if ( v32 < v29 )
      goto LABEL_43;
    v33 = 0;
    v34 = 0LL;
    if ( (_DWORD)v31 )
      v34 = v32;
    if ( (_DWORD)v31 != 4 )
    {
      v13 = -1073741789;
      goto LABEL_44;
    }
    v16 = *(_DWORD *)a1 <= 6u;
    v104 = *v34;
    if ( v16 )
    {
      v13 = -1073741811;
      goto LABEL_44;
    }
    while ( 1 )
    {
      v35 = *v28;
      v36 = v28 + 1;
      if ( v33 >= 6 )
        break;
      if ( v36 < v28 )
        goto LABEL_43;
      v28 = (unsigned int *)((char *)v36 + v35);
      if ( (unsigned int *)((char *)v36 + v35) < v36 )
        goto LABEL_43;
      ++v33;
    }
    if ( v36 < v28 )
    {
LABEL_43:
      v13 = -1073741675;
      goto LABEL_44;
    }
    if ( (_DWORD)v35 )
      v6 = v28 + 1;
    if ( (_DWORD)v35 != 4 )
    {
      v13 = -1073741789;
      v6 = 0LL;
      goto LABEL_44;
    }
    v37 = *v6;
    RtlInitUnicodeString(&DestinationString, v27);
    if ( v37 )
    {
      v38 = 1;
      if ( v37 <= 0x100000 )
      {
LABEL_65:
        Src = (unsigned int *)ExAllocatePool2(0x100uLL);
        if ( Src )
        {
          v13 = guard_dispatch_icall_no_overrides((__int64)&DestinationString, (__int64)&v102);
          if ( v13 != -1073741789 && v13 < 0 )
            goto LABEL_89;
          v39 = v97;
LABEL_188:
          if ( v39 + 32 < 0x1C )
            goto LABEL_88;
          v100 = v39 + 40;
          if ( v39 + 40 < v39 + 32 )
            goto LABEL_88;
          if ( v39 + 48 < v39 + 40 )
            goto LABEL_88;
          if ( v39 + 48 >= 0xFFFFFFF8 )
            goto LABEL_88;
          v85 = (v39 + 63) & 0xFFFFFFF8;
          if ( v85 < v39 + 56 )
            goto LABEL_88;
          if ( v85 + 8 < v85 )
            goto LABEL_88;
          v86 = v85 + 12;
          v105 = v27;
          v87 = *((_DWORD *)KeyHandle + 8);
          v88 = *((_DWORD *)KeyHandle + 4);
          if ( v85 + 12 < 4 )
            goto LABEL_88;
          v89 = v85 + 16;
          if ( v86 + 4 < v86 )
            goto LABEL_88;
          v90 = v89 + v88;
          if ( v89 + v88 < v89 )
            goto LABEL_88;
          v91 = v90 + 4;
          if ( v90 + 4 < v90 || v91 + v87 < v91 )
            goto LABEL_88;
          v48 = v39 + 48;
          v49 = v101;
          if ( v96 < v91 + v87 || v13 < 0 )
            goto LABEL_85;
          v40 = MEMORY[0xFFFFF78000000320];
          v41 = v40 * KeQueryTimeIncrement();
          v107 = 0LL;
          v42 = 1;
          v98 = 0;
          v96 = 0;
          v99 = 0;
          v95 = 1;
          v43 = v41 / 10000;
          KeyHandle = (HANDLE)(v41 / 10000);
          RtlInitUnicodeString(&v107, L"Security-SPP-GenuineLocalStatus");
          v44 = guard_dispatch_icall_no_overrides((__int64)&v107, (__int64)&v98);
          if ( v44 == -1073741772 || v44 >= 0 )
          {
            v42 = 0;
            v95 = 0;
          }
          if ( LODWORD(ExpPlatformBinaryLock.WaitStatus) != v42 )
          {
            ExpPlatformBinaryLock.RelativeTimerBias = v43;
            LODWORD(ExpPlatformBinaryLock.WaitStatus) = v42;
          }
          v45 = v43 - LODWORD(ExpPlatformBinaryLock.RelativeTimerBias);
          if ( (__int64)(v43 - ExpPlatformBinaryLock.RelativeTimerBias) < 0 )
          {
            v92 = v45 & 1 | ((v43 - ExpPlatformBinaryLock.RelativeTimerBias) >> 1);
            v46 = (double)(int)v92 + (double)(int)v92;
          }
          else
          {
            v46 = (double)v45;
          }
          v47 = 0;
          if ( !v42 && !ExpPlatformBinaryLock.UserIdealProcessor )
          {
            LOBYTE(v47) = v46 >= 9000000.0;
            if ( v47 )
            {
              ExpPlatformBinaryLock.UserIdealProcessor = 1;
              ZwUpdateWnfStateData(&WNF_OLIC_OS_LICENSE_NON_GENUINE, 0LL, 0, 0LL, 0LL, 0, 0);
            }
          }
          v48 = v100 + 8;
          v27 = v105;
          v49 = v101;
          if ( (char *)KeyHandle - ExpPlatformBinaryLock.RelativeTimerBias < (char *)0xA4CBFB
            || (v50 = KeWaitForSingleObject(&Mutex, UserRequest, 1, 0, &Timeout), v48 = v100 + 8, v50 < 0)
            || v50 == 192
            || v50 == 258 )
          {
LABEL_85:
            *(_DWORD *)(a4 + 4) = v48;
            if ( !v48 )
            {
              v13 = -1073741762;
              goto LABEL_89;
            }
            v51 = (_DWORD *)ExAllocatePool2(0x100uLL);
            if ( !v51 )
            {
              v13 = -1073741801;
              goto LABEL_89;
            }
            *(_QWORD *)(a4 + 8) = v51;
            v52 = v13 | 0x10000000;
            *(_DWORD *)a4 = 0;
            if ( v51 + 1 < v51 )
              goto LABEL_88;
            if ( v51 + 2 > (_DWORD *)((char *)v51 + *(unsigned int *)(a4 + 4)) )
              goto LABEL_213;
            *v51 = 4;
            v51[1] = v52;
            ++*(_DWORD *)a4;
            v13 = 0;
            v53 = *(_QWORD *)(a4 + 8);
            if ( v53 )
            {
              v54 = *(_QWORD *)(a4 + 8);
              for ( m = 0; m < *(_DWORD *)a4; ++m )
              {
                v56 = *(_DWORD *)v54 + 4;
                if ( v56 < 4 || v54 + v56 < v54 )
                  goto LABEL_88;
                v54 += v56;
              }
              if ( v54 + 4 < v54 )
                goto LABEL_88;
              if ( v54 + 12 > v53 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                goto LABEL_213;
              *(_DWORD *)v54 = 8;
              *(_QWORD *)(v54 + 4) = v49;
            }
            else
            {
              v76 = *(_DWORD *)(a4 + 4);
              if ( v76 + 12 < v76 )
                goto LABEL_147;
              *(_DWORD *)(a4 + 4) = v76 + 12;
            }
            ++*(_DWORD *)a4;
            v57 = *(_QWORD *)(a4 + 8);
            v58 = v102;
            if ( v57 )
            {
              v59 = *(_DWORD **)(a4 + 8);
              for ( n = 0; n < *(_DWORD *)a4; ++n )
              {
                v61 = *v59 + 4;
                if ( v61 < 4 || (_DWORD *)((char *)v59 + v61) < v59 )
                  goto LABEL_88;
                v59 = (_DWORD *)((char *)v59 + v61);
              }
              if ( v59 + 1 < v59 )
                goto LABEL_88;
              if ( (unsigned __int64)(v59 + 2) > v57 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                goto LABEL_213;
              *v59 = 4;
              v59[1] = v58;
            }
            else
            {
              v77 = *(_DWORD *)(a4 + 4);
              if ( v77 + 8 < v77 )
                goto LABEL_147;
              *(_DWORD *)(a4 + 4) = v77 + 8;
            }
            ++*(_DWORD *)a4;
            if ( Src )
            {
              v13 = -1073741811;
            }
            else
            {
              v62 = *(_QWORD *)(a4 + 8);
              if ( v62 )
              {
                v63 = *(unsigned int **)(a4 + 8);
                for ( ii = 0; ii < *(_DWORD *)a4; ++ii )
                {
                  v65 = *v63 + 4;
                  if ( v65 < 4 || (unsigned int *)((char *)v63 + v65) < v63 )
                    goto LABEL_115;
                  v63 = (unsigned int *)((char *)v63 + v65);
                }
                if ( v63 + 1 >= v63 )
                {
                  if ( (unsigned __int64)v63 + v39 + 4 <= v62 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                  {
                    *v63 = v39;
LABEL_120:
                    ++*(_DWORD *)a4;
                    v66 = *(_QWORD *)(a4 + 8);
                    v67 = v97;
                    if ( v66 )
                    {
                      v68 = *(_DWORD **)(a4 + 8);
                      for ( jj = 0; jj < *(_DWORD *)a4; ++jj )
                      {
                        v70 = *v68 + 4;
                        if ( v70 < 4 || (_DWORD *)((char *)v68 + v70) < v68 )
                          goto LABEL_88;
                        v68 = (_DWORD *)((char *)v68 + v70);
                      }
                      if ( v68 + 1 < v68 )
                        goto LABEL_88;
                      if ( (unsigned __int64)(v68 + 2) > v66 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                        goto LABEL_213;
                      *v68 = 4;
                      v68[1] = v67;
                    }
                    else
                    {
                      v80 = *(_DWORD *)(a4 + 4);
                      if ( v80 + 8 < v80 )
                        goto LABEL_147;
                      *(_DWORD *)(a4 + 4) = v80 + 8;
                    }
                    ++*(_DWORD *)a4;
                    v71 = *(_QWORD *)(a4 + 8);
                    if ( v71 )
                    {
                      v72 = *(_DWORD **)(a4 + 8);
                      for ( kk = 0; kk < *(_DWORD *)a4; ++kk )
                      {
                        v74 = *v72 + 4;
                        if ( v74 < 4 || (_DWORD *)((char *)v72 + v74) < v72 )
                          goto LABEL_88;
                        v72 = (_DWORD *)((char *)v72 + v74);
                      }
                      if ( v72 + 1 >= v72 )
                      {
                        if ( (unsigned __int64)(v72 + 2) <= v71 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                        {
                          *v72 = 4;
                          v72[1] = v7;
LABEL_138:
                          ++*(_DWORD *)a4;
                          goto LABEL_89;
                        }
LABEL_213:
                        v13 = -1073741789;
                        goto LABEL_89;
                      }
LABEL_88:
                      v13 = -1073741675;
LABEL_89:
                      v6 = Src;
                      goto LABEL_44;
                    }
                    v81 = *(_DWORD *)(a4 + 4);
                    if ( v81 + 8 >= v81 )
                    {
                      *(_DWORD *)(a4 + 4) = v81 + 8;
                      goto LABEL_138;
                    }
LABEL_147:
                    *(_DWORD *)(a4 + 4) = -1;
                    goto LABEL_88;
                  }
                  v13 = -1073741789;
                  goto LABEL_116;
                }
              }
              else
              {
                v78 = *(_DWORD *)(a4 + 4);
                v79 = v39 + v78 + 4;
                if ( v79 >= v78 )
                {
                  *(_DWORD *)(a4 + 4) = v79;
                  goto LABEL_120;
                }
                *(_DWORD *)(a4 + 4) = -1;
              }
LABEL_115:
              v13 = -1073741675;
            }
LABEL_116:
            v6 = Src;
            goto LABEL_44;
          }
          if ( *(_DWORD *)&ExpPlatformBinaryLock.ApcStateFill[40] != v95 )
          {
            if ( v95 )
            {
              KeResetEvent(&stru_140EF4D40);
            }
            else
            {
              v93 = MEMORY[0xFFFFF78000000320];
              ExpPlatformBinaryLock.StateSaveArea = (_XSAVE_FORMAT *)(v93 * KeQueryTimeIncrement() / 10000);
            }
          }
          *(_DWORD *)&ExpPlatformBinaryLock.ApcStateFill[40] = v95;
          if ( v95
            || !HIDWORD(ExpPlatformBinaryLock.WaitStatus)
            || (unsigned __int64)KeyHandle - (unsigned __int64)ExpPlatformBinaryLock.StateSaveArea < 0xADF4FC )
          {
            KeReleaseMutex(&Mutex, 0);
            v27 = v105;
            v48 = v100 + 8;
            v49 = v101;
            goto LABEL_85;
          }
          KeSetEvent(&stru_140EF4D40, 1, 0);
          v96 = 4;
          v99 = 0;
          KeyHandle = 0LL;
          if ( ZwOpenKey(&KeyHandle, 1u, &stru_140FD6850) >= 0 )
          {
            v82 = 3;
          }
          else
          {
            if ( (int)guard_dispatch_icall_no_overrides((__int64)aBd, (__int64)&v96) < 0 )
            {
LABEL_180:
              v98 = 1;
LABEL_171:
              if ( KeyHandle )
                ZwClose(KeyHandle);
              v27 = v105;
              Timeout.QuadPart = 0LL;
              v109 = 0;
              v99 = v104;
              v48 = v100 + 8;
              v96 = 0;
              v49 = v101;
              if ( (int)guard_dispatch_icall_no_overrides((__int64)aLn, (__int64)&v96) < 0 )
              {
                v83 = v99;
              }
              else
              {
                v48 = v100 + 8;
                v83 = v104;
              }
              v84 = dword_140FD6058 & 0xFFFF0000 | 0x3211;
              dword_140FD6058 = v84;
              if ( v83 )
                v7 = v84;
              else
                KeReleaseMutex(&Mutex, 0);
              goto LABEL_85;
            }
            v82 = 0;
          }
          v98 = v82;
          if ( v96 == 4 && (unsigned int)(v82 - 1) <= 2 )
            goto LABEL_171;
          goto LABEL_180;
        }
        v13 = -1073741801;
        v6 = 0LL;
LABEL_44:
        if ( !v27 )
          goto LABEL_46;
        goto LABEL_45;
      }
    }
    else
    {
      v38 = 0;
    }
    v13 = guard_dispatch_icall_no_overrides((__int64)&DestinationString, (__int64)&v102);
    if ( v13 == -1073741789 )
    {
      v75 = v97;
    }
    else
    {
      if ( v13 < 0 )
      {
        v6 = 0LL;
        goto LABEL_44;
      }
      v75 = v97;
      v38 = 0;
    }
    v39 = v75;
    v13 = 0;
    if ( !v38 )
      goto LABEL_188;
    goto LABEL_65;
  }
  v13 = -1073741811;
LABEL_45:
  ExFreePoolWithTag(v27, 0);
LABEL_46:
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  return (unsigned int)v13;
}
