/*
 * XREFs of sub_18000EDB4 @ 0x18000EDB4
 * Callers:
 *     sub_18000EED0 @ 0x18000EED0 (sub_18000EED0.c)
 * Callees:
 *     sub_18000F428 @ 0x18000F428 (sub_18000F428.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall sub_18000EDB4(unsigned __int64 a1, _BYTE *a2, __int64 a3))(_QWORD, _QWORD)
{
  unsigned __int64 v5; // rsi
  char v6; // bl
  char v7; // bp
  __int64 v8; // rdi
  unsigned __int64 CurrentThreadId; // r10
  __int64 i; // rdi
  _QWORD *v11; // rdi
  __int64 v12; // rdi
  __int64 (__fastcall *result)(_QWORD, _QWORD); // rax

  v5 = a1;
  v6 = 0;
  *a2 = 0;
  v7 = 0;
  v8 = qword_1801C83E0;
  if ( qword_1801C83E0 )
  {
    CurrentThreadId = GetCurrentThreadId();
    a1 = 10 * (CurrentThreadId / 0xA);
    for ( i = *(_QWORD *)(v8 + 8 * (CurrentThreadId % 0xA)); i; i = *(_QWORD *)(i + 8) )
    {
      if ( *(_DWORD *)i == (_DWORD)CurrentThreadId )
      {
        v11 = (_QWORD *)(i + 16);
        goto LABEL_8;
      }
    }
    v11 = 0LL;
LABEL_8:
    if ( v11 && *v11 )
    {
      *a2 = 0;
      if ( (unsigned __int8)sub_18000F428(v5, *v11, a2, a3) )
        *(_QWORD *)(v5 + 72) = a2;
      v12 = *v11;
      do
      {
        v7 |= (***(__int64 (__fastcall ****)(_QWORD, unsigned __int64))(v12 + 8))(*(_QWORD *)(v12 + 8), v5);
        v12 = *(_QWORD *)(v12 + 16);
      }
      while ( v12 );
    }
  }
  result = qword_1801C83F0;
  if ( qword_1801C83F0 )
  {
    if ( v7 || (*(_BYTE *)(v5 + 4) & 2) != 0 )
      v6 = 1;
    LOBYTE(a1) = v6;
    return (__int64 (__fastcall *)(_QWORD, _QWORD))qword_1801C83F0(a1, v5);
  }
  return result;
}
