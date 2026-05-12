/*
 * XREFs of sub_140018B28 @ 0x140018B28
 * Callers:
 *     sub_140017D90 @ 0x140017D90 (sub_140017D90.c)
 *     sub_140021A00 @ 0x140021A00 (sub_140021A00.c)
 *     sub_14004EEC0 @ 0x14004EEC0 (sub_14004EEC0.c)
 *     sub_140099564 @ 0x140099564 (sub_140099564.c)
 * Callees:
 *     sub_140018AA0 @ 0x140018AA0 (sub_140018AA0.c)
 *     sub_14002CAB0 @ 0x14002CAB0 (sub_14002CAB0.c)
 */

__int64 __fastcall sub_140018B28(__int64 a1, unsigned int *a2, __int64 a3)
{
  __int64 v3; // rdi
  __int64 v4; // rbx
  __int64 v5; // rsi
  unsigned int v7; // r9d
  __int64 v8; // rax
  unsigned __int64 v9; // r11
  unsigned int v10; // ebx
  __int64 result; // rax

  v3 = *((_QWORD *)a2 + 21);
  v4 = 0LL;
  v5 = (__int64)a2;
  if ( *(_BYTE *)(v3 + 2) == 40 && (*(_BYTE *)(v3 + 24) & 0xC0) == 0xC0 )
  {
    v7 = *(_DWORD *)(v3 + 56);
    a3 = 0LL;
    if ( v7 )
    {
      a2 = (unsigned int *)(v3 + 120);
      while ( 1 )
      {
        v8 = *a2;
        v4 = 0LL;
        if ( (unsigned int)v8 >= 0x80 )
        {
          v9 = *(unsigned int *)(v3 + 16);
          if ( (unsigned int)v8 <= (unsigned int)v9 && *(_DWORD *)(v8 + v3) == 1 && v8 + 24 <= v9 )
            break;
        }
        a3 = (unsigned int)(a3 + 1);
        ++a2;
        if ( (unsigned int)a3 >= v7 )
          goto LABEL_12;
      }
      v4 = v8 + v3;
    }
  }
LABEL_12:
  if ( (*(_DWORD *)(a1 + 604) & 8) == 0 && (*(_BYTE *)(a1 + 108) & 4) == 0 )
  {
    LOBYTE(a3) = 1;
    LOBYTE(a2) = 1;
    KeFlushIoBuffers(*(_QWORD *)(v5 + 136), a2, a3);
  }
  v10 = *(_DWORD *)(v4 + 8);
  if ( *(_DWORD *)(v3 + 20) == 23 && *(_DWORD *)(*(_QWORD *)(v5 + 136) + 40LL) > v10 )
    v10 = *(_DWORD *)(*(_QWORD *)(v5 + 136) + 40LL);
  result = sub_140018AA0((__int64 *)(a1 + 880), *(_QWORD *)(a1 + 8));
  if ( (_DWORD)result == -1073741789 )
    return sub_14002CAB0(
             (int)a1 + 880,
             *(_QWORD *)(a1 + 8),
             *(_QWORD *)(v5 + 136),
             *(_QWORD *)(v5 + 192),
             v10,
             (__int64)sub_140066A10,
             v5,
             0);
  return result;
}
