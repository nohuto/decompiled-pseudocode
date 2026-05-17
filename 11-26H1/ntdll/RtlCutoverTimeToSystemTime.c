/*
 * XREFs of RtlCutoverTimeToSystemTime @ 0x1800A0BA0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpTimeFieldsToTime @ 0x1800A0DF0 (RtlpTimeFieldsToTime.c)
 *     RtlpTimeToTimeFields @ 0x1800A15C0 (RtlpTimeToTimeFields.c)
 */

bool __fastcall RtlCutoverTimeToSystemTime(_WORD *a1, _QWORD *a2, _QWORD *a3, char a4)
{
  _WORD *v6; // r14
  __int16 v8; // r13
  __int16 v9; // r15
  bool v10; // r12
  __int16 v11; // ax
  __int16 v12; // si
  __int16 v13; // di
  __int16 v14; // r15
  __int16 i; // r14
  __int16 v17; // [rsp+20h] [rbp-40h]
  __int64 v18; // [rsp+28h] [rbp-38h] BYREF
  _WORD v19[2]; // [rsp+30h] [rbp-30h] BYREF
  __int16 v20; // [rsp+34h] [rbp-2Ch]
  __int16 v21; // [rsp+36h] [rbp-2Ah]
  __int16 v22; // [rsp+38h] [rbp-28h]
  __int16 v23; // [rsp+3Ah] [rbp-26h]
  __int16 v24; // [rsp+3Ch] [rbp-24h]
  __int16 v25; // [rsp+3Eh] [rbp-22h]
  __int128 v26; // [rsp+40h] [rbp-20h] BYREF
  __int128 v27; // [rsp+50h] [rbp-10h] BYREF

  v6 = a1;
  v26 = 0LL;
  RtlpTimeToTimeFields(a3, &v26, 0LL);
  if ( !*v6 )
  {
    v8 = v6[2];
    v20 = 0;
    v18 = 0LL;
    v27 = 0LL;
    if ( v8 <= 5 && v8 )
    {
      v9 = v6[7];
      v10 = 0;
      v11 = v6[1];
      v12 = v26;
      v17 = v9;
      if ( !a4 )
      {
        if ( v11 >= SWORD1(v26) )
          v10 = v11 <= SWORD1(v26);
        else
          v12 = v26 + 1;
      }
      v19[1] = v6[1];
      v25 = 0;
      while ( 1 )
      {
        v21 = v6[3];
        v22 = v6[4];
        v13 = 1;
        v23 = v6[5];
        v24 = v6[6];
        v19[0] = v12;
        v20 = 1;
        if ( !(unsigned __int8)RtlpTimeFieldsToTime(v19, &v18, 0LL) )
          break;
        RtlpTimeToTimeFields(&v18, &v27, 0LL);
        if ( SHIWORD(v27) <= v9 )
        {
          if ( SHIWORD(v27) < v9 )
            v13 = v9 - HIWORD(v27) + 1;
        }
        else
        {
          v13 = v9 - HIWORD(v27) + 8;
        }
        v14 = v13;
        if ( v8 > 1 )
        {
          for ( i = 1; i < v8; ++i )
          {
            v13 += 7;
            v20 = v13;
            if ( !(unsigned __int8)RtlpTimeFieldsToTime(v19, &v18, 0LL) )
              break;
            RtlpTimeToTimeFields(&v18, &v27, 0LL);
            v14 = WORD2(v27);
          }
          v6 = a1;
        }
        v20 = v14;
        if ( !(unsigned __int8)RtlpTimeFieldsToTime(v19, &v18, 0LL) )
          break;
        if ( !v10 || v14 >= SWORD2(v26) && (v14 != WORD2(v26) || v18 >= *a3) )
        {
          *a2 = v18;
          return 1;
        }
        v9 = v17;
        v10 = 0;
        ++v12;
      }
    }
    return 0;
  }
  return (unsigned __int8)RtlpTimeFieldsToTime(v6, a2, 0LL) && (a4 || *a2 >= *a3);
}
