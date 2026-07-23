/*
 * XREFs of PiPnpRtlCacheObjectBaseKey @ 0x140967630
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x140963A50 (PiPnpRtlCmActionCallback.c)
 *     PiPnpRtlObjectActionCallback @ 0x140965980 (PiPnpRtlObjectActionCallback.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402153F0 (PsGetCurrentServerSiloGlobals.c)
 *     ExAcquireResourceSharedLite @ 0x1402FE950 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     RtlInsertElementGenericTableFullAvl @ 0x1403C2E00 (RtlInsertElementGenericTableFullAvl.c)
 *     RtlLookupElementGenericTableFullAvl @ 0x1404144B0 (RtlLookupElementGenericTableFullAvl.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PiDmGetObject @ 0x1409637D0 (PiDmGetObject.c)
 *     PiDmObjectRelease @ 0x140966A60 (PiDmObjectRelease.c)
 *     PiPnpRtlObjectEventRelease @ 0x140968828 (PiPnpRtlObjectEventRelease.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall PiPnpRtlCacheObjectBaseKey(__int64 a1, unsigned __int16 *a2, int a3, _QWORD *a4)
{
  __int64 v4; // rdi
  struct _KTHREAD *CurrentThread; // rbx
  _QWORD *v9; // rsi
  __int64 *v10; // r15
  __int64 *i; // rax
  struct _KTHREAD *v12; // rax
  unsigned int *v13; // r12
  int v14; // ebx
  __int64 v15; // rcx
  unsigned __int16 *v16; // rax
  unsigned __int16 v17; // dx
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  int v19; // r10d
  unsigned __int16 *v20; // r11
  unsigned __int16 v21; // dx
  int v22; // r9d
  struct _LIST_ENTRY *j; // rbx
  unsigned __int64 v24; // r8
  void **v25; // rax
  int Object; // eax
  _QWORD *Pool2; // rax
  PVOID inserted; // rax
  _QWORD *v29; // rsi
  __int64 v30; // r12
  int v31; // ebx
  __int64 v32; // r15
  int v33; // eax
  int v34; // eax
  TABLE_SEARCH_RESULT SearchResult; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int *v36; // [rsp+48h] [rbp-B8h] BYREF
  __int128 v37; // [rsp+50h] [rbp-B0h] BYREF
  PVOID NodeOrParent; // [rsp+60h] [rbp-A0h] BYREF
  char *Buffer; // [rsp+68h] [rbp-98h] BYREF
  __int64 v40; // [rsp+70h] [rbp-90h]
  int v41[4]; // [rsp+80h] [rbp-80h] BYREF
  int v42; // [rsp+90h] [rbp-70h]
  char v43; // [rsp+94h] [rbp-6Ch]
  _QWORD *v44; // [rsp+98h] [rbp-68h]
  int v45; // [rsp+A0h] [rbp-60h]
  int v46; // [rsp+A4h] [rbp-5Ch]
  int v47; // [rsp+D0h] [rbp-30h] BYREF
  char v48; // [rsp+D4h] [rbp-2Ch]
  _QWORD *v49; // [rsp+D8h] [rbp-28h]
  int v50; // [rsp+E0h] [rbp-20h]
  int v51; // [rsp+E4h] [rbp-1Ch]
  char v52[8]; // [rsp+110h] [rbp+10h] BYREF
  _BYTE *v53; // [rsp+118h] [rbp+18h]
  _BYTE v54[16]; // [rsp+160h] [rbp+60h] BYREF
  unsigned __int16 *v55; // [rsp+170h] [rbp+70h]
  int v56; // [rsp+178h] [rbp+78h]
  int v57; // [rsp+17Ch] [rbp+7Ch]

  v4 = a3;
  v40 = a1;
  if ( a3 >= 7 )
    return 3221225659LL;
  CurrentThread = KeGetCurrentThread();
  v9 = 0LL;
  v10 = 0LL;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(&PiPnpRtlActiveOperationsLock, 1u);
  for ( i = (__int64 *)PiPnpRtlActiveOperations; i != &PiPnpRtlActiveOperations; v10 = 0LL )
  {
    v10 = i;
    if ( (struct _KTHREAD *)i[2] == CurrentThread )
      break;
    i = (__int64 *)*i;
  }
  ExReleaseResourceLite(&PiPnpRtlActiveOperationsLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( v10 )
  {
    v12 = KeGetCurrentThread();
    --v12->KernelApcDisable;
    ExAcquireResourceSharedLite(&PiPnpRtlRemoveOperationDispatchLock, 1u);
    memset_0(v54, 0, 0x70uLL);
    memset_0(v52, 0, 0x50uLL);
    NodeOrParent = 0LL;
    Buffer = v52;
    SearchResult = TableEmptyTree;
    v13 = 0LL;
    v36 = 0LL;
    v14 = 0;
    v55 = a2;
    v57 = v4;
    v37 = 0LL;
    if ( !a2 )
      goto LABEL_61;
    v15 = 0x7FFFLL;
    v16 = a2;
    do
    {
      if ( !*v16 )
        break;
      ++v16;
      --v15;
    }
    while ( v15 );
    v14 = -1073741811;
    if ( v15 )
    {
      v14 = 0;
      v17 = -2 - 2 * v15;
    }
    else
    {
LABEL_61:
      v17 = v37;
    }
    if ( v14 < 0 )
      goto LABEL_39;
    if ( (_DWORD)v4 == 3 && v17 <= 8u )
    {
      v14 = -1073741772;
      goto LABEL_39;
    }
    CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
    v22 = v21 >> 1;
    for ( j = CurrentServerSiloGlobals[75].Flink; v22; v19 = (unsigned __int16)v24 + 65599 * v19 )
    {
      v24 = *v20++;
      --v22;
      if ( (unsigned int)v24 >= 0x61 )
      {
        if ( (unsigned int)v24 > 0x7A )
        {
          if ( j && (unsigned __int16)v24 >= 0xC0u )
            LOWORD(v24) = *((_WORD *)&j->Flink
                          + (v24 & 0xF)
                          + *((unsigned __int16 *)&j->Flink
                            + ((unsigned __int8)v24 >> 4)
                            + (unsigned int)*((unsigned __int16 *)&j->Flink + (v24 >> 8))))
                        + v24;
        }
        else
        {
          LOWORD(v24) = v24 - 32;
        }
      }
    }
    v56 = v19;
    v14 = 0;
    v53 = v54;
    v25 = (void **)RtlLookupElementGenericTableFullAvl((PRTL_AVL_TABLE)(v10 + 3), &Buffer, &NodeOrParent, &SearchResult);
    if ( v25 )
    {
      v9 = *v25;
      if ( *v25 )
        goto LABEL_30;
    }
    Object = PiDmGetObject(v4, a2, &v36);
    v14 = Object;
    if ( Object == -1073741772 )
    {
      v13 = v36;
      v9 = 0LL;
      v14 = 0;
      goto LABEL_39;
    }
    if ( Object >= 0 )
    {
      Pool2 = (_QWORD *)ExAllocatePool2(0x100uLL);
      *(_QWORD *)&v37 = Pool2;
      v9 = Pool2;
      if ( Pool2 )
      {
        *Pool2 = 0LL;
        Pool2[2] = 0LL;
        Pool2[3] = 0LL;
        Pool2[4] = 0LL;
        Pool2[5] = 0LL;
        v13 = 0LL;
        Pool2[6] = 0LL;
        Pool2[7] = 0LL;
        Pool2[8] = 0LL;
        Pool2[9] = 5LL;
        *(_DWORD *)Pool2 = 1;
        Pool2[1] = v36;
        inserted = RtlInsertElementGenericTableFullAvl(
                     (PRTL_AVL_TABLE)(v10 + 3),
                     &v37,
                     8u,
                     0LL,
                     NodeOrParent,
                     SearchResult);
        v9 = (_QWORD *)v37;
        if ( inserted )
          goto LABEL_29;
        v14 = -1073741670;
        goto LABEL_36;
      }
      v14 = -1073741670;
    }
    v13 = v36;
LABEL_36:
    if ( v9 )
      PiPnpRtlObjectEventRelease(v9);
    v9 = 0LL;
LABEL_39:
    if ( v13 )
    {
      PiDmObjectRelease(v13);
      v9 = 0LL;
    }
    if ( v14 < 0 )
      goto LABEL_42;
LABEL_29:
    if ( !v9 )
    {
LABEL_42:
      ExReleaseResourceLite(&PiPnpRtlRemoveOperationDispatchLock);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      return (unsigned int)v14;
    }
LABEL_30:
    v29 = v9 + 2;
    if ( *v29 )
    {
LABEL_31:
      *a4 = *v29;
      goto LABEL_42;
    }
    memset_0(v41, 0, 0x50uLL);
    v30 = v40;
    v31 = 0;
    v42 = 0x2000000;
    v43 = 0;
    v44 = v29;
    v32 = *(_QWORD *)(v40 + 488);
    v46 = 0;
    if ( v32 )
    {
      v33 = guard_dispatch_icall_no_overrides(v40, (__int64)a2);
      if ( v33 == -1073741822 )
      {
        v32 = 0LL;
      }
      else
      {
        if ( v33 == -1073741536 )
          goto LABEL_58;
        if ( v33 )
          goto LABEL_67;
      }
      v31 = v46;
    }
    memset_0(&v47, 0, 0x40uLL);
    if ( (_WORD)v31 || (unsigned int)(v4 - 1) > 0xA )
    {
      v14 = -1073741811;
    }
    else if ( *(_QWORD *)(v30 + 8 * v4 + 296) )
    {
      v47 = v42;
      v48 = v43;
      v49 = v44;
      v51 = v31;
      v14 = guard_dispatch_icall_no_overrides(v30, (__int64)a2);
      if ( v14 >= 0 )
        v45 = v50;
    }
    else
    {
      v14 = -1073741822;
    }
    if ( !v32 )
      goto LABEL_53;
    v41[0] = v14;
    v34 = guard_dispatch_icall_no_overrides(v30, (__int64)a2);
    if ( v34 == -1073741822 )
      goto LABEL_53;
    if ( v34 != -1073741536 )
    {
      if ( v34 )
      {
LABEL_67:
        v14 = -1073741595;
        goto LABEL_68;
      }
LABEL_53:
      if ( v14 >= 0 )
        goto LABEL_31;
LABEL_68:
      *v29 = 0LL;
      goto LABEL_42;
    }
LABEL_58:
    v14 = v41[0];
    goto LABEL_53;
  }
  return 3221226021LL;
}
