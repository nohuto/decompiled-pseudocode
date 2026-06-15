/*
 * XREFs of sub_14002736C @ 0x14002736C
 * Callers:
 *     sub_140043F48 @ 0x140043F48 (sub_140043F48.c)
 * Callees:
 *     sub_14002742C @ 0x14002742C (sub_14002742C.c)
 *     sub_140027464 @ 0x140027464 (sub_140027464.c)
 *     sub_1400278AC @ 0x1400278AC (sub_1400278AC.c)
 */

_BOOL8 __fastcall sub_14002736C(__int64 a1)
{
  int v1; // ebp
  BOOL v2; // ebx
  __int64 v3; // rcx
  unsigned int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // edi
  __int64 v7; // rcx
  __int64 i; // r14
  __int64 v9; // rsi
  __int64 v10; // rcx
  _QWORD *v11; // rax
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF

  v13 = a1;
  EnterCriticalSection(&CriticalSection);
  v1 = dword_1400E8788;
  v2 = 1;
  v4 = sub_1400278AC(v3, &v13);
  v6 = 0;
  for ( i = *(_QWORD *)sub_14002742C(v5, v4); (int)v6 < v1; ++v6 )
  {
    v9 = *(_QWORD *)sub_140027464(v7, v6);
    v11 = (_QWORD *)sub_14002742C(v10, v6);
    if ( v9 && !(unsigned int)o__wcsicmp(i, *v11) )
      v2 = v2 && !*(_DWORD *)(v9 + 100);
  }
  LeaveCriticalSection(&CriticalSection);
  return v2;
}
