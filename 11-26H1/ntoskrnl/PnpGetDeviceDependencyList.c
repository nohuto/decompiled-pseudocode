/*
 * XREFs of PnpGetDeviceDependencyList @ 0x1409B2710
 * Callers:
 *     PiControlGetPropertyData @ 0x140A93360 (PiControlGetPropertyData.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x1402FE950 (ExAcquireResourceSharedLite.c)
 *     RtlStringCchLengthW @ 0x1404509C0 (RtlStringCchLengthW.c)
 *     RtlStringCchCopyExW @ 0x140454380 (RtlStringCchCopyExW.c)
 *     PiListEntryToDependencyEdge @ 0x14050F9B0 (PiListEntryToDependencyEdge.c)
 *     PnpReleaseDependencyRelationsLock @ 0x1409B0DD0 (PnpReleaseDependencyRelationsLock.c)
 *     PiGetProviderList @ 0x1409B298C (PiGetProviderList.c)
 *     PiGetDependentList @ 0x1409B6958 (PiGetDependentList.c)
 *     PnpUnicodeStringToWstrFree @ 0x140A18820 (PnpUnicodeStringToWstrFree.c)
 *     PnpUnicodeStringToWstr @ 0x140A69BB0 (PnpUnicodeStringToWstr.c)
 */

__int64 __fastcall PnpGetDeviceDependencyList(__int64 a1, int a2, wchar_t *a3, unsigned int a4, unsigned int *a5)
{
  __int64 v5; // r15
  int v6; // r12d
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v8; // edi
  NTSTATUS v9; // ebx
  size_t v10; // rsi
  wchar_t *v11; // r14
  __int64 *DependentList; // rax
  __int64 v14; // r8
  __int64 *v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 *v18; // r8
  __int64 v19; // r8
  __int64 v20; // rax
  __int64 v21; // r10
  const wchar_t *v22; // rcx
  __int64 v23; // r10
  _QWORD *v24; // rax
  _QWORD *v25; // r13
  _QWORD *v26; // r12
  _QWORD *v27; // r12
  const wchar_t *v28; // r15
  size_t pcchLength; // [rsp+30h] [rbp-38h] BYREF
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+38h] [rbp-30h] BYREF
  size_t pcchRemaining; // [rsp+40h] [rbp-28h] BYREF
  __int64 *v32; // [rsp+48h] [rbp-20h]
  __int64 v33; // [rsp+50h] [rbp-18h]
  STRSAFE_PCNZWCH psz[2]; // [rsp+58h] [rbp-10h] BYREF
  _QWORD *v35; // [rsp+B0h] [rbp+48h]

  v5 = *(_QWORD *)(a1 + 32);
  v6 = a2;
  CurrentThread = KeGetCurrentThread();
  v8 = 0;
  v9 = 0;
  pcchLength = 0LL;
  v10 = a4;
  --CurrentThread->KernelApcDisable;
  v11 = a3;
  pcchRemaining = a4;
  ppszDestEnd = a3;
  psz[0] = 0LL;
  ExAcquireResourceSharedLite(&IopDeviceTreeLock, 1u);
  ExAcquireResourceSharedLite(&PiDependencyRelationsLock, 1u);
  if ( v6 )
  {
    if ( v6 != 1 )
    {
      v9 = -1073741811;
      PnpReleaseDependencyRelationsLock();
      return (unsigned int)v9;
    }
    DependentList = (__int64 *)PiGetDependentList(v5);
  }
  else
  {
    DependentList = (__int64 *)PiGetProviderList(v5);
  }
  v14 = *DependentList;
  v15 = DependentList;
  v32 = DependentList;
  while ( 1 )
  {
    v16 = v8;
    if ( (__int64 *)v14 == v15 )
      break;
    v17 = PiListEntryToDependencyEdge(v14, v6);
    v33 = *v18;
    v19 = *(_QWORD *)((v6 != 0 ? 8 : 0) + v17 + 32);
    v20 = *(_QWORD *)(v19 + 48);
    if ( v20 && (v21 = *(_QWORD *)(*(_QWORD *)(v20 + 312) + 40LL)) != 0 && (v22 = *(const wchar_t **)(v21 + 48)) != 0LL )
    {
      v9 = RtlStringCchLengthW(v22, 0xC8uLL, &pcchLength);
      if ( v9 < 0 )
        goto LABEL_4;
      v15 = v32;
      v8 += ++pcchLength;
      v14 = v33;
      if ( pcchLength <= v10 )
      {
        v9 = RtlStringCchCopyExW(v11, v10, *(NTSTRSAFE_PCWSTR *)(v23 + 48), &ppszDestEnd, &pcchRemaining, 0x800u);
        if ( v9 < 0 )
          goto LABEL_4;
        v11 = ppszDestEnd + 1;
        v15 = v32;
        v10 = pcchRemaining - 1;
        v14 = v33;
        --pcchRemaining;
        ++ppszDestEnd;
      }
    }
    else
    {
      v24 = (_QWORD *)(v19 + 56);
      v25 = *(_QWORD **)(v19 + 56);
      v35 = (_QWORD *)(v19 + 56);
      while ( v25 != v24 )
      {
        v26 = v25;
        v25 = (_QWORD *)*v25;
        v27 = v26 + 2;
        v9 = PnpUnicodeStringToWstr(psz, 0LL, v27);
        if ( v9 < 0 )
          goto LABEL_4;
        v28 = psz[0];
        v9 = RtlStringCchLengthW(psz[0], 0x7FFFuLL, &pcchLength);
        if ( v9 < 0 )
        {
LABEL_36:
          PnpUnicodeStringToWstrFree(v28, v27);
          PnpReleaseDependencyRelationsLock();
          goto LABEL_15;
        }
        v8 += ++pcchLength;
        if ( pcchLength <= v10 )
        {
          v9 = RtlStringCchCopyExW(v11, v10, v28, &ppszDestEnd, &pcchRemaining, 0x800u);
          if ( v9 < 0 )
            goto LABEL_36;
          v11 = ppszDestEnd + 1;
          v10 = pcchRemaining - 1;
          ++ppszDestEnd;
          --pcchRemaining;
        }
        PnpUnicodeStringToWstrFree(v28, v27);
        v24 = v35;
      }
      if ( v9 < 0 )
        goto LABEL_4;
      v15 = v32;
      v14 = v33;
      v6 = a2;
    }
  }
  if ( v9 >= 0 )
  {
    if ( ++v8 <= a4 )
      a3[v16] = 0;
    else
      v9 = -1073741789;
    PnpReleaseDependencyRelationsLock();
    goto LABEL_5;
  }
LABEL_4:
  PnpReleaseDependencyRelationsLock();
  if ( v9 < 0 )
  {
LABEL_15:
    if ( v9 != -1073741789 )
      return (unsigned int)v9;
  }
LABEL_5:
  if ( a5 )
    *a5 = v8;
  return (unsigned int)v9;
}
