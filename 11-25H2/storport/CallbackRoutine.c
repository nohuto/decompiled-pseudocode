/*
 * XREFs of CallbackRoutine @ 0x1400BB850
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400BB548 @ 0x1400BB548 (sub_1400BB548.c)
 */

void __fastcall CallbackRoutine(
        __int64 Reason,
        struct _KBUGCHECK_REASON_CALLBACK_RECORD *Record,
        _DWORD *ReasonSpecificData,
        ULONG ReasonSpecificDataLength)
{
  __int64 v5; // rax
  int v6; // eax
  int v7; // eax
  _DWORD *v8; // rdx
  unsigned int v9; // [rsp+40h] [rbp+18h] BYREF

  if ( !qword_140168DD8 || !*(_DWORD *)(*(_QWORD *)(qword_140168DD8 + 24) + 4932LL) )
  {
    ReasonSpecificData[10] = 0;
    return;
  }
  v5 = *((_QWORD *)ReasonSpecificData + 4);
  if ( v5 )
  {
    v8 = *(_DWORD **)ReasonSpecificData;
    if ( *(_QWORD *)ReasonSpecificData != v5 )
      return;
    v9 = ReasonSpecificData[2];
    v7 = sub_1400BB548(Reason, v8, &v9);
    goto LABEL_9;
  }
  v9 = 0;
  v6 = sub_1400BB548(Reason, 0LL, &v9);
  if ( (int)(v6 + 0x80000000) < 0 || v6 == -1073741789 )
  {
    v7 = 0;
LABEL_9:
    if ( v7 >= 0 )
    {
      ReasonSpecificData[10] = v9;
      *((_OWORD *)ReasonSpecificData + 1) = xmmword_14014C558;
    }
  }
}
