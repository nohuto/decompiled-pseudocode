/*
 * XREFs of KiCancelTimer @ 0x1403B6FE0
 * Callers:
 *     KiSuspendThread @ 0x14020917C (KiSuspendThread.c)
 *     KiSetTimerEx @ 0x1403B5C30 (KiSetTimerEx.c)
 *     KeSetTimerEx @ 0x1403B5EA0 (KeSetTimerEx.c)
 *     KeCancelTimerInternal @ 0x1404B2DDC (KeCancelTimerInternal.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     EtwTraceKernelEvent @ 0x1402BCA50 (EtwTraceKernelEvent.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     DifObjTrkRemoveItem @ 0x1403B7980 (DifObjTrkRemoveItem.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall KiCancelTimer(__int64 a1, char a2)
{
  char v3; // si
  unsigned __int8 v4; // r15
  unsigned int v5; // edi
  unsigned int v6; // ebp
  unsigned __int64 v7; // r13
  __int64 v8; // r12
  __int64 v9; // r14
  volatile signed __int32 *v10; // rdi
  unsigned __int8 v11; // r8
  _QWORD *v12; // rcx
  _QWORD *v13; // rax
  __int64 v14; // r15
  unsigned __int64 v15; // rbp
  unsigned int v16; // eax
  volatile signed __int32 *v18; // rsi
  unsigned int v19; // r14d
  __int64 v20; // rcx
  unsigned int v21; // edi
  unsigned int v22; // r14d
  char v23; // al
  int v25; // [rsp+34h] [rbp-54h] BYREF
  __int64 v26; // [rsp+38h] [rbp-50h] BYREF
  _QWORD v27[2]; // [rsp+40h] [rbp-48h] BYREF

  v26 = 0LL;
  if ( _InterlockedCompareExchange8((volatile signed __int8 *)(a1 + 59), 1, 2) == 2 )
  {
    v3 = 1;
    DifObjTrkRemoveItem(49LL, a1, 0LL);
  }
  else
  {
    v3 = 0;
  }
  v4 = 0;
  while ( 1 )
  {
    v5 = 0;
    if ( _interlockedbittestandset((volatile signed __int32 *)a1, 7u) )
    {
      do
      {
        if ( (++v5 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v5);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( (*(_DWORD *)a1 & 0x80u) != 0 || _interlockedbittestandset((volatile signed __int32 *)a1, 7u) );
    }
    if ( v3 )
      _InterlockedCompareExchange8((volatile signed __int8 *)(a1 + 59), 0, 1);
    if ( (*(_BYTE *)(a1 + 3) & 0xC0) == 0 )
      break;
    v6 = 0;
    v7 = *(unsigned __int8 *)(a1 + 2);
    v8 = KiProcessorBlock[*(unsigned __int16 *)(a1 + 56)];
    v9 = v8 + 16640;
    v10 = (volatile signed __int32 *)(v8
                                    + 16640
                                    + 32 * (((unsigned __int64)*(unsigned __int8 *)(a1 + 58) << 8) + v7 + 16));
    while ( _interlockedbittestandset64(v10, 0LL) )
    {
      do
      {
        if ( (++v6 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v6);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(_QWORD *)v10 );
    }
    if ( *(char *)(a1 + 3) >= 0 )
    {
      v11 = *(_BYTE *)(a1 + 58);
      v12 = *(_QWORD **)(a1 + 32);
      v13 = *(_QWORD **)(a1 + 40);
      v14 = v9 + 32 * (v7 + ((v11 ^ 1LL) << 8) + 16);
      v15 = v9 + 32 * (v7 + ((unsigned __int64)v11 << 8) + 16);
      if ( v12[1] != a1 + 32 || *v13 != a1 + 32 )
        __fastfail(3u);
      *v13 = v12;
      v12[1] = v13;
      if ( v13 != v12 )
        goto LABEL_18;
      *(_DWORD *)(v15 + 28) = -1;
      if ( !v11 )
      {
        v18 = (volatile signed __int32 *)(v9 + 32 * (v7 + 272));
        v19 = 0;
        while ( _interlockedbittestandset64(v18, 0LL) )
        {
          do
          {
            if ( (++v19 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && KiCheckVpBackingLongSpinWaitHypercall() )
            {
              HvlNotifyLongSpinWait(v19);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( *(_QWORD *)v18 );
        }
        goto LABEL_34;
      }
      v18 = (volatile signed __int32 *)(v9 + 32 * (v7 + 16));
      if ( _interlockedbittestandset64(v18, 0LL) )
      {
        _mm_pause();
        goto LABEL_45;
      }
      if ( !v18 )
      {
LABEL_45:
        _InterlockedAnd64((volatile signed __int64 *)v10, 0LL);
        v21 = 0;
        while ( _interlockedbittestandset64(v18, 0LL) )
        {
          do
          {
            if ( (++v21 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && KiCheckVpBackingLongSpinWaitHypercall() )
            {
              HvlNotifyLongSpinWait(v21);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( *(_QWORD *)v18 );
        }
        v10 = (volatile signed __int32 *)(v9 + 32 * (v7 + 272));
        v22 = 0;
        while ( _interlockedbittestandset64(v10, 0LL) )
        {
          do
          {
            if ( (++v22 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && KiCheckVpBackingLongSpinWaitHypercall() )
            {
              HvlNotifyLongSpinWait(v22);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( *(_QWORD *)v10 );
        }
      }
LABEL_34:
      if ( *(_DWORD *)(v15 + 28) == -1 && *(_DWORD *)(v14 + 28) == -1 )
      {
        v20 = qword_140FC2698[2 * *(unsigned __int8 *)(v8 + 208)];
        if ( !KiSerializeTimerExpiration )
        {
          _interlockedbittestandreset64((volatile signed __int32 *)((v7 << 6) + v20), *(unsigned __int8 *)(v8 + 209));
          _InterlockedAnd64((volatile signed __int64 *)v18, 0LL);
          goto LABEL_18;
        }
        _interlockedbittestandreset64((volatile signed __int32 *)(v20 + 8 * (v7 >> 6)), v7 & 0x3F);
      }
      _InterlockedAnd64((volatile signed __int64 *)v18, 0LL);
LABEL_18:
      _InterlockedAnd64((volatile signed __int64 *)v10, 0LL);
      v16 = -1073741953;
      if ( !a2 )
        v16 = -1073741825;
LABEL_20:
      v4 = 1;
      _InterlockedAnd((volatile signed __int32 *)a1, v16);
      goto LABEL_24;
    }
    _InterlockedAnd64((volatile signed __int64 *)v10, 0LL);
    if ( _InterlockedExchange64((volatile __int64 *)(v9 + 8LL * (*(_BYTE *)(a1 + 3) & 0x3F)), 0LL) )
    {
      v16 = 16777087;
      if ( !a2 )
        v16 = 0xFFFFFF;
      goto LABEL_20;
    }
    _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
    v23 = *(_BYTE *)(a1 + 3);
    v25 = 0;
    if ( v23 < 0 )
    {
      do
        KeYieldProcessorEx(&v25);
      while ( *(char *)(a1 + 3) < 0 );
    }
  }
  if ( a2 )
    _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
LABEL_24:
  if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 && v4 )
  {
    v26 = a1;
    v27[0] = &v26;
    v27[1] = 8LL;
    EtwTraceKernelEvent((int)v27, 1, 0x40020000u, 3925, 1538);
  }
  return v4;
}
