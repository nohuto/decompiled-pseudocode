/*
 * XREFs of PiPnpRtlCacheObjectBaseKey @ 0x1409A6BD0
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x1409A2FF0 (PiPnpRtlCmActionCallback.c)
 *     PiPnpRtlObjectActionCallback @ 0x1409A4F20 (PiPnpRtlObjectActionCallback.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402150C0 (PsGetCurrentServerSiloGlobals.c)
 *     ExAcquireResourceSharedLite @ 0x1402B3C80 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     RtlInsertElementGenericTableFullAvl @ 0x1403B8F00 (RtlInsertElementGenericTableFullAvl.c)
 *     RtlLookupElementGenericTableFullAvl @ 0x14041CC60 (RtlLookupElementGenericTableFullAvl.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     PiDmGetObject @ 0x1409A2D70 (PiDmGetObject.c)
 *     PiDmObjectRelease @ 0x1409A6000 (PiDmObjectRelease.c)
 *     PiPnpRtlObjectEventRelease @ 0x1409A7DD4 (PiPnpRtlObjectEventRelease.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

__int64 __fastcall PiPnpRtlCacheObjectBaseKey(__int64 a1, unsigned __int16 *a2, int a3, _QWORD *a4)
{
  __int64 v4; // rdi
  struct _KTHREAD *CurrentThread; // rbx
  __int64 *v9; // rax
  _QWORD *v10; // rsi
  __int64 *i; // r15
  __int64 v12; // rdx
  __int64 v13; // r8
  struct _KTHREAD *v14; // rax
  unsigned int *v15; // r12
  int v16; // ebx
  __int64 v17; // rcx
  unsigned __int16 *v18; // rax
  unsigned __int16 v19; // dx
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  int v21; // r10d
  unsigned __int16 *v22; // r11
  unsigned __int16 v23; // dx
  int v24; // r9d
  struct _LIST_ENTRY *j; // rbx
  unsigned __int64 v26; // r8
  void **v27; // rax
  int Object; // eax
  _QWORD *Pool2; // rax
  PVOID inserted; // rax
  _QWORD *v31; // rsi
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r12
  int v35; // ebx
  __int64 v36; // r15
  int v37; // eax
  int v38; // eax
  TABLE_SEARCH_RESULT SearchResult; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int *v40; // [rsp+48h] [rbp-B8h] BYREF
  __int128 v41; // [rsp+50h] [rbp-B0h] BYREF
  PVOID NodeOrParent; // [rsp+60h] [rbp-A0h] BYREF
  char *Buffer; // [rsp+68h] [rbp-98h] BYREF
  __int64 v44; // [rsp+70h] [rbp-90h]
  int v45[4]; // [rsp+80h] [rbp-80h] BYREF
  int v46; // [rsp+90h] [rbp-70h]
  char v47; // [rsp+94h] [rbp-6Ch]
  _QWORD *v48; // [rsp+98h] [rbp-68h]
  int v49; // [rsp+A0h] [rbp-60h]
  int v50; // [rsp+A4h] [rbp-5Ch]
  int v51; // [rsp+D0h] [rbp-30h] BYREF
  char v52; // [rsp+D4h] [rbp-2Ch]
  _QWORD *v53; // [rsp+D8h] [rbp-28h]
  int v54; // [rsp+E0h] [rbp-20h]
  int v55; // [rsp+E4h] [rbp-1Ch]
  char v56[8]; // [rsp+110h] [rbp+10h] BYREF
  _BYTE *v57; // [rsp+118h] [rbp+18h]
  _BYTE v58[16]; // [rsp+160h] [rbp+60h] BYREF
  unsigned __int16 *v59; // [rsp+170h] [rbp+70h]
  int v60; // [rsp+178h] [rbp+78h]
  int v61; // [rsp+17Ch] [rbp+7Ch]

  v4 = a3;
  v44 = a1;
  if ( a3 >= 7 )
    return 3221225659LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(&PiPnpRtlActiveOperationsLock, 1u);
  v9 = (__int64 *)PiPnpRtlActiveOperations;
  v10 = 0LL;
  for ( i = 0LL; v9 != &PiPnpRtlActiveOperations; i = 0LL )
  {
    i = v9;
    if ( (struct _KTHREAD *)v9[2] == CurrentThread )
      break;
    v9 = (__int64 *)*v9;
  }
  ExReleaseResourceLite(&PiPnpRtlActiveOperationsLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v12, v13);
  if ( i )
  {
    v14 = KeGetCurrentThread();
    --v14->KernelApcDisable;
    ExAcquireResourceSharedLite(&PiPnpRtlRemoveOperationDispatchLock, 1u);
    memset_0(v58, 0, 0x70uLL);
    memset_0(v56, 0, 0x50uLL);
    NodeOrParent = 0LL;
    Buffer = v56;
    SearchResult = TableEmptyTree;
    v15 = 0LL;
    v40 = 0LL;
    v16 = 0;
    v59 = a2;
    v61 = v4;
    v41 = 0LL;
    if ( !a2 )
      goto LABEL_61;
    v17 = 0x7FFFLL;
    v18 = a2;
    do
    {
      if ( !*v18 )
        break;
      ++v18;
      --v17;
    }
    while ( v17 );
    v16 = -1073741811;
    if ( v17 )
    {
      v16 = 0;
      v19 = -2 - 2 * v17;
    }
    else
    {
LABEL_61:
      v19 = v41;
    }
    if ( v16 < 0 )
      goto LABEL_39;
    if ( (_DWORD)v4 == 3 && v19 <= 8u )
    {
      v16 = -1073741772;
      goto LABEL_39;
    }
    CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
    v24 = v23 >> 1;
    for ( j = CurrentServerSiloGlobals[75].Flink; v24; v21 = (unsigned __int16)v26 + 65599 * v21 )
    {
      v26 = *v22++;
      --v24;
      if ( (unsigned int)v26 >= 0x61 )
      {
        if ( (unsigned int)v26 > 0x7A )
        {
          if ( j && (unsigned __int16)v26 >= 0xC0u )
            LOWORD(v26) = *((_WORD *)&j->Flink
                          + (v26 & 0xF)
                          + *((unsigned __int16 *)&j->Flink
                            + ((unsigned __int8)v26 >> 4)
                            + (unsigned int)*((unsigned __int16 *)&j->Flink + (v26 >> 8))))
                        + v26;
        }
        else
        {
          LOWORD(v26) = v26 - 32;
        }
      }
    }
    v60 = v21;
    v16 = 0;
    v57 = v58;
    v27 = (void **)RtlLookupElementGenericTableFullAvl((PRTL_AVL_TABLE)(i + 3), &Buffer, &NodeOrParent, &SearchResult);
    if ( v27 )
    {
      v10 = *v27;
      if ( *v27 )
        goto LABEL_30;
    }
    Object = PiDmGetObject(v4, a2, &v40);
    v16 = Object;
    if ( Object == -1073741772 )
    {
      v15 = v40;
      v10 = 0LL;
      v16 = 0;
      goto LABEL_39;
    }
    if ( Object >= 0 )
    {
      Pool2 = (_QWORD *)ExAllocatePool2(0x100uLL);
      *(_QWORD *)&v41 = Pool2;
      v10 = Pool2;
      if ( Pool2 )
      {
        *Pool2 = 0LL;
        Pool2[2] = 0LL;
        Pool2[3] = 0LL;
        Pool2[4] = 0LL;
        Pool2[5] = 0LL;
        v15 = 0LL;
        Pool2[6] = 0LL;
        Pool2[7] = 0LL;
        Pool2[8] = 0LL;
        Pool2[9] = 5LL;
        *(_DWORD *)Pool2 = 1;
        Pool2[1] = v40;
        inserted = RtlInsertElementGenericTableFullAvl(
                     (PRTL_AVL_TABLE)(i + 3),
                     &v41,
                     8u,
                     0LL,
                     NodeOrParent,
                     SearchResult);
        v10 = (_QWORD *)v41;
        if ( inserted )
          goto LABEL_29;
        v16 = -1073741670;
        goto LABEL_36;
      }
      v16 = -1073741670;
    }
    v15 = v40;
LABEL_36:
    if ( v10 )
      PiPnpRtlObjectEventRelease(v10);
    v10 = 0LL;
LABEL_39:
    if ( v15 )
    {
      PiDmObjectRelease(v15);
      v10 = 0LL;
    }
    if ( v16 < 0 )
      goto LABEL_42;
LABEL_29:
    if ( !v10 )
    {
LABEL_42:
      ExReleaseResourceLite(&PiPnpRtlRemoveOperationDispatchLock);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v32, v33);
      return (unsigned int)v16;
    }
LABEL_30:
    v31 = v10 + 2;
    if ( *v31 )
    {
LABEL_31:
      *a4 = *v31;
      goto LABEL_42;
    }
    memset_0(v45, 0, 0x50uLL);
    v34 = v44;
    v35 = 0;
    v46 = 0x2000000;
    v47 = 0;
    v48 = v31;
    v36 = *(_QWORD *)(v44 + 488);
    v50 = 0;
    if ( v36 )
    {
      v37 = guard_dispatch_icall_no_overrides(v44, (__int64)a2);
      if ( v37 == -1073741822 )
      {
        v36 = 0LL;
      }
      else
      {
        if ( v37 == -1073741536 )
          goto LABEL_58;
        if ( v37 )
          goto LABEL_67;
      }
      v35 = v50;
    }
    memset_0(&v51, 0, 0x40uLL);
    if ( (_WORD)v35 || (unsigned int)(v4 - 1) > 0xA )
    {
      v16 = -1073741811;
    }
    else if ( *(_QWORD *)(v34 + 8 * v4 + 296) )
    {
      v51 = v46;
      v52 = v47;
      v53 = v48;
      v55 = v35;
      v16 = guard_dispatch_icall_no_overrides(v34, (__int64)a2);
      if ( v16 >= 0 )
        v49 = v54;
    }
    else
    {
      v16 = -1073741822;
    }
    if ( !v36 )
      goto LABEL_53;
    v45[0] = v16;
    v38 = guard_dispatch_icall_no_overrides(v34, (__int64)a2);
    if ( v38 == -1073741822 )
      goto LABEL_53;
    if ( v38 != -1073741536 )
    {
      if ( v38 )
      {
LABEL_67:
        v16 = -1073741595;
        goto LABEL_68;
      }
LABEL_53:
      if ( v16 >= 0 )
        goto LABEL_31;
LABEL_68:
      *v31 = 0LL;
      goto LABEL_42;
    }
LABEL_58:
    v16 = v45[0];
    goto LABEL_53;
  }
  return 3221226021LL;
}
