/*
 * XREFs of ?RmpCpuSetManagerCreateProcessRegistration@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_PROCESS@@PEAU_RM_CPU_SET_ALLOCATION@@PEAPEAU_RM_CPU_SET_PROCESS_REGISTRATION@@@Z @ 0x180085178
 * Callers:
 *     ?RmpCpuSetManagerRegisterProcessWithAllocation@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAXPEAU_RM_CPU_SET_ALLOCATION@@PEAPEAU_RM_CPU_SET_PROCESS_REGISTRATION@@@Z @ 0x1800862DC (-RmpCpuSetManagerRegisterProcessWithAllocation@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAXPEAU_RM_C.c)
 * Callees:
 *     ?HampAllocateHeap@@YAPEAX_K@Z @ 0x180032320 (-HampAllocateHeap@@YAPEAX_K@Z.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180043410 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180047940 (_tlgKeywordOn.c)
 *     ?RmpCpuSetManagerInitializeProcessRegistration@@YAXPEAU_RM_CPU_SET_PROCESS_REGISTRATION@@@Z @ 0x1800856F8 (-RmpCpuSetManagerInitializeProcessRegistration@@YAXPEAU_RM_CPU_SET_PROCESS_REGISTRATION@@@Z.c)
 *     ?RmpCpuSetManagerInsertProcessRegistration@@YAXPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_PROCESS@@PEAU_RM_CPU_SET_ALLOCATION@@PEAU_RM_CPU_SET_PROCESS_REGISTRATION@@@Z @ 0x180085A64 (-RmpCpuSetManagerInsertProcessRegistration@@YAXPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_P.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

__int64 __fastcall RmpCpuSetManagerCreateProcessRegistration(
        struct _RM_CPU_SET_CLIENT_CONTEXT *a1,
        struct _RM_CPU_SET_PROCESS *a2,
        struct _RM_CPU_SET_ALLOCATION *a3,
        struct _RM_CPU_SET_PROCESS_REGISTRATION **a4)
{
  __int64 v5; // r14
  struct _RM_CPU_SET_PROCESS_REGISTRATION *Heap; // rax
  struct _RM_CPU_SET_PROCESS_REGISTRATION *v10; // rbx
  unsigned int v11; // ebx
  __int64 v12; // rcx
  __int64 v13; // r8
  int v15; // [rsp+30h] [rbp-69h] BYREF
  unsigned int v16; // [rsp+34h] [rbp-65h] BYREF
  __int64 v17; // [rsp+38h] [rbp-61h] BYREF
  __int64 v18; // [rsp+40h] [rbp-59h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v19; // [rsp+50h] [rbp-49h] BYREF
  unsigned int *v20; // [rsp+70h] [rbp-29h]
  __int64 v21; // [rsp+78h] [rbp-21h]
  __int64 *v22; // [rsp+80h] [rbp-19h]
  __int64 v23; // [rsp+88h] [rbp-11h]
  __int64 *v24; // [rsp+90h] [rbp-9h]
  __int64 v25; // [rsp+98h] [rbp-1h]
  int *v26; // [rsp+A0h] [rbp+7h]
  __int64 v27; // [rsp+A8h] [rbp+Fh]

  v5 = -1LL;
  Heap = (struct _RM_CPU_SET_PROCESS_REGISTRATION *)HampAllocateHeap(0x78uLL);
  v10 = Heap;
  if ( Heap )
  {
    RmpCpuSetManagerInitializeProcessRegistration(Heap);
    RmpCpuSetManagerInsertProcessRegistration(a1, a2, a3, v10);
    v5 = *((_QWORD *)v10 + 4);
    *a4 = v10;
    v11 = 0;
  }
  else
  {
    v11 = -1073741801;
  }
  if ( (unsigned int)dword_1800E1278 > 4 && tlgKeywordOn((__int64)&dword_1800E1278, 1LL) )
  {
    v15 = *((_DWORD *)a2 + 14);
    v17 = *((_QWORD *)a3 + 4);
    v26 = &v15;
    v24 = &v17;
    v22 = &v18;
    v20 = &v16;
    v27 = v13;
    v21 = v13;
    v18 = v5;
    v16 = v11;
    v25 = 8LL;
    v23 = 8LL;
    tlgWriteTransfer_EventWriteTransfer(v12, byte_1800D2700, 0LL, 0LL, 6u, &v19);
  }
  return v11;
}
