/*
 * XREFs of StorAttemptInsertDeviceQueue @ 0x14003F570
 * Callers:
 *     NvmeControllerProcessCommand @ 0x140044AF0 (NvmeControllerProcessCommand.c)
 * Callees:
 *     StorPushRequestToDeviceQueue @ 0x140057990 (StorPushRequestToDeviceQueue.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

char __fastcall StorAttemptInsertDeviceQueue(
        volatile signed __int32 *a1,
        _QWORD *a2,
        char a3,
        unsigned int a4,
        __int64 a5)
{
  bool v5; // zf
  __int64 v11; // rax
  unsigned __int8 *v12; // rax
  __int64 v13; // rdi
  __int64 v14; // [rsp+20h] [rbp-78h] BYREF
  __int128 v15; // [rsp+30h] [rbp-68h] BYREF
  __int128 v16; // [rsp+40h] [rbp-58h] BYREF

  v5 = *a1 == 0;
  v14 = 0LL;
  if ( v5 && !**(_DWORD **)&a1[2 * a4 + 6] )
  {
    if ( !*(_DWORD *)(a5 + 948) )
      return 0;
    _interlockedbittestandset(a1, 2u);
  }
  if ( a3 )
  {
    *(_BYTE *)(a2[23] + 3LL) |= 1u;
    if ( (int)IoGetIoAttributionHandle(a2, &v14) >= 0 )
    {
      v12 = (unsigned __int8 *)a2[23];
      v13 = v14;
      v15 = 0LL;
      LODWORD(v15) = 1;
      v16 = 0LL;
      DWORD1(v15) = *v12 | 0x300;
      *((_QWORD *)&v16 + 1) = KeQueryUnbiasedInterruptTimePrecise((PULONG64)&v16 + 1);
      IoRecordIoAttribution(v13, &v15);
    }
  }
  else if ( *a2 )
  {
    v11 = *(_QWORD *)(*a2 + 4184LL);
    if ( v11 )
      *(_BYTE *)(*(_QWORD *)(v11 + 184) + 3LL) |= 1u;
  }
  StorPushRequestToDeviceQueue(a1, a4, a2);
  if ( !_InterlockedCompareExchange(*(volatile signed __int32 **)&a1[2 * a4 + 6], 1, 0) )
  {
    if ( a3 )
      _InterlockedIncrement((volatile signed __int32 *)(a5 + 952));
    else
      _InterlockedIncrement((volatile signed __int32 *)(a5 + 956));
  }
  return 1;
}
