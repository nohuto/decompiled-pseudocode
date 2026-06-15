/*
 * XREFs of sub_140033AE4 @ 0x140033AE4
 * Callers:
 *     sub_1400574A0 @ 0x1400574A0 (sub_1400574A0.c)
 *     sub_14006E480 @ 0x14006E480 (sub_14006E480.c)
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_140033BE0 @ 0x140033BE0 (sub_140033BE0.c)
 *     sub_14004967C @ 0x14004967C (sub_14004967C.c)
 *     sub_14004982C @ 0x14004982C (sub_14004982C.c)
 *     sub_140049894 @ 0x140049894 (sub_140049894.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_140033AE4(_QWORD *a1)
{
  int v1; // ebx
  int v3; // edx
  __int64 *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  if ( dword_1400E9868 > *(_DWORD *)(*(_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + 4LL) )
  {
    sub_140049894(&dword_1400E9868);
    if ( dword_1400E9868 == -1 )
    {
      v4 = (__int64 *)sub_140033BE0(&v8);
      v5 = *v4;
      *v4 = 0LL;
      qword_1400E9860 = v5;
      v6 = v8;
      if ( v8 )
      {
        v8 = 0LL;
        sub_1400B6010(v6);
      }
      sub_14004967C(sub_1400B4680);
      sub_14004982C(&dword_1400E9868);
    }
  }
  if ( qword_1400E9860 )
  {
    v1 = sub_1400B6010(qword_1400E9860);
    if ( v1 >= 0 )
      return 0LL;
    v3 = 592;
  }
  else
  {
    v1 = -2147024882;
    v3 = 590;
  }
  sub_14000C2A8((int)retaddr, v3, (int)"avcore\\audiocore\\server\\audiodg\\exe\\devicegraphobjectcache.cpp", v1);
  return (unsigned int)v1;
}
