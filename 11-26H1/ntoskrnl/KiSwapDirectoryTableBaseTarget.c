/*
 * XREFs of KiSwapDirectoryTableBaseTarget @ 0x140307D60
 * Callers:
 *     <none>
 * Callees:
 *     KiLoadDirectoryTableBase @ 0x140248F60 (KiLoadDirectoryTableBase.c)
 *     KeWakeAddressAll @ 0x140304EB0 (KeWakeAddressAll.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KeCanUseHaltOnAddress @ 0x1403E8980 (KeCanUseHaltOnAddress.c)
 *     KiHaltOnAddress @ 0x1403E89D8 (KiHaltOnAddress.c)
 *     MmStealTopLevelPage @ 0x1404BC7D4 (MmStealTopLevelPage.c)
 */

volatile signed __int32 *__fastcall KiSwapDirectoryTableBaseTarget(
        __int64 a1,
        __int64 a2,
        volatile signed __int32 *a3,
        __int64 a4)
{
  _KPROCESS *v4; // r15
  signed __int32 v7; // eax
  unsigned int v8; // edi
  volatile signed __int32 v9; // eax
  unsigned int v10; // ebp
  char v11; // r14
  signed __int32 v12; // eax
  unsigned int v13; // edi
  unsigned int v14; // ebp
  char v15; // r14
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  signed __int32 v19; // ecx
  signed __int32 v20; // edx
  volatile signed __int32 v21; // r8d
  int v22; // esi
  volatile signed __int32 *result; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  signed __int32 v27; // ecx
  signed __int32 v28; // edx
  volatile signed __int32 v29; // r8d
  int v30; // esi
  int v31; // [rsp+58h] [rbp+10h] BYREF
  volatile signed __int32 *v32; // [rsp+60h] [rbp+18h]

  v32 = a3;
  v4 = *(_KPROCESS **)(a2 + 8);
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
        if ( (unsigned __int8)KeCanUseHaltOnAddress(v17, v16, v18) && (KiVelocityFlags & 0x20000) != 0 && (v11 & 7) == 0 )
        {
          v19 = *(_DWORD *)a4;
          if ( (*(_DWORD *)a4 & 0x80000000) != v8 )
          {
            v20 = *(_DWORD *)a4;
            v21 = *(_DWORD *)a4;
            do
            {
              v22 = v19 | 0x40000000;
              v19 = _InterlockedCompareExchange((volatile signed __int32 *)a4, v19 | 0x40000000, v20);
              if ( v19 == v21 )
              {
                v31 = v22;
                do
                {
                  KiHaltOnAddress(a4, &v31, 4LL);
                  v19 = *(_DWORD *)a4;
                }
                while ( *(_DWORD *)a4 == v22 );
              }
              v20 = v19;
              v21 = v19;
            }
            while ( (v19 & 0x80000000) != v8 );
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
  else if ( (_InterlockedExchange((volatile __int32 *)a4, *(_DWORD *)(a4 + 4) | v8) & 0x40000000) != 0 )
  {
    KeWakeAddressAll();
  }
  if ( (unsigned int)MmStealTopLevelPage(*(_QWORD *)(a2 + 16)) )
    *(_BYTE *)a2 = 1;
  v12 = _InterlockedDecrement((volatile signed __int32 *)a4);
  v13 = ~v12 & 0x80000000;
  if ( (v12 & 0x3FFFFFFF) != 0 )
  {
    v14 = 0;
    v15 = 0;
    while ( (*(_DWORD *)a4 & 0x80000000) != v13 )
    {
      if ( (++v14 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        ++v15;
        if ( (unsigned __int8)KeCanUseHaltOnAddress(v25, v24, v26) && (KiVelocityFlags & 0x20000) != 0 && (v15 & 7) == 0 )
        {
          v27 = *(_DWORD *)a4;
          if ( (*(_DWORD *)a4 & 0x80000000) != v13 )
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
            while ( (v27 & 0x80000000) != v13 );
          }
        }
        else
        {
          HvlNotifyLongSpinWait(v14);
        }
      }
      else
      {
        _mm_pause();
      }
    }
  }
  else if ( (_InterlockedExchange((volatile __int32 *)a4, *(_DWORD *)(a4 + 4) | v13) & 0x40000000) != 0 )
  {
    KeWakeAddressAll();
  }
  if ( *(_BYTE *)a2 && KeGetCurrentThread()->ApcState.Process == v4 )
    KiLoadDirectoryTableBase((__int64)v4, v4->DirectoryTableBase);
  result = v32;
  _InterlockedDecrement(v32);
  return result;
}
