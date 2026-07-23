/*
 * XREFs of IoBuildPoDeviceNotifyList @ 0x140C0B000
 * Callers:
 *     PopBuildDeviceNotifyList @ 0x140C0AED8 (PopBuildDeviceNotifyList.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     PsReferenceSiloContext @ 0x140276D70 (PsReferenceSiloContext.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     IoGetAttachedDeviceReference @ 0x1402F8660 (IoGetAttachedDeviceReference.c)
 *     IoGetLowerDeviceObjectWithTag @ 0x1404902AC (IoGetLowerDeviceObjectWithTag.c)
 *     PnpLockDeviceActionQueue @ 0x1404D1004 (PnpLockDeviceActionQueue.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PnpPowerStateTransitionWatchdogPushRecord @ 0x14096EBD8 (PnpPowerStateTransitionWatchdogPushRecord.c)
 *     PnpPowerStateTransitionWatchdogPopRecord @ 0x140B48B08 (PnpPowerStateTransitionWatchdogPopRecord.c)
 *     IopCaptureObjectName @ 0x140C0B6B8 (IopCaptureObjectName.c)
 *     IopCheckDeviceFlags @ 0x140C0B768 (IopCheckDeviceFlags.c)
 *     IopIsNotifyInBroadcast @ 0x140C0B7E4 (IopIsNotifyInBroadcast.c)
 *     IopFreePoDeviceNotifyListHead @ 0x140C0B818 (IopFreePoDeviceNotifyListHead.c)
 */

__int64 *__fastcall IoBuildPoDeviceNotifyList(char *a1, int a2)
{
  _QWORD *v4; // rcx
  char *v5; // rdx
  __int64 v6; // r8
  char *v7; // rax
  char *v8; // rbx
  char *i; // rax
  char *v10; // rax
  __int64 ***v11; // rdi
  PDEVICE_OBJECT AttachedDeviceReference; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  void *v16; // rcx
  PVOID *v17; // rcx
  _QWORD *v18; // rax
  _QWORD *v19; // r9
  _QWORD *v20; // rax
  _QWORD *v21; // r9
  __int64 v22; // r10
  _QWORD *v23; // rdi
  char *v24; // rdx
  __int64 v25; // rbx
  __int64 i1; // r11
  __int64 v27; // rbx
  __int64 i2; // r11
  char *v29; // rax
  char **v30; // rcx
  __int64 *v31; // rax
  __int64 *v32; // r11
  __int64 *v33; // rax
  _QWORD *v34; // rdx
  char v35; // r10
  _QWORD *k; // rax
  __int64 *result; // rax
  _QWORD *v38; // rax
  _QWORD *v39; // rcx
  _QWORD *v40; // rcx
  _QWORD *v41; // rax
  _QWORD *v42; // rcx
  _QWORD *m; // rax
  _QWORD *v44; // rdi
  _QWORD *v45; // rax
  _QWORD *ii; // rax
  _QWORD *n; // rax
  __int64 v48; // r9
  char v49; // dl
  char v50; // al
  _DWORD *v51; // rsi
  _DWORD *LowerDeviceObjectWithTag; // rbx
  _QWORD *v53; // rax
  _QWORD *v54; // rax
  char v55; // r10
  _QWORD *jj; // rax
  _QWORD *v57; // rax
  _BYTE *v58; // rcx
  _QWORD *v59; // rdx
  unsigned __int8 v60; // al
  _QWORD *kk; // rcx
  _QWORD *mm; // rcx
  _QWORD *v63; // rcx
  _QWORD *nn; // rax
  __int64 v65; // r9
  unsigned __int8 v66; // r8
  __int64 *v67; // rcx
  __int64 *v68; // rdx
  __int64 *v69; // rax
  __int64 *j; // rcx
  NTSTATUS v71; // ebx
  __int64 *v72; // rcx
  __int64 *v73; // r11
  __int64 *v74; // [rsp+20h] [rbp-20h] BYREF
  __int64 **v75; // [rsp+28h] [rbp-18h]
  __int64 v76; // [rsp+30h] [rbp-10h] BYREF
  __int64 *v77; // [rsp+38h] [rbp-8h]

  v75 = &v74;
  v74 = (__int64 *)&v74;
  v77 = &v76;
  v76 = (__int64)&v76;
  if ( (a2 & 1) == 0 )
  {
    if ( (a2 & 4) != 0 )
    {
      v71 = PnpPowerStateTransitionWatchdogPushRecord();
      PnpLockDeviceActionQueue();
      if ( v71 >= 0 )
        PnpPowerStateTransitionWatchdogPopRecord();
    }
    else
    {
      PnpLockDeviceActionQueue();
    }
  }
  memset_0(a1, 0, 0x180uLL);
  v4 = a1 + 24;
  *((_DWORD *)a1 + 94) = a2;
  v5 = a1 + 40;
  v6 = 5LL;
  do
  {
    v4[1] = v5 - 16;
    *v4 = v5 - 16;
    v4[3] = v5;
    v4[2] = v5;
    v4[5] = v5 + 16;
    v4[4] = v5 + 16;
    v4 += 9;
    v7 = v5 + 32;
    v5 += 72;
    *(v4 - 2) = v7;
    *(v4 - 3) = v7;
    --v6;
  }
  while ( v6 );
  v8 = (char *)IopRootDeviceNode;
  for ( i = (char *)*((_QWORD *)IopRootDeviceNode + 1); i; i = (char *)*((_QWORD *)i + 1) )
    v8 = i;
  while ( v8 != IopRootDeviceNode )
  {
    v11 = (__int64 ***)(v8 + 160);
    v8[216] = 0;
    *((_QWORD *)v8 + 31) = 0LL;
    *((_QWORD *)v8 + 32) = 0LL;
    *((_QWORD *)v8 + 28) = *((_QWORD *)v8 + 4);
    AttachedDeviceReference = IoGetAttachedDeviceReference(*((PDEVICE_OBJECT *)v8 + 4));
    *((_QWORD *)v8 + 26) = AttachedDeviceReference;
    v13 = IopCaptureObjectName(AttachedDeviceReference->DriverObject);
    v14 = *((_QWORD *)v8 + 26);
    *((_QWORD *)v8 + 30) = v13;
    v15 = IopCaptureObjectName(v14);
    v16 = (void *)*((_QWORD *)v8 + 28);
    *((_QWORD *)v8 + 29) = v15;
    PsReferenceSiloContext(v16);
    v8[216] = 0;
    if ( (unsigned __int8)IopCheckDeviceFlags(v8 + 160, 0x2000LL) )
      v8[216] |= 2u;
    v17 = (PVOID *)(v8 + 16);
    if ( *((PVOID *)v8 + 2) == IopRootDeviceNode && *((_DWORD *)v8 + 112) && (*((_DWORD *)v8 + 99) & 4) == 0 )
    {
      v18 = v75;
      if ( *v75 != (__int64 *)&v74 )
LABEL_30:
        __fastfail(3u);
      *((_QWORD *)v8 + 21) = v75;
      *v11 = &v74;
      *v18 = v11;
      v75 = (__int64 **)(v8 + 160);
    }
    v10 = *(char **)v8;
    v8 = v10;
    if ( v10 )
    {
      while ( 1 )
      {
        v10 = (char *)*((_QWORD *)v10 + 1);
        if ( !v10 )
          break;
        v8 = v10;
      }
    }
    else
    {
      v8 = (char *)*v17;
    }
  }
  while ( 1 )
  {
    v33 = v74;
    if ( v74 == (__int64 *)&v74 )
      break;
    if ( (__int64 **)v74[1] != &v74 )
      goto LABEL_30;
    v67 = (__int64 *)*v74;
    if ( *(__int64 **)(*v74 + 8) != v74 )
      goto LABEL_30;
    v74 = (__int64 *)*v74;
    v67[1] = (__int64)&v74;
    v68 = v33 - 20;
    *((_BYTE *)v33 + 56) |= 1u;
    v69 = v68;
    for ( j = (__int64 *)v68[1]; j; j = (__int64 *)j[1] )
      v69 = j;
    while ( v69 != v68 )
    {
      *((_BYTE *)v69 + 216) |= 1u;
      v72 = (__int64 *)*v69;
      if ( *v69 )
      {
        do
        {
          v69 = v72;
          v72 = (__int64 *)v72[1];
        }
        while ( v72 );
      }
      else
      {
        v69 = (__int64 *)v69[2];
      }
    }
  }
  do
  {
    v34 = IopRootDeviceNode;
    v35 = 0;
    for ( k = (_QWORD *)*((_QWORD *)IopRootDeviceNode + 1); k; k = (_QWORD *)k[1] )
      v34 = k;
    while ( 1 )
    {
      v39 = IopRootDeviceNode;
      if ( v34 == IopRootDeviceNode )
        break;
      if ( (v34[27] & 2) != 0 )
      {
        v40 = (_QWORD *)v34[1];
        v41 = v34;
        while ( v40 )
        {
          v41 = v40;
          v40 = (_QWORD *)v40[1];
        }
        while ( v41 != v34 )
        {
          *((_BYTE *)v41 + 216) |= 2u;
          v42 = (_QWORD *)*v41;
          if ( *v41 )
          {
            do
            {
              v41 = v42;
              v42 = (_QWORD *)v42[1];
            }
            while ( v42 );
          }
          else
          {
            v41 = (_QWORD *)v41[2];
          }
        }
      }
      v38 = (_QWORD *)*v34;
      if ( *v34 )
      {
        do
        {
          v34 = v38;
          v38 = (_QWORD *)v38[1];
        }
        while ( v38 );
      }
      else
      {
        v34 = (_QWORD *)v34[2];
      }
    }
    for ( m = (_QWORD *)*((_QWORD *)IopRootDeviceNode + 1); m; m = (_QWORD *)m[1] )
      v39 = m;
    v44 = IopRootDeviceNode;
    if ( v39 == IopRootDeviceNode )
      break;
    do
    {
      if ( (v39[27] & 2) != 0 )
      {
        for ( n = (_QWORD *)v39[22]; n != v39 + 22; n = (_QWORD *)*n )
        {
          v48 = *(n - 1);
          v49 = *(_BYTE *)(v48 + 56);
          if ( (v49 & 2) == 0 )
          {
            v35 = 1;
            *(_BYTE *)(v48 + 56) = v49 | 2;
          }
        }
      }
      v45 = (_QWORD *)*v39;
      if ( *v39 )
      {
        do
        {
          v39 = v45;
          v45 = (_QWORD *)v45[1];
        }
        while ( v45 );
      }
      else
      {
        v39 = (_QWORD *)v39[2];
      }
      v44 = IopRootDeviceNode;
    }
    while ( v39 != IopRootDeviceNode );
  }
  while ( v35 );
  for ( ii = (_QWORD *)v44[1]; ii; ii = (_QWORD *)ii[1] )
    v44 = ii;
  while ( 1 )
  {
    v19 = IopRootDeviceNode;
    if ( v44 == IopRootDeviceNode )
      break;
    v50 = *((_BYTE *)v44 + 216);
    if ( (v50 & 2) != 0 )
    {
      v51 = (_DWORD *)v44[26];
      *((_BYTE *)v44 + 216) = v50 + 1;
      ObfReferenceObjectWithTag(v51, 0x70506F50u);
      while ( v51 )
      {
        if ( v51[18] == 7 )
        {
          ObfDereferenceObjectWithTag(v51, 0x70506F50u);
          if ( (unsigned __int8)IopCheckDeviceFlags(v44 + 20, 256LL) )
            *((_BYTE *)v44 + 216) = 2;
          break;
        }
        LowerDeviceObjectWithTag = IoGetLowerDeviceObjectWithTag((__int64)v51, 0x70506F50u);
        ObfDereferenceObjectWithTag(v51, 0x70506F50u);
        v51 = LowerDeviceObjectWithTag;
      }
    }
    v53 = (_QWORD *)*v44;
    if ( *v44 )
    {
      do
      {
        v44 = v53;
        v53 = (_QWORD *)v53[1];
      }
      while ( v53 );
    }
    else
    {
      v44 = (_QWORD *)v44[2];
    }
  }
  do
  {
    v54 = (_QWORD *)v19[1];
    v55 = 0;
    while ( v54 )
    {
      v19 = v54;
      v54 = (_QWORD *)v54[1];
    }
    while ( 1 )
    {
      v57 = IopRootDeviceNode;
      if ( v19 == IopRootDeviceNode )
        break;
      v58 = (_BYTE *)v19[2];
      v59 = v58;
      if ( v58 != IopRootDeviceNode )
      {
        v60 = *((_BYTE *)v19 + 216);
        if ( v58[216] > v60 )
        {
          v58[216] = v60;
          v59 = (_QWORD *)v19[2];
        }
      }
      v19 = (_QWORD *)*v19;
      if ( v19 )
      {
        for ( jj = (_QWORD *)v19[1]; jj; jj = (_QWORD *)jj[1] )
          v19 = jj;
      }
      else
      {
        v19 = v59;
      }
    }
    for ( kk = (_QWORD *)*((_QWORD *)IopRootDeviceNode + 1); kk; kk = (_QWORD *)kk[1] )
      v57 = kk;
    v19 = IopRootDeviceNode;
    if ( v57 == IopRootDeviceNode )
      break;
    do
    {
      for ( mm = (_QWORD *)v57[24]; mm != v57 + 24; mm = (_QWORD *)*mm )
      {
        v65 = mm[5];
        v66 = *((_BYTE *)v57 + 216);
        if ( *(_BYTE *)(v65 + 56) > v66 )
        {
          v55 = 1;
          *(_BYTE *)(v65 + 56) = v66;
        }
      }
      v63 = (_QWORD *)*v57;
      if ( *v57 )
      {
        do
        {
          v57 = v63;
          v63 = (_QWORD *)v63[1];
        }
        while ( v63 );
      }
      else
      {
        v57 = (_QWORD *)v57[2];
      }
      v19 = IopRootDeviceNode;
    }
    while ( v57 != IopRootDeviceNode );
  }
  while ( v55 );
  for ( nn = (_QWORD *)v19[1]; nn; nn = (_QWORD *)nn[1] )
    v19 = nn;
  while ( v19 != IopRootDeviceNode )
  {
    if ( (unsigned __int8)IopIsNotifyInBroadcast(*((unsigned int *)a1 + 94), v19 + 20) )
    {
      v23 = v21 + 2;
      ++*(_DWORD *)&a1[72 * *(unsigned __int8 *)(v22 + 56) + 16];
      v24 = (char *)v21[2];
      if ( v24 != IopRootDeviceNode && (unsigned __int8)IopIsNotifyInBroadcast(*((unsigned int *)a1 + 94), v24 + 160) )
      {
        ++*(_DWORD *)(v22 + 96);
        ++*(_DWORD *)(*v23 + 248LL);
      }
      v25 = v22 + 32;
      for ( i1 = *(_QWORD *)(v22 + 32); i1 != v25; i1 = *v73 )
      {
        if ( (unsigned __int8)IopIsNotifyInBroadcast(*((unsigned int *)a1 + 94), *(_QWORD *)(i1 + 40)) )
          ++*(_DWORD *)(v22 + 96);
      }
      v27 = v22 + 16;
      for ( i2 = *(_QWORD *)(v22 + 16); i2 != v27; i2 = *v32 )
      {
        if ( (unsigned __int8)IopIsNotifyInBroadcast(*((unsigned int *)a1 + 94), *(_QWORD *)(i2 - 8)) )
          ++*(_DWORD *)(v22 + 88);
      }
      v29 = &a1[64 * *(unsigned __int8 *)(v22 + 56) + 24 + 8 * *(unsigned __int8 *)(v22 + 56)];
      v30 = (char **)*((_QWORD *)v29 + 1);
      if ( *v30 != v29 )
        goto LABEL_30;
      *(_QWORD *)v22 = v29;
      *(_QWORD *)(v22 + 8) = v30;
      *v30 = (char *)v22;
      *((_QWORD *)v29 + 1) = v22;
    }
    else
    {
      v31 = v77;
      if ( (__int64 *)*v77 != &v76 )
        goto LABEL_30;
      *(_QWORD *)(v22 + 8) = v77;
      *(_QWORD *)v22 = &v76;
      v23 = v21 + 2;
      *v31 = v22;
      v77 = (__int64 *)v22;
    }
    v20 = (_QWORD *)*v21;
    v19 = v20;
    if ( v20 )
    {
      while ( 1 )
      {
        v20 = (_QWORD *)v20[1];
        if ( !v20 )
          break;
        v19 = v20;
      }
    }
    else
    {
      v19 = (_QWORD *)*v23;
    }
  }
  IopFreePoDeviceNotifyListHead(&v76);
  result = &IopWarmEjectPdo;
  *((_QWORD *)a1 + 1) = &IopWarmEjectPdo;
  *a1 = 1;
  return result;
}
