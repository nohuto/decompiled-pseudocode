/*
 * XREFs of VidSchEnterIndependentFlip @ 0x140002A60
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0txqqqtxtx_EtwWriteTransfer @ 0x140002F2C (McTemplateK0txqqqtxtx_EtwWriteTransfer.c)
 *     memset @ 0x14005BBC0 (memset.c)
 */

// write access to const memory has been detected, the output may be wrong!
_UNKNOWN **__fastcall VidSchEnterIndependentFlip(
        __int64 a1,
        unsigned int a2,
        struct _LUID *a3,
        __int64 a4,
        __int64 a5,
        int a6,
        _DWORD *a7,
        _QWORD *a8)
{
  _UNKNOWN **result; // rax
  int v11; // r15d
  char v12; // r12
  unsigned int v13; // r11d
  unsigned int v14; // r10d
  __int64 v15; // rbx
  __int64 v16; // r9
  __int64 v17; // rbp
  unsigned int i; // r8d
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // r9
  unsigned int *v22; // r14
  __int64 v23; // r12
  __int64 j; // rbp
  __int64 v25; // r8
  __int64 v26; // rax
  __int64 v27; // rcx
  unsigned int v28; // eax
  __int64 v29; // r12
  __int64 v30; // r10
  unsigned int v31; // r9d
  __int64 v32; // r11
  __int64 v33; // rdi
  __int64 v34; // r8
  __int64 v35; // rdx
  __int64 v36; // rcx
  int v37; // ecx
  int v38; // r8d
  bool v39; // zf
  _QWORD *v40; // rdx
  unsigned int v41; // edi
  char v42; // si
  __int64 v43; // rbp
  __int64 v44; // rcx
  __int64 v45; // r9
  struct _LUID v46; // [rsp+60h] [rbp-58h] BYREF
  _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+68h] [rbp-50h] BYREF
  _UNKNOWN *retaddr; // [rsp+B8h] [rbp+0h] BYREF

  result = &retaddr;
  *a7 = 0;
  *a8 = 0LL;
  if ( !*(_BYTE *)(a1 + 55) )
    return result;
  v46 = 0LL;
  RtlCopyLuid(&v46, a3);
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 2016), &LockHandle);
  v11 = 0;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v15 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  for ( i = a2; i; i >>= 1 )
  {
    if ( (i & 1) != 0 )
      break;
    v16 = (unsigned int)(v16 + 1);
  }
  while ( i )
  {
    v26 = *(int *)(304LL * *(unsigned int *)(a5 + 4 * v17) + *(_QWORD *)(a1 + 8 * v16 + 3448) + 188);
    if ( (int)v26 <= -1 )
    {
      v27 = 0LL;
      v15 = 0LL;
    }
    else
    {
      v15 = *(_QWORD *)(a1 + 3576) + 160 * v26;
      v27 = v15;
      if ( v15 )
        v12 = 1;
    }
    if ( !v27 )
      ++v14;
    v28 = v13 + 1;
    if ( !v27 )
      v28 = v13;
    v13 = v28;
    while ( 1 )
    {
      i >>= 1;
      if ( !i || (i & 1) != 0 )
        break;
      v16 = (unsigned int)(v16 + 1);
    }
    v17 = (unsigned int)(v17 + 1);
  }
  if ( v14 && v13 )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 281LL, 0x8000LL, v13, v14, a1);
    WdLogGlobalForLineNumber = 916;
    goto LABEL_63;
  }
  if ( !v12 )
  {
    v19 = 0LL;
    v20 = 0LL;
    while ( v19 < *(int *)(a1 + 3744) )
    {
      v21 = *(_QWORD *)(a1 + 3576);
      if ( !*(_QWORD *)(v21 + v20) )
      {
        v15 = v21 + 160LL * v11;
        if ( v11 > *(_DWORD *)(a1 + 3760) )
          *(_DWORD *)(a1 + 3760) = v11;
        break;
      }
      ++v11;
      ++v19;
      v20 += 160LL;
    }
  }
  if ( !v15 )
  {
LABEL_63:
    v44 = *(int *)(a1 + 3760);
    v45 = *(unsigned int *)(a1 + 3744);
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 281LL, 0x2000LL, v45, v44, a1);
    WdLogGlobalForLineNumber = 916;
    JUMPOUT(0x140002F07LL);
  }
  v22 = (unsigned int *)(v15 + 16);
  if ( v12 )
  {
    v29 = a4;
  }
  else
  {
    *v22 = a2;
    memset((void *)(v15 + 20), 0, 0x40uLL);
    v23 = 0LL;
    for ( j = 0LL; a2; a2 >>= 1 )
    {
      if ( (a2 & 1) != 0 )
        break;
      j = (unsigned int)(j + 1);
    }
    while ( a2 )
    {
      *(_DWORD *)(v15 + 4 * v23 + 20) = *(_DWORD *)(a5 + 4 * v23);
      v25 = (unsigned int)v23;
      v23 = (unsigned int)(v23 + 1);
      *(_DWORD *)(*(_QWORD *)(a1 + 8 * j + 3448) + 304LL * *(unsigned int *)(a5 + 4 * v25) + 188) = v11;
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))WdLogSingleEntry3)(
        8LL,
        *a3,
        a4,
        *(unsigned int *)(a5 + 4 * v25));
      WdLogGlobalForLineNumber = 13748;
      while ( 1 )
      {
        a2 >>= 1;
        if ( !a2 || (a2 & 1) != 0 )
          break;
        j = (unsigned int)(j + 1);
      }
    }
    v29 = a4;
    v22 = (unsigned int *)(v15 + 16);
    *(_QWORD *)(v15 + 112) = 1LL;
    *(struct _LUID *)v15 = v46;
    *(_QWORD *)(v15 + 8) = a4;
    *(_WORD *)(v15 + 96) = 0;
    *(_BYTE *)(v15 + 98) = 0;
  }
  v30 = 0LL;
  v31 = *v22;
  v32 = 0LL;
  *(_DWORD *)(v15 + 100) = a6;
  v33 = *(_QWORD *)(a1 + 3752);
  *(_QWORD *)(v15 + 88) = v33;
  if ( v31 )
  {
    do
    {
      if ( (v31 & 1) != 0 )
        break;
      v30 = (unsigned int)(v30 + 1);
      v31 >>= 1;
    }
    while ( v31 );
    while ( v31 )
    {
      v34 = 304LL * *(unsigned int *)(v15 + 4 * v32 + 20) + 152 + *(_QWORD *)(a1 + 8 * v30 + 3448);
      v35 = *(_QWORD *)(v15 + 88);
      v36 = 5LL * *(unsigned int *)(v34 + 216);
      *(_QWORD *)(v34 + 8 * v36 + 88) = MEMORY[0xFFFFF78000000320];
      *(_WORD *)(v34 + 8 * v36 + 56) = 257;
      *(struct _LUID *)(v34 + 8 * v36 + 60) = v46;
      *(_QWORD *)(v34 + 8 * v36 + 72) = v29;
      *(_QWORD *)(v34 + 8 * v36 + 80) = v35;
      *(_DWORD *)(v34 + 216) = ((unsigned __int8)*(_DWORD *)(v34 + 216) + 1) & 3;
      while ( 1 )
      {
        v31 >>= 1;
        if ( !v31 || (v31 & 1) != 0 )
          break;
        v30 = (unsigned int)(v30 + 1);
      }
      v32 = (unsigned int)(v32 + 1);
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  v39 = bTracingEnabled == 0;
  v40 = a8;
  *a8 = v33;
  if ( !v39 )
  {
    v41 = *(_DWORD *)(v15 + 16);
    v42 = 0;
    v43 = 0LL;
    if ( v41 )
    {
      do
      {
        if ( (v41 & 1) != 0 )
          break;
        ++v42;
        v41 >>= 1;
      }
      while ( v41 );
      while ( v41 )
      {
        if ( (byte_14008A201 & 1) != 0 )
        {
          McTemplateK0txqqqtxtx_EtwWriteTransfer(
            v37,
            (_DWORD)v40,
            v38,
            1,
            v46.LowPart,
            v42,
            *(_DWORD *)(v15 + 4 * v43 + 20),
            a6,
            0,
            v29,
            1,
            *v40);
          v40 = a8;
        }
        while ( 1 )
        {
          v41 >>= 1;
          if ( !v41 || (v41 & 1) != 0 )
            break;
          ++v42;
        }
        v43 = (unsigned int)(v43 + 1);
      }
    }
  }
  result = (_UNKNOWN **)a7;
  *a7 = 1;
  return result;
}
