/*
 * XREFs of PpmIdleCsVetoAccountingUpdateBlock @ 0x140420F9C
 * Callers:
 *     PpmIdleStartCsVetoAccounting @ 0x140420108 (PpmIdleStartCsVetoAccounting.c)
 *     PpmIdleCaptureCsVetoAccounting @ 0x140420CC8 (PpmIdleCaptureCsVetoAccounting.c)
 *     PpmIdleCsVetoAccountingDeviceUpdate @ 0x140420EAC (PpmIdleCsVetoAccountingDeviceUpdate.c)
 *     PpmIdleCsVetoAccountingResiliencyUpdate @ 0x140420F14 (PpmIdleCsVetoAccountingResiliencyUpdate.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x1402081F0 (RtlGetInterruptTimePrecise.c)
 */

char __fastcall PpmIdleCsVetoAccountingUpdateBlock(__int64 a1, char a2, char a3)
{
  LARGE_INTEGER InterruptTimePrecise; // rax
  char v5; // dl
  unsigned int v6; // ecx
  LARGE_INTEGER j; // r10
  __int64 v8; // r8
  unsigned __int64 v9; // rdx
  __int64 v10; // r9
  unsigned int i; // ecx
  __int64 v12; // r8
  unsigned __int64 v13; // rdx
  LARGE_INTEGER PerformanceCounter; // [rsp+48h] [rbp+20h] BYREF

  LOBYTE(InterruptTimePrecise.LowPart) = *(_BYTE *)(a1 + 24);
  if ( a3 )
  {
    v5 = LOBYTE(InterruptTimePrecise.LowPart) & ~a2;
    *(_BYTE *)(a1 + 24) = v5;
    if ( !v5 )
    {
      InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
      for ( i = 0; i < *(_DWORD *)(a1 + 28); ++i )
      {
        v12 = *(_QWORD *)(a1 + 32);
        v13 = (unsigned __int64)i << 6;
        if ( *(_QWORD *)(v13 + v12 + 32) )
          *(LARGE_INTEGER *)(v13 + v12 + 48) = InterruptTimePrecise;
      }
    }
  }
  else
  {
    LOBYTE(InterruptTimePrecise.LowPart) |= a2;
    *(_BYTE *)(a1 + 24) = InterruptTimePrecise.LowPart;
    if ( LOBYTE(InterruptTimePrecise.LowPart) == a2 )
    {
      InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
      v6 = 0;
      for ( j = InterruptTimePrecise; v6 < *(_DWORD *)(a1 + 28); ++v6 )
      {
        v8 = *(_QWORD *)(a1 + 32);
        v9 = (unsigned __int64)v6 << 6;
        v10 = *(_QWORD *)(v9 + v8 + 48);
        if ( v10 )
        {
          *(_QWORD *)(v9 + v8 + 48) = 0LL;
          LOBYTE(InterruptTimePrecise.LowPart) = LOBYTE(j.LowPart) - v10;
          *(_QWORD *)(v9 + v8 + 56) += j.QuadPart - v10;
        }
      }
    }
  }
  return InterruptTimePrecise.LowPart;
}
