/*
 * XREFs of DpiPdoIsChildConnected @ 0x140319F04
 * Callers:
 *     DpiFdoHandleDisplayDetectControl @ 0x140014BDC (DpiFdoHandleDisplayDetectControl.c)
 * Callees:
 *     DpiFdoGetChildDescriptor @ 0x1400174A8 (DpiFdoGetChildDescriptor.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     DpiFdoPendingCreatePdoCompletion @ 0x14024B800 (DpiFdoPendingCreatePdoCompletion.c)
 *     DxgkAcquireAdapterCoreSync @ 0x14030D100 (DxgkAcquireAdapterCoreSync.c)
 *     DxgkReleaseAdapterCoreSync @ 0x14030E1AC (DxgkReleaseAdapterCoreSync.c)
 *     DxgkReleaseAdapterDdiSync @ 0x140319D70 (DxgkReleaseAdapterDdiSync.c)
 *     DxgkAcquireAdapterDdiSync @ 0x140319DFC (DxgkAcquireAdapterDdiSync.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x14031B9EC (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 *     DpiDxgkDdiQueryChildStatus @ 0x14031C004 (DpiDxgkDdiQueryChildStatus.c)
 */

__int64 __fastcall DpiPdoIsChildConnected(__int64 a1, int a2, char a3, char a4, char *a5, bool *a6)
{
  char v6; // r12
  __int64 v9; // r14
  __int64 ChildStatus; // r15
  _QWORD *ChildDescriptor; // rax
  int v12; // edx
  __int64 v13; // rdi
  __int64 v14; // rcx
  bool v15; // cf
  __int64 v16; // r13
  int v17; // r12d
  __int64 v18; // r9
  char v19; // al
  __int64 v20; // rcx
  int v21; // eax
  _DWORD v26[2]; // [rsp+48h] [rbp-61h] BYREF
  __int64 v27; // [rsp+50h] [rbp-59h]
  _DWORD v28[2]; // [rsp+60h] [rbp-49h] BYREF
  __int64 v29; // [rsp+68h] [rbp-41h]
  __int128 v30; // [rsp+70h] [rbp-39h]
  __int64 v31; // [rsp+80h] [rbp-29h]
  int v32; // [rsp+88h] [rbp-21h]
  int v33; // [rsp+8Ch] [rbp-1Dh]
  int v34; // [rsp+90h] [rbp-19h]
  int v35; // [rsp+94h] [rbp-15h]
  int v36; // [rsp+98h] [rbp-11h]
  int v37; // [rsp+9Ch] [rbp-Dh]
  __int64 v38; // [rsp+A0h] [rbp-9h]

  v6 = 0;
  v9 = *(_QWORD *)(a1 + 64);
  LODWORD(ChildStatus) = 0;
  *a5 = 0;
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite((PERESOURCE)(v9 + 3440), 1u);
  ChildDescriptor = DpiFdoGetChildDescriptor(v9, a2);
  v13 = (__int64)ChildDescriptor;
  if ( !ChildDescriptor )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 6101;
    v17 = a2;
    goto LABEL_14;
  }
  if ( *(_DWORD *)ChildDescriptor == 1
    && (*((_DWORD *)ChildDescriptor + 1) == 15 || (unsigned int)(*((_DWORD *)ChildDescriptor + 1) - 16) <= 1) )
  {
    v6 = 1;
  }
  switch ( *((_DWORD *)ChildDescriptor + 4) )
  {
    case 1:
      *a5 = 1;
LABEL_20:
      v17 = v12;
      goto LABEL_10;
    case 3:
LABEL_8:
      v14 = *(_QWORD *)(v9 + 4032);
      v15 = v6 != 0;
      v16 = *(_QWORD *)(v9 + 40);
      v17 = v12;
      v26[1] = v12;
      v27 = 0LL;
      v26[0] = v15 ? 3 : 1;
      DxgkAcquireAdapterCoreSync(v14, 1);
      KeWaitForSingleObject(*(PVOID *)(v13 + 72), Executive, 0, 0, 0LL);
      DxgkAcquireAdapterDdiSync(*(_QWORD *)(v9 + 4032), 1);
      LOBYTE(v18) = a4;
      ChildStatus = (int)DpiDxgkDdiQueryChildStatus(v16, *(_QWORD *)(v9 + 48), v26, v18);
      DxgkReleaseAdapterDdiSync(*(DXGADAPTER **)(v9 + 4032));
      KeReleaseMutex(*(PRKMUTEX *)(v13 + 72), 0);
      DxgkReleaseAdapterCoreSync(*(_QWORD *)(v9 + 4032), 1u);
      if ( (int)ChildStatus < 0 )
      {
        WdLogSingleEntry2(2LL, *(_QWORD *)(v16 + 208), ChildStatus);
        WdLogGlobalForLineNumber = 6193;
        goto LABEL_14;
      }
      *a5 = v27;
      goto LABEL_10;
    case 4:
      if ( (!v6 || *((_DWORD *)ChildDescriptor + 1) != 15 || *(_QWORD *)(v9 + 3368)) && a3 )
        goto LABEL_8;
      *a5 = *((_BYTE *)ChildDescriptor + 65);
      goto LABEL_20;
  }
  WdLogSingleEntry1(2LL);
  v17 = a2;
  WdLogGlobalForLineNumber = 6212;
LABEL_10:
  v19 = *a5;
  if ( !*a5 && *(_BYTE *)(v13 + 64) == 1 )
  {
    KeWaitForSingleObject((PVOID)(v9 + 3544), Executive, 0, 0, 0LL);
    DpiFdoPendingCreatePdoCompletion(a1, v13);
    KeReleaseMutex((PRKMUTEX)(v9 + 3544), 0);
    v19 = *a5;
  }
  *a6 = v19 == (*(_QWORD *)(v13 + 48) == 0LL);
LABEL_14:
  ExReleaseResourceLite((PERESOURCE)(v9 + 3440));
  KeLeaveCriticalRegion();
  v29 = 0LL;
  v30 = 0LL;
  v33 = 0;
  v20 = *(_QWORD *)(v9 + 2696);
  v29 = 0LL;
  v21 = (unsigned __int8)*a5;
  v38 = v20;
  v37 = v21;
  v28[0] = 30;
  v28[1] = 72;
  v32 = 0;
  v31 = 0LL;
  v30 = 0LL;
  v34 = 38;
  v35 = v17;
  v36 = ChildStatus;
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v28, *(_QWORD *)(v9 + 5888));
  return (unsigned int)ChildStatus;
}
