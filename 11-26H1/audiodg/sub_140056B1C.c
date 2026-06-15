/*
 * XREFs of sub_140056B1C @ 0x140056B1C
 * Callers:
 *     sub_140058500 @ 0x140058500 (sub_140058500.c)
 *     sub_140058AB4 @ 0x140058AB4 (sub_140058AB4.c)
 * Callees:
 *     sub_14003A998 @ 0x14003A998 (sub_14003A998.c)
 *     sub_1400569C4 @ 0x1400569C4 (sub_1400569C4.c)
 *     sub_140056F08 @ 0x140056F08 (sub_140056F08.c)
 *     sub_140058B20 @ 0x140058B20 (sub_140058B20.c)
 */

_QWORD *__fastcall sub_140056B1C(__int64 a1, _QWORD *a2)
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
  v3 = unk_1400E8540;
  *(_DWORD *)a2 = unk_1400E8540;
  if ( (v3 & 6) != 6 )
  {
    v4 = sub_1400569C4();
    LODWORD(v14) = 0;
    v5 = v4;
    sub_140056F08(v6, &v15, &v14);
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
      v7 = _InterlockedCompareExchange((volatile signed __int32 *)&unk_1400E8540, v11, v7);
    }
    while ( v10 != v7 );
    if ( (v10 & 4) == 0 && dword_1400E7BC8 )
    {
      AcquireSRWLockExclusive(&SRWLock);
      v15 = &SRWLock;
      if ( !v5
        || v5 != dword_1400E7BE4
        || (v13[0] = 1LL, v13[1] = &unk_1400E8540, !(unsigned __int8)sub_140058B20(&unk_1400E7C08, v13, 16LL)) )
      {
        _InterlockedAnd((volatile signed __int32 *)&unk_1400E8540, 0xFFFFFFFB);
      }
      sub_14003A998(&v15);
    }
    if ( (*(_DWORD *)a2 & 2) == 0 )
      *(_DWORD *)a2 = v8 & 0x9C1 | *(_DWORD *)a2 & 0xFFFFF63E;
  }
  return a2;
}
