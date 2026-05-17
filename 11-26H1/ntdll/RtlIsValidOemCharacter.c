/*
 * XREFs of RtlIsValidOemCharacter @ 0x180147768
 * Callers:
 *     GetNextWchar @ 0x180120C84 (GetNextWchar.c)
 * Callees:
 *     NLS_UPCASE @ 0x180036DE0 (NLS_UPCASE.c)
 *     RtlpIsUtf8Process @ 0x1800832B0 (RtlpIsUtf8Process.c)
 */

char RtlIsValidOemCharacter()
{
  bool IsUtf8Process; // al
  _WORD *v1; // rcx
  unsigned __int16 v2; // ax
  unsigned __int16 *v3; // r11
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int16 v7; // cx
  unsigned int v8; // ecx
  unsigned __int64 v9; // rax
  int v10; // edx
  signed __int32 v11[10]; // [rsp+0h] [rbp-28h] BYREF

  IsUtf8Process = RtlpIsUtf8Process();
  _InterlockedOr(v11, 0);
  if ( IsUtf8Process )
  {
    if ( *v1 <= 0x7Fu )
    {
      v2 = NLS_UPCASE(qword_1801C6038, (unsigned __int16)*v1);
LABEL_4:
      *v3 = v2;
      return 1;
    }
  }
  else
  {
    v5 = qword_1801C5FF8;
    v6 = (unsigned __int16)*v1;
    if ( word_1801C5FDC )
    {
      v8 = *(unsigned __int16 *)(qword_1801C5FF8 + 2 * v6);
      v9 = (unsigned __int64)v8 >> 8;
      if ( *(_WORD *)(qword_1801C6028 + 2 * v9) )
        v10 = *(unsigned __int16 *)(qword_1801C6008
                                  + 2
                                  * (*(unsigned __int16 *)(qword_1801C6028 + 2 * v9)
                                   + (unsigned __int64)(unsigned __int8)v8));
      else
        v10 = *(unsigned __int16 *)(qword_1801C5FF0 + 2LL * (unsigned __int8)v8);
      v2 = NLS_UPCASE(qword_1801C6038, v10);
      v7 = *(_WORD *)(v5 + 2LL * v2);
    }
    else
    {
      v2 = NLS_UPCASE(
             qword_1801C6038,
             *(unsigned __int16 *)(qword_1801C5FF0 + 2LL * *(unsigned __int8 *)(v6 + qword_1801C5FF8)));
      v7 = *(char *)(v2 + v5);
    }
    if ( v7 != word_1801C5FD4 )
      goto LABEL_4;
  }
  return 0;
}
