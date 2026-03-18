/*
 * XREFs of ?VmBusSubmitSignalToHwQueueHelper@@YAJPEAVDXGPROCESS@@_NIIPEBI2PEB_KPEAI4PEA_K@Z @ 0x140233C3C
 * Callers:
 *     ?VmBusSendSignalSyncObject@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IPEBIU_D3DDDICB_SIGNALFLAGS@@K1PEB_K_KPEBQEAX_N6PEAVDXGDEVICE@@@Z @ 0x14042A764 (-VmBusSendSignalSyncObject@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IPEBIU_D3DDDICB_SIGN.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     ?GetHostHandle@DXGSYNCOBJECT@@QEAAIIE@Z @ 0x140193010 (-GetHostHandle@DXGSYNCOBJECT@@QEAAIIE@Z.c)
 */

__int64 __fastcall VmBusSubmitSignalToHwQueueHelper(
        struct DXGPROCESS *a1,
        char a2,
        unsigned int a3,
        unsigned int a4,
        const unsigned int *a5,
        const unsigned int *a6,
        const unsigned __int64 *a7,
        unsigned int *a8,
        unsigned int *a9,
        unsigned __int64 *a10)
{
  struct DXGPROCESS *v11; // r9
  __int64 v12; // rdi
  unsigned int v13; // edx
  bool v14; // al
  int v15; // r9d
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rax
  const wchar_t *v20; // r9
  __int64 v21; // rdi
  unsigned int v22; // edx
  unsigned int v23; // r10d
  unsigned int v24; // esi
  __int64 v25; // rcx
  bool v26; // al
  unsigned int v27; // r8d
  DXGSYNCOBJECT *v28; // rax
  __int64 v29; // r9
  __int64 v30; // r8
  unsigned int HostHandle; // eax
  __int64 v32; // rdx
  unsigned int v33; // ecx
  int v34; // ecx
  __int64 v35; // rax

  v11 = a1;
  if ( !a7 || !a6 )
  {
    WdLogSingleEntry0(2LL);
    v19 = 9309LL;
    WdLogGlobalForLineNumber = 9309;
    v20 = L"MonitoredFenceValueArray or ObjectHandleArray not specified for submit signal to HwQueue";
    goto LABEL_56;
  }
  v12 = 0LL;
  while ( 1 )
  {
    if ( (unsigned int)v12 >= a4 )
    {
      v21 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v21 >= a3 )
          return 0LL;
        v22 = (a6[v21] >> 6) & 0xFFFFFF;
        v23 = a6[v21] >> 30;
        v24 = *((_DWORD *)v11 + 74);
        v25 = v22;
        if ( v22 < v24 )
        {
          v27 = *(_DWORD *)(*((_QWORD *)v11 + 35) + 16LL * v22 + 8);
          v26 = v23 == ((v27 >> 5) & 3) && (v27 & 0x2000) == 0 && (v27 & 0x1F) != 0;
          v25 = v22;
        }
        else
        {
          v26 = 0;
        }
        if ( v26 )
        {
          v29 = *((_QWORD *)v11 + 35);
          if ( (*(_BYTE *)(v29 + 16 * v25 + 8) & 0x1F) == 8 )
            v28 = *(DXGSYNCOBJECT **)(v29 + 16 * v25);
          else
            v28 = 0LL;
          v11 = a1;
        }
        else
        {
          v28 = 0LL;
        }
        v30 = 16 * v25;
        if ( v28 )
        {
          HostHandle = DXGSYNCOBJECT::GetHostHandle(v28, a6[v21]);
          goto LABEL_49;
        }
        if ( v22 >= v24 )
          goto LABEL_46;
        v32 = *((_QWORD *)v11 + 35);
        v33 = *(_DWORD *)(v30 + v32 + 8);
        if ( v23 != ((v33 >> 5) & 3) )
          goto LABEL_46;
        if ( (v33 & 0x2000) != 0 )
          goto LABEL_46;
        v34 = v33 & 0x1F;
        if ( !v34 )
          goto LABEL_46;
        if ( v34 != 11 )
          break;
        v35 = *(_QWORD *)(v30 + v32);
LABEL_47:
        if ( !v35 )
        {
          WdLogSingleEntry1(2LL);
          WdLogGlobalForLineNumber = 9360;
          v19 = a6[v21];
          v20 = L"Invalid sync object handle 0x%I64x";
          goto LABEL_56;
        }
        HostHandle = *(_DWORD *)(v35 + 44);
LABEL_49:
        a9[v21] = HostHandle;
        if ( a2 )
          RtlCopyFromUser(&a10[v21], (void *)&a7[v21], 8uLL);
        else
          a10[v21] = a7[v21];
        v21 = (unsigned int)(v21 + 1);
        v11 = a1;
      }
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 318;
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
LABEL_46:
      v35 = 0LL;
      goto LABEL_47;
    }
    v13 = (a5[v12] >> 6) & 0xFFFFFF;
    if ( v13 < *((_DWORD *)v11 + 74) )
    {
      v15 = *(_DWORD *)(*((_QWORD *)v11 + 35) + 16LL * v13 + 8);
      v14 = ((a5[v12] >> 25) & 0x60) == (v15 & 0x60) && (v15 & 0x2000) == 0 && (v15 & 0x1F) != 0;
      v11 = a1;
    }
    else
    {
      v14 = 0;
    }
    if ( !v14 )
      goto LABEL_14;
    v17 = 2LL * v13;
    v18 = *((_QWORD *)v11 + 35);
    if ( (*(_BYTE *)(v18 + 8 * v17 + 8) & 0x1F) != 0xF )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 318;
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
LABEL_14:
      v16 = 0LL;
      goto LABEL_18;
    }
    v16 = *(_QWORD *)(v18 + 8 * v17);
LABEL_18:
    if ( !v16 )
      break;
    a8[v12] = *(_DWORD *)(v16 + 28);
    v12 = (unsigned int)(v12 + 1);
    v11 = a1;
  }
  WdLogSingleEntry1(2LL);
  WdLogGlobalForLineNumber = 9325;
  v19 = a5[v12];
  v20 = L"Invalid HwQueue handle: 0x%I64x";
LABEL_56:
  DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v20, v19, 0LL, 0LL, 0LL, 0LL);
  return 3221225485LL;
}
