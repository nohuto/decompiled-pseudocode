/*
 * XREFs of CrmSrvActivityStart @ 0x180021C10
 * Callers:
 *     CrmpInProcActivityStart @ 0x180069780 (CrmpInProcActivityStart.c)
 * Callees:
 *     CrmLogSrvActivityStartStop @ 0x180022140 (CrmLogSrvActivityStartStop.c)
 *     CrmActivityCleanup @ 0x180022350 (CrmActivityCleanup.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180043410 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

__int64 __fastcall CrmSrvActivityStart(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  unsigned int v5; // ebp
  __int64 v7; // rbx
  __int64 v8; // r13
  unsigned int v9; // esi
  char *i; // rdi
  int v12; // eax
  unsigned int v13; // edx
  __int64 v14; // rax
  __int64 v15; // rcx
  void *v16; // r8
  void *v17; // r8
  __int64 v18; // rbx
  bool v19; // zf
  SIZE_T v20; // rbx
  _WORD *Heap; // rax
  _WORD *v22; // r9
  unsigned __int64 v23; // rbx
  unsigned __int64 v24; // rdx
  _WORD *v25; // rcx
  __int64 v26; // r8
  __int16 v27; // ax
  __int64 v28; // rbx
  SIZE_T v29; // rbx
  _WORD *v30; // rax
  _WORD *v31; // r8
  unsigned __int64 v32; // rbx
  unsigned __int64 v33; // rsi
  __int64 v34; // rdx
  __int16 v35; // cx
  _WORD *v36; // rcx
  signed __int64 v37; // r14
  bool v38; // cc
  signed __int64 v39; // r14
  __int16 v41; // [rsp+70h] [rbp-178h]
  int v42; // [rsp+74h] [rbp-174h]
  int v43; // [rsp+78h] [rbp-170h]
  __int64 v44; // [rsp+80h] [rbp-168h]
  __int64 v45; // [rsp+88h] [rbp-160h]
  __int64 v46; // [rsp+90h] [rbp-158h] BYREF
  __int64 v47; // [rsp+98h] [rbp-150h]
  __int64 v48; // [rsp+A0h] [rbp-148h]
  char v49[32]; // [rsp+A8h] [rbp-140h] BYREF
  UUID *v50; // [rsp+C8h] [rbp-120h]
  __int64 v51; // [rsp+D0h] [rbp-118h]
  _DWORD v52[44]; // [rsp+E0h] [rbp-108h] BYREF

  v5 = 0;
  v43 = a2;
  v47 = a1;
  v7 = a2;
  v46 = 0LL;
  v41 = 0;
  v45 = -1LL;
  v42 = 1601;
  v8 = -1LL;
  v9 = 0;
  memset_0(v52, 0, 0xACuLL);
  v48 = MEMORY[0x7FFE0008];
  RtlQueryUnbiasedInterruptTime(&v46);
  if ( (unsigned int)dword_1800E12E8 > 5 && (qword_1800E12F8 & 1) != 0 && (qword_1800E1300 & 1) == qword_1800E1300 )
  {
    v51 = 16LL;
    v50 = &Uuid;
    tlgWriteTransfer_EventWriteTransfer(&dword_1800E12E8, &unk_1800CBD22, 0LL, 0LL, 3, v49);
  }
  RtlAcquireSRWLockShared(v7);
  for ( i = *(char **)(v7 + 56); ; i = *(char **)i )
  {
    if ( i == (char *)(v7 + 56) )
      goto LABEL_52;
    if ( *((_QWORD *)i + 7) == v47 )
      break;
  }
  if ( _InterlockedIncrement64((volatile signed __int64 *)i + 2) <= 1 )
    __fastfail(0xEu);
  if ( !i )
  {
LABEL_52:
    v5 = -1073741811;
    RtlReleaseSRWLockShared(v7);
    goto LABEL_53;
  }
  RtlReleaseSRWLockShared(v7);
  RtlAcquireSRWLockExclusive(i + 80);
  *((_DWORD *)i + 22) = GetCurrentThreadId();
  v42 = *((_DWORD *)i + 16);
  if ( !*((_DWORD *)i + 40) )
  {
    RtlQueryUnbiasedInterruptTime(i + 192);
    *((_QWORD *)i + 26) = 0LL;
    *((_QWORD *)i + 25) = 0LL;
    *((_QWORD *)i + 27) = MEMORY[0x7FFE0008];
  }
  ++*((_DWORD *)i + 40);
  v12 = *((_DWORD *)i + 46);
  if ( v12 < a5 || v12 == 3 )
    *((_DWORD *)i + 46) = a5;
  v13 = 0;
  if ( *((_DWORD *)i + 27) )
  {
    do
    {
      v14 = 56LL * v13 + *((_QWORD *)i + 14);
      if ( !*(_DWORD *)(v14 + 48) )
      {
        v15 = v9++;
        v52[v15] = *(_DWORD *)(v14 + 32);
      }
      ++v13;
    }
    while ( v13 < *((_DWORD *)i + 27) );
    v41 = v9;
  }
  v16 = (void *)*((_QWORD *)i + 28);
  v45 = *((_QWORD *)i + 22);
  v44 = *((_QWORD *)i + 21);
  if ( v16 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v16);
  v17 = (void *)*((_QWORD *)i + 29);
  if ( v17 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v17);
  v18 = -1LL;
  do
    v19 = *(_WORD *)(a3 + 2 * v18++ + 2) == 0;
  while ( !v19 );
  v20 = 2 * v18 + 2;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v20);
  v22 = Heap;
  if ( Heap )
  {
    v23 = v20 >> 1;
    if ( v23 )
    {
      if ( v23 <= 0x7FFFFFFF )
      {
        v24 = 2147483646 - v23;
        v25 = Heap;
        v26 = a3 - (_QWORD)Heap;
        do
        {
          if ( !(v24 + v23) )
            break;
          v27 = *(_WORD *)((char *)v25 + v26);
          if ( !v27 )
            break;
          *v25++ = v27;
          --v23;
        }
        while ( v23 );
        Heap = v25 - 1;
        if ( v23 )
          Heap = v25;
      }
      *Heap = 0;
    }
  }
  else
  {
    v22 = 0LL;
  }
  *((_QWORD *)i + 28) = v22;
  v28 = -1LL;
  do
    v19 = *(_WORD *)(a4 + 2 * v28++ + 2) == 0;
  while ( !v19 );
  v29 = 2 * v28 + 2;
  v30 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v29);
  v31 = v30;
  if ( v30 )
  {
    v32 = v29 >> 1;
    if ( v32 )
    {
      if ( v32 > 0x7FFFFFFF )
      {
        *v30 = 0;
      }
      else
      {
        v33 = 2147483646 - v32;
        v34 = a4 - (_QWORD)v30;
        do
        {
          if ( !(v32 + v33) )
            break;
          v35 = *(_WORD *)((char *)v30 + v34);
          if ( !v35 )
            break;
          *v30++ = v35;
          --v32;
        }
        while ( v32 );
        v36 = v30 - 1;
        if ( v32 )
          v36 = v30;
        *v36 = 0;
      }
    }
  }
  else
  {
    v31 = 0LL;
  }
  *((_QWORD *)i + 29) = v31;
  *((_DWORD *)i + 22) = 0;
  RtlReleaseSRWLockExclusive(i + 80);
  v37 = _InterlockedExchangeAdd64((volatile signed __int64 *)i + 2, 0xFFFFFFFFFFFFFFFFuLL);
  v38 = v37 <= 1;
  v39 = v37 - 1;
  if ( v38 )
  {
    if ( v39 )
      __fastfail(0xEu);
    CrmActivityCleanup(i);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, i);
  }
  LODWORD(v7) = v43;
  LOWORD(v9) = v41;
  v8 = v44;
LABEL_53:
  CrmLogSrvActivityStartStop(v7, v42, v47, a3, a4, a5, (__int64)v52, v9, v48, v46, v45, v8, v5);
  return v5;
}
