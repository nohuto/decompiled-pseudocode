/*
 * XREFs of ?IssueSyncObjectOpForAllContexts@DXGDEVICE@@QEAAJPEAVDXGPROCESS@@I_KH@Z @ 0x140306F50
 * Callers:
 *     ?DxgkCddIssueSyncObjectOpForDevice@@YAJII_KH@Z @ 0x140306C10 (-DxgkCddIssueSyncObjectOpForDevice@@YAJII_KH@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@USIGNAL_SYNC_OBJ_FLAGS@@@Z @ 0x140302D00 (-SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPRO.c)
 *     ?GetRenderHwQueueCount@DXGCONTEXT@@QEAAIXZ @ 0x140306898 (-GetRenderHwQueueCount@DXGCONTEXT@@QEAAIXZ.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@I$0BA@@@QEAAPEAII@Z @ 0x140306B70 (-AllocateElements@-$PagedPoolZeroedArray@I$0BA@@@QEAAPEAII@Z.c)
 *     ?WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N4444@Z @ 0x1403074C0 (-WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N4444@Z.c)
 *     ?SubmitWaitForSyncObjectsFromGpu@@YAJIPEBIPEB_KIPEAVDXGPROCESS@@_N3@Z @ 0x1403158CC (-SubmitWaitForSyncObjectsFromGpu@@YAJIPEBIPEB_KIPEAVDXGPROCESS@@_N3@Z.c)
 *     ?SubmitSignalSyncObjectsToHwQueue@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_KPEAVDXGPROCESS@@_N4@Z @ 0x140377CC8 (-SubmitSignalSyncObjectsToHwQueue@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_KPEAVDXGPROCESS@@_N4@Z.c)
 */

__int64 __fastcall DXGDEVICE::IssueSyncObjectOpForAllContexts(
        DXGDEVICE *this,
        struct DXGPROCESS *a2,
        unsigned int a3,
        unsigned __int64 a4,
        int a5)
{
  DXGCONTEXT *v5; // r15
  DXGDEVICE *v6; // r13
  DXGCONTEXT *v7; // rbx
  unsigned int v8; // edi
  unsigned int v9; // edi
  int v10; // r9d
  unsigned int v11; // r14d
  DXGCONTEXT *v12; // rax
  DXGCONTEXT *v13; // rax
  unsigned int *v14; // rbx
  _QWORD *v15; // r9
  unsigned int v16; // r8d
  _QWORD *j; // rdx
  _QWORD *v18; // rax
  __int64 v19; // rcx
  _QWORD *v20; // rax
  DXGCONTEXT *v21; // rax
  DXGCONTEXT *v22; // rcx
  int v23; // eax
  int v24; // eax
  _BYTE *v25; // rcx
  _BYTE *v26; // rax
  DXGCONTEXT *v28; // rcx
  _QWORD *v29; // r12
  _QWORD *v30; // r14
  _QWORD *v31; // rax
  _QWORD *v32; // r9
  int v33; // eax
  DXGCONTEXT *v34; // rbx
  unsigned int v35; // edi
  DXGCONTEXT *v36; // rax
  DXGCONTEXT *v37; // rax
  unsigned int *v38; // rdx
  DXGCONTEXT *v39; // rax
  _QWORD *v40; // r15
  _QWORD *i; // rax
  _QWORD *v42; // r12
  __int64 v43; // rcx
  int v44; // eax
  _BYTE *v45; // rcx
  _BYTE *v46; // rax
  unsigned int v47; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int *Elements; // [rsp+68h] [rbp-98h]
  struct DXGPROCESS *v49; // [rsp+70h] [rbp-90h]
  unsigned __int64 v50; // [rsp+78h] [rbp-88h] BYREF
  _QWORD *v51; // [rsp+80h] [rbp-80h]
  DXGDEVICE *v52; // [rsp+88h] [rbp-78h]
  _BYTE *v53; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v54[64]; // [rsp+98h] [rbp-68h] BYREF
  int v55; // [rsp+D8h] [rbp-28h]
  PVOID P; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v57[64]; // [rsp+E8h] [rbp-18h] BYREF
  int v58; // [rsp+128h] [rbp+28h]

  LODWORD(Elements) = a3;
  v5 = (DXGDEVICE *)((char *)this + 496);
  v49 = a2;
  v6 = this;
  v7 = (DXGCONTEXT *)*((_QWORD *)this + 62);
  v8 = -1073741823;
  v52 = this;
  v50 = a4;
  if ( !a5 )
  {
    while ( 1 )
    {
      v21 = 0LL;
      if ( v7 != v5 )
        v21 = v7;
      if ( !v21 )
        return v8;
      v47 = a3;
      v22 = v7;
      if ( v7 == v5 )
        v22 = 0LL;
      if ( (*((_DWORD *)v22 + 98) & 0x10) != 0 )
      {
        v29 = (_QWORD *)((char *)v22 + 400);
        v30 = (_QWORD *)*((_QWORD *)v22 + 50);
        while ( 1 )
        {
          v31 = 0LL;
          if ( v30 != v29 )
            v31 = v30;
          if ( !v31 )
            break;
          v32 = v30;
          if ( v30 == v29 )
            v32 = 0LL;
          v33 = SubmitWaitForSyncObjectsFromGpu(1u, &v47, &v50, *((_DWORD *)v32 + 6), a2, 0, 1);
          v8 = v33;
          if ( v33 < 0 )
          {
            WdLogSingleEntry2(4LL, v6, v33);
            a2 = v49;
            WdLogGlobalForLineNumber = 6416;
            break;
          }
          v30 = (_QWORD *)*v30;
          a2 = v49;
        }
      }
      else
      {
        v23 = WaitForSynchronizationObjectFromGpu(1u, &v47, 0LL, a4, *((_DWORD *)v22 + 6), a2, 0, 1, 0, 0, 1);
        v8 = v23;
        if ( v23 < 0 )
        {
          WdLogSingleEntry2(4LL, v6, v23);
          WdLogGlobalForLineNumber = 6440;
          return v8;
        }
        a2 = v49;
      }
      v7 = *(DXGCONTEXT **)v7;
      a4 = v50;
      a3 = (unsigned int)Elements;
    }
  }
  v47 = a3;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  while ( 1 )
  {
    v12 = 0LL;
    if ( v7 != v5 )
      v12 = v7;
    if ( !v12 )
      break;
    v13 = v7;
    if ( v7 == v5 )
      v13 = 0LL;
    if ( (*((_DWORD *)v13 + 98) & 0x10) != 0 )
    {
      v28 = v7;
      if ( v7 == v5 )
        v28 = 0LL;
      v11 += DXGCONTEXT::GetRenderHwQueueCount(v28);
    }
    else
    {
      ++v9;
    }
    v7 = *(DXGCONTEXT **)v7;
  }
  if ( v10 )
  {
    v53 = 0LL;
    v55 = 0;
    Elements = (unsigned int *)PagedPoolZeroedArray<unsigned int,16>::AllocateElements((__int64)&v53, v11);
    if ( Elements )
    {
      v34 = *(DXGCONTEXT **)v5;
      v35 = 0;
      while ( 1 )
      {
        v36 = 0LL;
        if ( v34 != v5 )
          v36 = v34;
        if ( !v36 )
          break;
        v37 = v34;
        if ( v34 == v5 )
          v37 = 0LL;
        if ( (*((_DWORD *)v37 + 98) & 0x10) != 0 )
        {
          v38 = Elements;
          v39 = v34;
          if ( v34 == v5 )
            v39 = 0LL;
          v40 = (_QWORD *)((char *)v39 + 400);
          for ( i = (_QWORD *)*((_QWORD *)v39 + 50); ; i = (_QWORD *)*v51 )
          {
            v51 = i;
            v42 = 0LL;
            if ( i != v40 )
              v42 = i;
            if ( !v42 )
              break;
            if ( v35 >= v11 )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 6308;
              DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"i < NumHwQueues", 6308LL, 0LL, 0LL, 0LL, 0LL);
              v38 = Elements;
            }
            v43 = v35++;
            v38[v43] = *((_DWORD *)v42 + 6);
          }
          v6 = v52;
          v5 = (DXGDEVICE *)((char *)v52 + 496);
        }
        v34 = *(DXGCONTEXT **)v34;
      }
      if ( v11 != v35 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 6317;
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NumHwQueues == i", 6317LL, 0LL, 0LL, 0LL, 0LL);
      }
      v44 = SubmitSignalSyncObjectsToHwQueue(1u, &v47, 0, v11, Elements, &v50, v49, 0, 1);
      v8 = v44;
      if ( v44 < 0 )
      {
        WdLogSingleEntry2(4LL, v6, v44);
        WdLogGlobalForLineNumber = 6335;
      }
      v25 = v53;
      v26 = v54;
      goto LABEL_34;
    }
    v45 = v53;
    v46 = v54;
  }
  else
  {
    P = 0LL;
    v58 = 0;
    v14 = (unsigned int *)PagedPoolZeroedArray<unsigned int,16>::AllocateElements((__int64)&P, v9);
    if ( v14 )
    {
      v15 = (_QWORD *)((char *)v6 + 496);
      v16 = 0;
      for ( j = (_QWORD *)*((_QWORD *)v6 + 62); ; j = (_QWORD *)*j )
      {
        v18 = 0LL;
        if ( j != v15 )
          v18 = j;
        if ( !v18 )
          break;
        v19 = v16;
        v20 = j;
        if ( j == v15 )
          v20 = 0LL;
        ++v16;
        v14[v19] = *((_DWORD *)v20 + 6);
      }
      if ( v9 != v16 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 6357;
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NumContexts == i", 6357LL, 0LL, 0LL, 0LL, 0LL);
      }
      v24 = SignalSynchronizationObjectInternal(1u, &v47, 0, v9, v14, 0LL, v50, 0LL, (struct _KTHREAD **)v49, 6u);
      v8 = v24;
      if ( v24 < 0 )
      {
        WdLogSingleEntry2(4LL, v6, v24);
        WdLogGlobalForLineNumber = 6383;
      }
      v25 = P;
      v26 = v57;
LABEL_34:
      if ( v25 != v26 && v25 )
        ExFreePoolWithTag(v25, 0);
      return v8;
    }
    v45 = P;
    v46 = v57;
  }
  if ( v45 != v46 && v45 )
    ExFreePoolWithTag(v45, 0);
  return 3221225495LL;
}
