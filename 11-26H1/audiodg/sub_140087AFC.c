/*
 * XREFs of sub_140087AFC @ 0x140087AFC
 * Callers:
 *     sub_140087A88 @ 0x140087A88 (sub_140087A88.c)
 * Callees:
 *     sub_140088ED0 @ 0x140088ED0 (sub_140088ED0.c)
 */

__int64 __fastcall sub_140087AFC(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rcx
  _QWORD *v5; // r8
  __int64 v6; // r10
  __int64 v8; // rcx
  _QWORD *v9; // r8
  __int64 v10; // r9
  __int64 v11; // r10
  _QWORD *v12; // r8
  __int64 v13; // r10

  if ( (unsigned int)sub_140088ED0(a2, &unk_1400C9908, a3, a4) )
  {
    *v5 = v6;
    return 0LL;
  }
  else
  {
    if ( (unsigned int)sub_140088ED0(v4, &unk_1400CBF20, v5, 0LL) )
    {
      *v9 = v11;
    }
    else if ( (unsigned int)sub_140088ED0(v8, &unk_1400C9268, v9, v10) )
    {
      *v12 = v13 + 8;
    }
    else
    {
      LODWORD(v10) = -2147467262;
    }
    return (unsigned int)v10;
  }
}
