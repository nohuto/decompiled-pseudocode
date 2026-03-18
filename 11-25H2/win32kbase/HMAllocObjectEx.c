/*
 * XREFs of HMAllocObjectEx @ 0x14003E880
 * Callers:
 *     HMAllocObject @ 0x14003E6C0 (HMAllocObject.c)
 *     ?CreateMonitor@@YAPEAUtagMONITOR@@XZ @ 0x1400CEB94 (-CreateMonitor@@YAPEAUtagMONITOR@@XZ.c)
 *     ?LoadKeyboardLayoutFile@@YAPEAUtagKBDFILE@@PEAXIIPEBGPEAGKK@Z @ 0x14010D3A8 (-LoadKeyboardLayoutFile@@YAPEAUtagKBDFILE@@PEAXIIPEBGPEAGKK@Z.c)
 *     ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x14011CA28 (-xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_IN.c)
 *     UserCreateBaseWindowHandle @ 0x1401C18D0 (UserCreateBaseWindowHandle.c)
 * Callees:
 *     ?HMAllocateUserOrIsolatedType@@YAPEAX_KGE@Z @ 0x14000B1D4 (-HMAllocateUserOrIsolatedType@@YAPEAX_KGE@Z.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x14000C940 (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x14000D154 (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ?HMFreeUserOrIsolatedType@@YAXGEPEAX@Z @ 0x14001E25C (-HMFreeUserOrIsolatedType@@YAXGEPEAX@Z.c)
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x14001EBA0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     ?GetEtwUserHandleType@@YA?AW4EtwUserHandleType@@E@Z @ 0x14003AEB0 (-GetEtwUserHandleType@@YA-AW4EtwUserHandleType@@E@Z.c)
 *     EtwTraceUserCreateHandle @ 0x14003C7D4 (EtwTraceUserCreateHandle.c)
 *     McTemplateK0pqqq_EtwWriteTransfer @ 0x14003E28C (McTemplateK0pqqq_EtwWriteTransfer.c)
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x14003F5E0 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x14003F600 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     UserSetLastError @ 0x14003F714 (UserSetLastError.c)
 *     ?HMAllocateIsolatedType@@YAPEAXE@Z @ 0x14003FA58 (-HMAllocateIsolatedType@@YAPEAXE@Z.c)
 *     ?Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z @ 0x140048E98 (-Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x14004909C (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     LockObjectAssignment @ 0x1400EBD60 (LockObjectAssignment.c)
 *     ?HMGrowHandleTable@@YAHXZ @ 0x1401131B4 (-HMGrowHandleTable@@YAHXZ.c)
 *     SharedAlloc @ 0x140152440 (SharedAlloc.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x14019ABF4 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x14019ACBC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 *     memset @ 0x140243000 (memset.c)
 */

__int64 __fastcall HMAllocObjectEx(__int64 a1, __int64 a2, unsigned __int8 a3, unsigned int a4, int a5)
{
  __int64 v5; // rbp
  __int64 v6; // r13
  struct _ERESOURCE *v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // r15
  __int16 v14; // bx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 UserSessionState; // rsi
  __int64 *v18; // rdi
  __int64 v19; // rsi
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rcx
  __int64 v22; // r15
  int v23; // eax
  __int64 v24; // r8
  __int64 Pool2; // rsi
  __int64 result; // rax
  __int64 v27; // r14
  __int64 v28; // r15
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 *v33; // r14
  __int64 v34; // rdx
  __int64 v35; // rdx
  _QWORD *v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rdi
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rcx
  int v44; // edx
  signed int v45; // edx
  signed int v46; // ecx
  __int64 v47; // rdx
  __int64 v48; // rcx
  unsigned int v49; // eax
  __int64 v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rcx
  unsigned int v53; // edi
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // rdx
  __int64 v57; // rcx
  int v58; // edi
  __int64 v59; // rdx
  __int64 v60; // rcx
  unsigned int v61; // edi
  int v62; // ebx
  __int64 v63; // rsi
  __int64 CurrentProcess; // rax
  __int64 v65; // rcx
  __int64 v66; // r8
  int (*v67)(void); // rax
  unsigned int v68; // r15d
  __int64 (__fastcall *v69)(__int64, _QWORD, _QWORD); // rax
  __int64 v70; // rax
  void *v71; // r15
  __int64 v72; // rcx
  __int64 v73; // rax
  __int64 v74; // rdx
  __int64 v75; // rcx
  char EtwUserHandleType; // al
  void *v77; // rax
  unsigned int v78; // ecx
  __int64 v79; // rax
  _DWORD *v80; // rdx
  unsigned __int64 i; // rax
  int ProcessSessionId; // [rsp+28h] [rbp-100h]
  BOOL v83; // [rsp+40h] [rbp-E8h]
  __int64 v84; // [rsp+48h] [rbp-E0h]
  unsigned __int64 v85; // [rsp+48h] [rbp-E0h]
  PVOID BackTrace[27]; // [rsp+50h] [rbp-D8h] BYREF
  unsigned int v88; // [rsp+140h] [rbp+18h]
  char v89; // [rsp+140h] [rbp+18h]

  v5 = a3;
  v6 = 0LL;
  v83 = 0;
  v9 = *(struct _ERESOURCE **)(W32GetUserSessionState(a1, a2) + 42336);
  if ( !*(_DWORD *)(W32GetUserSessionState(v11, v10) + 19760)
    && !IS_USERCRIT_OWNED_EXCLUSIVE()
    && (!IS_USERCRIT_OWNED_AT_ALL() || ExIsResourceAcquiredExclusiveLite(v9) != 1) )
  {
    __int2c();
  }
  v13 = 6 * v5;
  v14 = *((_WORD *)&unk_14024703C + 12 * v5);
  if ( (v14 & 3) != 0 )
  {
    if ( (_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 528), 0, 0) & 1) != 0 )
      return 0LL;
    v6 = *(_QWORD *)(a1 + 464);
    if ( *(_DWORD *)(v6 + 68) >= gUserProcessHandleQuota )
      goto LABEL_59;
  }
  UserSessionState = W32GetUserSessionState(3 * v5, v12);
  while ( 1 )
  {
    if ( (_BYTE)v5 != 1 )
    {
      v18 = (__int64 *)(UserSessionState + 19704);
      if ( *(_QWORD *)(UserSessionState + 19704) )
        break;
    }
    v18 = (__int64 *)(UserSessionState + 19696);
    if ( *(_QWORD *)(UserSessionState + 19696) )
      break;
    if ( !(unsigned int)HMGrowHandleTable() )
      goto LABEL_59;
  }
  if ( !v18 )
  {
LABEL_59:
    UserSetLastError(1158LL);
    return 0LL;
  }
  if ( (v14 & 0x10) != 0 && a2 )
  {
    v21 = *(_QWORD *)(W32GetWin32kBaseApiSetTable() + 48);
    v67 = *(int (**)(void))(v21 + 2944);
    if ( v67 && v67() >= 0 )
    {
      Pool2 = (__int64)HMAllocateUserOrIsolatedType(a4, v14, v5);
      if ( Pool2 )
      {
        v68 = dword_140247040[v13];
        v69 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 48)
                                                                + 2952LL);
        if ( v69 )
        {
          v70 = v69(a2, v68, ((_DWORD)v5 << 16) | 5u);
          *(_QWORD *)(Pool2 + 40) = v70;
          if ( v70 )
          {
            v71 = *(void **)(Pool2 + 24);
            ObfReferenceObject((PVOID)a2);
            *(_QWORD *)(Pool2 + 24) = a2;
            if ( v71 )
              ObfDereferenceObject(v71);
            v72 = *(_QWORD *)(Pool2 + 40);
            *(_QWORD *)(Pool2 + 32) = Pool2;
            v21 = v72 - *(_QWORD *)(a2 + 136);
            *(_QWORD *)(Pool2 + 48) = v21;
            goto LABEL_26;
          }
        }
        else
        {
          *(_QWORD *)(Pool2 + 40) = 0LL;
        }
        HMFreeUserOrIsolatedType(v14, v5, (void *)Pool2);
        UserSetLastError(8LL);
        return 0LL;
      }
    }
    else
    {
      Pool2 = 0LL;
    }
    goto LABEL_25;
  }
  if ( (v14 & 0x40) == 0 )
  {
    v83 = !a2 && (v14 & 0x20) != 0;
    if ( (v14 & 0x200) != 0 )
    {
      Pool2 = (__int64)HMAllocateIsolatedType(v5);
    }
    else
    {
      v88 = *(_DWORD *)((char *)&unk_140247038 + v13 * 4);
      v19 = a4;
      v22 = W32GetUserSessionState(v16, v15) + 72032;
      v23 = *(_DWORD *)v22;
      if ( !*(_DWORD *)v22 )
      {
        v24 = v88;
        goto LABEL_18;
      }
      if ( v23 == 1 )
      {
        if ( NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(
               (NSInstrumentation::CLeakTrackingAllocator *)v22,
               v88) )
        {
          v20 = a4 + 16LL;
          if ( v20 >= a4 )
          {
            Pool2 = ExAllocatePool2(256LL, v20, v88);
            if ( !Pool2
              || (_InterlockedIncrement64((volatile signed __int64 *)(v22 + 112)),
                  *(_QWORD *)Pool2 = v88,
                  (Pool2 += 16LL) == 0) )
            {
              NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
                *(NSInstrumentation::CPointerHashTable **)(v22 + 8),
                v88);
            }
            goto LABEL_20;
          }
        }
      }
      else if ( v23 == 2 )
      {
        v78 = v88;
        if ( (v88 & *(_DWORD *)(v22 + 80)) != v88 )
        {
LABEL_108:
          v24 = v88;
LABEL_18:
          Pool2 = ExAllocatePool2(256LL, a4, v24);
          if ( Pool2 )
            _InterlockedIncrement64((volatile signed __int64 *)(v22 + 112));
          goto LABEL_20;
        }
        v80 = (_DWORD *)(v22 + 48);
        for ( i = 0LL; ; ++i )
        {
          v85 = i;
          if ( i >= *(unsigned int *)(v22 + 84) )
            goto LABEL_108;
          if ( *v80 == v88 )
            break;
          ++v80;
        }
        v89 = 0;
        if ( a4 < 0x1000uLL || (a4 & 0xFFF) != 0 )
        {
          v89 = 1;
          v19 = a4 + 16LL;
        }
        Pool2 = ExAllocatePool2(256LL, v19, v78);
        if ( Pool2 )
        {
          _InterlockedIncrement64((volatile signed __int64 *)(v22 + 128));
          memset(BackTrace, 0, 0xA0uLL);
          RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
          if ( v89 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
          {
            if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                    v22,
                                    Pool2,
                                    v85,
                                    BackTrace) )
            {
              Pool2 += 16LL;
              goto LABEL_20;
            }
          }
          else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                       v22,
                                       Pool2,
                                       v85,
                                       BackTrace) )
          {
            goto LABEL_20;
          }
          _InterlockedIncrement64((volatile signed __int64 *)(v22 + 136));
          _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
        }
      }
      Pool2 = 0LL;
    }
LABEL_20:
    if ( !Pool2 )
      goto LABEL_21;
    if ( (_BYTE)v5 == 1 )
    {
      v77 = Win32AllocPoolWithQuotaZInitImpl(v21, 0x158uLL, 0x64777355u);
      *(_QWORD *)(Pool2 + 40) = v77;
      if ( !v77 )
      {
        HMFreeUserOrIsolatedType(v14, 1u, (void *)Pool2);
        Pool2 = 0LL;
      }
    }
    if ( (v14 & 0x100) != 0 )
    {
      LockObjectAssignment(Pool2 + 24, a2);
      *(_QWORD *)(Pool2 + 32) = Pool2;
    }
LABEL_25:
    if ( Pool2 )
      goto LABEL_26;
LABEL_21:
    UserSetLastError(8LL);
    return 0LL;
  }
  if ( !dword_140247040[v13] )
  {
    v79 = SharedAlloc(a4);
    Pool2 = v79;
    if ( v79 )
    {
      *(_QWORD *)(v79 + 24) = 0LL;
      *(_QWORD *)(v79 + 32) = 0LL;
      v21 = v79 - *(_QWORD *)(W32GetUserSessionState(v21, v20) + 19864);
      *(_QWORD *)(Pool2 + 48) = v21;
      *(_QWORD *)(Pool2 + 40) = 0LL;
      goto LABEL_26;
    }
    goto LABEL_25;
  }
  Pool2 = (__int64)Win32AllocPoolZInitImpl(0x100uLL, a4, *(_DWORD *)((char *)&unk_140247038 + v13 * 4));
  if ( !Pool2 )
    goto LABEL_25;
  v73 = SharedAlloc((unsigned int)dword_140247040[v13]);
  *(_QWORD *)(Pool2 + 40) = v73;
  if ( !v73 )
  {
    GreDeleteFastMutex((char *)Pool2);
    UserSetLastError(8LL);
    return 0LL;
  }
  *(_QWORD *)(Pool2 + 24) = 0LL;
  *(_QWORD *)(Pool2 + 32) = 0LL;
  v21 = *(_QWORD *)(W32GetUserSessionState(v75, v74) + 19864);
  *(_QWORD *)(Pool2 + 48) = *(_QWORD *)(Pool2 + 40) - v21;
LABEL_26:
  v27 = *v18;
  v84 = *v18;
  v28 = *(_QWORD *)(W32GetUserSessionState(v21, v20) + 19888) + 32 * v27;
  v31 = W32GetUserSessionState(v30, v29);
  v32 = 5 * v27;
  v33 = (__int64 *)(*(_QWORD *)(v31 + 19832) + 40 * v27);
  *v18 = *v33;
  if ( (unsigned int)v84 > *(_DWORD *)(W32GetUserSessionState(v32, v34) + 19816) )
    *(_DWORD *)(W32GetUserSessionState(v36, v35) + 19816) = v84;
  *(_BYTE *)(v28 + 24) = v5;
  v37 = 0LL;
  v33[3] = 0LL;
  *v33 = Pool2;
  v33[4] = _InterlockedIncrement64(&HandleSequenceNumber);
  if ( (v14 & 0x40) != 0 )
  {
    *(_QWORD *)v28 = *(_QWORD *)(Pool2 + 48);
  }
  else if ( (v14 & 0x10) != 0 && (v36 = (_QWORD *)a2) != 0LL )
  {
    *(_QWORD *)v28 = *(_QWORD *)(Pool2 + 48);
    v36 = **(_QWORD ***)(a2 + 8);
    *(_QWORD *)(v28 + 16) = *v36;
  }
  else
  {
    *(_QWORD *)v28 = 0LL;
  }
  if ( v83 )
    *(_BYTE *)(v28 + 25) |= 0x40u;
  if ( a5 )
    *(_BYTE *)(v28 + 25) |= 0x80u;
  if ( (v14 & 2) != 0 )
  {
    *(_QWORD *)(Pool2 + 16) = 0LL;
    v33[1] = *(_QWORD *)(a1 + 464);
    *(_QWORD *)(v28 + 8) = PsGetProcessId(**(PEPROCESS **)(a1 + 464));
    if ( (v14 & 4) != 0 )
      *(_QWORD *)(Pool2 + 24) = *(_QWORD *)(a1 + 464);
  }
  else if ( (v14 & 1) != 0 )
  {
    v33[1] = a1;
    *(_QWORD *)(v28 + 8) = PsGetThreadId(*(PETHREAD *)a1);
    *(_QWORD *)(Pool2 + 16) = v33[1];
  }
  v38 = W32GetUserSessionState(v36, v37);
  v41 = *(unsigned int *)(W32GetUserSessionState(v40, v39) + 19896);
  v42 = *(_QWORD *)(v38 + 19888);
  v43 = v84 * v41;
  v44 = *(unsigned __int16 *)(v43 + v42 + 26);
  LOBYTE(v42) = *(_BYTE *)(v43 + v42 + 25);
  v45 = v84 | (v44 << 16);
  v46 = v45 | 0x80000000;
  if ( (v42 & 0x80u) == 0LL )
    v46 = v45;
  v47 = v46;
  v48 = 3 * v5;
  *(_QWORD *)Pool2 = v47;
  if ( dword_140247040[6 * v5] )
  {
    v48 = *(_QWORD *)(Pool2 + 40);
    *(_QWORD *)v48 = v47;
    *(_QWORD *)(v48 + 8) = *(_QWORD *)(Pool2 + 48);
  }
  if ( v6 )
  {
    v49 = *(_DWORD *)(v6 + 68) + 1;
    *(_DWORD *)(v6 + 68) = v49;
    if ( v49 > *(_DWORD *)(v6 + 72) )
      *(_DWORD *)(v6 + 72) = v49;
  }
  v50 = W32GetUserSessionState(v48, v47);
  ++*(_DWORD *)(v50 + 19820);
  v53 = *(_DWORD *)(W32GetUserSessionState(v52, v51) + 19820);
  if ( v53 > *(_DWORD *)(W32GetUserSessionState(v55, v54) + 19824) )
  {
    v58 = *(_DWORD *)(W32GetUserSessionState(v57, v56) + 19820);
    *(_DWORD *)(W32GetUserSessionState(v60, v59) + 19824) = v58;
  }
  if ( (v14 & 3) != 0 )
  {
    v61 = (unsigned int)PsGetProcessId(**(PEPROCESS **)(a1 + 464)) & 0xFFFFFFFC;
    if ( (_DWORD)v5 == 16 )
    {
      v62 = 16;
    }
    else if ( (_DWORD)v5 == 255 )
    {
      v62 = 255;
    }
    else
    {
      switch ( (int)v5 )
      {
        case 0:
          v62 = 0;
          break;
        case 1:
          v62 = 1;
          break;
        case 2:
          v62 = 2;
          break;
        case 3:
          v62 = 3;
          break;
        case 4:
          v62 = 4;
          break;
        case 5:
          v62 = 5;
          break;
        case 6:
          v62 = 6;
          break;
        case 7:
          v62 = 7;
          break;
        case 8:
          v62 = 8;
          break;
        case 9:
          v62 = 9;
          break;
        case 10:
          v62 = 10;
          break;
        case 11:
          v62 = 11;
          break;
        case 12:
          v62 = 12;
          break;
        case 13:
          v62 = 13;
          break;
        case 14:
          v62 = 14;
          break;
        case 15:
          v62 = 15;
          break;
        case 17:
          v62 = 17;
          break;
        case 18:
          v62 = 18;
          break;
        case 19:
          v62 = 19;
          break;
        case 20:
          v62 = 20;
          break;
        case 21:
          v62 = 21;
          break;
        case 22:
          v62 = 22;
          break;
        case 23:
          v62 = 23;
          break;
        case 24:
          v62 = 24;
          break;
        default:
          v62 = -1;
          break;
      }
    }
    v63 = *(_QWORD *)Pool2;
    if ( (Microsoft_Windows_Win32kEnableBits & 0x10000000000LL) != 0 )
    {
      CurrentProcess = PsGetCurrentProcess();
      ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess);
      McTemplateK0pqqq_EtwWriteTransfer(v65, (__int64)&UserCreateHandle, v66, v63, v62, ProcessSessionId, v61);
    }
  }
  else
  {
    EtwUserHandleType = GetEtwUserHandleType(v5);
    EtwTraceUserCreateHandle(*(_QWORD *)Pool2, EtwUserHandleType, 0);
  }
  result = *v33;
  v33[2] = 0LL;
  return result;
}
