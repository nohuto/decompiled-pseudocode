/*
 * XREFs of sub_140027AE0 @ 0x140027AE0
 * Callers:
 *     sub_14006FEC0 @ 0x14006FEC0 (sub_14006FEC0.c)
 *     sub_140072820 @ 0x140072820 (sub_140072820.c)
 * Callees:
 *     sub_140027BB4 @ 0x140027BB4 (sub_140027BB4.c)
 *     sub_140027CA8 @ 0x140027CA8 (sub_140027CA8.c)
 *     sub_140027CD8 @ 0x140027CD8 (sub_140027CD8.c)
 *     sub_14006ED80 @ 0x14006ED80 (sub_14006ED80.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_140027AE0(unsigned __int64 a1, __int64 a2)
{
  __int64 v3; // r8
  __int64 v4; // rcx
  unsigned int v5; // ebx
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF
  __int64 v8; // [rsp+40h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v9; // [rsp+48h] [rbp+20h]

  v7 = a2;
  EnterCriticalSection(&CriticalSection);
  v9 = &CriticalSection;
  v8 = sub_1400B6010(&off_1400E74F8) + 24;
  if ( a1 )
  {
    if ( a1 < 0x10000 )
    {
      sub_14006ED80(&v8, (unsigned __int16)a1);
      goto LABEL_4;
    }
    v3 = -1LL;
    do
      ++v3;
    while ( *(_WORD *)(a1 + 2 * v3) );
  }
  else
  {
    v3 = 0LL;
  }
  sub_140027BB4(&v8, a1, v3);
LABEL_4:
  v5 = sub_140027CD8(v4, &v8, &v7);
  sub_140027CA8(v8 - 24);
  LeaveCriticalSection(&CriticalSection);
  return v5;
}
