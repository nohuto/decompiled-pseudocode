/*
 * XREFs of TppPrepareDirectParams @ 0x18002AC40
 * Callers:
 *     TppWorkerThread @ 0x180028B50 (TppWorkerThread.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     NtReleaseWorkerFactoryWorker @ 0x180161E10 (NtReleaseWorkerFactoryWorker.c)
 *     memmove @ 0x180164600 (memmove.c)
 */

__int64 __fastcall TppPrepareDirectParams(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        char *a6)
{
  __int64 v6; // r14
  unsigned __int64 v7; // rsi
  int v9; // edx
  bool v10; // r12
  int v12; // r15d
  unsigned int v13; // eax
  unsigned int v14; // eax
  _OWORD *v15; // rcx
  __int64 v16; // r8
  _RTL_SRWLOCK *v17; // rax
  bool v18; // r11
  signed __int64 v19; // rax
  unsigned __int8 v20; // di
  char v21; // si
  int v22; // r9d
  char v23; // r8
  unsigned int v24; // r10d
  signed __int64 v25; // rtt
  __int64 result; // rax
  unsigned __int64 *v27; // rdi
  _RTL_SRWLOCK *v28; // rcx
  unsigned __int64 *v29; // rdi
  _QWORD *v30; // rax
  unsigned __int64 **v31; // rdx
  __int64 v32; // rax
  _QWORD *v33; // r8
  int v34; // ecx
  int v35; // edx
  signed __int32 v36; // eax
  unsigned int v37; // eax
  unsigned int v38; // ebp
  __int64 v39; // rdi
  unsigned int i; // ebp
  unsigned int v41; // edi
  __int64 *v42; // rax
  unsigned __int64 v43; // rsi
  int v44; // ebp
  unsigned int v45; // edi
  unsigned int j; // esi
  __int64 v47; // rdi
  __int64 v48; // rdx
  _QWORD *v49; // rcx
  __int64 *v50; // r8
  __int64 v51; // rdx
  __int64 **v52; // rax
  signed __int32 v53; // edx
  signed __int32 v54; // ett
  _RTL_SRWLOCK *v55; // rcx
  _QWORD *v56; // rax
  _QWORD *v57; // rcx
  __int64 v58; // [rsp+0h] [rbp-98h] BYREF
  unsigned int v59; // [rsp+20h] [rbp-78h]
  PRTL_SRWLOCK SRWLock; // [rsp+28h] [rbp-70h]
  unsigned __int64 *v61; // [rsp+30h] [rbp-68h]
  unsigned __int64 v62; // [rsp+38h] [rbp-60h]
  _QWORD *v63; // [rsp+40h] [rbp-58h]
  _QWORD *v64; // [rsp+48h] [rbp-50h]
  _OWORD v65[4]; // [rsp+50h] [rbp-48h] BYREF
  char v66; // [rsp+A0h] [rbp+8h]
  signed __int64 v67; // [rsp+A0h] [rbp+8h]
  int v68; // [rsp+A8h] [rbp+10h]
  unsigned __int64 v69; // [rsp+A8h] [rbp+10h]

  v6 = a1 + 312;
  v7 = 0LL;
  v9 = 0;
  v59 = 0;
  v10 = 0;
  v68 = 0;
  v66 = 0;
  v12 = 0;
  v65[0] = 0LL;
  if ( a2 == a1 + 312 )
  {
    v10 = *(_QWORD *)v6 != 0LL;
    v18 = *(_QWORD *)v6 == 0LL;
    goto LABEL_12;
  }
  *(_QWORD *)v6 = 0LL;
  *((_QWORD *)&v65[0] + 1) = v65;
  *(_QWORD *)&v65[0] = v65;
  v13 = a3;
  v62 = a2 + 56LL * a4;
  *(_DWORD *)(v62 + 8) = a3 + *(_DWORD *)(v62 + 8) - 1;
  do
  {
    v14 = v13 - 1;
    v15 = (_OWORD *)(a2 + 32LL * v14);
    v59 = v14;
    v16 = v14;
    v17 = *(_RTL_SRWLOCK **)v15;
    v61 = (unsigned __int64 *)v17;
    if ( v17 )
    {
      if ( v10 )
      {
        v27 = (unsigned __int64 *)(a2 + 56 * v16);
        SRWLock = v17 + 4;
        memmove(v27, v15, 0x20uLL);
        v28 = SRWLock;
        v27[6] = v62;
        RtlAcquireSRWLockExclusive(v28);
        v29 = v27 + 4;
        v30 = v61 + 5;
        v64 = v61 + 5;
        v31 = (unsigned __int64 **)v61[6];
        v63 = (_QWORD *)v61[5];
        if ( *v31 != v61 + 5 )
          goto LABEL_32;
        v55 = SRWLock;
        *v29 = (unsigned __int64)v30;
        v29[1] = (unsigned __int64)v31;
        *v31 = v29;
        v30[1] = v29;
        RtlReleaseSRWLockExclusive(v55);
        v9 = ++v68;
        if ( v63 == v64 )
        {
          v56 = (_QWORD *)*((_QWORD *)&v65[0] + 1);
          v57 = v61 + 2;
          if ( **((_OWORD ***)&v65[0] + 1) != v65 )
LABEL_32:
            __fastfail(3u);
          v61[3] = *((_QWORD *)&v65[0] + 1);
          *v57 = v65;
          ++v12;
          *v56 = v57;
          *((_QWORD *)&v65[0] + 1) = v57;
        }
      }
      else
      {
        v10 = 1;
        *(_OWORD *)v6 = *v15;
        *(_OWORD *)(v6 + 16) = v15[1];
      }
    }
    else
    {
      v66 = 1;
    }
    v13 = v59;
  }
  while ( v59 );
  if ( v9 != a3 - 1 && _InterlockedExchangeAdd((volatile signed __int32 *)(v62 + 8), 0xFFFFFFFF) == 1 )
    RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, TppHeapTag + 3145728, *(PVOID *)v62);
  if ( !v12 )
    goto LABEL_11;
  v32 = *(_QWORD *)&v65[0] - 16LL;
  v33 = &v58 + 8;
  v34 = -2;
  if ( (_QWORD *)(*(_QWORD *)&v65[0] - 16LL) != v33 )
  {
    do
    {
      v35 = *(_DWORD *)(v32 + 8);
      v7 |= 1LL << v35;
      if ( v34 != -1 )
      {
        if ( v34 == -2 )
        {
          v34 = *(_DWORD *)(v32 + 8);
        }
        else if ( v34 != v35 )
        {
          v34 = -1;
        }
      }
      v32 = *(_QWORD *)(v32 + 16) - 16LL;
    }
    while ( (_QWORD *)v32 != v33 );
  }
  _m_prefetchw((const void *)(a5 + 428));
  v36 = *(_DWORD *)(a5 + 428);
  do
  {
    if ( v36 == -2 )
    {
      v53 = v34;
      goto LABEL_61;
    }
    if ( v36 == v34 || v36 == -1 )
      break;
    v53 = -1;
LABEL_61:
    v54 = v36;
    v36 = _InterlockedCompareExchange((volatile signed __int32 *)(a5 + 428), v53, v36);
  }
  while ( v54 != v36 );
  if ( (_DWORD)v7 )
  {
    v37 = v7;
    v38 = v7;
    do
    {
      _BitScanForward((unsigned int *)&v39, v37);
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(*(_QWORD *)(a5 + 24) + 8 * (v39 + 2 * (v39 + 1))));
      v37 = v38 & ~(1 << v39);
      v38 = v37;
    }
    while ( v37 );
  }
  for ( i = HIDWORD(v7); i; i &= ~(1 << v41) )
  {
    _BitScanForward(&v41, i);
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(*(_QWORD *)(a5 + 24) + 8 * (v41 + 32 + 2 * (v41 + 32 + 1LL))));
  }
  while ( 1 )
  {
    v42 = *(__int64 **)&v65[0];
    if ( *(_OWORD **)&v65[0] == v65 )
      break;
    v48 = **(_QWORD **)&v65[0];
    if ( *(_QWORD *)(**(_QWORD **)&v65[0] + 8LL) != *(_QWORD *)&v65[0] )
      goto LABEL_32;
    v49 = *(_QWORD **)(*(_QWORD *)&v65[0] + 8LL);
    if ( *v49 != *(_QWORD *)&v65[0] )
      goto LABEL_32;
    *v49 = v48;
    v50 = v42;
    *(_QWORD *)(v48 + 8) = v49;
    v51 = *(_QWORD *)(a5 + 24) + 24LL * *((unsigned int *)v42 - 2);
    v52 = *(__int64 ***)(v51 + 8);
    if ( *v52 != (__int64 *)v51 )
      goto LABEL_32;
    *v50 = v51;
    v50[1] = (__int64)v52;
    *v52 = v50;
    *(_QWORD *)(v51 + 8) = v50;
  }
  v69 = v7;
  v43 = HIDWORD(v7);
  if ( (_DWORD)v43 )
  {
    v44 = HIDWORD(v69);
    do
    {
      _BitScanReverse(&v45, v43);
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(*(_QWORD *)(a5 + 24) + 8 * (v45 + 32 + 2 * (v45 + 32 + 1LL))));
      v44 &= ~(1 << v45);
      LODWORD(v43) = v44;
    }
    while ( v44 );
  }
  for ( j = v69; j; j &= ~(1 << v47) )
  {
    _BitScanReverse((unsigned int *)&v47, j);
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(*(_QWORD *)(a5 + 24) + 8 * (v47 + 2 * (v47 + 1))));
  }
LABEL_11:
  v18 = v66;
LABEL_12:
  _m_prefetchw((const void *)(a5 + 8));
  v19 = *(_QWORD *)(a5 + 8);
  LODWORD(v67) = v19;
  do
  {
    v20 = *(_BYTE *)(a5 + 376);
    v21 = 0;
    v22 = v12 + HIDWORD(v19);
    v23 = 0;
    HIDWORD(v67) = v12 + HIDWORD(v19);
    if ( !v20 )
    {
      v24 = v67 & 0xFFFF0000 | (unsigned __int16)(v67 - 1);
      LODWORD(v67) = v24;
      if ( v18 )
      {
        v24 = (unsigned __int16)v24 | ((HIWORD(v24) - 1) << 16);
        LODWORD(v67) = v24;
      }
      if ( !v10 )
      {
        if ( v22 )
        {
          HIDWORD(v67) = --v22;
        }
        else
        {
          v21 = 1;
          v24 = ((__int16)v24 + 1) ^ (((__int16)v24 + 1) ^ v24) & 0xFFFF0000;
          LODWORD(v67) = v24;
        }
      }
      if ( (v12 || v18) && v22 && (v24 & 0xFFFF0000) == 0 )
      {
        v23 = 1;
        LODWORD(v67) = v24 + 0x10000;
      }
    }
    v25 = v19;
    v19 = _InterlockedCompareExchange64((volatile signed __int64 *)(a5 + 8), v67, v19);
    LODWORD(v67) = v19;
  }
  while ( v25 != v19 );
  if ( v23 )
    NtReleaseWorkerFactoryWorker(*(HANDLE *)(a5 + 56));
  result = v20;
  *a6 = v21;
  return result;
}
