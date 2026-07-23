/*
 * XREFs of MiSpecialPurposeMemoryCacheUpdateDpc @ 0x140711A80
 * Callers:
 *     <none>
 * Callees:
 *     KeWakeAddressAll @ 0x140304EB0 (KeWakeAddressAll.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KeCanUseHaltOnAddress @ 0x1403E8980 (KeCanUseHaltOnAddress.c)
 *     KiHaltOnAddress @ 0x1403E89D8 (KiHaltOnAddress.c)
 */

__int64 __fastcall MiSpecialPurposeMemoryCacheUpdateDpc(
        __int64 a1,
        __int64 *a2,
        volatile signed __int32 *a3,
        unsigned __int64 a4)
{
  __int64 v4; // rbp
  signed __int32 v8; // eax
  unsigned int v9; // edi
  _QWORD *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rdx
  _QWORD *v15; // rcx
  volatile signed __int32 v16; // eax
  unsigned int v17; // ebp
  char v18; // r14
  signed __int32 v19; // ecx
  signed __int32 v20; // edx
  volatile signed __int32 v21; // r8d
  int v22; // esi
  __int64 result; // rax
  unsigned int v24; // edi
  unsigned int v25; // ebp
  char v26; // r14
  signed __int32 v27; // ecx
  signed __int32 v28; // edx
  volatile signed __int32 v29; // r8d
  int v30; // esi
  __int64 v31; // [rsp+48h] [rbp+10h] BYREF

  v4 = *a2;
  v8 = _InterlockedDecrement((volatile signed __int32 *)a4);
  v9 = ~v8 & 0x80000000;
  if ( (v8 & 0x3FFFFFFF) != 0 )
  {
    v16 = *(_DWORD *)a4;
    v17 = 0;
    v18 = 0;
    while ( (v16 & 0x80000000) != v9 )
    {
      if ( (++v17 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        ++v18;
        if ( KeCanUseHaltOnAddress() && (KiVelocityFlags & 0x20000) != 0 && (v18 & 7) == 0 )
        {
          v19 = *(_DWORD *)a4;
          if ( (*(_DWORD *)a4 & 0x80000000) != v9 )
          {
            v20 = *(_DWORD *)a4;
            v21 = *(_DWORD *)a4;
            do
            {
              v22 = v19 | 0x40000000;
              v19 = _InterlockedCompareExchange((volatile signed __int32 *)a4, v19 | 0x40000000, v20);
              if ( v19 == v21 )
              {
                LODWORD(v31) = v22;
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
            while ( (v19 & 0x80000000) != v9 );
          }
        }
        else
        {
          HvlNotifyLongSpinWait(v17);
        }
      }
      else
      {
        _mm_pause();
      }
      v16 = *(_DWORD *)a4;
    }
  }
  else
  {
    if ( (_InterlockedExchange((volatile __int32 *)a4, *(_DWORD *)(a4 + 4) | v9) & 0x40000000) != 0 )
      KeWakeAddressAll();
    if ( *((_DWORD *)a2 + 4) )
    {
      v10 = (_QWORD *)(v4 + 72);
      v11 = a2[1] + 21416;
      v12 = *(_QWORD *)v11;
      if ( *(_QWORD *)(*(_QWORD *)v11 + 8LL) == v11 )
      {
        *v10 = v12;
        *(_QWORD *)(v4 + 80) = v11;
        *(_QWORD *)(v12 + 8) = v10;
        *(_QWORD *)v11 = v10;
        goto LABEL_29;
      }
LABEL_10:
      __fastfail(3u);
    }
    v13 = *a2 + 72;
    v14 = *(_QWORD *)v13;
    if ( *(_QWORD *)(*(_QWORD *)v13 + 8LL) != v13 )
      goto LABEL_10;
    v15 = *(_QWORD **)(*a2 + 80);
    if ( *v15 != v13 )
      goto LABEL_10;
    *v15 = v14;
    *(_QWORD *)(v14 + 8) = v15;
    *(_QWORD *)(*a2 + 72) = 0LL;
  }
LABEL_29:
  result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)a4);
  v24 = ~(_DWORD)result & 0x80000000;
  if ( (result & 0x3FFFFFFF) != 0 )
  {
    v25 = 0;
    v26 = 0;
    while ( 1 )
    {
      result = *(_DWORD *)a4 & 0x80000000;
      if ( (_DWORD)result == v24 )
        break;
      if ( (++v25 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        ++v26;
        if ( KeCanUseHaltOnAddress() && (KiVelocityFlags & 0x20000) != 0 && (v26 & 7) == 0 )
        {
          v27 = *(_DWORD *)a4;
          if ( (*(_DWORD *)a4 & 0x80000000) != v24 )
          {
            v28 = *(_DWORD *)a4;
            v29 = *(_DWORD *)a4;
            do
            {
              v30 = v27 | 0x40000000;
              v27 = _InterlockedCompareExchange((volatile signed __int32 *)a4, v27 | 0x40000000, v28);
              if ( v27 == v29 )
              {
                LODWORD(v31) = v30;
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
            while ( (v27 & 0x80000000) != v24 );
          }
        }
        else
        {
          HvlNotifyLongSpinWait(v25);
        }
      }
      else
      {
        _mm_pause();
      }
    }
  }
  else if ( (_InterlockedExchange((volatile __int32 *)a4, *(_DWORD *)(a4 + 4) | v24) & 0x40000000) != 0 )
  {
    result = KeWakeAddressAll();
  }
  _InterlockedDecrement(a3);
  return result;
}
