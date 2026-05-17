/*
 * XREFs of TppPrepareDirectParams @ 0x1800406D0
 * Callers:
 *     TppWorkerThread @ 0x18003E5E0 (TppWorkerThread.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     NtReleaseWorkerFactoryWorker @ 0x180161F10 (NtReleaseWorkerFactoryWorker.c)
 *     memmove @ 0x180164700 (memmove.c)
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
  __int64 v9; // rdx
  bool v10; // r12
  int v12; // r15d
  unsigned int v13; // eax
  unsigned int v14; // eax
  _OWORD *v15; // rcx
  __int64 v16; // r8
  _QWORD *v17; // rax
  bool v18; // r11
  signed __int64 v19; // rax
  unsigned __int8 v20; // di
  char v21; // si
  int v22; // r9d
  char v23; // r8
  unsigned int v24; // r10d
  signed __int64 v25; // rtt
  __int64 result; // rax
  _QWORD *v27; // rdi
  volatile signed __int64 *v28; // rcx
  __int64 v29; // rdx
  _QWORD *v30; // rdi
  _QWORD *v31; // rax
  _QWORD *v32; // rdx
  __int64 v33; // rax
  _QWORD *v34; // r8
  unsigned int v35; // ecx
  signed __int32 v36; // eax
  unsigned int v37; // eax
  unsigned int v38; // ebp
  __int64 v39; // rdi
  unsigned int i; // ebp
  unsigned int v41; // edi
  __int64 v42; // rdx
  __int64 *v43; // rax
  unsigned __int64 v44; // rsi
  int v45; // ebp
  unsigned int v46; // edi
  unsigned int j; // esi
  __int64 v48; // rdi
  __int64 v49; // rdx
  _QWORD *v50; // rcx
  __int64 *v51; // r8
  __int64 v52; // rdx
  __int64 **v53; // rax
  signed __int32 v54; // ett
  volatile signed __int64 *v55; // rcx
  _QWORD *v56; // rax
  _QWORD *v57; // rcx
  __int64 v58; // [rsp+0h] [rbp-98h] BYREF
  unsigned int v59; // [rsp+20h] [rbp-78h]
  volatile signed __int64 *v60; // [rsp+28h] [rbp-70h]
  _QWORD *v61; // [rsp+30h] [rbp-68h]
  __int64 v62; // [rsp+38h] [rbp-60h]
  _QWORD *v63; // [rsp+40h] [rbp-58h]
  _QWORD *v64; // [rsp+48h] [rbp-50h]
  _OWORD v65[4]; // [rsp+50h] [rbp-48h] BYREF
  char v66; // [rsp+A0h] [rbp+8h]
  signed __int64 v67; // [rsp+A0h] [rbp+8h]
  int v68; // [rsp+A8h] [rbp+10h]
  unsigned __int64 v69; // [rsp+A8h] [rbp+10h]

  v6 = a1 + 312;
  v7 = 0LL;
  v9 = 0LL;
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
    v17 = *(_QWORD **)v15;
    v61 = v17;
    if ( v17 )
    {
      if ( v10 )
      {
        v27 = (_QWORD *)(a2 + 56 * v16);
        v60 = v17 + 4;
        memmove(v27, v15, 0x20uLL);
        v28 = v60;
        v27[6] = v62;
        RtlAcquireSRWLockExclusive(v28, v29);
        v30 = v27 + 4;
        v31 = v61 + 5;
        v64 = v61 + 5;
        v32 = (_QWORD *)v61[6];
        v63 = (_QWORD *)v61[5];
        if ( (_QWORD *)*v32 != v61 + 5 )
          goto LABEL_32;
        v55 = v60;
        *v30 = v31;
        v30[1] = v32;
        *v32 = v30;
        v31[1] = v30;
        RtlReleaseSRWLockExclusive(v55);
        v9 = (unsigned int)++v68;
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
  if ( (_DWORD)v9 != a3 - 1 && _InterlockedExchangeAdd((volatile signed __int32 *)(v62 + 8), 0xFFFFFFFF) == 1 )
    RtlFreeHeap_0();
  if ( !v12 )
    goto LABEL_11;
  v33 = *(_QWORD *)&v65[0] - 16LL;
  v34 = &v58 + 8;
  v35 = -2;
  if ( (_QWORD *)(*(_QWORD *)&v65[0] - 16LL) != v34 )
  {
    do
    {
      v9 = *(unsigned int *)(v33 + 8);
      v7 |= 1LL << v9;
      if ( v35 != -1 )
      {
        if ( v35 == -2 )
        {
          v35 = *(_DWORD *)(v33 + 8);
        }
        else if ( v35 != (_DWORD)v9 )
        {
          v35 = -1;
        }
      }
      v33 = *(_QWORD *)(v33 + 16) - 16LL;
    }
    while ( (_QWORD *)v33 != v34 );
  }
  _m_prefetchw((const void *)(a5 + 428));
  v36 = *(_DWORD *)(a5 + 428);
  do
  {
    if ( v36 == -2 )
    {
      v9 = v35;
      goto LABEL_61;
    }
    if ( v36 == v35 || v36 == -1 )
      break;
    v9 = 0xFFFFFFFFLL;
LABEL_61:
    v54 = v36;
    v36 = _InterlockedCompareExchange((volatile signed __int32 *)(a5 + 428), v9, v36);
  }
  while ( v54 != v36 );
  if ( (_DWORD)v7 )
  {
    v37 = v7;
    v38 = v7;
    do
    {
      _BitScanForward((unsigned int *)&v39, v37);
      RtlAcquireSRWLockExclusive((volatile signed __int64 *)(*(_QWORD *)(a5 + 24) + 8 * (v39 + 2 * (v39 + 1))), v9);
      v37 = v38 & ~(1 << v39);
      v38 = v37;
    }
    while ( v37 );
  }
  for ( i = HIDWORD(v7); i; i &= ~(1 << v41) )
  {
    _BitScanForward(&v41, i);
    v42 = v41 + 32 + 2 * (v41 + 32 + 1LL);
    RtlAcquireSRWLockExclusive((volatile signed __int64 *)(*(_QWORD *)(a5 + 24) + 8 * v42), v42);
  }
  while ( 1 )
  {
    v43 = *(__int64 **)&v65[0];
    if ( *(_OWORD **)&v65[0] == v65 )
      break;
    v49 = **(_QWORD **)&v65[0];
    if ( *(_QWORD *)(**(_QWORD **)&v65[0] + 8LL) != *(_QWORD *)&v65[0] )
      goto LABEL_32;
    v50 = *(_QWORD **)(*(_QWORD *)&v65[0] + 8LL);
    if ( *v50 != *(_QWORD *)&v65[0] )
      goto LABEL_32;
    *v50 = v49;
    v51 = v43;
    *(_QWORD *)(v49 + 8) = v50;
    v52 = *(_QWORD *)(a5 + 24) + 24LL * *((unsigned int *)v43 - 2);
    v53 = *(__int64 ***)(v52 + 8);
    if ( *v53 != (__int64 *)v52 )
      goto LABEL_32;
    *v51 = v52;
    v51[1] = (__int64)v53;
    *v53 = v51;
    *(_QWORD *)(v52 + 8) = v51;
  }
  v69 = v7;
  v44 = HIDWORD(v7);
  if ( (_DWORD)v44 )
  {
    v45 = HIDWORD(v69);
    do
    {
      _BitScanReverse(&v46, v44);
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)(*(_QWORD *)(a5 + 24) + 8
                                                                                  * (v46 + 32 + 2 * (v46 + 32 + 1LL))));
      v45 &= ~(1 << v46);
      LODWORD(v44) = v45;
    }
    while ( v45 );
  }
  for ( j = v69; j; j &= ~(1 << v48) )
  {
    _BitScanReverse((unsigned int *)&v48, j);
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(*(_QWORD *)(a5 + 24) + 8 * (v48 + 2 * (v48 + 1))));
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
    NtReleaseWorkerFactoryWorker(*(_QWORD *)(a5 + 56));
  result = v20;
  *a6 = v21;
  return result;
}
