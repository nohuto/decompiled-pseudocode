/*
 * XREFs of EtwTiLogInsertQueueUserApc @ 0x140259188
 * Callers:
 *     KeInsertQueueApc @ 0x14020AE70 (KeInsertQueueApc.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwProviderEnabled @ 0x140257D70 (EtwProviderEnabled.c)
 *     EtwpTiFillProcessIdentity @ 0x140259590 (EtwpTiFillProcessIdentity.c)
 *     EtwpTiVadQueryEventWrite @ 0x14025A2AC (EtwpTiVadQueryEventWrite.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void EtwTiLogInsertQueueUserApc(char a1, __int64 a2, __int64 a3, ...)
{
  _KPROCESS *v6; // r14
  _KPROCESS *Process; // rdi
  _KPROCESS *v8; // r12
  const EVENT_DESCRIPTOR *EventDescriptor; // rsi
  __int64 Pool2; // rax
  struct _EVENT_DATA_DESCRIPTOR *v12; // rbx
  unsigned int v13; // r9d
  struct _KTHREAD *CurrentThread; // rax
  __int64 v15; // rdx
  int v16; // eax
  int v17; // r9d
  unsigned int v18; // r9d
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // r11
  __int64 v22; // r8
  int v23; // r9d
  unsigned int v24; // edi
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  unsigned int v29; // edi
  __int64 v30; // rax
  __int64 v31; // rax
  BOOLEAN v32; // al
  __int16 v33; // ax
  char v34; // [rsp+40h] [rbp-40h] BYREF
  __int64 v35; // [rsp+48h] [rbp-38h] BYREF
  __int64 v36; // [rsp+50h] [rbp-30h]
  _BYTE v37[8]; // [rsp+58h] [rbp-28h] BYREF
  _BYTE v38[8]; // [rsp+60h] [rbp-20h] BYREF
  _BYTE v39[8]; // [rsp+68h] [rbp-18h] BYREF
  __int64 v40; // [rsp+D8h] [rbp+58h] BYREF
  va_list va; // [rsp+D8h] [rbp+58h]
  __int64 v42; // [rsp+E0h] [rbp+60h] BYREF
  va_list va1; // [rsp+E0h] [rbp+60h]
  __int64 v44; // [rsp+E8h] [rbp+68h] BYREF
  va_list va2; // [rsp+E8h] [rbp+68h]
  __int64 v46; // [rsp+F0h] [rbp+70h]
  va_list va3; // [rsp+F8h] [rbp+78h] BYREF

  va_start(va3, a3);
  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v40 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v42 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v44 = va_arg(va3, _QWORD);
  v46 = va_arg(va3, _QWORD);
  v36 = 0LL;
  if ( EtwProviderEnabled(EtwThreatIntProvRegHandle, 0, 0x3000uLL) )
  {
    v6 = *(_KPROCESS **)(a2 + 544);
    Process = KeGetCurrentThread()->ApcState.Process;
    v8 = KeGetCurrentThread()->Process;
    if ( !((_BYTE)v46 ? v8 == v6 : Process == v6) )
    {
      EventDescriptor = (const EVENT_DESCRIPTOR *)THREATINT_QUEUEUSERAPC_REMOTE_KERNEL_CALLER;
      if ( a1 )
        EventDescriptor = &THREATINT_QUEUEUSERAPC_REMOTE;
      if ( EtwEventEnabled(EtwThreatIntProvRegHandle, EventDescriptor)
        && ((KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) == 0
         || EtwProviderEnabled(EtwThreatIntProvRegHandle, 0, 0x20000000000uLL)) )
      {
        Pool2 = ExAllocatePool2(0x40uLL);
        v12 = (struct _EVENT_DATA_DESCRIPTOR *)Pool2;
        if ( Pool2 )
        {
          v13 = EtwpTiFillProcessIdentity(Pool2, Process, v37);
          CurrentThread = KeGetCurrentThread();
          v15 = v13;
          v12[v15].Ptr = (ULONGLONG)&CurrentThread[1].CurrentRunTime;
          *(_QWORD *)&v12[v15].Size = 4LL;
          v12[v15 + 1].Ptr = (ULONGLONG)&CurrentThread[1];
          *(_QWORD *)&v12[v15 + 1].Size = 8LL;
          v16 = EtwpTiFillProcessIdentity(&v12[v13 + 2], v6, v38);
          v18 = v16 + v17;
          v19 = v18;
          v12[v19].Ptr = a2 + 1296;
          *(_QWORD *)&v12[v19].Size = 4LL;
          v12[v19 + 1].Ptr = a2 + 1216;
          *(_QWORD *)&v12[v19 + 1].Size = 8LL;
          v20 = EtwpTiFillProcessIdentity(&v12[v18 + 2], v8, v39);
          v22 = (unsigned int)(v21 + 1);
          v24 = v20 + v23 + 1;
          v34 = (v21 + 1) & (*(_DWORD *)(a2 + 116) >> 4);
          v25 = (unsigned int)(v20 + v23);
          v12[v25].Ptr = (ULONGLONG)&v34;
          *(_QWORD *)&v12[v25].Size = v22;
          v26 = *(_QWORD *)(a2 + 544);
          if ( *(_QWORD *)(v26 + 784) == v21
            || (v33 = *(_WORD *)(v26 + 1772), v33 != 332) && v33 != 452
            || (v35 = -(a3 >> 2), (unsigned __int64)v35 > 0xFFFFFFFF) )
          {
            v35 = a3;
          }
          v27 = v24;
          v12[v27].Ptr = (ULONGLONG)&v35;
          *(_QWORD *)&v12[v27].Size = 8LL;
          v28 = (unsigned int)v22 + v24;
          v29 = v22 + v28;
          v28 *= 2LL;
          *(&v12->Ptr + v28) = (ULONGLONG)va;
          *((_QWORD *)&v12->Size + v28) = 8LL;
          v30 = v29;
          v12[v30].Ptr = (ULONGLONG)va1;
          *(_QWORD *)&v12[v30].Size = 8LL;
          v31 = (unsigned int)v22 + v29;
          v12[v31].Ptr = (ULONGLONG)va2;
          *(_QWORD *)&v12[v31].Size = 8LL;
          v32 = EtwProviderEnabled(EtwThreatIntProvRegHandle, 0, 0x8000000uLL);
          if ( v32 )
            v36 = v40;
          EtwpTiVadQueryEventWrite(v12, (__int64)&v35, 2, EventDescriptor, v32);
          ExFreePoolWithTag(v12, 0);
        }
      }
    }
  }
}
