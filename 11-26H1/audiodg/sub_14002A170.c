/*
 * XREFs of sub_14002A170 @ 0x14002A170
 * Callers:
 *     sub_140028E18 @ 0x140028E18 (sub_140028E18.c)
 *     sub_140029734 @ 0x140029734 (sub_140029734.c)
 *     sub_140054D80 @ 0x140054D80 (sub_140054D80.c)
 *     sub_140065ED0 @ 0x140065ED0 (sub_140065ED0.c)
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_14002A2D4 @ 0x14002A2D4 (sub_14002A2D4.c)
 *     sub_14004967C @ 0x14004967C (sub_14004967C.c)
 *     sub_14004982C @ 0x14004982C (sub_14004982C.c)
 *     sub_140049894 @ 0x140049894 (sub_140049894.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_14002A170(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  if ( dword_1400E9830 > *(_DWORD *)(*(_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + 4LL) )
  {
    sub_140049894(&dword_1400E9830);
    if ( dword_1400E9830 == -1 )
    {
      v4 = (__int64 *)sub_14002A2D4(&v8);
      v5 = *v4;
      *v4 = 0LL;
      qword_1400E9838 = v5;
      v6 = v8;
      if ( v8 )
      {
        v8 = 0LL;
        sub_1400B6010(v6);
      }
      sub_14004967C(sub_1400B45D0);
      sub_14004982C(&dword_1400E9830);
    }
  }
  v2 = qword_1400E9838;
  if ( qword_1400E9838 )
  {
    *a1 = qword_1400E9838;
    sub_1400B6010(v2);
    return 0LL;
  }
  else
  {
    sub_14000C2A8((int)retaddr, 94, (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp", -2147024882);
    return 2147942414LL;
  }
}
