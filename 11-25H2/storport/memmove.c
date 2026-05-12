/*
 * XREFs of memmove @ 0x14013C680
 * Callers:
 *     ?get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z @ 0x140011CCC (-get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z.c)
 *     sub_140018110 @ 0x140018110 (sub_140018110.c)
 *     sub_14001ACB8 @ 0x14001ACB8 (sub_14001ACB8.c)
 *     sub_140027440 @ 0x140027440 (sub_140027440.c)
 *     sub_140029E90 @ 0x140029E90 (sub_140029E90.c)
 *     sub_140031C68 @ 0x140031C68 (sub_140031C68.c)
 *     sub_140032250 @ 0x140032250 (sub_140032250.c)
 *     sub_140035DC0 @ 0x140035DC0 (sub_140035DC0.c)
 *     sub_140035F08 @ 0x140035F08 (sub_140035F08.c)
 *     sub_140037B4C @ 0x140037B4C (sub_140037B4C.c)
 *     sub_14003846C @ 0x14003846C (sub_14003846C.c)
 *     sub_14003B2E8 @ 0x14003B2E8 (sub_14003B2E8.c)
 *     sub_140042E78 @ 0x140042E78 (sub_140042E78.c)
 *     sub_140043488 @ 0x140043488 (sub_140043488.c)
 *     sub_140046420 @ 0x140046420 (sub_140046420.c)
 *     StorPortNotification @ 0x14004C160 (StorPortNotification.c)
 *     sub_140051C30 @ 0x140051C30 (sub_140051C30.c)
 *     sub_140054728 @ 0x140054728 (sub_140054728.c)
 *     sub_140055AB4 @ 0x140055AB4 (sub_140055AB4.c)
 *     sub_1400564C8 @ 0x1400564C8 (sub_1400564C8.c)
 *     sub_1400657EC @ 0x1400657EC (sub_1400657EC.c)
 *     sub_140065CA4 @ 0x140065CA4 (sub_140065CA4.c)
 *     sub_1400667DC @ 0x1400667DC (sub_1400667DC.c)
 *     sub_1400699FC @ 0x1400699FC (sub_1400699FC.c)
 *     sub_14006AA44 @ 0x14006AA44 (sub_14006AA44.c)
 *     sub_14006DACC @ 0x14006DACC (sub_14006DACC.c)
 *     sub_14006DCA4 @ 0x14006DCA4 (sub_14006DCA4.c)
 *     sub_14006E36C @ 0x14006E36C (sub_14006E36C.c)
 *     sub_14006E498 @ 0x14006E498 (sub_14006E498.c)
 *     sub_14006F488 @ 0x14006F488 (sub_14006F488.c)
 *     sub_1400711BC @ 0x1400711BC (sub_1400711BC.c)
 *     StorPortMoveMemory @ 0x1400743A0 (StorPortMoveMemory.c)
 *     StorPortReadDriverRegistry @ 0x140074780 (StorPortReadDriverRegistry.c)
 *     sub_1400750D4 @ 0x1400750D4 (sub_1400750D4.c)
 *     sub_140075474 @ 0x140075474 (sub_140075474.c)
 *     sub_14007B31C @ 0x14007B31C (sub_14007B31C.c)
 *     sub_140088944 @ 0x140088944 (sub_140088944.c)
 *     sub_140089670 @ 0x140089670 (sub_140089670.c)
 *     sub_140089BB4 @ 0x140089BB4 (sub_140089BB4.c)
 *     sub_14008A130 @ 0x14008A130 (sub_14008A130.c)
 *     sub_14008A698 @ 0x14008A698 (sub_14008A698.c)
 *     sub_14008C3E8 @ 0x14008C3E8 (sub_14008C3E8.c)
 *     sub_14008E83C @ 0x14008E83C (sub_14008E83C.c)
 *     sub_14008F190 @ 0x14008F190 (sub_14008F190.c)
 *     sub_14008F228 @ 0x14008F228 (sub_14008F228.c)
 *     sub_14008F4F4 @ 0x14008F4F4 (sub_14008F4F4.c)
 *     sub_14009641C @ 0x14009641C (sub_14009641C.c)
 *     sub_14009B090 @ 0x14009B090 (sub_14009B090.c)
 *     sub_14009B524 @ 0x14009B524 (sub_14009B524.c)
 *     sub_14009BE34 @ 0x14009BE34 (sub_14009BE34.c)
 *     sub_14009C2C8 @ 0x14009C2C8 (sub_14009C2C8.c)
 *     sub_14009C7D0 @ 0x14009C7D0 (sub_14009C7D0.c)
 *     sub_14009CDA8 @ 0x14009CDA8 (sub_14009CDA8.c)
 *     sub_14009F5C4 @ 0x14009F5C4 (sub_14009F5C4.c)
 *     sub_1400A5BE0 @ 0x1400A5BE0 (sub_1400A5BE0.c)
 *     sub_1400A5CC0 @ 0x1400A5CC0 (sub_1400A5CC0.c)
 *     sub_1400B6558 @ 0x1400B6558 (sub_1400B6558.c)
 *     sub_1400B6D8C @ 0x1400B6D8C (sub_1400B6D8C.c)
 *     sub_1400B9670 @ 0x1400B9670 (sub_1400B9670.c)
 *     sub_1400BBE50 @ 0x1400BBE50 (sub_1400BBE50.c)
 *     sub_1400BCF34 @ 0x1400BCF34 (sub_1400BCF34.c)
 *     sub_1400BD5E0 @ 0x1400BD5E0 (sub_1400BD5E0.c)
 *     sub_1400BD9F4 @ 0x1400BD9F4 (sub_1400BD9F4.c)
 *     sub_1400C5820 @ 0x1400C5820 (sub_1400C5820.c)
 *     sub_1400C772C @ 0x1400C772C (sub_1400C772C.c)
 *     sub_1400C7960 @ 0x1400C7960 (sub_1400C7960.c)
 *     sub_1400CF37C @ 0x1400CF37C (sub_1400CF37C.c)
 *     sub_1400D35C8 @ 0x1400D35C8 (sub_1400D35C8.c)
 *     sub_1400D78EC @ 0x1400D78EC (sub_1400D78EC.c)
 *     sub_1400D7E90 @ 0x1400D7E90 (sub_1400D7E90.c)
 *     sub_1400DAFAC @ 0x1400DAFAC (sub_1400DAFAC.c)
 *     sub_1400E0064 @ 0x1400E0064 (sub_1400E0064.c)
 *     sub_1400E14CC @ 0x1400E14CC (sub_1400E14CC.c)
 *     sub_1400EADB8 @ 0x1400EADB8 (sub_1400EADB8.c)
 *     sub_1400EC648 @ 0x1400EC648 (sub_1400EC648.c)
 *     sub_1400ECAF8 @ 0x1400ECAF8 (sub_1400ECAF8.c)
 *     sub_1400ECCD0 @ 0x1400ECCD0 (sub_1400ECCD0.c)
 *     sub_1400ECECC @ 0x1400ECECC (sub_1400ECECC.c)
 *     sub_1400F443C @ 0x1400F443C (sub_1400F443C.c)
 *     sub_1400F4774 @ 0x1400F4774 (sub_1400F4774.c)
 *     sub_1400F4AF8 @ 0x1400F4AF8 (sub_1400F4AF8.c)
 *     sub_1400F60E0 @ 0x1400F60E0 (sub_1400F60E0.c)
 *     sub_1400F76DC @ 0x1400F76DC (sub_1400F76DC.c)
 *     sub_1401057BC @ 0x1401057BC (sub_1401057BC.c)
 *     sub_140105B74 @ 0x140105B74 (sub_140105B74.c)
 *     sub_140105F38 @ 0x140105F38 (sub_140105F38.c)
 *     sub_140109588 @ 0x140109588 (sub_140109588.c)
 *     sub_14010FEF0 @ 0x14010FEF0 (sub_14010FEF0.c)
 *     sub_140112680 @ 0x140112680 (sub_140112680.c)
 *     sub_140112BBC @ 0x140112BBC (sub_140112BBC.c)
 *     sub_140112C94 @ 0x140112C94 (sub_140112C94.c)
 *     sub_140112D50 @ 0x140112D50 (sub_140112D50.c)
 *     sub_1401141CC @ 0x1401141CC (sub_1401141CC.c)
 *     sub_140123D24 @ 0x140123D24 (sub_140123D24.c)
 *     sub_140123DD0 @ 0x140123DD0 (sub_140123DD0.c)
 *     sub_140125CE0 @ 0x140125CE0 (sub_140125CE0.c)
 *     sub_140127AAC @ 0x140127AAC (sub_140127AAC.c)
 *     sub_140130F80 @ 0x140130F80 (sub_140130F80.c)
 *     sub_140133B50 @ 0x140133B50 (sub_140133B50.c)
 *     sub_140133FE4 @ 0x140133FE4 (sub_140133FE4.c)
 *     sub_140134250 @ 0x140134250 (sub_140134250.c)
 *     sub_1401363F0 @ 0x1401363F0 (sub_1401363F0.c)
 *     sub_140136540 @ 0x140136540 (sub_140136540.c)
 *     sub_1401366F0 @ 0x1401366F0 (sub_1401366F0.c)
 *     sub_1401377C0 @ 0x1401377C0 (sub_1401377C0.c)
 *     sub_140137980 @ 0x140137980 (sub_140137980.c)
 *     sub_140139CC0 @ 0x140139CC0 (sub_140139CC0.c)
 *     sub_140139E20 @ 0x140139E20 (sub_140139E20.c)
 *     sub_14013B8AC @ 0x14013B8AC (sub_14013B8AC.c)
 *     sub_14013BECC @ 0x14013BECC (sub_14013BECC.c)
 *     sub_14013BF9C @ 0x14013BF9C (sub_14013BF9C.c)
 *     sub_14013C1C8 @ 0x14013C1C8 (sub_14013C1C8.c)
 *     sub_14017869C @ 0x14017869C (sub_14017869C.c)
 *     sub_14017A65C @ 0x14017A65C (sub_14017A65C.c)
 *     sub_14017B29C @ 0x14017B29C (sub_14017B29C.c)
 *     sub_14017B3BC @ 0x14017B3BC (sub_14017B3BC.c)
 *     sub_14017B800 @ 0x14017B800 (sub_14017B800.c)
 *     sub_14017BD6C @ 0x14017BD6C (sub_14017BD6C.c)
 *     sub_14017F1A8 @ 0x14017F1A8 (sub_14017F1A8.c)
 *     sub_140180F28 @ 0x140180F28 (sub_140180F28.c)
 *     sub_140183DC4 @ 0x140183DC4 (sub_140183DC4.c)
 *     sub_140183E30 @ 0x140183E30 (sub_140183E30.c)
 *     sub_1401841F4 @ 0x1401841F4 (sub_1401841F4.c)
 *     sub_140185240 @ 0x140185240 (sub_140185240.c)
 *     sub_1401875C8 @ 0x1401875C8 (sub_1401875C8.c)
 *     sub_140193330 @ 0x140193330 (sub_140193330.c)
 *     sub_140195100 @ 0x140195100 (sub_140195100.c)
 *     sub_14019B3C8 @ 0x14019B3C8 (sub_14019B3C8.c)
 *     sub_14019B4AC @ 0x14019B4AC (sub_14019B4AC.c)
 *     sub_14019BA40 @ 0x14019BA40 (sub_14019BA40.c)
 *     sub_14019FD80 @ 0x14019FD80 (sub_14019FD80.c)
 *     sub_1401A7B6C @ 0x1401A7B6C (sub_1401A7B6C.c)
 *     sub_1401A8D44 @ 0x1401A8D44 (sub_1401A8D44.c)
 *     sub_1401A94C8 @ 0x1401A94C8 (sub_1401A94C8.c)
 *     sub_1401A95FC @ 0x1401A95FC (sub_1401A95FC.c)
 *     sub_1401A9F10 @ 0x1401A9F10 (sub_1401A9F10.c)
 *     sub_1401AAA18 @ 0x1401AAA18 (sub_1401AAA18.c)
 *     sub_1401AC100 @ 0x1401AC100 (sub_1401AC100.c)
 *     sub_1401B0650 @ 0x1401B0650 (sub_1401B0650.c)
 *     sub_1401B0BC0 @ 0x1401B0BC0 (sub_1401B0BC0.c)
 * Callees:
 *     <none>
 */

void *__cdecl memmove(void *a1, const void *Src, size_t Size)
{
  void *result; // rax
  __int64 v4; // r11
  __int64 v5; // rdx
  __int128 v6; // xmm1
  bool v7; // cf
  signed __int64 v8; // rdx
  char v9; // r11
  _BYTE *v10; // rcx
  char v11; // r11
  char *v12; // r11
  signed __int64 v13; // rdx
  __m128 v14; // xmm0
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rcx
  __m128 v17; // xmm1
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // r9
  __int128 v20; // xmm1
  __int128 v21; // xmm2
  __int128 v22; // xmm3
  __m128 v23; // xmm4
  unsigned __int64 j; // r9
  unsigned __int64 v25; // r8
  unsigned __int64 v26; // r9
  __m128 v27; // xmm1
  __m128 v28; // xmm2
  __m128 v29; // xmm3
  __m128 v30; // xmm4
  char *v31; // rcx
  __int128 v32; // xmm0
  unsigned __int64 v33; // rcx
  size_t v34; // r8
  _OWORD *v35; // r11
  __int128 v36; // xmm1
  size_t v37; // r9
  __int128 v38; // xmm1
  __int128 v39; // xmm2
  __int128 v40; // xmm3
  __int128 v41; // xmm4
  size_t i; // r9
  size_t v43; // r8

  result = a1;
  if ( Size < 8 )
  {
    if ( Size )
    {
      v7 = Src < a1;
      v8 = (_BYTE *)Src - (_BYTE *)a1;
      if ( v7 )
      {
        v10 = (char *)a1 + Size;
        do
        {
          v11 = v10[v8 - 1];
          --v10;
          --Size;
          *v10 = v11;
        }
        while ( Size );
      }
      else
      {
        do
        {
          v9 = *((_BYTE *)a1 + v8);
          a1 = (char *)a1 + 1;
          --Size;
          *((char *)a1 - 1) = v9;
        }
        while ( Size );
      }
    }
  }
  else if ( Size > 0x10 )
  {
    if ( Size > 0x20 )
    {
      v12 = (char *)Src + Size;
      v7 = Src < a1;
      v13 = (_BYTE *)Src - (_BYTE *)a1;
      if ( v7 && v12 > a1 )
      {
        v31 = (char *)a1 + Size;
        v32 = *(_OWORD *)&v31[v13 - 16];
        v33 = (unsigned __int64)(v31 - 16);
        v34 = Size - 16;
        if ( (v33 & 0xF) != 0 )
        {
          v35 = (_OWORD *)v33;
          v33 &= 0xFFFFFFFFFFFFFFF0uLL;
          v36 = *(_OWORD *)(v33 + v13);
          *v35 = v32;
          v32 = v36;
          v34 = v33 - (_QWORD)result;
        }
        v37 = v34 >> 6;
        if ( v34 >> 6 )
        {
          v34 &= 0x3Fu;
          do
          {
            v38 = *(_OWORD *)(v33 + v13 - 16);
            v39 = *(_OWORD *)(v33 + v13 - 32);
            v40 = *(_OWORD *)(v33 + v13 - 48);
            v41 = *(_OWORD *)(v33 + v13 - 64);
            *(_OWORD *)v33 = v32;
            v33 -= 64LL;
            --v37;
            *(_OWORD *)(v33 + 48) = v38;
            *(_OWORD *)(v33 + 32) = v39;
            *(_OWORD *)(v33 + 16) = v40;
            v32 = v41;
          }
          while ( v37 );
        }
        for ( i = v34 >> 4; i; --i )
        {
          *(_OWORD *)v33 = v32;
          v32 = *(_OWORD *)(v33 + v13 - 16);
          v33 -= 16LL;
        }
        v43 = v34 & 0xF;
        if ( v43 )
          *(_OWORD *)(v33 - v43) = *(_OWORD *)(v33 - v43 + v13);
        *(_OWORD *)v33 = v32;
      }
      else
      {
        v14 = *(__m128 *)((char *)a1 + v13);
        v15 = (unsigned __int64)a1 + 16;
        if ( (v15 & 0xF) != 0 )
        {
          v16 = v15 & 0xFFFFFFFFFFFFFFF0uLL;
          v17 = *(__m128 *)(v16 + v13);
          *(__m128 *)result = v14;
          v14 = v17;
          v15 = v16 + 16;
        }
        v18 = (unsigned __int64)result + Size - v15;
        v19 = v18 >> 6;
        if ( v18 >> 6 )
        {
          if ( v19 > 0x1000 )
          {
            v26 = v18 >> 6;
            v18 &= 0x3Fu;
            _mm_prefetch((const char *)(v15 + v13 + 64), 0);
            do
            {
              v27 = *(__m128 *)(v15 + v13);
              v28 = *(__m128 *)(v15 + v13 + 16);
              v29 = *(__m128 *)(v15 + v13 + 32);
              v30 = *(__m128 *)(v15 + v13 + 48);
              _mm_stream_ps((float *)(v15 - 16), v14);
              v15 += 64LL;
              _mm_prefetch((const char *)(v15 + v13 + 64), 0);
              --v26;
              _mm_stream_ps((float *)(v15 - 64), v27);
              _mm_stream_ps((float *)(v15 - 48), v28);
              _mm_stream_ps((float *)(v15 - 32), v29);
              v14 = v30;
            }
            while ( v26 );
            _mm_sfence();
          }
          else
          {
            v18 &= 0x3Fu;
            do
            {
              v20 = *(_OWORD *)(v15 + v13);
              v21 = *(_OWORD *)(v15 + v13 + 16);
              v22 = *(_OWORD *)(v15 + v13 + 32);
              v23 = *(__m128 *)(v15 + v13 + 48);
              *(__m128 *)(v15 - 16) = v14;
              v15 += 64LL;
              --v19;
              *(_OWORD *)(v15 - 64) = v20;
              *(_OWORD *)(v15 - 48) = v21;
              *(_OWORD *)(v15 - 32) = v22;
              v14 = v23;
            }
            while ( v19 );
          }
        }
        for ( j = v18 >> 4; j; --j )
        {
          *(__m128 *)(v15 - 16) = v14;
          v14 = *(__m128 *)(v15 + v13);
          v15 += 16LL;
        }
        v25 = v18 & 0xF;
        if ( v25 )
          *(_OWORD *)(v15 + v25 - 16) = *(_OWORD *)(v15 + v25 - 16 + v13);
        *(__m128 *)(v15 - 16) = v14;
      }
    }
    else
    {
      v6 = *(_OWORD *)((char *)Src + Size - 16);
      *(_OWORD *)a1 = *(_OWORD *)Src;
      *(_OWORD *)((char *)a1 + Size - 16) = v6;
    }
  }
  else
  {
    v4 = *(_QWORD *)Src;
    v5 = *(_QWORD *)((char *)Src + Size - 8);
    *(_QWORD *)a1 = v4;
    *(_QWORD *)((char *)a1 + Size - 8) = v5;
  }
  return result;
}
