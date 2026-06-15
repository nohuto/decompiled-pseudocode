/*
 * XREFs of sub_14003AA5C @ 0x14003AA5C
 * Callers:
 *     sub_140042134 @ 0x140042134 (sub_140042134.c)
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_1400095B4 @ 0x1400095B4 (sub_1400095B4.c)
 *     sub_14005A470 @ 0x14005A470 (sub_14005A470.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_14003AA5C(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // edi
  __int64 *v6; // rbx
  __int64 v7; // rbx
  __int64 v8[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v9; // [rsp+50h] [rbp+18h] BYREF
  __int64 v10; // [rsp+58h] [rbp+20h] BYREF

  v4 = 0;
  if ( (*(_DWORD *)(a3 + 136) & 0x800000) != 0 )
  {
    v10 = 0LL;
    if ( (int)sub_1400095B4(a1, &v10) >= 0 )
    {
      v6 = *(__int64 **)(a2 + 32);
      if ( v6 )
      {
        v7 = *v6;
        v8[0] = v7;
        if ( v7 )
          sub_1400B6010(v7);
        v4 = 0;
        if ( v7 )
        {
          v9 = 0LL;
          v4 = sub_1400B6010(v7);
          if ( v4 >= 0 )
            v4 = sub_1400B6010(v10);
          sub_140003238(&v9);
        }
        sub_140003238(v8);
      }
    }
    sub_140003238(&v10);
    if ( v4 < 0 )
      sub_14005A470("CPipeInstance::EngageSpatialAudioStreamProcessorAPO", 1073LL, (unsigned int)v4);
  }
  return (unsigned int)v4;
}
