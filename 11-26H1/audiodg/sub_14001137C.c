/*
 * XREFs of sub_14001137C @ 0x14001137C
 * Callers:
 *     sub_140010BA4 @ 0x140010BA4 (sub_140010BA4.c)
 *     sub_14002C870 @ 0x14002C870 (sub_14002C870.c)
 *     sub_14002DD08 @ 0x14002DD08 (sub_14002DD08.c)
 *     sub_14004229C @ 0x14004229C (sub_14004229C.c)
 *     sub_140043088 @ 0x140043088 (sub_140043088.c)
 *     sub_140069748 @ 0x140069748 (sub_140069748.c)
 *     sub_140069B3C @ 0x140069B3C (sub_140069B3C.c)
 * Callees:
 *     sub_1400115FC @ 0x1400115FC (sub_1400115FC.c)
 *     sub_140049338 @ 0x140049338 (sub_140049338.c)
 *     sub_14004B6D4 @ 0x14004B6D4 (sub_14004B6D4.c)
 *     sub_14005A040 @ 0x14005A040 (sub_14005A040.c)
 *     sub_14005A470 @ 0x14005A470 (sub_14005A470.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_14001137C(int a1, __int64 a2, __int64 *a3)
{
  __int64 v6; // rbx
  int v7; // edi
  __int64 v8; // rcx
  __int64 v10; // [rsp+48h] [rbp+20h] BYREF

  v10 = 0LL;
  v6 = sub_140049338(48LL, &unk_1400C75FC);
  if ( v6 )
  {
    *(_QWORD *)v6 = off_1400BA248;
    *(_QWORD *)(v6 + 8) = 0LL;
    *(_QWORD *)(v6 + 16) = 0LL;
    *(_DWORD *)(v6 + 24) = a1;
    *(_QWORD *)(v6 + 32) = 0LL;
    *(_DWORD *)(v6 + 40) = 4;
    v7 = sub_14004B6D4(a2, (unsigned int)*(unsigned __int16 *)(a2 + 16) + 18, &v10);
    if ( v7 >= 0 )
    {
      v8 = v10;
      if ( *(_QWORD *)(v6 + 8) != v10 )
      {
        sub_1400115FC(v6 + 8, v10);
        v8 = v10;
      }
      if ( *(_QWORD *)(v6 + 16) != v8 )
      {
        sub_1400115FC(v6 + 16, v8);
        v8 = v10;
      }
      *a3 = v6;
      goto LABEL_8;
    }
    sub_1400B6010(v6);
  }
  else
  {
    v7 = -2147024882;
  }
  if ( off_1400E73D8 != (_UNKNOWN *)&off_1400E73D8
    && (*((_DWORD *)off_1400E73D8 + 7) & 0x20000) != 0
    && *((_BYTE *)off_1400E73D8 + 25) >= 2u )
  {
    sub_14005A040(*((_QWORD *)off_1400E73D8 + 2), 10LL, &unk_1400CA218);
  }
  sub_14005A470("CProcessNode::CreateDummyProcessNode", 94LL, (unsigned int)v7);
  v8 = v10;
LABEL_8:
  if ( v8 )
    sub_1400B6010(v8);
  return (unsigned int)v7;
}
