/*
 * XREFs of StorPortCompleteRequest @ 0x1400739A0
 * Callers:
 *     sub_1401B7170 @ 0x1401B7170 (sub_1401B7170.c)
 * Callees:
 *     sub_1400099A0 @ 0x1400099A0 (sub_1400099A0.c)
 *     sub_14000D2F0 @ 0x14000D2F0 (sub_14000D2F0.c)
 *     sub_14000D4EC @ 0x14000D4EC (sub_14000D4EC.c)
 *     sub_14000F4A0 @ 0x14000F4A0 (sub_14000F4A0.c)
 *     sub_14000FB90 @ 0x14000FB90 (sub_14000FB90.c)
 *     sub_14001F350 @ 0x14001F350 (sub_14001F350.c)
 *     sub_140039148 @ 0x140039148 (sub_140039148.c)
 *     sub_140067F78 @ 0x140067F78 (sub_140067F78.c)
 */

void __fastcall StorPortCompleteRequest(
        __int64 a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        unsigned __int8 a4,
        unsigned __int8 a5)
{
  _BYTE *v5; // rcx
  __int64 v6; // r15
  __int64 v7; // rsi
  int v8; // ebp
  int v9; // r14d
  __int64 v10; // rdi
  __int64 *v11; // rax
  __int64 v12; // [rsp+20h] [rbp-38h]
  __int64 v13; // [rsp+28h] [rbp-30h]
  __int64 retaddr; // [rsp+58h] [rbp+0h]
  int v15; // [rsp+60h] [rbp+8h]

  v5 = *(_BYTE **)(a1 - 16);
  v6 = 0LL;
  HIBYTE(v15) = 0;
  v7 = a4;
  v8 = a3;
  v9 = a2;
  if ( (v5[248] & 1) != 0 )
    return;
  v10 = sub_140039148(v5);
  if ( !v10 )
    return;
  if ( (qword_140168458 & 0x40) != 0 )
    sub_14000FB90(
      v10,
      12,
      v10,
      v7 | (int)(*(_DWORD *)(v10 + 56) << 24) | (unsigned __int64)((v8 | (unsigned int)(v9 << 8)) << 8),
      retaddr,
      0LL,
      0LL);
  if ( (_BYTE)v9 == 0xFF || (_BYTE)v8 == 0xFF || (_BYTE)v7 == 0xFF )
  {
    sub_1400099A0(v10);
  }
  else
  {
    LOBYTE(v15) = v9;
    BYTE1(v15) = v8;
    BYTE2(v15) = v7;
    v11 = sub_14001F350(v10, v15);
    v6 = (__int64)v11;
    if ( !v11 )
    {
      if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
        && (HIDWORD(off_140168120->Timer) & 8) != 0
        && BYTE1(off_140168120->Timer) >= 3u )
      {
        LODWORD(v13) = v7;
        LODWORD(v12) = v8;
        sub_140067F78((__int64)off_140168120->AttachedDevice, 0x1Au, (__int64)&unk_140149070, v9, v12, v13);
      }
      return;
    }
    sub_14000F4A0((__int64)v11);
  }
  if ( !KeInsertQueueDpc((PRKDPC)(v10 + 1848), (PVOID)(v7 | ((v8 | (unsigned int)(v9 << 8)) << 8)), (PVOID)a5) )
  {
    if ( (_BYTE)v9 == 0xFF || (_BYTE)v8 == 0xFF || (_BYTE)v7 == 0xFF )
      sub_14000D2F0(v10, 0, 0);
    else
      sub_14000D4EC(v6);
  }
}
