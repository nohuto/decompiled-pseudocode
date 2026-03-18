/*
 * XREFs of PpmIdleCsVetoAccountingUpdateBlock @ 0x14042C8CC
 * Callers:
 *     PpmIdleCaptureCsVetoAccounting @ 0x14042C5F8 (PpmIdleCaptureCsVetoAccounting.c)
 *     PpmIdleCsVetoAccountingDeviceUpdate @ 0x14042C7DC (PpmIdleCsVetoAccountingDeviceUpdate.c)
 *     PpmIdleCsVetoAccountingResiliencyUpdate @ 0x14042C844 (PpmIdleCsVetoAccountingResiliencyUpdate.c)
 *     PpmIdleStartCsVetoAccounting @ 0x14042D8F8 (PpmIdleStartCsVetoAccounting.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x140208110 (RtlGetInterruptTimePrecise.c)
 */

char __fastcall PpmIdleCsVetoAccountingUpdateBlock(__int64 a1, char a2, char a3)
{
  __int64 InterruptTimePrecise; // rax
  char v5; // dl
  unsigned int v6; // ecx
  __int64 j; // r10
  __int64 v8; // r8
  unsigned __int64 v9; // rdx
  __int64 v10; // r9
  unsigned int i; // ecx
  __int64 v12; // r8
  unsigned __int64 v13; // rdx
  unsigned __int64 v15; // [rsp+48h] [rbp+20h] BYREF

  LOBYTE(InterruptTimePrecise) = *(_BYTE *)(a1 + 24);
  if ( a3 )
  {
    v5 = InterruptTimePrecise & ~a2;
    *(_BYTE *)(a1 + 24) = v5;
    if ( !v5 )
    {
      InterruptTimePrecise = RtlGetInterruptTimePrecise(&v15);
      for ( i = 0; i < *(_DWORD *)(a1 + 28); ++i )
      {
        v12 = *(_QWORD *)(a1 + 32);
        v13 = (unsigned __int64)i << 6;
        if ( *(_QWORD *)(v13 + v12 + 32) )
          *(_QWORD *)(v13 + v12 + 48) = InterruptTimePrecise;
      }
    }
  }
  else
  {
    LOBYTE(InterruptTimePrecise) = a2 | InterruptTimePrecise;
    *(_BYTE *)(a1 + 24) = InterruptTimePrecise;
    if ( (_BYTE)InterruptTimePrecise == a2 )
    {
      InterruptTimePrecise = RtlGetInterruptTimePrecise(&v15);
      v6 = 0;
      for ( j = InterruptTimePrecise; v6 < *(_DWORD *)(a1 + 28); ++v6 )
      {
        v8 = *(_QWORD *)(a1 + 32);
        v9 = (unsigned __int64)v6 << 6;
        v10 = *(_QWORD *)(v9 + v8 + 48);
        if ( v10 )
        {
          *(_QWORD *)(v9 + v8 + 48) = 0LL;
          LOBYTE(InterruptTimePrecise) = j - v10;
          *(_QWORD *)(v9 + v8 + 56) += j - v10;
        }
      }
    }
  }
  return InterruptTimePrecise;
}
