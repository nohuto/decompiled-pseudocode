/*
 * XREFs of sub_14003EB60 @ 0x14003EB60
 * Callers:
 *     sub_140049120 @ 0x140049120 (sub_140049120.c)
 * Callees:
 *     sub_14001DCF4 @ 0x14001DCF4 (sub_14001DCF4.c)
 *     sub_14003ECD4 @ 0x14003ECD4 (sub_14003ECD4.c)
 *     sub_140047C0C @ 0x140047C0C (sub_140047C0C.c)
 *     sub_1400483C4 @ 0x1400483C4 (sub_1400483C4.c)
 *     sub_14005A040 @ 0x14005A040 (sub_14005A040.c)
 *     sub_14005A084 @ 0x14005A084 (sub_14005A084.c)
 *     sub_14007574C @ 0x14007574C (sub_14007574C.c)
 */

__int64 __fastcall sub_14003EB60(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rcx
  unsigned int v9; // ebx
  void *v10; // rcx
  LPVOID Context; // [rsp+20h] [rbp-18h] BYREF

  byte_1400E8670 = 0;
  qword_1400E8598 = 0LL;
  qword_1400E8580 = (__int64)&unk_1400C72D8;
  off_1400E73D8 = &qword_1400E8588;
  qword_1400E8588 = 0LL;
  qword_1400E85A0 = 1LL;
  sub_14003ECD4();
  if ( off_1400E73D8 != (_UNKNOWN *)&off_1400E73D8
    && (*((_BYTE *)off_1400E73D8 + 28) & 0x10) != 0
    && *((_BYTE *)off_1400E73D8 + 25) >= 4u )
  {
    sub_14005A084(*((_QWORD *)off_1400E73D8 + 2), v6, v7, a3);
  }
  HeapSetInformation(0LL, HeapEnableTerminationOnCorruption, 0LL, 0LL);
  sub_1400483C4();
  Context = 0LL;
  if ( qword_1400E9740 )
  {
    v9 = -2147023649;
  }
  else
  {
    qword_1400E9760 = 0x200000LL;
    qword_1400E9748 = 4LL;
    qword_1400E9740 = 0x8000LL;
    if ( InitOnceExecuteOnce(&stru_1400E9758, (PINIT_ONCE_FN)InitFn, 0LL, &Context) )
    {
      v9 = sub_14001DCF4((__int64)&qword_1400E8610, a4);
      v10 = off_1400E73D8;
      if ( off_1400E73D8 != (_UNKNOWN *)&off_1400E73D8
        && (*((_BYTE *)off_1400E73D8 + 28) & 0x10) != 0
        && *((_BYTE *)off_1400E73D8 + 25) >= 4u )
      {
        sub_14005A040(*((_QWORD *)off_1400E73D8 + 2), 25LL, &unk_1400C8AF0);
      }
      sub_14007574C(v10);
    }
    else
    {
      v9 = -2147024882;
    }
  }
  sub_140047C0C(v8);
  return v9;
}
