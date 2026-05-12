/*
 * XREFs of sub_1400F0514 @ 0x1400F0514
 * Callers:
 *     sub_1400F16A4 @ 0x1400F16A4 (sub_1400F16A4.c)
 * Callees:
 *     sub_140120B60 @ 0x140120B60 (sub_140120B60.c)
 *     _guard_dispatch_icall @ 0x14013C5D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall sub_1400F0514(__int64 a1, unsigned int *a2, unsigned int a3)
{
  __int64 v3; // r14
  __int64 result; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  int v9; // ebp
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // rcx
  signed __int32 v14[14]; // [rsp+0h] [rbp-38h] BYREF

  v3 = a3;
  if ( a2 && *(_QWORD *)a2 )
  {
    result = *(unsigned int *)(*(_QWORD *)a2 + 4256LL);
    if ( (result & 0x2000) == 0 )
    {
      ++*(_BYTE *)(*(_QWORD *)a2 + 4262LL);
      v7 = *(_QWORD *)a2;
      if ( *(_BYTE *)(*(_QWORD *)a2 + 4262LL) > 4u )
      {
        *(_DWORD *)(*(_QWORD *)a2 + 4256LL) = *(_DWORD *)(v7 + 4256) | 0x80;
        if ( (*(_DWORD *)(*(_QWORD *)a2 + 4256LL) & 0x800) == 0
          && **(_BYTE **)(*(_QWORD *)(a1 + 128) + 160LL) == 1
          && !_InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)a2 + 4268LL), 1, 0) )
        {
          v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 128) + 160LL) + 24LL);
          if ( v10 )
            ++*(_QWORD *)(v10 + 64);
          v11 = *(_QWORD *)(a1 + 128);
          v12 = *(_QWORD *)(v11 + 160);
          if ( *(_BYTE *)v12 == 1
            && _InterlockedExchangeAdd(*(volatile signed __int32 **)(*(_QWORD *)(v12 + 16) + 8LL * a2[16]), 0xFFFFFFFF) == 1 )
          {
            PoFxIdleComponent(**(_QWORD **)(*(_QWORD *)(v11 + 160) + 8LL), 0LL, 2LL);
          }
        }
        _InterlockedOr(v14, 0);
        v13 = *(_QWORD *)a2;
        result = *(_QWORD *)(*(_QWORD *)a2 + 4192LL);
        if ( result )
          return ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD))result)(a1, *(_QWORD *)(v13 + 4200), 0LL);
        else
          _interlockedbittestandreset((volatile signed __int32 *)(v13 + 4256), 3u);
      }
      else
      {
        if ( v7 )
        {
          v8 = *(_QWORD *)(v7 + 4184);
          if ( v8 )
            *(_BYTE *)(*(_QWORD *)(v8 + 184) + 3LL) |= 1u;
        }
        v9 = *(_DWORD *)(*(_QWORD *)a2 + 4256LL) & 1;
        sub_140120B60(*(_QWORD *)(a1 + 1024), a3);
        _InterlockedOr(v14, 0);
        result = (unsigned int)_InterlockedCompareExchange(
                                 *(volatile signed __int32 **)(*(_QWORD *)(a1 + 1024) + 8 * v3 + 24),
                                 1,
                                 0);
        if ( !(_DWORD)result )
          _InterlockedAdd((volatile signed __int32 *)(a1 + 956), 1u);
        if ( !(_BYTE)v9 )
          _InterlockedAdd((volatile signed __int32 *)(a1 + 960), 1u);
      }
    }
  }
  else
  {
    result = *(_QWORD *)(a1 + 1272);
    if ( result )
      ++*(_DWORD *)(result + 60);
  }
  return result;
}
