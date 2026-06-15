/*
 * XREFs of sub_140087A88 @ 0x140087A88
 * Callers:
 *     sub_140087B70 @ 0x140087B70 (sub_140087B70.c)
 *     sub_140088570 @ 0x140088570 (sub_140088570.c)
 *     sub_140088750 @ 0x140088750 (sub_140088750.c)
 * Callees:
 *     sub_140087AFC @ 0x140087AFC (sub_140087AFC.c)
 *     sub_140088ED0 @ 0x140088ED0 (sub_140088ED0.c)
 */

__int64 __fastcall sub_140087A88(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rcx
  _QWORD *v5; // r8
  __int64 v6; // r11
  __int64 v8; // rcx
  _QWORD *v9; // r8
  __int64 v10; // r9
  __int64 v11; // r11
  __int64 v12; // r10

  if ( (unsigned int)sub_140088ED0(a2, &unk_1400C70E0, a3, a4) )
  {
    *v5 = v6;
    return 0LL;
  }
  else
  {
    if ( (unsigned int)sub_140088ED0(v4, &unk_1400C97E0, v5, 0LL)
      || (unsigned int)sub_140088ED0(v8, &unk_1400C9010, v9, v10) )
    {
      *v9 = v11;
    }
    else
    {
      LODWORD(v10) = sub_140087AFC(v11 + 8, v12);
    }
    return (unsigned int)v10;
  }
}
