/*
 * XREFs of sub_18000F524 @ 0x18000F524
 * Callers:
 *     sub_18000EED0 @ 0x18000EED0 (sub_18000EED0.c)
 * Callees:
 *     sub_18000E8A4 @ 0x18000E8A4 (sub_18000E8A4.c)
 */

__int64 sub_18000F524()
{
  __int64 v0; // rdi
  __int64 i; // rbx
  __int64 v2; // rcx
  __int64 v3; // rdi
  DWORD CurrentThreadId; // r9d
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v0 = qword_1801C83B8;
  i = 0LL;
  if ( qword_1801C83B8 )
  {
    if ( !*(_QWORD *)(qword_1801C83B8 + 8) )
    {
      v2 = *(_QWORD *)qword_1801C83B8;
      v6 = 0LL;
      if ( (int)sub_18000E8A4(v2, &v6) >= 0 && !*(_QWORD *)(v0 + 8) )
        *(_QWORD *)(v0 + 8) = v6;
    }
    v3 = (*(_QWORD *)(v0 + 8) + 32LL) & -(__int64)(*(_QWORD *)(v0 + 8) != 0LL);
    if ( v3 )
    {
      CurrentThreadId = GetCurrentThreadId();
      for ( i = *(_QWORD *)(v3 + 8 * (CurrentThreadId % 0xAuLL) + 8); i; i = *(_QWORD *)(i + 8) )
      {
        if ( *(_DWORD *)i == CurrentThreadId )
        {
          i += 16LL;
          if ( i && !*(_QWORD *)(i + 8) )
            *(_QWORD *)(i + 8) = v3 + 4;
          return i;
        }
      }
    }
  }
  return i;
}
