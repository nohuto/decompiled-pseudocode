/*
 * XREFs of RtlpCheckDynamicTimeZoneInformation @ 0x14080A7EC
 * Callers:
 *     ExpRefreshTimeZoneInformation @ 0x140B13E1C (ExpRefreshTimeZoneInformation.c)
 * Callees:
 *     RtlpFindRegTziForCurrentYear @ 0x14061CC94 (RtlpFindRegTziForCurrentYear.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     memcmp @ 0x140742350 (memcmp.c)
 *     RtlpGetDynamicTimeZoneInfoHandle @ 0x14080AA18 (RtlpGetDynamicTimeZoneInfoHandle.c)
 */

char __fastcall RtlpCheckDynamicTimeZoneInformation(char *Buf2, __int16 a2)
{
  char v4; // di
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  char *v19; // rbx
  __int64 v20; // rax
  __int128 v21; // xmm1
  __int128 Buf1; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v24; // [rsp+40h] [rbp-C0h]
  __int128 v25; // [rsp+50h] [rbp-B0h]
  __int128 v26; // [rsp+60h] [rbp-A0h]
  __m256i v27; // [rsp+70h] [rbp-90h]
  __int128 v28; // [rsp+90h] [rbp-70h]
  __int128 v29; // [rsp+A0h] [rbp-60h]
  __int128 v30; // [rsp+B0h] [rbp-50h]
  _BYTE v31[24]; // [rsp+C0h] [rbp-40h]
  int v32; // [rsp+D8h] [rbp-28h]
  __int128 v33; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v34; // [rsp+F0h] [rbp-10h]
  __int64 v35; // [rsp+100h] [rbp+0h]
  int v36; // [rsp+108h] [rbp+8h]

  v35 = 0LL;
  v36 = 0;
  v4 = 0;
  v33 = 0LL;
  v34 = 0LL;
  if ( (int)RtlpGetDynamicTimeZoneInfoHandle((NTSTRSAFE_PCWSTR)Buf2 + 86) >= 0 )
  {
    if ( (int)RtlpFindRegTziForCurrentYear(&v33, 0LL, a2) >= 0 )
    {
      v5 = *((_OWORD *)Buf2 + 1);
      Buf1 = *(_OWORD *)Buf2;
      v6 = *((_OWORD *)Buf2 + 2);
      v24 = v5;
      v25 = v6;
      v7 = *((_OWORD *)Buf2 + 4);
      v26 = *((_OWORD *)Buf2 + 3);
      v8 = *((_OWORD *)Buf2 + 5);
      *(_OWORD *)v27.m256i_i8 = v7;
      v9 = *((_OWORD *)Buf2 + 6);
      *(_OWORD *)&v27.m256i_u64[2] = v8;
      v10 = *((_OWORD *)Buf2 + 8);
      v28 = v9;
      v29 = *((_OWORD *)Buf2 + 7);
      v11 = *((_OWORD *)Buf2 + 9);
      v30 = v10;
      *(_QWORD *)v31 = v11;
      v27.m256i_i32[5] = DWORD1(v33);
      LODWORD(Buf1) = v33;
      v27.m256i_i32[1] = HIDWORD(v33);
      v32 = DWORD2(v33);
      v27.m256i_i16[4] = WORD1(v34);
      v27.m256i_i16[9] = v34;
      *(__int64 *)((char *)&v27.m256i_i64[1] + 2) = *(_QWORD *)((char *)&v34 + 4);
      *(_DWORD *)&v31[8] = HIDWORD(v34);
      *(_WORD *)&v31[12] = WORD1(v35);
      *(_WORD *)&v31[22] = v35;
      *(_DWORD *)&v31[14] = HIDWORD(v35);
      *(_DWORD *)&v31[18] = v36;
      if ( memcmp(&Buf1, Buf2, 0xACuLL) )
      {
        v4 = 1;
        v12 = v24;
        *(_OWORD *)Buf2 = Buf1;
        v13 = v25;
        *((_OWORD *)Buf2 + 1) = v12;
        v14 = v26;
        *((_OWORD *)Buf2 + 2) = v13;
        v15 = *(_OWORD *)v27.m256i_i8;
        *((_OWORD *)Buf2 + 3) = v14;
        v16 = *(_OWORD *)&v27.m256i_u64[2];
        *((_OWORD *)Buf2 + 4) = v15;
        v17 = v28;
        *((_OWORD *)Buf2 + 5) = v16;
        v18 = v29;
        *((_OWORD *)Buf2 + 6) = v17;
        v19 = Buf2 + 128;
        *((_OWORD *)v19 - 1) = v18;
        v20 = *(_QWORD *)&v31[16];
        v21 = *(_OWORD *)v31;
        *(_OWORD *)v19 = v30;
        *((_OWORD *)v19 + 1) = v21;
        *((_QWORD *)v19 + 4) = v20;
        *((_DWORD *)v19 + 10) = v32;
      }
    }
    ZwClose(0LL);
  }
  return v4;
}
