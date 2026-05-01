/*
 * XREFs of CrmSrvActivityQueryWindowClosedReasons @ 0x180032000
 * Callers:
 *     CrmRpcSrvActivityQueryWindowClosedReasons @ 0x180031FE0 (CrmRpcSrvActivityQueryWindowClosedReasons.c)
 *     CrmpInProcActivityQueryWindowClosedReasons @ 0x180074220 (CrmpInProcActivityQueryWindowClosedReasons.c)
 * Callees:
 *     CrmActivityDereference @ 0x180020BC8 (CrmActivityDereference.c)
 *     CrmLogSrvActivityQueryWindowClosedReasonsStart @ 0x18003228C (CrmLogSrvActivityQueryWindowClosedReasonsStart.c)
 *     ?HampAllocateHeap@@YAPEAX_K@Z @ 0x180032320 (-HampAllocateHeap@@YAPEAX_K@Z.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180043410 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

__int64 __fastcall CrmSrvActivityQueryWindowClosedReasons(__int64 a1, __int64 a2, __int64 *a3, _DWORD *a4)
{
  __int64 v8; // r14
  volatile signed __int64 i; // rbx
  unsigned __int64 v10; // rcx
  _DWORD *Heap; // rdi
  unsigned int j; // r8d
  __int64 v13; // r9
  __int64 v14; // rax
  unsigned int v15; // edi
  __int64 v16; // rdx
  int v18; // eax
  int v19; // [rsp+30h] [rbp-A9h] BYREF
  int v20; // [rsp+34h] [rbp-A5h] BYREF
  int v21; // [rsp+38h] [rbp-A1h] BYREF
  unsigned int v22; // [rsp+40h] [rbp-99h] BYREF
  __int64 v23; // [rsp+48h] [rbp-91h] BYREF
  char v24[32]; // [rsp+50h] [rbp-89h] BYREF
  UUID *v25; // [rsp+70h] [rbp-69h]
  __int64 v26; // [rsp+78h] [rbp-61h]
  int *v27; // [rsp+80h] [rbp-59h]
  __int64 v28; // [rsp+88h] [rbp-51h]
  __int64 v29; // [rsp+90h] [rbp-49h]
  int v30; // [rsp+98h] [rbp-41h]
  int v31; // [rsp+9Ch] [rbp-3Dh]
  int *v32; // [rsp+A0h] [rbp-39h]
  __int64 v33; // [rsp+A8h] [rbp-31h]
  __int64 *v34; // [rsp+B0h] [rbp-29h]
  __int64 v35; // [rsp+B8h] [rbp-21h]
  unsigned int *v36; // [rsp+C0h] [rbp-19h]
  __int64 v37; // [rsp+C8h] [rbp-11h]
  int *v38; // [rsp+D0h] [rbp-9h]
  __int64 v39; // [rsp+D8h] [rbp-1h]
  __int64 v40; // [rsp+E0h] [rbp+7h]
  int v41; // [rsp+E8h] [rbp+Fh]
  int v42; // [rsp+ECh] [rbp+13h]

  v19 = 1601;
  v8 = 0LL;
  CrmLogSrvActivityQueryWindowClosedReasonsStart();
  RtlAcquireSRWLockShared(a2);
  for ( i = *(_QWORD *)(a2 + 56); ; i = *(_QWORD *)i )
  {
    if ( i == a2 + 56 )
      goto LABEL_19;
    if ( *(_QWORD *)(i + 56) == a1 )
      break;
  }
  if ( _InterlockedIncrement64((volatile signed __int64 *)(i + 16)) <= 1 )
    __fastfail(0xEu);
  if ( !i )
  {
LABEL_19:
    v15 = -1073741811;
    RtlReleaseSRWLockShared(a2);
    goto LABEL_14;
  }
  RtlReleaseSRWLockShared(a2);
  v10 = 4LL * *(unsigned int *)(i + 96);
  v19 = *(_DWORD *)(i + 64);
  Heap = HampAllocateHeap(v10);
  if ( Heap )
  {
    RtlAcquireSRWLockShared(i + 80);
    for ( j = 0; j < *(_DWORD *)(i + 108); ++j )
    {
      v13 = *(_QWORD *)(i + 112);
      v14 = 56LL * j;
      if ( !*(_DWORD *)(v14 + v13 + 48) )
      {
        Heap[v8] = *(_DWORD *)(v14 + v13 + 32);
        v8 = (unsigned int)(v8 + 1);
      }
    }
    RtlReleaseSRWLockShared(i + 80);
    *a3 = (__int64)Heap;
    v15 = 0;
    *a4 = v8;
  }
  else
  {
    v15 = -1073741801;
  }
  CrmActivityDereference((volatile signed __int64 *)i);
LABEL_14:
  v16 = *a3;
  if ( (unsigned int)dword_1800E12E8 > 5 && (qword_1800E12F8 & 1) != 0 && (qword_1800E1300 & 1) == qword_1800E1300 )
  {
    v25 = &Uuid;
    v20 = *(_DWORD *)(a2 + 24);
    v27 = &v20;
    v29 = a2 + 72;
    v18 = *(unsigned __int8 *)(a2 + 73);
    v40 = v16;
    v26 = 16LL;
    v28 = 4LL;
    v31 = 0;
    v30 = 4 * v18 + 8;
    v21 = v19;
    v32 = &v21;
    v34 = &v23;
    v36 = &v22;
    LOWORD(v19) = v8;
    v38 = &v19;
    v41 = 4 * (unsigned __int16)v8;
    v33 = 4LL;
    v23 = a1;
    v35 = 8LL;
    v22 = v15;
    v37 = 4LL;
    v39 = 2LL;
    v42 = 0;
    tlgWriteTransfer_EventWriteTransfer(&dword_1800E12E8, &unk_1800CBB44, 0LL, 0LL, 10, v24);
  }
  return v15;
}
