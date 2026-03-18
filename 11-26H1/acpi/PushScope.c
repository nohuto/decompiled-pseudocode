/*
 * XREFs of PushScope @ 0x1400138A0
 * Callers:
 *     ParseCall @ 0x14000B5D0 (ParseCall.c)
 *     While @ 0x140012000 (While.c)
 *     IfElse @ 0x140013020 (IfElse.c)
 *     Scope @ 0x140030B30 (Scope.c)
 *     Device @ 0x14004E4C0 (Device.c)
 *     ParseLoad @ 0x140052DE0 (ParseLoad.c)
 *     PowerRes @ 0x14006FAA0 (PowerRes.c)
 *     Processor @ 0x14006FC20 (Processor.c)
 *     ThermalZone @ 0x14006FD90 (ThermalZone.c)
 * Callees:
 *     NewLocalHeap @ 0x140002E5C (NewLocalHeap.c)
 *     LogError @ 0x140007244 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1400072EC (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140007434 (PrintDebugMessage.c)
 *     NewGlobalHeap @ 0x14006F800 (NewGlobalHeap.c)
 */

__int64 __fastcall PushScope(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  unsigned int v8; // edi
  _QWORD *v9; // rbp
  __int64 v11; // rbx
  _QWORD *v12; // r14
  KIRQL v16; // al
  _QWORD *v17; // r9
  _QWORD *v18; // r8
  _QWORD *v19; // rax
  unsigned __int64 v20; // rdx
  __int64 v21; // rbx
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rcx
  char v27; // al
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rcx
  int v32; // eax
  __int64 v33; // r8
  _QWORD *v34; // rcx
  unsigned int v35; // eax
  char *v36; // r8
  __int64 *v37; // rax
  __int64 **v38; // rcx
  __int64 *v39; // r10
  _QWORD *v40; // r11
  __int64 v41; // rcx
  _QWORD *v42; // rax
  _QWORD *v43; // r11
  _QWORD *v44; // r8
  __int64 v45; // rcx
  _QWORD *v46; // rax
  __int64 v47; // rbp
  __int64 v48; // rcx
  _QWORD *v49; // rax
  __int64 v50; // rcx
  __int64 *v51; // rcx
  __int64 **v52; // rax
  _QWORD *v53; // [rsp+70h] [rbp+8h] BYREF

  v8 = 0;
  v9 = a1 + 60;
  v11 = 0LL;
  v12 = 0LL;
  v16 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
  v17 = v9;
  v53 = v9;
  byte_14008EB20 = v16;
  v18 = v9;
  v19 = v9;
  v20 = (unsigned __int64)v9;
  while ( 2 )
  {
    if ( v19 )
    {
      v21 = *(_QWORD *)(v20 + 40);
      v20 += 40LL;
      v12 = v18;
      while ( 1 )
      {
        v11 = v21 - 16;
        if ( v20 == v11 + 16 )
        {
          v11 = 0LL;
          goto LABEL_6;
        }
        if ( *(_DWORD *)(v11 + 4) >= 0x60u )
          break;
        v21 = *(_QWORD *)(v11 + 16);
      }
      if ( v11 )
      {
        v33 = *(_QWORD *)(v11 + 16);
        if ( *(_QWORD *)(v33 + 8) != v11 + 16 )
          goto LABEL_49;
        v34 = *(_QWORD **)(v11 + 24);
        if ( *v34 != v11 + 16 )
          goto LABEL_49;
        *v34 = v33;
        *(_QWORD *)(v33 + 8) = v34;
        v35 = *(_DWORD *)(v11 + 4);
        if ( v35 >= 0x80 )
        {
          v36 = (char *)(v11 + 96);
          *(_DWORD *)(v11 + 96) = 0;
          *(_DWORD *)(v11 + 100) = v35 - 96;
          *(_QWORD *)(v11 + 104) = v17;
          *(_DWORD *)(v11 + 4) = 96;
          v37 = *(__int64 **)v20;
          if ( *(_QWORD *)v20 != v20 )
          {
            do
            {
              if ( v11 + 112 < (unsigned __int64)v37 )
                break;
              v37 = (__int64 *)*v37;
            }
            while ( v37 != (__int64 *)v20 );
          }
          v38 = (__int64 **)v37[1];
          v39 = (__int64 *)(v11 + 112);
          if ( *v38 != v37 )
            goto LABEL_49;
          *(_QWORD *)(v11 + 120) = v38;
          *v39 = (__int64)v37;
          *v38 = v39;
          v37[1] = (__int64)v39;
          v40 = (_QWORD *)*v39;
          v41 = *v39 - 16;
          if ( *v39 != v20 )
          {
            v47 = *(unsigned int *)(v11 + 100);
            if ( (char *)v41 == &v36[v47] )
            {
              *(_DWORD *)(v11 + 100) = v47 + *(_DWORD *)(v41 + 4);
              v48 = *v40;
              if ( *(_QWORD **)(*v40 + 8LL) == v40 )
              {
                v49 = (_QWORD *)v40[1];
                if ( (_QWORD *)*v49 == v40 )
                {
                  *v49 = v48;
                  *(_QWORD *)(v48 + 8) = v49;
                  goto LABEL_44;
                }
              }
LABEL_49:
              __fastfail(3u);
            }
          }
LABEL_44:
          v42 = *(_QWORD **)(v11 + 120);
          v43 = v42 - 2;
          if ( v42 != (_QWORD *)v20 )
          {
            v50 = *((unsigned int *)v43 + 1);
            if ( v36 == (char *)v43 + v50 )
            {
              *((_DWORD *)v43 + 1) = *(_DWORD *)(v11 + 100) + v50;
              v51 = (__int64 *)*v39;
              if ( *(__int64 **)(*v39 + 8) != v39 )
                goto LABEL_49;
              v52 = *(__int64 ***)(v11 + 120);
              if ( *v52 != v39 )
                goto LABEL_49;
              *v52 = v51;
              v36 = (char *)v43;
              v51[1] = (__int64)v52;
            }
          }
          if ( v17[4] <= (unsigned __int64)&v36[*((unsigned int *)v36 + 1)] )
          {
            v17[4] = v36;
            v44 = v36 + 16;
            v45 = *v44;
            if ( *(_QWORD **)(*v44 + 8LL) != v44 )
              goto LABEL_49;
            v46 = (_QWORD *)v44[1];
            if ( (_QWORD *)*v46 != v44 )
              goto LABEL_49;
            *v46 = v45;
            *(_QWORD *)(v45 + 8) = v46;
          }
        }
        goto LABEL_11;
      }
LABEL_6:
      if ( (unsigned int)(*((_DWORD *)v17 + 2) - *((_DWORD *)v17 + 8)) < 0x60 )
      {
        v19 = (_QWORD *)v17[3];
        v17 = v19;
        v53 = v19;
        v18 = v19;
        v20 = (unsigned __int64)v19;
        continue;
      }
      v11 = v17[4];
      v17[4] = v11 + 96;
      *(_DWORD *)(v11 + 4) = 96;
      if ( v11 )
        goto LABEL_11;
    }
    break;
  }
  if ( v9 == (_QWORD *)gpheapGlobal )
  {
    if ( (unsigned int)gdwGlobalHeapBlkSize < 0x98 )
    {
      v20 = 0x60 % (unsigned int)gdwGlobalHeapBlkSize;
      LODWORD(gdwGlobalHeapBlkSize) = gdwGlobalHeapBlkSize * (0x60 / (unsigned int)gdwGlobalHeapBlkSize + 1);
      if ( (unsigned int)gdwGlobalHeapBlkSize > 0x800000 )
        LODWORD(gdwGlobalHeapBlkSize) = 96;
    }
    v32 = NewGlobalHeap(&v53, v20, v18, v17);
  }
  else
  {
    v32 = NewLocalHeap(&v53);
  }
  if ( !v32 )
  {
    v17 = v53;
    v53[2] = v9;
    v12[3] = v17;
    v11 = v17[4];
    v17[4] = v11 + 96;
    *(_DWORD *)(v11 + 4) = 96;
    if ( v11 )
    {
LABEL_11:
      *(_DWORD *)v11 = 1297237576;
      *(_QWORD *)(v11 + 8) = v17;
      *(_OWORD *)(v11 + 16) = 0LL;
      *(_OWORD *)(v11 + 32) = 0LL;
      *(_OWORD *)(v11 + 48) = 0LL;
      *(_OWORD *)(v11 + 64) = 0LL;
      *(_OWORD *)(v11 + 80) = 0LL;
    }
  }
  KeReleaseSpinLock(&gmutHeap, byte_14008EB20);
  v22 = v11 + 16;
  if ( !v11 )
    v22 = 0LL;
  if ( v22 )
  {
    *(_QWORD *)(v22 + 8) = a1[52];
    a1[52] = v22;
    *(_QWORD *)(v22 + 24) = ParseScope;
    v23 = v11 + 48;
    *(_DWORD *)v22 = 1347371859;
    if ( !v11 )
      v23 = 32LL;
    a1[15] = a2;
    *(_QWORD *)v23 = a3;
    v24 = v11 + 56;
    if ( !v11 )
      v24 = 40LL;
    v25 = v11 + 64;
    *(_QWORD *)v24 = a4;
    if ( !v11 )
      v25 = 48LL;
    *(_QWORD *)v25 = a1[10];
    v26 = a5;
    v27 = gdwfAMLI;
    a1[10] = a5;
    if ( (v27 & 4) != 0 )
      _InterlockedIncrement((volatile signed __int32 *)(v26 + 112));
    v28 = v11 + 72;
    if ( !v11 )
      v28 = 56LL;
    *(_QWORD *)v28 = a1[11];
    v29 = v11 + 80;
    a1[11] = a6;
    if ( !v11 )
      v29 = 64LL;
    *(_QWORD *)v29 = a1[40];
    v30 = v11 + 88;
    a1[40] = a7;
    if ( !v11 )
      v30 = 72LL;
    *(_QWORD *)v30 = a8;
  }
  else
  {
    LogError(-1072431102);
    AcpiDiagTraceAmlError((__int64)a1, -1072431102);
    PrintDebugMessage(0x99u, 0LL, 0LL, 0LL, 0LL);
    return (unsigned int)-1072431102;
  }
  return v8;
}
