/*
 * XREFs of AlpcpSetupMessageDataForDeferredCopy @ 0x1408EE3C0
 * Callers:
 *     AlpcpAcceptConnectPort @ 0x1408ECFF0 (AlpcpAcceptConnectPort.c)
 *     AlpcpFormatConnectionRequest @ 0x1408EE1CC (AlpcpFormatConnectionRequest.c)
 * Callees:
 *     MmIsUserAddress @ 0x1404468F0 (MmIsUserAddress.c)
 *     AlpcpReleasePagedPoolQuota @ 0x1408EE5D0 (AlpcpReleasePagedPoolQuota.c)
 *     AlpcpChargePagedPoolQuota @ 0x14098D9AC (AlpcpChargePagedPoolQuota.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AlpcpSetupMessageDataForDeferredCopy(
        __int64 a1,
        __int64 a2,
        int a3,
        unsigned __int16 a4,
        char a5,
        char a6)
{
  unsigned int v6; // ebx
  __int64 v7; // r14
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rsi
  __int64 v11; // rax
  unsigned __int64 v12; // rcx
  void *v13; // rcx
  __int64 v15; // r14
  void *v16; // rcx
  unsigned __int64 v17; // rdi
  __int64 Pool2; // rax
  __int64 v19; // rcx
  int v20; // edi
  __int64 v21; // rcx
  __int64 v22; // rcx

  v6 = 0;
  v7 = a2;
  if ( !a5 )
  {
    if ( a3 >= 0 || (a3 & 0x40000000) != 0 )
      v7 = a2 + 40;
    else
      v7 = a2 + 24;
  }
  v9 = a4;
  if ( a6 && !MmIsUserAddress(a4 + v7) )
    return 3221225477LL;
  v10 = 512LL;
  *(_QWORD *)(a1 + 176) = v7 | a6;
  v11 = *(_QWORD *)(a1 + 96);
  if ( v11 )
    v12 = *(_QWORD *)(v11 + 32) - 40LL;
  else
    v12 = 512LL;
  if ( v9 > v12 )
  {
    if ( v11 )
      v10 = *(_QWORD *)(v11 + 32) - 40LL;
    if ( v9 > v10 )
    {
      if ( v9 > 0xFFD7 )
      {
        return (unsigned int)-2147483643;
      }
      else
      {
        v15 = *(_QWORD *)(a1 + 232);
        if ( v9 > v15 + v10 )
        {
          v16 = *(void **)(a1 + 224);
          if ( v16 )
          {
            ExFreePoolWithTag(v16, 0x42456C41u);
            *(_QWORD *)(a1 + 232) = 0LL;
          }
          v17 = v9 - v10;
          Pool2 = ExAllocatePool2(0x100uLL);
          v19 = *(_QWORD *)(a1 + 48);
          *(_QWORD *)(a1 + 224) = Pool2;
          if ( Pool2 )
          {
            *(_QWORD *)(a1 + 232) = v17;
            if ( v19 )
            {
              v20 = AlpcpChargePagedPoolQuota(v19, v17 - v15);
              if ( v20 < 0 )
              {
                ExFreePoolWithTag(*(PVOID *)(a1 + 224), 0x42456C41u);
                v21 = *(_QWORD *)(a1 + 48);
                *(_QWORD *)(a1 + 224) = 0LL;
                *(_QWORD *)(a1 + 232) = 0LL;
                AlpcpReleasePagedPoolQuota(v21, v15);
                return (unsigned int)v20;
              }
            }
          }
          else
          {
            if ( v19 )
              AlpcpReleasePagedPoolQuota(v19, v15);
            return (unsigned int)-1073741670;
          }
        }
      }
    }
    else
    {
      v13 = *(void **)(a1 + 224);
      if ( v13 )
      {
        ExFreePoolWithTag(v13, 0x42456C41u);
        v22 = *(_QWORD *)(a1 + 48);
        *(_QWORD *)(a1 + 224) = 0LL;
        if ( v22 )
          AlpcpReleasePagedPoolQuota(v22, *(_QWORD *)(a1 + 232));
        *(_QWORD *)(a1 + 232) = 0LL;
      }
    }
  }
  return v6;
}
