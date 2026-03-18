/*
 * XREFs of VidSchiOpenProcessAdapterInfo @ 0x1400FCC58
 * Callers:
 *     VidSchiCreateDeviceInternal @ 0x1400FC6AC (VidSchiCreateDeviceInternal.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1400048C0 (--3@YAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140037CC0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     RtlStringCbPrintfW @ 0x14003F654 (RtlStringCbPrintfW.c)
 *     ?VidSchiSetupKnownProcessBoost@@YAJPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PROCESS@@PEAUVIDSCH_PROCESS_ADAPTER_INFO@@@Z @ 0x140041BB0 (-VidSchiSetupKnownProcessBoost@@YAJPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PROCESS@@PEAUVIDSCH_PROCESS_A.c)
 *     ??_GVIDSCH_PROCESS_ADAPTER_INFO@@QEAAPEAXI@Z @ 0x140042CF8 (--_GVIDSCH_PROCESS_ADAPTER_INFO@@QEAAPEAXI@Z.c)
 *     ?AllocateElements@?$NonPagedPoolZeroedArray@PEAU_VIDSCH_NODE_STATISTICS@@$07$0DCGBGJFG@@@QEAAPEAPEAU_VIDSCH_NODE_STATISTICS@@I@Z @ 0x140042D80 (-AllocateElements@-$NonPagedPoolZeroedArray@PEAU_VIDSCH_NODE_STATISTICS@@$07$0DCGBGJFG@@@QEAAPEA.c)
 *     ??0VIDSCH_PROCESS_ADAPTER_INFO@@QEAA@XZ @ 0x140042E60 (--0VIDSCH_PROCESS_ADAPTER_INFO@@QEAA@XZ.c)
 */

__int64 __fastcall VidSchiOpenProcessAdapterInfo(struct _VIDSCH_PROCESS *a1, struct _VIDSCH_GLOBAL *a2)
{
  __int64 v2; // rdi
  char *v3; // r13
  _DWORD *v6; // rcx
  VIDSCH_PROCESS_ADAPTER_INFO *Pool2; // rax
  _QWORD *v9; // rcx
  NTSTATUS v10; // r14d
  wchar_t *v11; // r12
  __int64 i; // rbp
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 *v15; // rcx
  __int64 v16; // rax
  _QWORD *v17; // rcx
  __int64 v18; // r9
  unsigned int v19; // r10d
  __int64 v20; // r14
  __int64 v21; // rax
  __int64 v22; // r8
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rcx
  wchar_t *v26; // r8
  __int64 v27; // rax
  __int64 v28; // rcx
  const void **v29; // rax
  const void **v30; // rdx
  const void *v31; // rax
  PPCW_INSTANCE *v32; // rcx
  __int64 v33; // rcx
  int v34; // eax
  __int64 j; // rbp
  __int64 k; // rbp
  VIDSCH_PROCESS_ADAPTER_INFO *v37; // rcx
  __int64 v38; // rcx
  void *v39; // rcx
  __int64 m; // rbp
  __int64 v41; // rcx
  unsigned int v42; // edx
  PVOID *v43; // rcx
  PVOID *v44; // rax
  __int64 v45; // rax
  _QWORD *v46; // rcx
  PPCW_DATA Data; // [rsp+20h] [rbp-88h]
  __int64 v48; // [rsp+28h] [rbp-80h]
  __int64 v49; // [rsp+30h] [rbp-78h]
  __int64 v50; // [rsp+38h] [rbp-70h]
  struct _PCW_DATA v51; // [rsp+50h] [rbp-58h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-48h] BYREF

  v2 = *((unsigned int *)a2 + 1);
  v3 = (char *)a1 + 2664;
  ExAcquirePushLockExclusiveEx((char *)a1 + 2664, 0LL);
  v6 = *(_DWORD **)(*((_QWORD *)a1 + 4) + 8 * v2);
  if ( v6 )
  {
    ++*v6;
LABEL_3:
    ExReleasePushLockExclusiveEx(v3, 0LL);
    return 0LL;
  }
  Pool2 = (VIDSCH_PROCESS_ADAPTER_INFO *)ExAllocatePool2(64LL, 232LL, 845244758LL);
  if ( !Pool2 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 29007;
    ExReleasePushLockExclusiveEx(v3, 0LL);
    return 3221225495LL;
  }
  *(_QWORD *)(*((_QWORD *)a1 + 4) + 8 * v2) = VIDSCH_PROCESS_ADAPTER_INFO::VIDSCH_PROCESS_ADAPTER_INFO(Pool2);
  **(_DWORD **)(*((_QWORD *)a1 + 4) + 8 * v2) = 1;
  v9 = (_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 4) + 8 * v2) + 216LL);
  v9[1] = v9;
  *v9 = v9;
  v10 = VidSchiSetupKnownProcessBoost(a2, a1, *(struct VIDSCH_PROCESS_ADAPTER_INFO **)(*((_QWORD *)a1 + 4) + 8 * v2));
  if ( v10 >= 0 )
  {
    if ( NonPagedPoolZeroedArray<_VIDSCH_NODE_STATISTICS *,8,845244758>::AllocateElements(
           (__int64 *)(*(_QWORD *)(*((_QWORD *)a1 + 4) + 8 * v2) + 8LL),
           *((_DWORD *)a2 + 23)) )
    {
      v11 = (wchar_t *)operator new[](520LL, 0x4B677844u, 256LL);
      if ( v11 )
      {
        for ( i = 0LL; ; i = (unsigned int)(i + 1) )
        {
          if ( (unsigned int)i >= *((_DWORD *)a2 + 22) )
            goto LABEL_31;
          v13 = ExAllocatePool2(64LL, 224LL, 845244758LL);
          v14 = *(_QWORD *)(*((_QWORD *)a1 + 4) + 8 * v2);
          v15 = *(__int64 **)(v14 + 8);
          if ( (unsigned int)i < *(_DWORD *)(v14 + 80) )
            v15 += i;
          *v15 = v13;
          v16 = *(_QWORD *)(*((_QWORD *)a1 + 4) + 8 * v2);
          v17 = (_QWORD *)(*(_QWORD *)(v16 + 8) + 8 * i);
          if ( (unsigned int)i >= *(_DWORD *)(v16 + 80) )
            v17 = *(_QWORD **)(v16 + 8);
          if ( !*v17 )
            break;
          v18 = *((_QWORD *)a2 + 87);
          v19 = *((_DWORD *)a2 + 192);
          v20 = *((_QWORD *)a2 + 2);
          v21 = v18 + 8 * i;
          if ( (unsigned int)i >= v19 )
            v21 = *((_QWORD *)a2 + 87);
          v22 = *(_QWORD *)(352LL * *(unsigned __int16 *)(*(_QWORD *)v21 + 6LL) + *(_QWORD *)(v20 + 3032) + 32);
          v23 = *((_QWORD *)a2 + 87);
          if ( (unsigned int)i < v19 )
            v23 = v18 + 8 * i;
          v24 = 74LL * *(unsigned __int16 *)(*(_QWORD *)v23 + 8LL);
          DestinationString = 0LL;
          v25 = *(int *)(v24 + v22);
          if ( (_DWORD)v25 )
            v26 = off_14005E1F0[v25];
          else
            v26 = (wchar_t *)(v24 + v22 + 4);
          v27 = v18;
          if ( (unsigned int)i < v19 )
          {
            v27 = v18 + 8 * i;
            v18 = v27;
          }
          LODWORD(v50) = *(unsigned __int16 *)(*(_QWORD *)v27 + 8LL);
          LODWORD(v49) = *(unsigned __int16 *)(*(_QWORD *)v18 + 6LL);
          LODWORD(v48) = *(_DWORD *)(v20 + 412);
          LODWORD(Data) = *(_DWORD *)(v20 + 416);
          v10 = RtlStringCbPrintfW(
                  v11,
                  0x208uLL,
                  L"pid_%Iu_luid_0x%08X_0x%08X_phys_%u_eng_%u_engtype_%s",
                  *((_QWORD *)a1 + 330),
                  Data,
                  v48,
                  v49,
                  v50,
                  v26);
          if ( v10 < 0 )
          {
            WdLogSingleEntry0(1LL);
            v34 = 29072;
            goto LABEL_30;
          }
          RtlInitUnicodeString(&DestinationString, v11);
          v28 = *(_QWORD *)(*((_QWORD *)a1 + 4) + 8 * v2);
          v29 = *(const void ***)(v28 + 8);
          v30 = &v29[i];
          if ( (unsigned int)i >= *(_DWORD *)(v28 + 80) )
          {
            v30 = *(const void ***)(v28 + 8);
            v31 = *v29;
          }
          else
          {
            v31 = *v30;
          }
          v32 = (PPCW_INSTANCE *)*v30;
          v51.Data = v31;
          v51.Size = 224;
          v10 = PcwCreateInstance(v32 + 27, GpuPerformanceCounterSetEngine, &DestinationString, 1u, &v51);
          if ( v10 < 0 )
          {
            WdLogSingleEntry0(1LL);
            v34 = 29080;
LABEL_30:
            WdLogGlobalForLineNumber = v34;
            DxgkLogInternalTriageEvent(v33, 0x40000LL);
            goto LABEL_31;
          }
        }
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 29050;
        v10 = -1073741801;
LABEL_31:
        operator delete(v11);
        if ( v10 >= 0 )
        {
          for ( j = 0LL; (unsigned int)j < *((_DWORD *)a2 + 12); j = (unsigned int)(j + 1) )
          {
            *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 4) + 8 * v2) + 8 * j + 88) = ExAllocatePool2(
                                                                                    64LL,
                                                                                    12LL,
                                                                                    845244758LL);
            if ( !*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 4) + 8 * v2) + 8 * j + 88) )
            {
              WdLogSingleEntry0(3LL);
              WdLogGlobalForLineNumber = 29104;
              v10 = -1073741801;
              goto LABEL_49;
            }
          }
          goto LABEL_3;
        }
LABEL_49:
        v3 = (char *)a1 + 2664;
        goto LABEL_39;
      }
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 29037;
      DxgkLogInternalTriageEvent(v38, 0x40000LL);
    }
    else
    {
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 29026;
    }
    v10 = -1073741801;
  }
LABEL_39:
  for ( k = 0LL; (unsigned int)k < *((_DWORD *)a2 + 12); k = (unsigned int)(k + 1) )
  {
    v39 = *(void **)(*(_QWORD *)(*((_QWORD *)a1 + 4) + 8 * v2) + 8 * k + 88);
    if ( v39 )
    {
      ExFreePoolWithTag(v39, 0);
      *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 4) + 8 * v2) + 8 * k + 88) = 0LL;
    }
  }
  if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 4) + 8 * v2) + 8LL) )
  {
    for ( m = 0LL; (unsigned int)m < *((_DWORD *)a2 + 22); m = (unsigned int)(m + 1) )
    {
      v41 = *(_QWORD *)(*((_QWORD *)a1 + 4) + 8 * v2);
      v42 = *(_DWORD *)(v41 + 80);
      v43 = *(PVOID **)(v41 + 8);
      v44 = &v43[m];
      if ( (unsigned int)m >= v42 )
        v44 = v43;
      if ( *v44 )
      {
        if ( (unsigned int)m < v42 )
          v43 += m;
        ExFreePoolWithTag(*v43, 0);
        v45 = *(_QWORD *)(*((_QWORD *)a1 + 4) + 8 * v2);
        v46 = (_QWORD *)(*(_QWORD *)(v45 + 8) + 8 * m);
        if ( (unsigned int)m >= *(_DWORD *)(v45 + 80) )
          v46 = *(_QWORD **)(v45 + 8);
        *v46 = 0LL;
      }
    }
  }
  v37 = *(VIDSCH_PROCESS_ADAPTER_INFO **)(*((_QWORD *)a1 + 4) + 8 * v2);
  if ( v37 )
  {
    VIDSCH_PROCESS_ADAPTER_INFO::`scalar deleting destructor'(v37);
    ExFreePoolWithTag(*(PVOID *)(*((_QWORD *)a1 + 4) + 8 * v2), 0);
    *(_QWORD *)(*((_QWORD *)a1 + 4) + 8 * v2) = 0LL;
  }
  ExReleasePushLockExclusiveEx(v3, 0LL);
  return (unsigned int)v10;
}
