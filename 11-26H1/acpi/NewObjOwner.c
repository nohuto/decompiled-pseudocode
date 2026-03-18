/*
 * XREFs of NewObjOwner @ 0x1400015D0
 * Callers:
 *     ParseLoad @ 0x140052DE0 (ParseLoad.c)
 *     InitializeNativeNamespace @ 0x1400542D0 (InitializeNativeNamespace.c)
 *     AMLIRemoveNativeObjectsFromNamespace @ 0x14006D43C (AMLIRemoveNativeObjectsFromNamespace.c)
 *     AMLIAddNamespaceOverride @ 0x14006D664 (AMLIAddNamespaceOverride.c)
 *     NotifyObjectDestruction @ 0x14006E1F8 (NotifyObjectDestruction.c)
 * Callees:
 *     NewLocalHeap @ 0x140002E5C (NewLocalHeap.c)
 *     LogError @ 0x140007244 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1400072EC (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140007434 (PrintDebugMessage.c)
 *     NewGlobalHeap @ 0x14006F800 (NewGlobalHeap.c)
 *     memset @ 0x140072740 (memset.c)
 */

__int64 __fastcall NewObjOwner(_QWORD *a1, struct _EX_RUNDOWN_REF **a2)
{
  unsigned int v2; // edi
  __int64 v4; // rbx
  _QWORD *v5; // rbp
  KIRQL v7; // al
  _QWORD *v8; // r8
  _QWORD *v9; // r9
  _QWORD *v10; // rax
  unsigned __int64 v11; // rdx
  __int64 v12; // rbx
  struct _EX_RUNDOWN_REF *v13; // rcx
  KIRQL v14; // al
  struct _EX_RUNDOWN_REF **v15; // rcx
  struct _EX_RUNDOWN_REF *v16; // rax
  int v18; // eax
  __int64 v19; // r9
  _QWORD *v20; // rcx
  unsigned int v21; // eax
  char *v22; // r9
  __int64 *v23; // rax
  __int64 **v24; // rcx
  __int64 *v25; // r10
  _QWORD *v26; // r11
  __int64 v27; // rcx
  _QWORD *v28; // rax
  _QWORD *v29; // r11
  _QWORD *v30; // r9
  __int64 v31; // rcx
  _QWORD *v32; // rax
  __int64 v33; // rsi
  __int64 v34; // rcx
  _QWORD *v35; // rax
  __int64 v36; // rcx
  __int64 *v37; // rcx
  __int64 **v38; // rax
  _QWORD *v39; // [rsp+60h] [rbp+18h] BYREF

  v2 = 0;
  v4 = 0LL;
  v5 = 0LL;
  v7 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
  v8 = a1;
  v39 = a1;
  byte_14008EB20 = v7;
  v9 = a1;
  v10 = a1;
  v11 = (unsigned __int64)a1;
  while ( 2 )
  {
    if ( v10 )
    {
      v12 = *(_QWORD *)(v11 + 40);
      v11 += 40LL;
      v5 = v9;
      while ( 1 )
      {
        v4 = v12 - 16;
        if ( v11 == v4 + 16 )
        {
          v4 = 0LL;
          goto LABEL_6;
        }
        if ( *(_DWORD *)(v4 + 4) >= 0x50u )
          break;
        v12 = *(_QWORD *)(v4 + 16);
      }
      if ( v4 )
      {
        v19 = *(_QWORD *)(v4 + 16);
        if ( *(_QWORD *)(v19 + 8) != v4 + 16 )
          goto LABEL_18;
        v20 = *(_QWORD **)(v4 + 24);
        if ( *v20 != v4 + 16 )
          goto LABEL_18;
        *v20 = v19;
        *(_QWORD *)(v19 + 8) = v20;
        v21 = *(_DWORD *)(v4 + 4);
        if ( v21 >= 0x70 )
        {
          v22 = (char *)(v4 + 80);
          *(_DWORD *)(v4 + 80) = 0;
          *(_DWORD *)(v4 + 84) = v21 - 80;
          *(_QWORD *)(v4 + 88) = v8;
          *(_DWORD *)(v4 + 4) = 80;
          v23 = *(__int64 **)v11;
          if ( *(_QWORD *)v11 != v11 )
          {
            do
            {
              if ( v4 + 96 < (unsigned __int64)v23 )
                break;
              v23 = (__int64 *)*v23;
            }
            while ( v23 != (__int64 *)v11 );
          }
          v24 = (__int64 **)v23[1];
          v25 = (__int64 *)(v4 + 96);
          if ( *v24 != v23 )
            goto LABEL_18;
          *(_QWORD *)(v4 + 104) = v24;
          *v25 = (__int64)v23;
          *v24 = v25;
          v23[1] = (__int64)v25;
          v26 = (_QWORD *)*v25;
          v27 = *v25 - 16;
          if ( *v25 != v11 )
          {
            v33 = *(unsigned int *)(v4 + 84);
            if ( (char *)v27 == &v22[v33] )
            {
              *(_DWORD *)(v4 + 84) = v33 + *(_DWORD *)(v27 + 4);
              v34 = *v26;
              if ( *(_QWORD **)(*v26 + 8LL) == v26 )
              {
                v35 = (_QWORD *)v26[1];
                if ( (_QWORD *)*v35 == v26 )
                {
                  *v35 = v34;
                  *(_QWORD *)(v34 + 8) = v35;
                  goto LABEL_32;
                }
              }
LABEL_18:
              __fastfail(3u);
            }
          }
LABEL_32:
          v28 = *(_QWORD **)(v4 + 104);
          v29 = v28 - 2;
          if ( v28 != (_QWORD *)v11 )
          {
            v36 = *((unsigned int *)v29 + 1);
            if ( v22 == (char *)v29 + v36 )
            {
              *((_DWORD *)v29 + 1) = *(_DWORD *)(v4 + 84) + v36;
              v37 = (__int64 *)*v25;
              if ( *(__int64 **)(*v25 + 8) != v25 )
                goto LABEL_18;
              v38 = *(__int64 ***)(v4 + 104);
              if ( *v38 != v25 )
                goto LABEL_18;
              *v38 = v37;
              v22 = (char *)v29;
              v37[1] = (__int64)v38;
            }
          }
          if ( v8[4] <= (unsigned __int64)&v22[*((unsigned int *)v22 + 1)] )
          {
            v8[4] = v22;
            v30 = v22 + 16;
            v31 = *v30;
            if ( *(_QWORD **)(*v30 + 8LL) != v30 )
              goto LABEL_18;
            v32 = (_QWORD *)v30[1];
            if ( (_QWORD *)*v32 != v30 )
              goto LABEL_18;
            *v32 = v31;
            *(_QWORD *)(v31 + 8) = v32;
          }
        }
        goto LABEL_11;
      }
LABEL_6:
      if ( (unsigned int)(*((_DWORD *)v8 + 2) - *((_DWORD *)v8 + 8)) < 0x50 )
      {
        v10 = (_QWORD *)v8[3];
        v8 = v10;
        v39 = v10;
        v9 = v10;
        v11 = (unsigned __int64)v10;
        continue;
      }
      v4 = v8[4];
      v8[4] = v4 + 80;
      *(_DWORD *)(v4 + 4) = 80;
      if ( v4 )
        goto LABEL_11;
    }
    break;
  }
  if ( a1 == (_QWORD *)gpheapGlobal )
  {
    if ( (unsigned int)gdwGlobalHeapBlkSize < 0x88 )
    {
      v11 = 0x50 % (unsigned int)gdwGlobalHeapBlkSize;
      LODWORD(gdwGlobalHeapBlkSize) = gdwGlobalHeapBlkSize * (0x50 / (unsigned int)gdwGlobalHeapBlkSize + 1);
      if ( (unsigned int)gdwGlobalHeapBlkSize > 0x800000 )
        LODWORD(gdwGlobalHeapBlkSize) = 80;
    }
    v18 = NewGlobalHeap(&v39, v11, v8, v9);
  }
  else
  {
    v18 = NewLocalHeap(&v39, v11, v8, v9);
  }
  if ( !v18 )
  {
    v8 = v39;
    v39[2] = a1;
    v5[3] = v8;
    v4 = v8[4];
    v8[4] = v4 + 80;
    *(_DWORD *)(v4 + 4) = 80;
    if ( v4 )
    {
LABEL_11:
      *(_QWORD *)(v4 + 8) = v8;
      *(_DWORD *)v4 = 1314344776;
      memset((void *)(v4 + 16), 0, 0x40uLL);
    }
  }
  KeReleaseSpinLock(&gmutHeap, byte_14008EB20);
  v13 = (struct _EX_RUNDOWN_REF *)(v4 + 16);
  if ( !v4 )
    v13 = 0LL;
  *a2 = v13;
  if ( v13 )
  {
    memset(v13, 0, 0x40uLL);
    LODWORD((*a2)[2].Count) = 1380865871;
    ExInitializeRundownProtection(*a2 + 4);
    KeInitializeSpinLock(&(*a2)[5].Count);
    v14 = KeAcquireSpinLockRaiseToDpc(&gmutOwnerList);
    v15 = (struct _EX_RUNDOWN_REF **)off_14008CA70;
    byte_14008EB40 = v14;
    v16 = *a2;
    if ( *off_14008CA70 != (_UNKNOWN *)&glistObjOwners )
      goto LABEL_18;
    v16[1].Count = (unsigned __int64)off_14008CA70;
    v16->Count = (unsigned __int64)&glistObjOwners;
    *v15 = v16;
    off_14008CA70 = (_UNKNOWN **)v16;
    KeReleaseSpinLock(&gmutOwnerList, byte_14008EB40);
  }
  else
  {
    LogError(3221225626LL);
    AcpiDiagTraceAmlError(0LL, 3221225626LL);
    PrintDebugMessage(113, 0, 0, 0, 0LL);
    return (unsigned int)-1073741670;
  }
  return v2;
}
