/*
 * XREFs of MiUpdatePageThresholdsDpc @ 0x1403E7A10
 * Callers:
 *     <none>
 * Callees:
 *     KeWakeAddressAll @ 0x140304EB0 (KeWakeAddressAll.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KeCanUseHaltOnAddress @ 0x1403E8980 (KeCanUseHaltOnAddress.c)
 *     KiHaltOnAddress @ 0x1403E89D8 (KiHaltOnAddress.c)
 *     MiUpdateAvailableEventsAtDpc @ 0x1403E8DF0 (MiUpdateAvailableEventsAtDpc.c)
 */

__int64 __fastcall MiUpdatePageThresholdsDpc(__int64 a1, _QWORD *a2, volatile signed __int32 *a3, __int64 a4)
{
  signed __int32 v7; // eax
  unsigned int v8; // edi
  __int64 v9; // rcx
  volatile signed __int32 v10; // eax
  unsigned int v11; // ebp
  char v12; // r14
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  signed __int32 v16; // ecx
  signed __int32 v17; // edx
  volatile signed __int32 v18; // r8d
  int v19; // esi
  __int64 result; // rax
  unsigned int v21; // edi
  unsigned int v22; // ebp
  char v23; // r14
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  signed __int32 v27; // ecx
  signed __int32 v28; // edx
  volatile signed __int32 v29; // r8d
  int v30; // esi
  int v31; // [rsp+58h] [rbp+10h] BYREF

  v7 = _InterlockedDecrement((volatile signed __int32 *)a4);
  v8 = ~v7 & 0x80000000;
  if ( (v7 & 0x3FFFFFFF) != 0 )
  {
    v10 = *(_DWORD *)a4;
    v11 = 0;
    v12 = 0;
    while ( (v10 & 0x80000000) != v8 )
    {
      if ( (++v11 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        ++v12;
        if ( (unsigned __int8)KeCanUseHaltOnAddress(v14, v13, v15) && (KiVelocityFlags & 0x20000) != 0 && (v12 & 7) == 0 )
        {
          v16 = *(_DWORD *)a4;
          if ( (*(_DWORD *)a4 & 0x80000000) != v8 )
          {
            v17 = *(_DWORD *)a4;
            v18 = *(_DWORD *)a4;
            do
            {
              v19 = v16 | 0x40000000;
              v16 = _InterlockedCompareExchange((volatile signed __int32 *)a4, v16 | 0x40000000, v17);
              if ( v16 == v18 )
              {
                v31 = v19;
                do
                {
                  KiHaltOnAddress(a4, &v31, 4LL);
                  v16 = *(_DWORD *)a4;
                }
                while ( *(_DWORD *)a4 == v19 );
              }
              v17 = v16;
              v18 = v16;
            }
            while ( (v16 & 0x80000000) != v8 );
          }
        }
        else
        {
          HvlNotifyLongSpinWait(v11);
        }
      }
      else
      {
        _mm_pause();
      }
      v10 = *(_DWORD *)a4;
    }
  }
  else
  {
    if ( (_InterlockedExchange((volatile __int32 *)a4, *(_DWORD *)(a4 + 4) | v8) & 0x40000000) != 0 )
      KeWakeAddressAll();
    v9 = a2[2];
    *(_QWORD *)(v9 + 17024) = *a2;
    *(_QWORD *)(v9 + 17032) = a2[1];
    MiUpdateAvailableEventsAtDpc(v9);
  }
  result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)a4);
  v21 = ~(_DWORD)result & 0x80000000;
  if ( (result & 0x3FFFFFFF) != 0 )
  {
    v22 = 0;
    v23 = 0;
    while ( 1 )
    {
      result = *(_DWORD *)a4 & 0x80000000;
      if ( (_DWORD)result == v21 )
        break;
      if ( (++v22 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        ++v23;
        if ( (unsigned __int8)KeCanUseHaltOnAddress(v25, v24, v26) && (KiVelocityFlags & 0x20000) != 0 && (v23 & 7) == 0 )
        {
          v27 = *(_DWORD *)a4;
          if ( (*(_DWORD *)a4 & 0x80000000) != v21 )
          {
            v28 = *(_DWORD *)a4;
            v29 = *(_DWORD *)a4;
            do
            {
              v30 = v27 | 0x40000000;
              v27 = _InterlockedCompareExchange((volatile signed __int32 *)a4, v27 | 0x40000000, v28);
              if ( v27 == v29 )
              {
                v31 = v30;
                do
                {
                  KiHaltOnAddress(a4, &v31, 4LL);
                  v27 = *(_DWORD *)a4;
                }
                while ( *(_DWORD *)a4 == v30 );
              }
              v28 = v27;
              v29 = v27;
            }
            while ( (v27 & 0x80000000) != v21 );
          }
        }
        else
        {
          HvlNotifyLongSpinWait(v22);
        }
      }
      else
      {
        _mm_pause();
      }
    }
  }
  else if ( (_InterlockedExchange((volatile __int32 *)a4, *(_DWORD *)(a4 + 4) | v21) & 0x40000000) != 0 )
  {
    result = KeWakeAddressAll();
  }
  _InterlockedDecrement(a3);
  return result;
}
