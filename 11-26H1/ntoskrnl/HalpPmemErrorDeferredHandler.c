/*
 * XREFs of HalpPmemErrorDeferredHandler @ 0x140591A28
 * Callers:
 *     HalpErrorDeferredHandler @ 0x140591580 (HalpErrorDeferredHandler.c)
 * Callees:
 *     HalpHvInvokeWheaErrorNotificationCallback @ 0x140588254 (HalpHvInvokeWheaErrorNotificationCallback.c)
 *     MmGetPageBadStatus @ 0x1406F6FB0 (MmGetPageBadStatus.c)
 *     WheaAttemptPhysicalPageOffline @ 0x14084E3B0 (WheaAttemptPhysicalPageOffline.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall HalpPmemErrorDeferredHandler(_QWORD *a1, __int64 a2)
{
  _DWORD *v2; // rbx
  __int64 i; // rsi
  unsigned __int64 v5; // rax
  __int64 v6; // r15
  unsigned int v7; // r12d
  char v8; // bp
  int v9; // r8d
  __int64 v10; // [rsp+60h] [rbp+8h] BYREF

  v2 = (_DWORD *)*a1;
  for ( i = 0LL; (unsigned int)i < v2[21]; i = (unsigned int)(i + 1) )
  {
    v5 = *(_QWORD *)&v2[6 * i + 24];
    if ( v5 > 0x32 )
    {
      *(_QWORD *)&v2[6 * i + 24] = 50LL;
      v5 = 50LL;
    }
    v6 = *(_QWORD *)&v2[6 * i + 22];
    v7 = 0;
    *(_QWORD *)&v2[6 * i + 26] = 0LL;
    if ( v5 )
    {
      v8 = 0;
      do
      {
        v10 = v6 << 12;
        if ( (unsigned int)MmGetPageBadStatus(&v10)
          || (LOBYTE(v9) = 1, !(unsigned int)WheaAttemptPhysicalPageOffline(v6, 0, v9, 0, (__int64)a1)) )
        {
          *(_QWORD *)&v2[6 * i + 26] |= 1LL << v8;
        }
        ++v7;
        ++v6;
        v8 = v7;
      }
      while ( (unsigned __int64)v7 < *(_QWORD *)&v2[6 * i + 24] );
    }
  }
  if ( HalpHvWheaEnlightenedCpuManager )
    HalpHvInvokeWheaErrorNotificationCallback((__int64)a1, a2);
  ExFreePoolWithTag(v2, 0x576C6148u);
}
