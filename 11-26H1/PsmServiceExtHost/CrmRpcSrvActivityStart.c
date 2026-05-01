/*
 * XREFs of CrmRpcSrvActivityStart @ 0x1800216B0
 * Callers:
 *     <none>
 * Callees:
 *     CrmLogSrvActivityStartStop @ 0x180022140 (CrmLogSrvActivityStartStop.c)
 *     CrmActivityCleanup @ 0x180022350 (CrmActivityCleanup.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180043410 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

__int64 __fastcall CrmRpcSrvActivityStart(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v8; // rsi
  char *i; // rdi
  int v11; // eax
  int v12; // r12d
  unsigned int v13; // edx
  unsigned int v14; // r12d
  __int64 v15; // rax
  __int64 v16; // rcx
  void *v17; // r8
  void *v18; // r8
  __int64 v19; // rbx
  bool v20; // zf
  SIZE_T v21; // rbx
  _WORD *Heap; // rax
  _WORD *v23; // r9
  unsigned __int64 v24; // rbx
  unsigned __int64 v25; // rdx
  _WORD *v26; // rcx
  __int64 v27; // r8
  __int16 v28; // ax
  __int64 v29; // rbx
  SIZE_T v30; // rbx
  _WORD *v31; // rax
  _WORD *v32; // r8
  unsigned __int64 v33; // rbx
  unsigned __int64 v34; // rsi
  __int64 v35; // rdx
  __int16 v36; // cx
  _WORD *v37; // rcx
  int v38; // ebx
  signed __int64 v39; // rbp
  bool v40; // cc
  signed __int64 v41; // rbp
  __int16 v43; // [rsp+70h] [rbp-168h]
  int v44; // [rsp+74h] [rbp-164h]
  __int64 v45; // [rsp+78h] [rbp-160h]
  __int64 v46; // [rsp+80h] [rbp-158h]
  __int64 v47; // [rsp+88h] [rbp-150h] BYREF
  __int64 v48; // [rsp+90h] [rbp-148h]
  __int64 v49; // [rsp+98h] [rbp-140h]
  char v50[32]; // [rsp+A0h] [rbp-138h] BYREF
  UUID *v51; // [rsp+C0h] [rbp-118h]
  __int64 v52; // [rsp+C8h] [rbp-110h]
  _DWORD v53[44]; // [rsp+D0h] [rbp-108h] BYREF

  v49 = a1;
  v44 = 1601;
  v47 = 0LL;
  v46 = -1LL;
  v43 = 0;
  v8 = -1LL;
  memset_0(v53, 0, 0xACuLL);
  v48 = MEMORY[0x7FFE0008];
  RtlQueryUnbiasedInterruptTime(&v47);
  if ( (unsigned int)dword_1800E12E8 > 5 && (qword_1800E12F8 & 1) != 0 && (qword_1800E1300 & 1) == qword_1800E1300 )
  {
    v52 = 16LL;
    v51 = &Uuid;
    tlgWriteTransfer_EventWriteTransfer(&dword_1800E12E8, &unk_1800CBD22, 0LL, 0LL, 3, v50);
  }
  RtlAcquireSRWLockShared(a2);
  for ( i = *(char **)(a2 + 56); ; i = *(char **)i )
  {
    if ( i == (char *)(a2 + 56) )
      goto LABEL_56;
    if ( *((_QWORD *)i + 7) == a1 )
      break;
  }
  if ( _InterlockedIncrement64((volatile signed __int64 *)i + 2) <= 1 )
    __fastfail(0xEu);
  if ( !i )
  {
LABEL_56:
    v38 = -1073741811;
    RtlReleaseSRWLockShared(a2);
    v12 = a5;
    goto LABEL_51;
  }
  RtlReleaseSRWLockShared(a2);
  RtlAcquireSRWLockExclusive(i + 80);
  *((_DWORD *)i + 22) = GetCurrentThreadId();
  v44 = *((_DWORD *)i + 16);
  if ( !*((_DWORD *)i + 40) )
  {
    RtlQueryUnbiasedInterruptTime(i + 192);
    *((_QWORD *)i + 26) = 0LL;
    *((_QWORD *)i + 25) = 0LL;
    *((_QWORD *)i + 27) = MEMORY[0x7FFE0008];
  }
  ++*((_DWORD *)i + 40);
  v11 = *((_DWORD *)i + 46);
  v12 = a5;
  if ( v11 < a5 || v11 == 3 )
    *((_DWORD *)i + 46) = a5;
  v13 = 0;
  if ( *((_DWORD *)i + 27) )
  {
    v14 = 0;
    do
    {
      v15 = 56LL * v13 + *((_QWORD *)i + 14);
      if ( !*(_DWORD *)(v15 + 48) )
      {
        v16 = v14++;
        v53[v16] = *(_DWORD *)(v15 + 32);
      }
      ++v13;
    }
    while ( v13 < *((_DWORD *)i + 27) );
    v43 = v14;
    v12 = a5;
  }
  v17 = (void *)*((_QWORD *)i + 28);
  v46 = *((_QWORD *)i + 22);
  v45 = *((_QWORD *)i + 21);
  if ( v17 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v17);
  v18 = (void *)*((_QWORD *)i + 29);
  if ( v18 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v18);
  v19 = -1LL;
  do
    v20 = *(_WORD *)(a3 + 2 * v19++ + 2) == 0;
  while ( !v20 );
  v21 = 2 * v19 + 2;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v21);
  v23 = Heap;
  if ( Heap )
  {
    v24 = v21 >> 1;
    if ( v24 )
    {
      if ( v24 <= 0x7FFFFFFF )
      {
        v25 = 2147483646 - v24;
        v26 = Heap;
        v27 = a3 - (_QWORD)Heap;
        do
        {
          if ( !(v24 + v25) )
            break;
          v28 = *(_WORD *)((char *)v26 + v27);
          if ( !v28 )
            break;
          *v26++ = v28;
          --v24;
        }
        while ( v24 );
        Heap = v26 - 1;
        if ( v24 )
          Heap = v26;
      }
      *Heap = 0;
    }
  }
  else
  {
    v23 = 0LL;
  }
  *((_QWORD *)i + 28) = v23;
  v29 = -1LL;
  do
    v20 = *(_WORD *)(a4 + 2 * v29++ + 2) == 0;
  while ( !v20 );
  v30 = 2 * v29 + 2;
  v31 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v30);
  v32 = v31;
  if ( v31 )
  {
    v33 = v30 >> 1;
    if ( v33 )
    {
      if ( v33 > 0x7FFFFFFF )
      {
        LODWORD(v31) = 0;
        *v32 = 0;
      }
      else
      {
        v34 = 2147483646 - v33;
        v35 = a4 - (_QWORD)v31;
        do
        {
          if ( !(v33 + v34) )
            break;
          v36 = *(_WORD *)((char *)v31 + v35);
          if ( !v36 )
            break;
          *v31++ = v36;
          --v33;
        }
        while ( v33 );
        v37 = v31 - 1;
        if ( v33 )
          v37 = v31;
        LODWORD(v31) = 0;
        *v37 = 0;
      }
    }
    else
    {
      LODWORD(v31) = 0;
    }
  }
  else
  {
    v32 = 0LL;
  }
  *((_QWORD *)i + 29) = v32;
  *((_DWORD *)i + 22) = (_DWORD)v31;
  v38 = (int)v31;
  RtlReleaseSRWLockExclusive(i + 80);
  v39 = _InterlockedExchangeAdd64((volatile signed __int64 *)i + 2, 0xFFFFFFFFFFFFFFFFuLL);
  v40 = v39 <= 1;
  v41 = v39 - 1;
  if ( v40 )
  {
    if ( v41 )
      __fastfail(0xEu);
    CrmActivityCleanup(i);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, i);
  }
  v8 = v45;
LABEL_51:
  CrmLogSrvActivityStartStop(a2, v44, v49, a3, a4, v12, (__int64)v53, v43, v48, v47, v46, v8, v38);
  if ( v38 < 0 )
    return (unsigned int)v38;
  else
    return 0LL;
}
