/*
 * XREFs of sub_1400AAF00 @ 0x1400AAF00
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400ABDBC @ 0x1400ABDBC (sub_1400ABDBC.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_1400AAF00(__int64 a1, unsigned __int32 a2, __int64 a3)
{
  unsigned int v6; // ebx
  struct _RTL_CRITICAL_SECTION *v7; // rbp
  __int64 v8; // rcx

  sub_1400ABDBC(a1 + 768);
  if ( a2 <= *(_DWORD *)(a1 + 268) )
  {
    v7 = (struct _RTL_CRITICAL_SECTION *)(a1 + 720);
    EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 720));
    if ( _InterlockedExchange64((volatile __int64 *)(*(_QWORD *)(a1 + 1288) + 8LL), a3) && a3 )
    {
      v6 = -2005139348;
    }
    else
    {
      _InterlockedExchange((volatile __int32 *)(*(_QWORD *)(a1 + 1288) + 16LL), a2);
      _InterlockedExchange64((volatile __int64 *)(*(_QWORD *)(a1 + 1288) + 8LL), a3);
      if ( a3
        || (_InterlockedExchange((volatile __int32 *)(*(_QWORD *)(a1 + 1288) + 20LL), a2),
            (unsigned __int64)_InterlockedCompareExchange64(
                                (volatile signed __int64 *)(*(_QWORD *)(a1 + 1288) + 56LL),
                                0LL,
                                0LL) >> 32 < a2) )
      {
        _InterlockedOr((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(a1 + 1312) + 1312LL) + 64LL), 0x40u);
      }
      else
      {
        v8 = *(_QWORD *)(a1 + 760);
        if ( v8 )
          sub_1400B6010(v8);
      }
      v6 = 0;
    }
    if ( v7 )
      LeaveCriticalSection(v7);
  }
  else
  {
    return (unsigned int)-2005139347;
  }
  return v6;
}
