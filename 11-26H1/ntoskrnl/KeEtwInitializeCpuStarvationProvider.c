/*
 * XREFs of KeEtwInitializeCpuStarvationProvider @ 0x1405EB654
 * Callers:
 *     EtwpCpuStarvationProvEnableCallback @ 0x1406C7580 (EtwpCpuStarvationProvEnableCallback.c)
 * Callees:
 *     KeGetPrcb @ 0x140290C30 (KeGetPrcb.c)
 *     KeEnumerateNextProcessor @ 0x14042E520 (KeEnumerateNextProcessor.c)
 *     ExAllocatePool3 @ 0x140C16010 (ExAllocatePool3.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 KeEtwInitializeCpuStarvationProvider()
{
  __int64 Prcb; // rax
  __int64 v1; // rbx
  __int64 v2; // rcx
  _WORD *v3; // rax
  __int64 result; // rax
  __int128 v5; // [rsp+30h] [rbp-30h] BYREF
  unsigned __int16 *v6[2]; // [rsp+40h] [rbp-20h] BYREF
  __int16 v7; // [rsp+50h] [rbp-10h]
  int v8; // [rsp+52h] [rbp-Eh]
  __int16 v9; // [rsp+56h] [rbp-Ah]
  unsigned int v10; // [rsp+70h] [rbp+10h] BYREF

  v6[1] = *(unsigned __int16 **)((char *)&stru_140FC11F0.116 + 4);
  v8 = 0;
  v6[0] = (unsigned __int16 *)&stru_140FC11F0.WaitRegister.Flags;
  v9 = 0;
  v5 = 0LL;
  v10 = 0;
  v7 = 0;
  while ( 1 )
  {
    result = KeEnumerateNextProcessor(&v10, v6);
    if ( (_DWORD)result )
      break;
    Prcb = KeGetPrcb(v10);
    v1 = Prcb;
    if ( !*(_QWORD *)(Prcb + 14544) )
    {
      v2 = *(_QWORD *)(Prcb + 192);
      LOBYTE(v5) = 3;
      DWORD2(v5) = *(unsigned __int16 *)(v2 + 138);
      v3 = (_WORD *)ExAllocatePool3(64LL, 80LL, 1883466059LL, &v5, 1);
      if ( v3 )
      {
        *(_BYTE *)v3 = 19;
        v3[1] = 0;
        *((_QWORD *)v3 + 3) = KiLogSingleDpcSoftTimeoutEvent;
        *((_QWORD *)v3 + 4) = v1;
        *((_QWORD *)v3 + 7) = 0LL;
        *((_QWORD *)v3 + 2) = 0LL;
        *((_BYTE *)v3 + 1) = 2;
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v1 + 14544), (signed __int64)v3, 0LL) )
          ExFreePoolWithTag(v3, 0x7043694Bu);
      }
    }
  }
  return result;
}
