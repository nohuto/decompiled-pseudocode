/*
 * XREFs of PushAccFieldObj @ 0x1400010C0
 * Callers:
 *     PreserveWriteObj @ 0x140001010 (PreserveWriteObj.c)
 *     WriteFieldObj @ 0x1400038F0 (WriteFieldObj.c)
 *     ReadFieldObj @ 0x140004180 (ReadFieldObj.c)
 *     AccessFieldData @ 0x1400047D0 (AccessFieldData.c)
 * Callees:
 *     NewLocalHeap @ 0x140002E5C (NewLocalHeap.c)
 *     LogError @ 0x140007244 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1400072EC (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140007434 (PrintDebugMessage.c)
 *     NewGlobalHeap @ 0x14006F800 (NewGlobalHeap.c)
 *     memmove @ 0x140072440 (memmove.c)
 *     memset @ 0x140072740 (memset.c)
 */

__int64 __fastcall PushAccFieldObj(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4, __int64 a5, unsigned int a6)
{
  __int64 v6; // rdi
  __int64 v7; // rbp
  unsigned int v10; // r14d
  __int64 v11; // rbx
  __int64 v12; // r13
  unsigned int v13; // ecx
  int v14; // esi
  unsigned int v15; // esi
  KIRQL v16; // al
  __int64 **v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // r10
  __int64 v21; // rax
  __int64 v22; // rbx
  __int64 v23; // r13
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rax
  unsigned int v31; // ecx
  int v32; // r8d
  __int64 v33; // rax
  unsigned int v34; // r8d
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rdi
  __int64 v38; // rax
  unsigned int v39; // r8d
  __int64 v40; // rcx
  __int64 v41; // rcx
  int v43; // eax
  __int64 v44; // r9
  _QWORD *v45; // rcx
  __int64 **v46; // r10
  unsigned int v47; // eax
  __int64 *i; // rax
  __int64 **v49; // rcx
  __int64 *v50; // r11
  _QWORD *v51; // rsi
  __int64 v52; // rcx
  __int64 **v53; // rax
  __int64 **v54; // rsi
  _QWORD *v55; // r10
  __int64 v56; // rcx
  _QWORD *v57; // rax
  __int64 v58; // rbp
  __int64 v59; // rcx
  _QWORD *v60; // rax
  __int64 v61; // rcx
  __int64 *v62; // rcx
  __int64 **v63; // rax
  __int64 v64; // [rsp+80h] [rbp+8h] BYREF
  __int64 v65; // [rsp+88h] [rbp+10h]
  __int64 v66; // [rsp+90h] [rbp+18h]
  __int64 v67; // [rsp+98h] [rbp+20h]

  v66 = a3;
  v65 = a2;
  v6 = 0LL;
  v7 = a1 + 480;
  v10 = 0;
  v11 = 0LL;
  v12 = a1 + 480;
  v67 = 0LL;
  if ( a4[5] )
  {
    v13 = a4[7] + 144;
    if ( v13 < a4[7] + 128 )
      goto LABEL_42;
  }
  else
  {
    v13 = 144;
  }
  if ( v13 >= 0x20 )
  {
    v14 = v13 + 7;
    if ( v13 + 7 >= v13 )
      goto LABEL_5;
LABEL_42:
    v10 = -1072431102;
    LogError(3222536194LL);
    AcpiDiagTraceAmlError(a1, 3222536194LL);
    PrintDebugMessage(153, 0, 0, 0, 0LL);
    return v10;
  }
  v14 = 39;
LABEL_5:
  v15 = v14 & 0xFFFFFFF8;
  v16 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
  v19 = v7;
  byte_14008EB20 = v16;
  v64 = v7;
  v20 = v7;
  v21 = v7;
  while ( 2 )
  {
    if ( v21 )
    {
      v22 = *(_QWORD *)(v12 + 40);
      v17 = (__int64 **)(v12 + 40);
      v67 = v20;
      while ( 1 )
      {
        v11 = v22 - 16;
        if ( v17 == (__int64 **)(v11 + 16) )
        {
          v11 = 0LL;
          goto LABEL_10;
        }
        if ( v15 <= *(_DWORD *)(v11 + 4) )
          break;
        v22 = *(_QWORD *)(v11 + 16);
      }
      if ( v11 )
      {
        v44 = *(_QWORD *)(v11 + 16);
        if ( *(_QWORD *)(v44 + 8) != v11 + 16 )
          goto LABEL_66;
        v45 = *(_QWORD **)(v11 + 24);
        if ( *v45 != v11 + 16 )
          goto LABEL_66;
        *v45 = v44;
        *(_QWORD *)(v44 + 8) = v45;
        v18 = v15;
        if ( *(unsigned int *)(v11 + 4) >= (unsigned __int64)v15 + 32 )
        {
          v46 = (__int64 **)(v11 + v15);
          *(_DWORD *)v46 = 0;
          v47 = *(_DWORD *)(v11 + 4) - v15;
          v46[1] = (__int64 *)v19;
          *((_DWORD *)v46 + 1) = v47;
          *(_DWORD *)(v11 + 4) = v15;
          for ( i = *v17; i != (__int64 *)v17; i = (__int64 *)*i )
          {
            if ( v46 + 2 < (__int64 **)i )
              break;
          }
          v49 = (__int64 **)i[1];
          v50 = (__int64 *)(v46 + 2);
          if ( *v49 != i )
            goto LABEL_66;
          v46[3] = (__int64 *)v49;
          *v50 = (__int64)i;
          *v49 = v50;
          i[1] = (__int64)v50;
          v51 = (_QWORD *)*v50;
          v52 = *v50 - 16;
          if ( (__int64 **)*v50 != v17 )
          {
            v58 = *((unsigned int *)v46 + 1);
            if ( (__int64 **)v52 == (__int64 **)((char *)v46 + v58) )
            {
              *((_DWORD *)v46 + 1) = v58 + *(_DWORD *)(v52 + 4);
              v59 = *v51;
              if ( *(_QWORD **)(*v51 + 8LL) == v51 )
              {
                v60 = (_QWORD *)v51[1];
                if ( (_QWORD *)*v60 == v51 )
                {
                  *v60 = v59;
                  *(_QWORD *)(v59 + 8) = v60;
                  goto LABEL_61;
                }
              }
LABEL_66:
              __fastfail(3u);
            }
          }
LABEL_61:
          v53 = (__int64 **)v46[3];
          v54 = v53 - 2;
          if ( v53 != v17 )
          {
            v61 = *((unsigned int *)v54 + 1);
            if ( v46 == (__int64 **)((char *)v54 + v61) )
            {
              *((_DWORD *)v54 + 1) = *((_DWORD *)v46 + 1) + v61;
              v62 = (__int64 *)*v50;
              if ( *(__int64 **)(*v50 + 8) != v50 )
                goto LABEL_66;
              v63 = (__int64 **)v46[3];
              if ( *v63 != v50 )
                goto LABEL_66;
              *v63 = v62;
              v46 = v54;
              v62[1] = (__int64)v63;
            }
          }
          if ( *(_QWORD *)(v19 + 32) <= (unsigned __int64)v46 + *((unsigned int *)v46 + 1) )
          {
            *(_QWORD *)(v19 + 32) = v46;
            v55 = v46 + 2;
            v56 = *v55;
            if ( *(_QWORD **)(*v55 + 8LL) != v55 )
              goto LABEL_66;
            v57 = (_QWORD *)v55[1];
            if ( (_QWORD *)*v57 != v55 )
              goto LABEL_66;
            *v57 = v56;
            *(_QWORD *)(v56 + 8) = v57;
          }
        }
        goto LABEL_15;
      }
LABEL_10:
      if ( v15 > *(_DWORD *)(v19 + 8) - *(_DWORD *)(v19 + 32) )
      {
        v21 = *(_QWORD *)(v19 + 24);
        v19 = v21;
        v64 = v21;
        v20 = v21;
        v12 = v21;
        continue;
      }
      v11 = *(_QWORD *)(v19 + 32);
      v23 = v20;
      v18 = v15;
      *(_QWORD *)(v19 + 32) = v15 + v11;
      *(_DWORD *)(v11 + 4) = v15;
      if ( v11 )
        goto LABEL_15;
    }
    else
    {
      v23 = v67;
    }
    break;
  }
  if ( v7 == gpheapGlobal )
  {
    if ( v15 + 56 > (unsigned int)gdwGlobalHeapBlkSize )
    {
      v19 = v15 % (unsigned int)gdwGlobalHeapBlkSize;
      if ( (unsigned int)gdwGlobalHeapBlkSize * (v15 / (unsigned int)gdwGlobalHeapBlkSize + 1) > 0x800000 )
      {
        if ( v15 > 0x800000 )
          goto LABEL_16;
        LODWORD(gdwGlobalHeapBlkSize) = v15;
      }
      else
      {
        LODWORD(gdwGlobalHeapBlkSize) = gdwGlobalHeapBlkSize * (v15 / (unsigned int)gdwGlobalHeapBlkSize + 1);
      }
    }
    v43 = NewGlobalHeap(&v64, v19, v17, v18);
  }
  else
  {
    v43 = NewLocalHeap(&v64, v19, v17, v18);
  }
  if ( !v43 )
  {
    v19 = v64;
    v18 = v15;
    *(_QWORD *)(v64 + 16) = v7;
    *(_QWORD *)(v23 + 24) = v19;
    v11 = *(_QWORD *)(v19 + 32);
    *(_QWORD *)(v19 + 32) = v11 + v15;
    *(_DWORD *)(v11 + 4) = v15;
    if ( v11 )
    {
LABEL_15:
      *(_QWORD *)(v11 + 8) = v19;
      *(_DWORD *)v11 = 1297237576;
      memset((void *)(v11 + 16), 0, v18 - 16);
    }
  }
LABEL_16:
  KeReleaseSpinLock(&gmutHeap, byte_14008EB20);
  v24 = v11 + 16;
  if ( !v11 )
    v24 = 0LL;
  if ( !v24 )
    goto LABEL_42;
  *(_QWORD *)(v24 + 8) = *(_QWORD *)(a1 + 416);
  v25 = v65;
  *(_QWORD *)(a1 + 416) = v24;
  *(_QWORD *)(v24 + 24) = v25;
  v26 = v11 + 48;
  *(_DWORD *)v24 = 1330004801;
  if ( !v11 )
    v26 = 32LL;
  *(_QWORD *)v26 = v66;
  v27 = v11 + 56;
  if ( !v11 )
    v27 = 40LL;
  v28 = a5;
  *(_QWORD *)v27 = a5;
  v29 = v28 + a6;
  v30 = v11 + 64;
  if ( !v11 )
    v30 = 48LL;
  *(_QWORD *)v30 = v29;
  v31 = a4[3] & 0xF;
  if ( v31 && v31 <= 4 )
    v32 = 1 << (v31 - 1);
  else
    v32 = 1;
  v33 = v11 + 72;
  if ( !v11 )
    v33 = 56LL;
  *(_DWORD *)v33 = v32;
  v34 = 8 * v32;
  v35 = v11 + 76;
  if ( !v11 )
    v35 = 60LL;
  *(_DWORD *)v35 = (v34 + a4[2] + a4[1] - 1) / v34;
  v36 = v11 + 80;
  if ( v34 < 0x40 )
    v6 = 1LL << v34;
  v37 = v6 - 1;
  if ( !v11 )
    v36 = 64LL;
  *(_QWORD *)v36 = v37;
  v38 = v11 + 88;
  v39 = v34 - a4[1];
  if ( !v11 )
    v38 = 72LL;
  v40 = v11 + 92;
  *(_DWORD *)v38 = v39;
  if ( !v11 )
    v40 = 76LL;
  *(_DWORD *)v40 = a4[1];
  v41 = v11 + 112;
  if ( !v11 )
    v41 = 96LL;
  memmove((void *)v41, a4, (unsigned int)(a4[7] + 32));
  return v10;
}
