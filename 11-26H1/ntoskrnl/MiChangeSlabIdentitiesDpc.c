/*
 * XREFs of MiChangeSlabIdentitiesDpc @ 0x14070A9B0
 * Callers:
 *     <none>
 * Callees:
 *     KeWakeAddressAll @ 0x140304EB0 (KeWakeAddressAll.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KeCanUseHaltOnAddress @ 0x1403E8980 (KeCanUseHaltOnAddress.c)
 *     KiHaltOnAddress @ 0x1403E89D8 (KiHaltOnAddress.c)
 *     MiEnumerateSlabAllocatorsEx @ 0x14049A754 (MiEnumerateSlabAllocatorsEx.c)
 */

__int64 __fastcall MiChangeSlabIdentitiesDpc(__int64 a1, __int64 a2, volatile signed __int32 *a3, unsigned __int64 a4)
{
  signed __int32 v7; // eax
  unsigned int v8; // edi
  volatile signed __int32 v9; // eax
  unsigned int v10; // ebp
  char v11; // r14
  signed __int32 v12; // ecx
  signed __int32 v13; // edx
  volatile signed __int32 v14; // r8d
  int v15; // esi
  __int64 result; // rax
  unsigned int v17; // edi
  unsigned int v18; // ebp
  char v19; // r14
  signed __int32 v20; // ecx
  signed __int32 v21; // edx
  volatile signed __int32 v22; // r8d
  int v23; // esi
  __int64 v24; // [rsp+78h] [rbp+20h] BYREF

  v7 = _InterlockedDecrement((volatile signed __int32 *)a4);
  v8 = ~v7 & 0x80000000;
  if ( (v7 & 0x3FFFFFFF) != 0 )
  {
    v9 = *(_DWORD *)a4;
    v10 = 0;
    v11 = 0;
    while ( (v9 & 0x80000000) != v8 )
    {
      if ( (++v10 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        ++v11;
        if ( KeCanUseHaltOnAddress() && (KiVelocityFlags & 0x20000) != 0 && (v11 & 7) == 0 )
        {
          v12 = *(_DWORD *)a4;
          if ( (*(_DWORD *)a4 & 0x80000000) != v8 )
          {
            v13 = *(_DWORD *)a4;
            v14 = *(_DWORD *)a4;
            do
            {
              v15 = v12 | 0x40000000;
              v12 = _InterlockedCompareExchange((volatile signed __int32 *)a4, v12 | 0x40000000, v13);
              if ( v12 == v14 )
              {
                LODWORD(v24) = v15;
                do
                {
                  KiHaltOnAddress(a4, &v24, 4LL);
                  v12 = *(_DWORD *)a4;
                }
                while ( *(_DWORD *)a4 == v15 );
              }
              v13 = v12;
              v14 = v12;
            }
            while ( (v12 & 0x80000000) != v8 );
          }
        }
        else
        {
          HvlNotifyLongSpinWait(v10);
        }
      }
      else
      {
        _mm_pause();
      }
      v9 = *(_DWORD *)a4;
    }
  }
  else
  {
    if ( (_InterlockedExchange((volatile __int32 *)a4, *(_DWORD *)(a4 + 4) | v8) & 0x40000000) != 0 )
      KeWakeAddressAll();
    MiEnumerateSlabAllocatorsEx(a2, (__int64)MiDeleteSlabEntriesForIdentity, 1LL, 0xFFFFFFFF, 8u);
  }
  result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)a4);
  v17 = ~(_DWORD)result & 0x80000000;
  if ( (result & 0x3FFFFFFF) != 0 )
  {
    v18 = 0;
    v19 = 0;
    while ( 1 )
    {
      result = *(_DWORD *)a4 & 0x80000000;
      if ( (_DWORD)result == v17 )
        break;
      if ( (++v18 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        ++v19;
        if ( KeCanUseHaltOnAddress() && (KiVelocityFlags & 0x20000) != 0 && (v19 & 7) == 0 )
        {
          v20 = *(_DWORD *)a4;
          if ( (*(_DWORD *)a4 & 0x80000000) != v17 )
          {
            v21 = *(_DWORD *)a4;
            v22 = *(_DWORD *)a4;
            do
            {
              v23 = v20 | 0x40000000;
              v20 = _InterlockedCompareExchange((volatile signed __int32 *)a4, v20 | 0x40000000, v21);
              if ( v20 == v22 )
              {
                LODWORD(v24) = v23;
                do
                {
                  KiHaltOnAddress(a4, &v24, 4LL);
                  v20 = *(_DWORD *)a4;
                }
                while ( *(_DWORD *)a4 == v23 );
              }
              v21 = v20;
              v22 = v20;
            }
            while ( (v20 & 0x80000000) != v17 );
          }
        }
        else
        {
          HvlNotifyLongSpinWait(v18);
        }
      }
      else
      {
        _mm_pause();
      }
    }
  }
  else if ( (_InterlockedExchange((volatile __int32 *)a4, *(_DWORD *)(a4 + 4) | v17) & 0x40000000) != 0 )
  {
    result = KeWakeAddressAll();
  }
  _InterlockedDecrement(a3);
  return result;
}
