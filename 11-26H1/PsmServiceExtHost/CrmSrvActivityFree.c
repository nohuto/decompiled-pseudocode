/*
 * XREFs of CrmSrvActivityFree @ 0x180020838
 * Callers:
 *     CrmpInProcActivityFree @ 0x180020820 (CrmpInProcActivityFree.c)
 * Callees:
 *     CrmLogSrvActivityFreeStart @ 0x180020B34 (CrmLogSrvActivityFreeStart.c)
 *     CrmActivityDereference @ 0x180020BC8 (CrmActivityDereference.c)
 *     CrmActivityCleanup @ 0x180022350 (CrmActivityCleanup.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180043410 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

char __fastcall CrmSrvActivityFree(__int64 a1, __int64 a2)
{
  int v4; // r14d
  volatile signed __int64 *i; // rbx
  volatile signed __int64 v6; // rax
  volatile signed __int64 **v7; // rcx
  signed __int64 v8; // rax
  bool v9; // cc
  __int64 v10; // rax
  int v11; // ebx
  int v12; // eax
  int v14; // [rsp+30h] [rbp-69h] BYREF
  int v15; // [rsp+34h] [rbp-65h] BYREF
  __int64 v16; // [rsp+38h] [rbp-61h] BYREF
  __int64 v17; // [rsp+40h] [rbp-59h] BYREF
  _BYTE v18[32]; // [rsp+50h] [rbp-49h] BYREF
  UUID *v19; // [rsp+70h] [rbp-29h]
  __int64 v20; // [rsp+78h] [rbp-21h]
  __int64 *v21; // [rsp+80h] [rbp-19h]
  __int64 v22; // [rsp+88h] [rbp-11h]
  int *v23; // [rsp+90h] [rbp-9h]
  __int64 v24; // [rsp+98h] [rbp-1h]
  int *v25; // [rsp+A0h] [rbp+7h]
  __int64 v26; // [rsp+A8h] [rbp+Fh]
  __int64 *v27; // [rsp+B0h] [rbp+17h]
  __int64 v28; // [rsp+B8h] [rbp+1Fh]
  __int64 *v29; // [rsp+C0h] [rbp+27h]
  __int64 v30; // [rsp+C8h] [rbp+2Fh]

  v4 = 1601;
  CrmLogSrvActivityFreeStart();
  RtlAcquireSRWLockExclusive(a2);
  *(_DWORD *)(a2 + 8) = GetCurrentThreadId();
  for ( i = *(volatile signed __int64 **)(a2 + 56); ; i = (volatile signed __int64 *)*i )
  {
    if ( i == (volatile signed __int64 *)(a2 + 56) )
    {
      *(_DWORD *)(a2 + 8) = 0;
      v11 = -1073741811;
      LOBYTE(v10) = RtlReleaseSRWLockExclusive(a2);
      goto LABEL_14;
    }
    if ( *((_QWORD *)i + 7) == a1 )
      break;
  }
  if ( _InterlockedIncrement64(i + 2) <= 1 )
    __fastfail(0xEu);
  v6 = *i;
  v4 = *((_DWORD *)i + 16);
  if ( *(volatile signed __int64 **)(*i + 8) != i || (v7 = (volatile signed __int64 **)*((_QWORD *)i + 1), *v7 != i) )
    __fastfail(3u);
  *v7 = (volatile signed __int64 *)v6;
  *(_QWORD *)(v6 + 8) = v7;
  *((_QWORD *)i + 1) = i;
  *i = (volatile signed __int64)i;
  if ( (unsigned int)dword_1800E12E8 > 5 && (qword_1800E12F8 & 2) != 0 && (qword_1800E1300 & 2) == qword_1800E1300 )
  {
    v16 = *(_QWORD *)(a2 + 16);
    v19 = &Uuid;
    v21 = &v16;
    v14 = *((_DWORD *)i + 17);
    v23 = &v14;
    v20 = 16LL;
    v22 = 8LL;
    v24 = 4LL;
    tlgWriteTransfer_EventWriteTransfer(&dword_1800E12E8, &unk_1800CCD3C, 0LL, 0LL, 5, v18);
  }
  CrmActivityDereference((PVOID)i);
  *(_DWORD *)(a2 + 8) = 0;
  RtlReleaseSRWLockExclusive(a2);
  v8 = _InterlockedExchangeAdd64(i + 2, 0xFFFFFFFFFFFFFFFFuLL);
  v9 = v8 <= 1;
  v10 = v8 - 1;
  if ( v9 )
  {
    if ( v10 )
      __fastfail(0xEu);
    CrmActivityCleanup(i);
    LOBYTE(v10) = RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)i);
  }
  v11 = 0;
LABEL_14:
  if ( (unsigned int)dword_1800E12E8 > 5 && (qword_1800E12F8 & 1) != 0 )
  {
    v10 = qword_1800E1300 & 1;
    if ( v10 == qword_1800E1300 )
    {
      v20 = 16LL;
      v19 = &Uuid;
      v14 = *(_DWORD *)(a2 + 24);
      v22 = 4LL;
      v21 = (__int64 *)&v14;
      v23 = (int *)(a2 + 72);
      v12 = *(unsigned __int8 *)(a2 + 73);
      v15 = v4;
      v26 = 4LL;
      v17 = a1;
      v28 = 8LL;
      v24 = (unsigned int)(4 * v12 + 8);
      v25 = &v15;
      v27 = &v17;
      v29 = &v16;
      LODWORD(v16) = v11;
      v30 = 4LL;
      LOBYTE(v10) = tlgWriteTransfer_EventWriteTransfer(&dword_1800E12E8, &unk_1800CBED1, 0LL, 0LL, 8, v18);
    }
  }
  return v10;
}
