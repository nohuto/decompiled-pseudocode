/*
 * XREFs of KeSignalCallDpcSynchronize @ 0x140307790
 * Callers:
 *     KiInitializeDynamicProcessorDpc @ 0x140BFB030 (KiInitializeDynamicProcessorDpc.c)
 *     MiApplyImageHotPatchDpc @ 0x140C077F0 (MiApplyImageHotPatchDpc.c)
 * Callees:
 *     KeWakeAddressAll @ 0x140304EB0 (KeWakeAddressAll.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KeCanUseHaltOnAddress @ 0x1403E8980 (KeCanUseHaltOnAddress.c)
 *     KiHaltOnAddress @ 0x1403E89D8 (KiHaltOnAddress.c)
 */

__int64 __fastcall KeSignalCallDpcSynchronize(__int64 a1)
{
  signed __int32 v2; // eax
  unsigned int v3; // ebx
  unsigned int v4; // ebp
  char v5; // r15
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  signed __int32 v11; // ecx
  signed __int32 v12; // edx
  volatile signed __int32 v13; // r8d
  int v14; // r14d
  int v15; // [rsp+50h] [rbp+8h] BYREF

  v2 = _InterlockedDecrement((volatile signed __int32 *)a1);
  v3 = ~v2 & 0x80000000;
  if ( (v2 & 0x3FFFFFFF) != 0 )
  {
    v4 = 0;
    v5 = 0;
    while ( (*(_DWORD *)a1 & 0x80000000) != v3 )
    {
      if ( (++v4 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        ++v5;
        if ( (unsigned __int8)KeCanUseHaltOnAddress(v9, v8, v10) && (KiVelocityFlags & 0x20000) != 0 && (v5 & 7) == 0 )
        {
          v11 = *(_DWORD *)a1;
          if ( (*(_DWORD *)a1 & 0x80000000) != v3 )
          {
            v12 = *(_DWORD *)a1;
            v13 = *(_DWORD *)a1;
            do
            {
              v14 = v11 | 0x40000000;
              v11 = _InterlockedCompareExchange((volatile signed __int32 *)a1, v11 | 0x40000000, v12);
              if ( v11 == v13 )
              {
                v15 = v14;
                do
                {
                  KiHaltOnAddress(a1, &v15, 4LL);
                  v11 = *(_DWORD *)a1;
                }
                while ( *(_DWORD *)a1 == v14 );
              }
              v12 = v11;
              v13 = v11;
            }
            while ( (v11 & 0x80000000) != v3 );
          }
        }
        else
        {
          HvlNotifyLongSpinWait(v4);
        }
      }
      else
      {
        _mm_pause();
      }
    }
    return 0;
  }
  else
  {
    if ( (_InterlockedExchange((volatile __int32 *)a1, *(_DWORD *)(a1 + 4) | v3) & 0x40000000) != 0 )
      KeWakeAddressAll();
    return 1;
  }
}
