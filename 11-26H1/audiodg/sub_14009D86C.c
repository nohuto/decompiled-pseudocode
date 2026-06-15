/*
 * XREFs of sub_14009D86C @ 0x14009D86C
 * Callers:
 *     sub_1400A22A4 @ 0x1400A22A4 (sub_1400A22A4.c)
 *     sub_1400A2BC8 @ 0x1400A2BC8 (sub_1400A2BC8.c)
 * Callees:
 *     sub_14003A998 @ 0x14003A998 (sub_14003A998.c)
 *     sub_1400569C4 @ 0x1400569C4 (sub_1400569C4.c)
 *     sub_140058B20 @ 0x140058B20 (sub_140058B20.c)
 *     sub_14009E050 @ 0x14009E050 (sub_14009E050.c)
 */

_QWORD *__fastcall sub_14009D86C(__int64 a1, _QWORD *a2)
{
  char v3; // al
  int v4; // eax
  int v5; // ebp
  __int64 v6; // rcx
  signed __int32 v7; // eax
  __int16 v8; // bx
  bool v9; // zf
  signed __int32 v10; // edx
  unsigned int v11; // ecx
  _QWORD v13[5]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v14; // [rsp+50h] [rbp+8h] BYREF
  RTL_SRWLOCK *v15; // [rsp+58h] [rbp+10h] BYREF

  v14 = a1;
  *a2 = 0LL;
  v3 = unk_1400E9810;
  *(_DWORD *)a2 = unk_1400E9810;
  if ( (v3 & 6) != 6 )
  {
    v4 = sub_1400569C4();
    LODWORD(v14) = 0;
    v5 = v4;
    sub_14009E050(v6, &v15, &v14);
    v7 = *(_DWORD *)a2;
    v8 = (__int16)v15;
    do
    {
      v9 = (_DWORD)v14 == 0;
      v10 = v7;
      *(_DWORD *)a2 = v7;
      v11 = v7;
      if ( !v9 && (v7 & 2) == 0 )
      {
        v11 = v8 & 0x9C1 | v7 & 0xFFFFF63E | 2;
        *(_DWORD *)a2 = v11;
      }
      if ( (v7 & 4) == 0 )
      {
        v11 = v8 & 0x400 | v11 & 0xFFFFFBFF | 4;
        *(_DWORD *)a2 = v11;
      }
      v7 = _InterlockedCompareExchange((volatile signed __int32 *)&unk_1400E9810, v11, v7);
    }
    while ( v10 != v7 );
    if ( (v10 & 4) == 0 && dword_1400E7BC8 )
    {
      AcquireSRWLockExclusive(&SRWLock);
      v15 = &SRWLock;
      if ( !v5
        || v5 != dword_1400E7BE4
        || (v13[0] = 3LL, v13[1] = &unk_1400E9810, !sub_140058B20(qword_1400E7C08, (__int64)v13, 0x10uLL)) )
      {
        _InterlockedAnd((volatile signed __int32 *)&unk_1400E9810, 0xFFFFFFFB);
      }
      sub_14003A998(&v15);
    }
    if ( (*(_DWORD *)a2 & 2) == 0 )
      *(_DWORD *)a2 = v8 & 0x9C1 | *(_DWORD *)a2 & 0xFFFFF63E;
  }
  return a2;
}
