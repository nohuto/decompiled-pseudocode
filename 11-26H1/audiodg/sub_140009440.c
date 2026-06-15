/*
 * XREFs of sub_140009440 @ 0x140009440
 * Callers:
 *     sub_140008C34 @ 0x140008C34 (sub_140008C34.c)
 *     sub_140009AD0 @ 0x140009AD0 (sub_140009AD0.c)
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_1400095B4 @ 0x1400095B4 (sub_1400095B4.c)
 *     sub_1400096FC @ 0x1400096FC (sub_1400096FC.c)
 *     sub_140009970 @ 0x140009970 (sub_140009970.c)
 *     sub_14003E25C @ 0x14003E25C (sub_14003E25C.c)
 *     sub_14005A470 @ 0x14005A470 (sub_14005A470.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall sub_140009440(__int64 a1, __int64 a2, char a3)
{
  int v5; // ebx
  __int64 v7; // rcx
  __int64 v8; // r9
  __int64 v9; // rcx
  __int64 v10; // r9
  __int64 v11; // [rsp+20h] [rbp-10h] BYREF
  __int64 v12; // [rsp+28h] [rbp-8h] BYREF
  __int64 v13; // [rsp+50h] [rbp+20h] BYREF
  __int64 v14; // [rsp+68h] [rbp+38h] BYREF

  v5 = 0;
  v13 = 0LL;
  if ( (int)sub_1400096FC(*(_QWORD *)(a1 + 160), &v13) >= 0 )
  {
    v12 = 0LL;
    if ( (int)sub_1400095B4(a2, &v12) < 0 )
      goto LABEL_3;
    v14 = 0LL;
    v5 = sub_1400B6010(v12);
    if ( v5 >= 0 )
    {
      LOBYTE(v10) = a3;
      v5 = sub_14003E25C(v9, v14, v13, v10);
    }
    sub_140003238(&v14);
    if ( v5 >= 0 )
    {
LABEL_3:
      v11 = 0LL;
      if ( (int)sub_140009970(a2, &v11) >= 0 )
      {
        v14 = 0LL;
        v5 = sub_1400B6010(v11);
        if ( v5 >= 0 )
        {
          LOBYTE(v8) = a3;
          v5 = sub_14003E25C(v7, v14, v13, v8);
        }
        if ( v14 )
          sub_1400B6010(v14);
      }
      if ( v11 )
        sub_1400B6010(v11);
    }
    if ( v12 )
      sub_1400B6010(v12);
    if ( v5 < 0 )
      sub_14005A470("CAudioDeviceGraph::RegisterSpatialPipe", 1346LL, (unsigned int)v5);
  }
  if ( v13 )
    sub_1400B6010(v13);
  return (unsigned int)v5;
}
