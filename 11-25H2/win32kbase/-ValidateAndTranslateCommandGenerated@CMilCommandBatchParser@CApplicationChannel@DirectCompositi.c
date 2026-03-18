/*
 * XREFs of ?ValidateAndTranslateCommandGenerated@CMilCommandBatchParser@CApplicationChannel@DirectComposition@@AEAAJPEAXI@Z @ 0x14005B7F4
 * Callers:
 *     ?ValidateAndTranslateHandles@CMilCommandBatchParser@CApplicationChannel@DirectComposition@@QEAAJXZ @ 0x14005B550 (-ValidateAndTranslateHandles@CMilCommandBatchParser@CApplicationChannel@DirectComposition@@QEAAJ.c)
 * Callees:
 *     ?TranslateMilCommandBatchHandle@CMilCommandBatchParser@CApplicationChannel@DirectComposition@@AEAAXPEAIW4MIL_RESOURCE_TYPE@@_NPEAJ@Z @ 0x14002194C (-TranslateMilCommandBatchHandle@CMilCommandBatchParser@CApplicationChannel@DirectComposition@@AE.c)
 *     ?TranslateMilCommandBatchHandleArray@CMilCommandBatchParser@CApplicationChannel@DirectComposition@@AEAAXPEAIIW4MIL_RESOURCE_TYPE@@_NPEAJ@Z @ 0x14010C670 (-TranslateMilCommandBatchHandleArray@CMilCommandBatchParser@CApplicationChannel@DirectCompositio.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::CMilCommandBatchParser::ValidateAndTranslateCommandGenerated(
        DirectComposition::CApplicationChannel **this,
        unsigned int *a2,
        unsigned int a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rdi
  bool v7; // cf
  unsigned int *v8; // rdx
  char v9; // r9
  int v10; // r8d
  bool v11; // zf
  int v13; // r8d
  int v14; // r8d
  unsigned __int64 v15; // rcx
  unsigned int *v16; // rsi
  char *v17; // rbx
  unsigned int *v18; // rax
  unsigned int *v19; // rdx
  bool v20; // zf
  bool v21; // zf
  bool v22; // zf
  bool v23; // zf
  bool v24; // zf
  bool v25; // zf
  bool v26; // zf
  bool v27; // zf
  bool v28; // zf
  bool v29; // zf
  bool v30; // zf
  int v31; // r8d
  bool v32; // zf
  bool v33; // zf
  bool v34; // zf
  int v35; // r8d
  unsigned __int64 v36; // r8
  __int64 v37; // r9
  unsigned __int64 v38; // r8
  char *v39; // rdx
  bool v40; // zf
  int v41; // r8d
  bool v42; // zf
  int v43; // r8d
  bool v44; // cf
  bool v45; // cf
  int v46; // r8d
  int v47; // r8d
  bool v48; // zf
  bool v49; // zf
  bool v50; // zf
  bool v51; // zf
  int v52; // r8d
  bool v53; // zf
  bool v54; // zf
  bool v55; // zf
  bool v56; // zf
  bool v57; // zf
  bool v58; // zf
  bool v59; // cf
  bool v60; // zf
  int v61; // r8d
  bool v62; // cf
  bool v63; // zf
  int v64; // r8d
  bool v65; // zf
  bool v66; // zf
  int v67; // r8d
  int v68; // r8d
  bool v69; // zf
  bool v70; // zf
  bool v71; // zf
  bool v72; // zf
  bool v73; // zf
  bool v74; // zf
  int v75; // r8d
  int v76; // r8d
  bool v77; // zf
  bool v78; // zf
  bool v79; // zf
  bool v80; // zf
  bool v81; // zf
  bool v82; // zf
  bool v83; // zf
  int v84; // r8d
  bool v85; // zf
  int v86; // r8d
  bool v87; // zf
  bool v88; // zf
  bool v89; // zf
  bool v90; // zf
  bool v91; // zf
  int v92; // r8d
  bool v93; // zf
  bool v94; // zf
  bool v95; // zf
  int v96; // [rsp+20h] [rbp-10h]
  int v97; // [rsp+20h] [rbp-10h]
  int v98; // [rsp+20h] [rbp-10h]
  unsigned int v99; // [rsp+58h] [rbp+28h] BYREF

  v3 = 0;
  v4 = a3;
  v99 = 0;
  switch ( *a2 )
  {
    case 1u:
      v7 = a3 < 0xC;
      goto LABEL_3;
    case 2u:
      v7 = a3 < 0x10;
LABEL_3:
      if ( !v7 )
        goto LABEL_4;
      goto LABEL_11;
    case 3u:
    case 6u:
      v11 = a3 == 12;
      goto LABEL_10;
    case 4u:
    case 8u:
      v11 = a3 == 16;
      goto LABEL_10;
    case 5u:
      if ( a3 != 60 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        2,
        0,
        &v99);
      v8 = a2 + 6;
      v9 = 1;
      goto LABEL_5;
    case 7u:
      if ( a3 != 16 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        2,
        0,
        &v99);
      v8 = a2 + 2;
      v9 = 1;
      goto LABEL_18;
    case 9u:
      if ( a3 != 24 )
        goto LABEL_11;
      v13 = 2;
      goto LABEL_21;
    case 0xAu:
    case 0xBu:
      v11 = a3 == 28;
LABEL_10:
      if ( !v11 )
        goto LABEL_11;
LABEL_4:
      v8 = a2 + 1;
      v9 = 0;
LABEL_5:
      v10 = 2;
      goto LABEL_6;
    case 0xCu:
    case 0xDu:
      if ( a3 != 20 )
        goto LABEL_11;
      v14 = 10;
      goto LABEL_27;
    case 0xEu:
      if ( a3 < 0x14 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        11,
        0,
        &v99);
      v15 = a2[3];
      if ( v15 > v4 - 20 )
        goto LABEL_11;
      v16 = a2 + 4;
      v17 = (char *)&v16[v15 >> 2];
      if ( v16 < (unsigned int *)v17 )
      {
        v18 = v16;
        do
        {
          v19 = v16;
          v16 = v18 + 1;
          DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
            this,
            v19,
            59,
            0,
            &v99);
          v18 = v16;
        }
        while ( v16 < (unsigned int *)v17 );
      }
      goto LABEL_7;
    case 0xFu:
    case 0x12u:
      v20 = a3 == 16;
      goto LABEL_37;
    case 0x10u:
      v20 = a3 == 12;
      goto LABEL_37;
    case 0x11u:
      v20 = a3 == 44;
LABEL_37:
      if ( !v20 )
        goto LABEL_11;
      v8 = a2 + 1;
      v9 = 0;
      goto LABEL_39;
    case 0x13u:
      if ( a3 >= 0x14 )
        goto LABEL_43;
      goto LABEL_11;
    case 0x14u:
      if ( a3 != 20 )
        goto LABEL_11;
LABEL_43:
      v8 = a2 + 1;
      v9 = 0;
      v10 = 13;
      goto LABEL_6;
    case 0x15u:
      v21 = a3 == 12;
      goto LABEL_47;
    case 0x16u:
      v21 = a3 == 28;
LABEL_47:
      if ( !v21 )
        goto LABEL_11;
      v8 = a2 + 1;
      v9 = 0;
      v10 = 18;
      goto LABEL_6;
    case 0x17u:
      if ( a3 != 68 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        18,
        0,
        &v99);
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 8,
        127,
        1,
        &v99);
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 9,
        159,
        1,
        &v99);
      v8 = a2 + 10;
      goto LABEL_52;
    case 0x18u:
      v22 = a3 == 12;
      goto LABEL_55;
    case 0x19u:
    case 0x1Du:
      v22 = a3 == 20;
      goto LABEL_55;
    case 0x1Au:
      if ( a3 >= 0x10 )
        goto LABEL_56;
      goto LABEL_11;
    case 0x1Bu:
      if ( a3 != 16 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        20,
        0,
        &v99);
      v8 = a2 + 2;
      v9 = 1;
      goto LABEL_62;
    case 0x1Cu:
    case 0x1Eu:
    case 0x1Fu:
    case 0x20u:
    case 0x21u:
      v22 = a3 == 16;
LABEL_55:
      if ( !v22 )
        goto LABEL_11;
LABEL_56:
      v8 = a2 + 1;
      v9 = 0;
      v10 = 20;
      goto LABEL_6;
    case 0x22u:
    case 0x2Cu:
    case 0x2Du:
    case 0xFFu:
      v23 = a3 == 8;
      goto LABEL_65;
    case 0x23u:
    case 0x10Au:
    case 0x10Bu:
      v23 = a3 == 16;
      goto LABEL_65;
    case 0x24u:
      v24 = a3 == 16;
      goto LABEL_69;
    case 0x25u:
      v24 = a3 == 12;
LABEL_69:
      if ( !v24 )
        goto LABEL_11;
      v8 = a2 + 1;
      goto LABEL_28;
    case 0x26u:
    case 0x107u:
    case 0x108u:
    case 0x109u:
      v25 = a3 == 16;
      goto LABEL_73;
    case 0x27u:
      v25 = a3 == 12;
      goto LABEL_73;
    case 0x28u:
    case 0xFAu:
    case 0xFDu:
    case 0x104u:
    case 0x105u:
    case 0x10Du:
      v23 = a3 == 12;
      goto LABEL_65;
    case 0x29u:
    case 0x2Bu:
    case 0x100u:
      if ( a3 < 0xC )
        goto LABEL_11;
      return v3;
    case 0x2Au:
    case 0x101u:
    case 0x10Cu:
      v23 = a3 == 28;
      goto LABEL_65;
    case 0x2Eu:
      if ( a3 != 52 )
        goto LABEL_11;
      v8 = a2 + 10;
      goto LABEL_52;
    case 0x2Fu:
      if ( a3 != 28 )
        goto LABEL_11;
      v8 = a2 + 1;
      v9 = 0;
      goto LABEL_84;
    case 0x30u:
      v26 = a3 == 28;
      goto LABEL_86;
    case 0x31u:
      v26 = a3 == 16;
LABEL_86:
      if ( !v26 )
        goto LABEL_11;
      v8 = a2 + 1;
      v9 = 0;
      v10 = 23;
      goto LABEL_6;
    case 0x32u:
      if ( a3 != 28 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 25;
      v9 = 0;
      goto LABEL_6;
    case 0x33u:
      if ( a3 != 112 )
        goto LABEL_11;
      v8 = a2 + 1;
      v9 = 0;
      goto LABEL_93;
    case 0x34u:
      if ( a3 != 24 )
        goto LABEL_11;
      v13 = 28;
      goto LABEL_21;
    case 0x35u:
    case 0x36u:
    case 0x37u:
    case 0x39u:
      v27 = a3 == 20;
      goto LABEL_97;
    case 0x38u:
      v27 = a3 == 16;
      goto LABEL_97;
    case 0x3Au:
      v27 = a3 == 36;
LABEL_97:
      if ( !v27 )
        goto LABEL_11;
      v8 = a2 + 1;
      v9 = 0;
      goto LABEL_99;
    case 0x3Bu:
      v28 = a3 == 20;
      goto LABEL_103;
    case 0x3Cu:
    case 0x3Du:
    case 0x40u:
    case 0x41u:
      v28 = a3 == 24;
      goto LABEL_103;
    case 0x3Eu:
      v28 = a3 == 28;
      goto LABEL_103;
    case 0x3Fu:
      v28 = a3 == 16;
      goto LABEL_103;
    case 0x42u:
      v28 = a3 == 76;
LABEL_103:
      if ( !v28 )
        goto LABEL_11;
      v8 = a2 + 1;
      v9 = 0;
      goto LABEL_105;
    case 0x43u:
      v29 = a3 == 28;
      goto LABEL_111;
    case 0x44u:
      v29 = a3 == 16;
LABEL_111:
      if ( !v29 )
        goto LABEL_11;
      v8 = a2 + 1;
      v9 = 0;
      v10 = 32;
      goto LABEL_6;
    case 0x45u:
      v30 = a3 == 28;
      goto LABEL_115;
    case 0x46u:
      if ( a3 != 16 )
        goto LABEL_11;
      v31 = 33;
      goto LABEL_119;
    case 0x47u:
      v30 = a3 == 24;
      goto LABEL_115;
    case 0x48u:
      v30 = a3 == 16;
LABEL_115:
      if ( !v30 )
        goto LABEL_11;
      v8 = a2 + 1;
      v9 = 0;
      v10 = 33;
      goto LABEL_6;
    case 0x49u:
    case 0x4Au:
      if ( a3 >= 0x10 )
        goto LABEL_123;
      goto LABEL_11;
    case 0x4Bu:
    case 0x4Cu:
      v32 = a3 == 12;
      goto LABEL_126;
    case 0x4Du:
      v32 = a3 == 16;
LABEL_126:
      if ( !v32 )
        goto LABEL_11;
LABEL_123:
      v8 = a2 + 1;
      v9 = 0;
      goto LABEL_124;
    case 0x4Eu:
      if ( a3 == 32 )
        goto LABEL_130;
      goto LABEL_11;
    case 0x4Fu:
      if ( a3 < 0x10 )
        goto LABEL_11;
LABEL_130:
      v8 = a2 + 1;
      v9 = 0;
      v10 = 37;
      goto LABEL_6;
    case 0x50u:
    case 0x51u:
    case 0x52u:
    case 0x55u:
    case 0x56u:
    case 0x57u:
      v33 = a3 == 16;
      goto LABEL_134;
    case 0x53u:
      v33 = a3 == 28;
      goto LABEL_134;
    case 0x54u:
      if ( a3 != 16 )
        goto LABEL_11;
      v31 = 38;
      goto LABEL_119;
    case 0x58u:
      v33 = a3 == 24;
LABEL_134:
      if ( !v33 )
        goto LABEL_11;
      v8 = a2 + 1;
      v9 = 0;
      v10 = 38;
      goto LABEL_6;
    case 0x59u:
    case 0x5Au:
    case 0x5Bu:
    case 0x5Eu:
    case 0x60u:
    case 0x61u:
    case 0x62u:
    case 0x64u:
    case 0x66u:
      v34 = a3 == 16;
      goto LABEL_141;
    case 0x5Cu:
      if ( a3 != 16 )
        goto LABEL_11;
      v31 = 40;
      goto LABEL_119;
    case 0x5Du:
    case 0x63u:
      v34 = a3 == 24;
      goto LABEL_141;
    case 0x5Fu:
    case 0x65u:
      v34 = a3 == 28;
LABEL_141:
      if ( !v34 )
        goto LABEL_11;
      v8 = a2 + 1;
      v9 = 0;
      v10 = 40;
      goto LABEL_6;
    case 0x67u:
      if ( a3 != 28 )
        goto LABEL_11;
      v8 = a2 + 1;
      v9 = 0;
      goto LABEL_149;
    case 0x68u:
      if ( a3 >= 0x10 )
        goto LABEL_151;
      goto LABEL_11;
    case 0x69u:
      if ( a3 != 16 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        44,
        0,
        &v99);
      v8 = a2 + 2;
      v9 = 1;
      goto LABEL_155;
    case 0x6Au:
      if ( a3 != 16 )
        goto LABEL_11;
LABEL_151:
      v8 = a2 + 1;
      v9 = 0;
      goto LABEL_152;
    case 0x6Bu:
      if ( a3 < 0x14 )
        goto LABEL_11;
      v35 = 45;
      goto LABEL_160;
    case 0x6Cu:
    case 0x1BDu:
      if ( a3 != 28 )
        goto LABEL_11;
      v8 = a2 + 1;
      v9 = 0;
      goto LABEL_166;
    case 0x6Du:
      if ( a3 != 28 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 50;
      v9 = 0;
      goto LABEL_6;
    case 0x6Eu:
      v40 = a3 == 60;
      goto LABEL_170;
    case 0x6Fu:
      if ( a3 != 16 )
        goto LABEL_11;
      v41 = 51;
      goto LABEL_174;
    case 0x70u:
      v40 = a3 == 16;
      goto LABEL_170;
    case 0x71u:
      v40 = a3 == 68;
LABEL_170:
      if ( !v40 )
        goto LABEL_11;
      v8 = a2 + 1;
      v9 = 0;
      v10 = 51;
      goto LABEL_6;
    case 0x72u:
    case 0x76u:
    case 0x77u:
      v42 = a3 == 16;
      goto LABEL_179;
    case 0x73u:
      v42 = a3 == 28;
      goto LABEL_179;
    case 0x74u:
      if ( a3 != 16 )
        goto LABEL_11;
      v43 = 54;
      goto LABEL_185;
    case 0x75u:
      v42 = a3 == 24;
LABEL_179:
      if ( !v42 )
        goto LABEL_11;
      v8 = a2 + 1;
      v9 = 0;
      goto LABEL_181;
    case 0x78u:
      if ( a3 != 20 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        56,
        0,
        &v99);
      v8 = a2 + 3;
      goto LABEL_186;
    case 0x79u:
      if ( a3 != 16 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        56,
        0,
        &v99);
      v8 = a2 + 2;
      v9 = 1;
      goto LABEL_192;
    case 0x7Au:
      if ( a3 != 20 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        56,
        0,
        &v99);
      v8 = a2 + 2;
      v9 = 1;
      v10 = 28;
      goto LABEL_6;
    case 0x7Bu:
    case 0x7Cu:
      if ( a3 != 20 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 58;
      v9 = 0;
      goto LABEL_6;
    case 0x7Du:
      if ( a3 != 24 )
        goto LABEL_11;
      v13 = 59;
      goto LABEL_21;
    case 0x7Eu:
      v44 = a3 < 0x10;
      goto LABEL_200;
    case 0x7Fu:
    case 0x80u:
      v44 = a3 < 0x14;
LABEL_200:
      if ( v44 )
        goto LABEL_11;
      v8 = a2 + 1;
      v9 = 0;
LABEL_155:
      v10 = 59;
      goto LABEL_6;
    case 0x81u:
      if ( a3 < 0x14 )
        goto LABEL_11;
      v8 = a2 + 1;
      v9 = 0;
      v10 = 60;
      goto LABEL_6;
    case 0x82u:
      if ( a3 != 16 )
        goto LABEL_11;
      v8 = a2 + 1;
      v9 = 0;
      goto LABEL_207;
    case 0x83u:
      v45 = a3 < 0xC;
      goto LABEL_209;
    case 0x84u:
      if ( a3 == 52 )
        goto LABEL_210;
      goto LABEL_11;
    case 0x85u:
      v45 = a3 < 0x1C;
LABEL_209:
      if ( v45 )
        goto LABEL_11;
LABEL_210:
      v8 = a2 + 1;
      v9 = 0;
      v10 = 65;
      goto LABEL_6;
    case 0x86u:
      if ( a3 != 28 )
        goto LABEL_11;
      v46 = 65;
      goto LABEL_216;
    case 0x87u:
      if ( a3 != 24 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        65,
        0,
        &v99);
      v8 = a2 + 2;
      v9 = 1;
LABEL_166:
      v10 = 47;
      goto LABEL_6;
    case 0x88u:
      if ( a3 != 16 )
        goto LABEL_11;
      v47 = 66;
      goto LABEL_222;
    case 0x89u:
    case 0x8Au:
    case 0x8Bu:
      if ( a3 != 16 )
        goto LABEL_11;
      v8 = a2 + 1;
      v9 = 0;
      goto LABEL_225;
    case 0x8Cu:
      if ( a3 < 0x14 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        72,
        0,
        &v99);
      v36 = a2[3];
      if ( v36 > v4 - 20 )
        goto LABEL_11;
      v37 = 23LL;
      goto LABEL_162;
    case 0x8Du:
    case 0x8Eu:
    case 0x8Fu:
      if ( a3 != 16 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 72;
      v9 = 0;
      goto LABEL_6;
    case 0x90u:
      if ( a3 != 16 )
        goto LABEL_11;
      v47 = 72;
      goto LABEL_222;
    case 0x91u:
      v48 = a3 == 32;
      goto LABEL_234;
    case 0x92u:
      v48 = a3 == 16;
LABEL_234:
      if ( !v48 )
        goto LABEL_11;
      v8 = a2 + 1;
      v9 = 0;
      v10 = 74;
      goto LABEL_6;
    case 0x93u:
      v49 = a3 == 36;
      goto LABEL_238;
    case 0x94u:
    case 0x95u:
      v49 = a3 == 16;
LABEL_238:
      if ( !v49 )
        goto LABEL_11;
      v8 = a2 + 1;
      v9 = 0;
      v10 = 75;
      goto LABEL_6;
    case 0x96u:
      v50 = a3 == 20;
      goto LABEL_242;
    case 0x97u:
      v50 = a3 == 16;
LABEL_242:
      if ( !v50 )
        goto LABEL_11;
      v8 = a2 + 1;
      v9 = 0;
      v10 = 76;
      goto LABEL_6;
    case 0x98u:
      v51 = a3 == 28;
      goto LABEL_246;
    case 0x99u:
      if ( a3 != 16 )
        goto LABEL_11;
      v52 = 77;
      goto LABEL_250;
    case 0x9Au:
      v51 = a3 == 36;
LABEL_246:
      if ( !v51 )
        goto LABEL_11;
      v8 = a2 + 1;
      v9 = 0;
      v10 = 77;
      goto LABEL_6;
    case 0x9Bu:
      v53 = a3 == 24;
      goto LABEL_254;
    case 0x9Cu:
      v53 = a3 == 16;
      goto LABEL_254;
    case 0x9Du:
      v53 = a3 == 28;
LABEL_254:
      if ( !v53 )
        goto LABEL_11;
      v8 = a2 + 1;
      v9 = 0;
      v10 = 79;
      goto LABEL_6;
    case 0x9Eu:
      if ( a3 != 16 )
        goto LABEL_11;
      v31 = 79;
      goto LABEL_119;
    case 0x9Fu:
      v54 = a3 == 68;
      goto LABEL_261;
    case 0xA0u:
      v54 = a3 == 16;
      goto LABEL_261;
    case 0xA1u:
      v54 = a3 == 20;
LABEL_261:
      if ( !v54 )
        goto LABEL_11;
      v8 = a2 + 1;
      v9 = 0;
      v10 = 80;
      goto LABEL_6;
    case 0xA2u:
      if ( a3 != 36 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        85,
        0,
        &v99);
      v8 = a2 + 6;
      goto LABEL_52;
    case 0xA3u:
      v55 = a3 == 12;
      goto LABEL_268;
    case 0xA4u:
      v55 = a3 == 28;
LABEL_268:
      if ( !v55 )
        goto LABEL_11;
      v8 = a2 + 1;
      v9 = 0;
      v10 = 85;
      goto LABEL_6;
    case 0xA5u:
      if ( a3 != 24 )
        goto LABEL_11;
      v13 = 86;
      goto LABEL_21;
    case 0xA6u:
      v56 = a3 == 56;
      goto LABEL_274;
    case 0xA7u:
      v56 = a3 == 16;
      goto LABEL_274;
    case 0xA8u:
      v56 = a3 == 52;
      goto LABEL_274;
    case 0xA9u:
      v56 = a3 == 24;
LABEL_274:
      if ( !v56 )
        goto LABEL_11;
      v8 = a2 + 1;
      v9 = 0;
      v10 = 87;
      goto LABEL_6;
    case 0xAAu:
      v57 = a3 == 28;
      goto LABEL_280;
    case 0xABu:
    case 0xACu:
    case 0xB0u:
    case 0xB3u:
      v57 = a3 == 16;
      goto LABEL_280;
    case 0xADu:
      if ( a3 != 16 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        88,
        0,
        &v99);
      v8 = a2 + 2;
      v9 = 1;
      v10 = 81;
      goto LABEL_6;
    case 0xAEu:
      v57 = a3 == 20;
      goto LABEL_280;
    case 0xAFu:
      if ( a3 != 16 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        88,
        0,
        &v99);
      v8 = a2 + 2;
      v9 = 1;
      goto LABEL_289;
    case 0xB1u:
      if ( a3 >= 0x18 )
        goto LABEL_281;
      goto LABEL_11;
    case 0xB2u:
      v57 = a3 == 24;
LABEL_280:
      if ( !v57 )
        goto LABEL_11;
LABEL_281:
      v8 = a2 + 1;
      v9 = 0;
      goto LABEL_282;
    case 0xB4u:
    case 0xBCu:
      v58 = a3 == 24;
      goto LABEL_294;
    case 0xB5u:
    case 0xBFu:
      v59 = a3 < 0x10;
      goto LABEL_298;
    case 0xB6u:
    case 0xB8u:
      v58 = a3 == 28;
      goto LABEL_294;
    case 0xB7u:
      v58 = a3 == 12;
      goto LABEL_294;
    case 0xB9u:
    case 0xC1u:
    case 0xC3u:
      v58 = a3 == 16;
      goto LABEL_294;
    case 0xBAu:
    case 0xBBu:
      if ( a3 != 16 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        89,
        0,
        &v99);
      v8 = a2 + 2;
      goto LABEL_305;
    case 0xBDu:
      if ( a3 < 0x18 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        89,
        0,
        &v99);
      v8 = a2 + 3;
      goto LABEL_305;
    case 0xBEu:
      v59 = a3 < 0xC;
LABEL_298:
      if ( !v59 )
        goto LABEL_295;
      goto LABEL_11;
    case 0xC0u:
    case 0xC2u:
      v58 = a3 == 20;
      goto LABEL_294;
    case 0xC4u:
    case 0xC7u:
      v58 = a3 == 32;
      goto LABEL_294;
    case 0xC5u:
      v58 = a3 == 36;
LABEL_294:
      if ( !v58 )
        goto LABEL_11;
LABEL_295:
      v8 = a2 + 1;
      v9 = 0;
      goto LABEL_296;
    case 0xC6u:
      v60 = a3 == 28;
      goto LABEL_313;
    case 0xC8u:
      v60 = a3 == 36;
LABEL_313:
      if ( !v60 )
        goto LABEL_11;
      v61 = 89;
      goto LABEL_315;
    case 0xC9u:
      if ( a3 != 24 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        90,
        0,
        &v99);
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 2,
        89,
        1,
        &v99);
      v8 = a2 + 3;
      v9 = 1;
LABEL_296:
      v10 = 89;
      goto LABEL_6;
    case 0xCAu:
      v62 = a3 < 0x10;
      goto LABEL_320;
    case 0xCBu:
      if ( a3 != 72 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        91,
        0,
        &v99);
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 3,
        156,
        1,
        &v99);
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 11,
        2,
        1,
        &v99);
      v8 = a2 + 12;
      goto LABEL_22;
    case 0xCCu:
      v62 = a3 < 0x14;
LABEL_320:
      if ( !v62 )
        goto LABEL_321;
      goto LABEL_11;
    case 0xCDu:
    case 0xCEu:
    case 0xCFu:
      v63 = a3 == 16;
      goto LABEL_326;
    case 0xD0u:
    case 0xD1u:
      v63 = a3 == 36;
LABEL_326:
      if ( !v63 )
        goto LABEL_11;
LABEL_321:
      v8 = a2 + 1;
      v9 = 0;
      v10 = 91;
      goto LABEL_6;
    case 0xD2u:
    case 0xD4u:
      if ( a3 != 16 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 92;
      v9 = 0;
      goto LABEL_6;
    case 0xD3u:
      if ( a3 != 16 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        92,
        0,
        &v99);
      v8 = a2 + 2;
      v9 = 1;
      v10 = 56;
      goto LABEL_6;
    case 0xD5u:
      if ( a3 != 16 )
        goto LABEL_11;
      v64 = 92;
      goto LABEL_335;
    case 0xD6u:
      if ( a3 != 20 )
        goto LABEL_11;
      v8 = a2 + 1;
      v9 = 0;
LABEL_18:
      v10 = 93;
      goto LABEL_6;
    case 0xD7u:
      v65 = a3 == 36;
      goto LABEL_339;
    case 0xD8u:
      if ( a3 != 16 )
        goto LABEL_11;
      v41 = 95;
      goto LABEL_174;
    case 0xD9u:
      v65 = a3 == 16;
      goto LABEL_339;
    case 0xDAu:
      v65 = a3 == 68;
LABEL_339:
      if ( !v65 )
        goto LABEL_11;
      v8 = a2 + 1;
      v9 = 0;
      v10 = 95;
      goto LABEL_6;
    case 0xDBu:
      if ( a3 != 52 )
        goto LABEL_11;
      v31 = 97;
      goto LABEL_119;
    case 0xDCu:
    case 0xDDu:
      if ( a3 != 20 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 98;
      v9 = 0;
      goto LABEL_6;
    case 0xDEu:
    case 0xDFu:
      if ( a3 != 20 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 101;
      v9 = 0;
      goto LABEL_6;
    case 0xE0u:
      v66 = a3 == 76;
      goto LABEL_352;
    case 0xE1u:
      v66 = a3 == 228;
      goto LABEL_352;
    case 0xE2u:
      if ( a3 != 16 )
        goto LABEL_11;
      v67 = 103;
      goto LABEL_357;
    case 0xE3u:
      if ( a3 != 16 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        103,
        0,
        &v99);
      v8 = a2 + 2;
      v9 = 1;
      v10 = 185;
      goto LABEL_6;
    case 0xE4u:
      v66 = a3 == 16;
      goto LABEL_352;
    case 0xE5u:
      if ( a3 != 16 )
        goto LABEL_11;
      v68 = 103;
      goto LABEL_363;
    case 0xE6u:
      v66 = a3 == 220;
LABEL_352:
      if ( !v66 )
        goto LABEL_11;
      v8 = a2 + 1;
      v9 = 0;
      v10 = 103;
      goto LABEL_6;
    case 0xE7u:
      if ( a3 >= 0xC )
        goto LABEL_366;
      goto LABEL_11;
    case 0xE8u:
      if ( a3 != 32 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        104,
        0,
        &v99);
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 2,
        44,
        1,
        &v99);
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 3,
        44,
        1,
        &v99);
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 4,
        44,
        1,
        &v99);
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 5,
        44,
        1,
        &v99);
      v8 = a2 + 6;
LABEL_305:
      v9 = 1;
LABEL_152:
      v10 = 44;
      goto LABEL_6;
    case 0xE9u:
      v69 = a3 == 148;
      goto LABEL_370;
    case 0xEAu:
      v69 = a3 == 32;
LABEL_370:
      if ( !v69 )
        goto LABEL_11;
LABEL_366:
      v8 = a2 + 1;
      v9 = 0;
LABEL_289:
      v10 = 104;
      goto LABEL_6;
    case 0xEBu:
      v70 = a3 == 60;
      goto LABEL_374;
    case 0xECu:
      v70 = a3 == 16;
      goto LABEL_374;
    case 0xEDu:
    case 0xEEu:
      if ( a3 != 16 )
        goto LABEL_11;
      v43 = 106;
      goto LABEL_185;
    case 0xEFu:
      if ( a3 != 36 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 107;
      v9 = 0;
      goto LABEL_6;
    case 0xF0u:
    case 0xF5u:
      v71 = a3 == 20;
      goto LABEL_382;
    case 0xF1u:
      v71 = a3 == 44;
      goto LABEL_382;
    case 0xF2u:
    case 0xF3u:
    case 0xF4u:
      v71 = a3 == 24;
LABEL_382:
      if ( !v71 )
        goto LABEL_11;
      v8 = a2 + 1;
      v9 = 0;
      v10 = 111;
      goto LABEL_6;
    case 0xF6u:
      v72 = a3 == 20;
      goto LABEL_387;
    case 0xF7u:
      v72 = a3 == 16;
LABEL_387:
      if ( !v72 )
        goto LABEL_11;
      v8 = a2 + 1;
      v9 = 0;
      v10 = 112;
      goto LABEL_6;
    case 0xF8u:
      if ( a3 != 16 )
        goto LABEL_11;
      v43 = 112;
      goto LABEL_185;
    case 0xF9u:
      if ( a3 != 16 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 113;
      v9 = 0;
      goto LABEL_6;
    case 0xFBu:
      v23 = a3 == 128;
      goto LABEL_65;
    case 0xFCu:
      v23 = a3 == 44;
      goto LABEL_65;
    case 0xFEu:
      v23 = a3 == 60;
      goto LABEL_65;
    case 0x102u:
      v23 = a3 == 32;
      goto LABEL_65;
    case 0x103u:
      v23 = a3 == 36;
      goto LABEL_65;
    case 0x106u:
      v23 = a3 == 156;
      goto LABEL_65;
    case 0x10Eu:
      v23 = a3 == 24;
LABEL_65:
      if ( !v23 )
        goto LABEL_11;
      return v3;
    case 0x10Fu:
      if ( a3 != 24 )
        goto LABEL_11;
      v13 = 114;
      goto LABEL_21;
    case 0x110u:
      if ( a3 != 20 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 115;
      v9 = 0;
      goto LABEL_6;
    case 0x111u:
      if ( a3 != 28 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 116;
      v9 = 0;
      goto LABEL_6;
    case 0x112u:
    case 0x114u:
    case 0x118u:
      if ( a3 >= 0x10 )
        goto LABEL_408;
      goto LABEL_11;
    case 0x113u:
      if ( a3 != 24 )
        goto LABEL_11;
      v13 = 117;
      goto LABEL_21;
    case 0x115u:
    case 0x116u:
      v73 = a3 == 12;
      goto LABEL_412;
    case 0x117u:
      v73 = a3 == 28;
LABEL_412:
      if ( !v73 )
        goto LABEL_11;
LABEL_408:
      v8 = a2 + 1;
      v9 = 0;
      v10 = 117;
      goto LABEL_6;
    case 0x119u:
    case 0x11Bu:
      if ( a3 != 16 )
        goto LABEL_11;
      v31 = 119;
      goto LABEL_119;
    case 0x11Au:
      if ( a3 != 16 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        119,
        0,
        &v99);
      v8 = a2 + 2;
      v9 = 1;
LABEL_84:
      v10 = 22;
      goto LABEL_6;
    case 0x11Cu:
      if ( a3 != 16 )
        goto LABEL_11;
      v43 = 119;
      goto LABEL_185;
    case 0x11Du:
      if ( a3 != 16 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 120;
      v9 = 0;
      goto LABEL_6;
    case 0x11Eu:
      if ( a3 != 16 )
        goto LABEL_11;
      v43 = 120;
      goto LABEL_185;
    case 0x11Fu:
      if ( a3 != 16 )
        goto LABEL_11;
      v31 = 120;
      goto LABEL_119;
    case 0x120u:
    case 0x121u:
      if ( a3 >= 0x10 )
        goto LABEL_428;
      goto LABEL_11;
    case 0x122u:
    case 0x123u:
      v74 = a3 == 12;
      goto LABEL_430;
    case 0x124u:
    case 0x126u:
    case 0x127u:
    case 0x128u:
    case 0x129u:
    case 0x12Au:
      v74 = a3 == 16;
LABEL_430:
      if ( !v74 )
        goto LABEL_11;
LABEL_428:
      v8 = a2 + 1;
      v9 = 0;
      v10 = 121;
      goto LABEL_6;
    case 0x125u:
      if ( a3 != 16 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        121,
        0,
        &v99);
      v8 = a2 + 2;
      v9 = 1;
LABEL_124:
      v10 = 36;
      goto LABEL_6;
    case 0x12Bu:
      if ( a3 != 16 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 122;
      v9 = 0;
      goto LABEL_6;
    case 0x12Cu:
      if ( a3 >= 0x1C )
        goto LABEL_438;
      goto LABEL_11;
    case 0x12Du:
      if ( a3 != 16 )
        goto LABEL_11;
LABEL_438:
      v8 = a2 + 1;
      v9 = 0;
LABEL_192:
      v10 = 123;
      goto LABEL_6;
    case 0x12Eu:
      if ( a3 != 16 )
        goto LABEL_11;
      v75 = 124;
      goto LABEL_443;
    case 0x12Fu:
      if ( a3 != 16 )
        goto LABEL_11;
      v76 = 124;
      goto LABEL_447;
    case 0x130u:
    case 0x131u:
    case 0x132u:
      if ( a3 != 20 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 125;
      v9 = 0;
      goto LABEL_6;
    case 0x133u:
    case 0x134u:
    case 0x137u:
    case 0x139u:
      v77 = a3 == 16;
      goto LABEL_452;
    case 0x135u:
    case 0x138u:
      v77 = a3 == 20;
      goto LABEL_452;
    case 0x136u:
      v77 = a3 == 48;
LABEL_452:
      if ( !v77 )
        goto LABEL_11;
      v8 = a2 + 1;
      v9 = 0;
      v10 = 126;
      goto LABEL_6;
    case 0x13Au:
      if ( a3 != 28 )
        goto LABEL_11;
      v8 = a2 + 1;
      v9 = 0;
      goto LABEL_458;
    case 0x13Bu:
      if ( a3 != 16 )
        goto LABEL_11;
      v31 = 128;
      goto LABEL_119;
    case 0x13Cu:
    case 0x140u:
    case 0x141u:
      v78 = a3 == 20;
      goto LABEL_462;
    case 0x13Du:
      v78 = a3 == 12;
      goto LABEL_462;
    case 0x13Eu:
    case 0x142u:
      v78 = a3 == 16;
      goto LABEL_462;
    case 0x13Fu:
      v78 = a3 == 28;
LABEL_462:
      if ( !v78 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 130;
      v9 = 0;
      goto LABEL_6;
    case 0x143u:
      v79 = a3 == 20;
      goto LABEL_468;
    case 0x144u:
      if ( a3 != 16 )
        goto LABEL_11;
      v41 = 131;
LABEL_174:
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        v41,
        0,
        &v99);
      v8 = a2 + 2;
      v9 = 1;
      goto LABEL_175;
    case 0x145u:
      v79 = a3 == 36;
LABEL_468:
      if ( !v79 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 131;
      v9 = 0;
      goto LABEL_6;
    case 0x146u:
      if ( a3 < 0x10 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 132;
      v9 = 0;
      goto LABEL_6;
    case 0x147u:
      if ( a3 != 16 )
        goto LABEL_11;
      v31 = 133;
      goto LABEL_119;
    case 0x148u:
      if ( a3 != 12 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 133;
      v9 = 0;
      goto LABEL_6;
    case 0x149u:
      v25 = a3 == 20;
      goto LABEL_73;
    case 0x14Au:
    case 0x14Bu:
      v25 = a3 == 28;
LABEL_73:
      if ( !v25 )
        goto LABEL_11;
      v8 = a2 + 1;
      v9 = 0;
      goto LABEL_29;
    case 0x14Cu:
      if ( a3 != 20 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        134,
        0,
        &v99);
      v8 = a2 + 3;
      goto LABEL_28;
    case 0x14Du:
      if ( a3 != 16 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 138;
      v9 = 0;
      goto LABEL_6;
    case 0x14Eu:
      if ( a3 != 16 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        145,
        0,
        &v99);
      v8 = a2 + 2;
      v9 = 1;
      v10 = 142;
      goto LABEL_6;
    case 0x14Fu:
      if ( a3 != 16 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        145,
        0,
        &v99);
      v8 = a2 + 2;
      v9 = 1;
      goto LABEL_489;
    case 0x150u:
      if ( a3 < 0x14 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 145;
      v9 = 0;
      goto LABEL_6;
    case 0x151u:
    case 0x153u:
    case 0x154u:
      if ( a3 != 16 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 152;
      v9 = 0;
      goto LABEL_6;
    case 0x152u:
      if ( a3 != 32 )
        goto LABEL_11;
      v14 = 152;
      goto LABEL_27;
    case 0x155u:
      if ( a3 < 0x14 )
        goto LABEL_11;
      v35 = 155;
LABEL_160:
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        v35,
        0,
        &v99);
      v36 = a2[3];
      if ( v36 > v4 - 20 )
        goto LABEL_11;
      v37 = 179LL;
      goto LABEL_162;
    case 0x156u:
      if ( a3 != 16 )
        goto LABEL_11;
      v76 = 155;
LABEL_447:
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        v76,
        0,
        &v99);
      v8 = a2 + 2;
      v9 = 1;
      goto LABEL_448;
    case 0x157u:
      if ( a3 >= 0x14 )
        goto LABEL_501;
      goto LABEL_11;
    case 0x158u:
      if ( a3 != 24 )
        goto LABEL_11;
      v13 = 158;
LABEL_21:
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        v13,
        0,
        &v99);
      v8 = a2 + 2;
LABEL_22:
      v9 = 1;
      goto LABEL_23;
    case 0x159u:
      if ( a3 != 20 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 159;
      v9 = 0;
      goto LABEL_6;
    case 0x15Au:
      if ( a3 != 76 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 161;
      v9 = 0;
      goto LABEL_6;
    case 0x15Bu:
      if ( a3 != 28 )
        goto LABEL_11;
      v31 = 161;
      goto LABEL_119;
    case 0x15Cu:
    case 0x15Fu:
      if ( a3 != 16 )
        goto LABEL_11;
      v43 = 163;
      goto LABEL_185;
    case 0x15Du:
      if ( a3 != 16 )
        goto LABEL_11;
      v75 = 163;
      goto LABEL_443;
    case 0x15Eu:
    case 0x161u:
    case 0x162u:
    case 0x164u:
      v80 = a3 == 16;
      goto LABEL_515;
    case 0x160u:
      if ( a3 >= 0x14 )
        goto LABEL_516;
      goto LABEL_11;
    case 0x163u:
      v80 = a3 == 28;
LABEL_515:
      if ( !v80 )
        goto LABEL_11;
LABEL_516:
      v8 = a2 + 1;
      v10 = 163;
      v9 = 0;
      goto LABEL_6;
    case 0x165u:
      if ( a3 != 16 )
        goto LABEL_11;
      v43 = 164;
      goto LABEL_185;
    case 0x166u:
      if ( a3 != 16 )
        goto LABEL_11;
      v64 = 164;
LABEL_335:
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        v64,
        0,
        &v99);
      v8 = a2 + 2;
      v9 = 1;
LABEL_181:
      v10 = 54;
      goto LABEL_6;
    case 0x167u:
    case 0x168u:
    case 0x169u:
    case 0x16Au:
    case 0x16Bu:
    case 0x16Eu:
      if ( a3 != 16 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 167;
      v9 = 0;
      goto LABEL_6;
    case 0x16Cu:
      if ( a3 != 52 )
        goto LABEL_11;
      v14 = 167;
      goto LABEL_27;
    case 0x16Du:
      if ( a3 != 16 )
        goto LABEL_11;
      v47 = 167;
      goto LABEL_222;
    case 0x16Fu:
      if ( a3 >= 0x14 )
        goto LABEL_531;
      goto LABEL_11;
    case 0x170u:
      if ( a3 != 16 )
        goto LABEL_11;
      v47 = 179;
LABEL_222:
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        v47,
        0,
        &v99);
      v8 = a2 + 2;
      v9 = 1;
LABEL_99:
      v10 = 29;
      goto LABEL_6;
    case 0x171u:
    case 0x174u:
    case 0x175u:
      v81 = a3 == 16;
      goto LABEL_535;
    case 0x172u:
    case 0x173u:
      v81 = a3 == 20;
LABEL_535:
      if ( !v81 )
        goto LABEL_11;
      v8 = a2 + 1;
      v9 = 0;
LABEL_448:
      v10 = 180;
      goto LABEL_6;
    case 0x176u:
      v82 = a3 == 60;
      goto LABEL_539;
    case 0x177u:
      v82 = a3 == 28;
LABEL_539:
      if ( !v82 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 181;
      v9 = 0;
      goto LABEL_6;
    case 0x178u:
    case 0x179u:
    case 0x188u:
    case 0x194u:
      if ( a3 >= 0x10 )
        goto LABEL_543;
      goto LABEL_11;
    case 0x17Au:
    case 0x17Eu:
      v83 = a3 == 12;
      goto LABEL_545;
    case 0x17Bu:
    case 0x17Du:
    case 0x180u:
    case 0x189u:
    case 0x18Du:
    case 0x18Eu:
    case 0x18Fu:
    case 0x190u:
    case 0x199u:
      v83 = a3 == 16;
      goto LABEL_545;
    case 0x17Cu:
      if ( a3 != 24 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        182,
        0,
        &v99);
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 2,
        182,
        1,
        &v99);
      v8 = a2 + 3;
      goto LABEL_52;
    case 0x17Fu:
      if ( a3 != 16 )
        goto LABEL_11;
      v31 = 182;
      goto LABEL_119;
    case 0x181u:
      if ( a3 != 16 )
        goto LABEL_11;
      v14 = 182;
LABEL_27:
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        v14,
        0,
        &v99);
      v8 = a2 + 2;
LABEL_28:
      v9 = 1;
LABEL_29:
      v10 = 134;
      goto LABEL_6;
    case 0x182u:
    case 0x186u:
    case 0x196u:
    case 0x19Bu:
      v83 = a3 == 28;
      goto LABEL_545;
    case 0x183u:
      if ( a3 != 16 )
        goto LABEL_11;
      v75 = 182;
      goto LABEL_443;
    case 0x184u:
      if ( a3 != 16 )
        goto LABEL_11;
      v67 = 182;
LABEL_357:
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        v67,
        0,
        &v99);
      v8 = a2 + 2;
      v9 = 1;
LABEL_93:
      v10 = 26;
      goto LABEL_6;
    case 0x185u:
      if ( a3 != 16 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        182,
        0,
        &v99);
      v8 = a2 + 2;
      v9 = 1;
      v10 = 46;
      goto LABEL_6;
    case 0x187u:
      if ( a3 != 16 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        182,
        0,
        &v99);
      v8 = a2 + 2;
      v9 = 1;
      v10 = 55;
      goto LABEL_6;
    case 0x18Au:
      v83 = a3 == 36;
      goto LABEL_545;
    case 0x18Bu:
      if ( a3 != 16 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        182,
        0,
        &v99);
      v8 = a2 + 2;
      v9 = 1;
LABEL_282:
      v10 = 88;
      goto LABEL_6;
    case 0x18Cu:
    case 0x191u:
      v83 = a3 == 24;
      goto LABEL_545;
    case 0x192u:
    case 0x195u:
      v83 = a3 == 20;
      goto LABEL_545;
    case 0x193u:
      v83 = a3 == 52;
LABEL_545:
      if ( !v83 )
        goto LABEL_11;
LABEL_543:
      v8 = a2 + 1;
      v9 = 0;
      goto LABEL_53;
    case 0x197u:
      if ( a3 != 16 )
        goto LABEL_11;
      v84 = 182;
      goto LABEL_571;
    case 0x198u:
      if ( a3 != 20 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        182,
        0,
        &v99);
      v8 = a2 + 2;
      v9 = 1;
      v10 = 186;
      goto LABEL_6;
    case 0x19Au:
      if ( a3 != 16 )
        goto LABEL_11;
      v43 = 182;
      goto LABEL_185;
    case 0x19Cu:
      v85 = a3 == 12;
      goto LABEL_577;
    case 0x19Du:
    case 0x19Eu:
    case 0x19Fu:
      v85 = a3 == 20;
      goto LABEL_577;
    case 0x1A0u:
      if ( a3 != 16 )
        goto LABEL_11;
      v31 = 188;
      goto LABEL_119;
    case 0x1A1u:
      v85 = a3 == 16;
LABEL_577:
      if ( !v85 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 188;
      v9 = 0;
      goto LABEL_6;
    case 0x1A2u:
      if ( a3 != 24 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        191,
        0,
        &v99);
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 2,
        41,
        1,
        &v99);
      v8 = a2 + 3;
      goto LABEL_251;
    case 0x1B6u:
      if ( a3 != 48 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 1;
      v9 = 0;
      goto LABEL_6;
    case 0x1B7u:
      if ( a3 != 32 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 6;
      v9 = 0;
      goto LABEL_6;
    case 0x1B8u:
      if ( a3 != 16 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 14;
      v9 = 0;
      goto LABEL_6;
    case 0x1B9u:
      if ( a3 != 28 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 16;
      v9 = 0;
      goto LABEL_6;
    case 0x1BAu:
      if ( a3 != 100 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 24;
      v9 = 0;
      goto LABEL_6;
    case 0x1BBu:
      if ( a3 != 24 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        27,
        0,
        &v99);
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 3,
        66,
        1,
        &v99);
      v8 = a2 + 4;
      goto LABEL_444;
    case 0x1BCu:
      if ( a3 != 16 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 31;
      v9 = 0;
      goto LABEL_6;
    case 0x1BEu:
      if ( a3 != 28 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 62;
      v9 = 0;
      goto LABEL_6;
    case 0x1BFu:
      if ( a3 != 24 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 63;
      v9 = 0;
      goto LABEL_6;
    case 0x1C0u:
      if ( a3 < 0x14 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        69,
        0,
        &v99);
      v36 = a2[2];
      if ( v36 > v4 - 20 )
        goto LABEL_11;
      v37 = 66LL;
LABEL_162:
      v38 = (unsigned int)v36 >> 2;
      v39 = (char *)(a2 + 4);
      goto LABEL_163;
    case 0x1C1u:
      if ( a3 != 16 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 82;
      v9 = 0;
      goto LABEL_6;
    case 0x1C2u:
      if ( a3 != 60 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 100;
      v9 = 0;
      goto LABEL_6;
    case 0x1C3u:
      v70 = a3 == 12;
LABEL_374:
      if ( !v70 )
        goto LABEL_11;
      v8 = a2 + 1;
      v9 = 0;
      v10 = 105;
      goto LABEL_6;
    case 0x1C4u:
      if ( a3 != 36 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 108;
      v9 = 0;
      goto LABEL_6;
    case 0x1C5u:
      if ( a3 != 76 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 109;
      v9 = 0;
      goto LABEL_6;
    case 0x1C6u:
      if ( a3 != 16 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 137;
      v9 = 0;
      goto LABEL_6;
    case 0x1C7u:
      if ( a3 != 36 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 154;
      v9 = 0;
      goto LABEL_6;
    case 0x1C8u:
      if ( a3 != 28 )
        goto LABEL_11;
      v8 = a2 + 1;
      v9 = 0;
LABEL_23:
      v10 = 156;
      goto LABEL_6;
    case 0x1C9u:
      if ( a3 != 28 )
        goto LABEL_11;
LABEL_501:
      v8 = a2 + 1;
      v9 = 0;
      goto LABEL_217;
    case 0x1CAu:
      if ( a3 != 20 )
        goto LABEL_11;
LABEL_531:
      v8 = a2 + 1;
      v10 = 169;
      v9 = 0;
      goto LABEL_6;
    case 0x1CBu:
      if ( a3 != 52 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 178;
      v9 = 0;
      goto LABEL_6;
    case 0x1CCu:
      if ( a3 != 40 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        184,
        0,
        &v99);
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 2,
        182,
        1,
        &v99);
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 3,
        182,
        1,
        &v99);
      v8 = a2 + 4;
      goto LABEL_251;
    case 0x1CDu:
      if ( a3 != 16 )
        goto LABEL_11;
      v31 = 187;
      goto LABEL_119;
    case 0x1CEu:
    case 0x1CFu:
      if ( a3 < 0x10 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        3,
        0,
        &v99);
      if ( a2[2] != v4 - 16 )
        goto LABEL_11;
      v38 = (unsigned __int64)(v4 - 16) >> 2;
      v39 = (char *)(a2 + 3);
      v37 = 91LL;
      goto LABEL_163;
    case 0x1D0u:
    case 0x1D1u:
      if ( a3 != 16 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 3;
      v9 = 0;
      goto LABEL_6;
    case 0x1D2u:
      if ( a3 != 16 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 4;
      v9 = 0;
      goto LABEL_6;
    case 0x1D3u:
      if ( a3 != 16 )
        goto LABEL_11;
      v61 = 5;
LABEL_315:
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        v61,
        0,
        &v99);
      v8 = a2 + 2;
      v9 = 1;
LABEL_39:
      v10 = 11;
      goto LABEL_6;
    case 0x1D4u:
    case 0x1D5u:
      if ( a3 < 0x10 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        5,
        0,
        &v99);
      if ( a2[2] != v4 - 16 )
        goto LABEL_11;
      v38 = (unsigned __int64)(v4 - 16) >> 2;
      v39 = (char *)(a2 + 3);
      v37 = 11LL;
      goto LABEL_163;
    case 0x1D6u:
    case 0x1D7u:
      if ( a3 != 20 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 5;
      v9 = 0;
      goto LABEL_6;
    case 0x1D8u:
      if ( a3 != 16 )
        goto LABEL_11;
      v86 = 7;
      goto LABEL_647;
    case 0x1D9u:
    case 0x1DAu:
      if ( a3 < 0x10 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        7,
        0,
        &v99);
      if ( a2[2] != v4 - 16 )
        goto LABEL_11;
      LOBYTE(v97) = 1;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandleArray(
        this,
        a2 + 3,
        (unsigned __int64)(v4 - 16) >> 2,
        8LL,
        v97,
        &v99);
      goto LABEL_7;
    case 0x1DBu:
    case 0x1DCu:
      if ( a3 == 16 )
        goto LABEL_652;
      goto LABEL_11;
    case 0x1DDu:
    case 0x1DEu:
    case 0x1DFu:
    case 0x1E0u:
      if ( a3 < 0x10 )
        goto LABEL_11;
LABEL_652:
      v8 = a2 + 1;
      v9 = 0;
      v10 = 8;
      goto LABEL_6;
    case 0x1E1u:
    case 0x1E7u:
      if ( a3 != 16 )
        goto LABEL_11;
      v31 = 19;
      goto LABEL_119;
    case 0x1E2u:
    case 0x1E5u:
    case 0x1E6u:
    case 0x1EBu:
      v87 = a3 == 16;
      goto LABEL_658;
    case 0x1E3u:
    case 0x1EAu:
      v87 = a3 == 20;
LABEL_658:
      if ( v87 )
        goto LABEL_659;
      goto LABEL_11;
    case 0x1E4u:
      if ( a3 != 16 )
        goto LABEL_11;
      v84 = 19;
      goto LABEL_571;
    case 0x1E8u:
    case 0x1E9u:
      if ( a3 < 0x10 )
        goto LABEL_11;
LABEL_659:
      v8 = a2 + 1;
      v9 = 0;
LABEL_62:
      v10 = 19;
      goto LABEL_6;
    case 0x1ECu:
    case 0x1EDu:
      if ( a3 < 0x10 )
        goto LABEL_11;
      v8 = a2 + 1;
      v9 = 0;
      v10 = 34;
      goto LABEL_6;
    case 0x1EEu:
      if ( a3 != 16 )
        goto LABEL_11;
      v52 = 34;
      goto LABEL_250;
    case 0x1EFu:
    case 0x1F0u:
      if ( a3 != 20 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 35;
      v9 = 0;
      goto LABEL_6;
    case 0x1F1u:
    case 0x1F2u:
    case 0x1F3u:
      if ( a3 != 16 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 42;
      v9 = 0;
      goto LABEL_6;
    case 0x1F4u:
    case 0x1F5u:
      v88 = a3 == 20;
      goto LABEL_674;
    case 0x1F6u:
    case 0x1F7u:
      v88 = a3 == 16;
LABEL_674:
      if ( !v88 )
        goto LABEL_11;
      v8 = a2 + 1;
      v9 = 0;
      v10 = 49;
      goto LABEL_6;
    case 0x1F8u:
      v89 = a3 == 28;
      goto LABEL_678;
    case 0x1F9u:
      v89 = a3 == 20;
LABEL_678:
      if ( !v89 )
        goto LABEL_11;
      v8 = a2 + 1;
      v9 = 0;
      v10 = 52;
      goto LABEL_6;
    case 0x1FAu:
      if ( a3 != 20 )
        goto LABEL_11;
      v8 = a2 + 1;
      v9 = 0;
LABEL_175:
      v10 = 53;
      goto LABEL_6;
    case 0x1FBu:
      if ( a3 != 16 )
        goto LABEL_11;
      v31 = 53;
      goto LABEL_119;
    case 0x1FCu:
    case 0x1FDu:
      if ( a3 != 16 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 57;
      v9 = 0;
      goto LABEL_6;
    case 0x1FEu:
      if ( a3 != 16 )
        goto LABEL_11;
      v84 = 57;
LABEL_571:
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        v84,
        0,
        &v99);
      v8 = a2 + 2;
      v9 = 1;
      v10 = 173;
      goto LABEL_6;
    case 0x1FFu:
    case 0x200u:
      if ( a3 >= 0x10 )
        goto LABEL_690;
      goto LABEL_11;
    case 0x201u:
    case 0x202u:
      v90 = a3 == 16;
      goto LABEL_693;
    case 0x203u:
      v90 = a3 == 20;
      goto LABEL_693;
    case 0x204u:
      v90 = a3 == 28;
LABEL_693:
      if ( !v90 )
        goto LABEL_11;
LABEL_690:
      v8 = a2 + 1;
      v9 = 0;
      goto LABEL_691;
    case 0x205u:
    case 0x206u:
      if ( a3 < 0x10 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        68,
        0,
        &v99);
      if ( a2[2] != v4 - 16 )
        goto LABEL_11;
      LOBYTE(v98) = 1;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandleArray(
        this,
        a2 + 3,
        (unsigned __int64)(v4 - 16) >> 2,
        67LL,
        v98,
        &v99);
      goto LABEL_7;
    case 0x20Bu:
    case 0x20Cu:
    case 0x20Du:
      if ( a3 == 16 )
        goto LABEL_701;
      goto LABEL_11;
    case 0x20Eu:
    case 0x20Fu:
      if ( a3 < 0x10 )
        goto LABEL_11;
LABEL_701:
      v8 = a2 + 1;
      v9 = 0;
      v10 = 73;
      goto LABEL_6;
    case 0x210u:
    case 0x211u:
    case 0x216u:
    case 0x217u:
    case 0x218u:
    case 0x219u:
    case 0x21Au:
    case 0x21Bu:
    case 0x21Cu:
      v91 = a3 == 16;
      goto LABEL_705;
    case 0x212u:
    case 0x214u:
      v91 = a3 == 28;
LABEL_705:
      if ( !v91 )
        goto LABEL_11;
      v8 = a2 + 1;
      v9 = 0;
      v10 = 83;
      goto LABEL_6;
    case 0x213u:
    case 0x215u:
      if ( a3 != 16 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        83,
        0,
        &v99);
      v8 = a2 + 2;
      v9 = 1;
LABEL_458:
      v10 = 127;
      goto LABEL_6;
    case 0x21Du:
      if ( a3 != 16 )
        goto LABEL_11;
      v86 = 83;
LABEL_647:
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        v86,
        0,
        &v99);
      v8 = a2 + 2;
      v9 = 1;
      v10 = 84;
      goto LABEL_6;
    case 0x21Eu:
      if ( a3 != 16 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 94;
      v9 = 0;
      goto LABEL_6;
    case 0x21Fu:
      if ( a3 != 16 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        94,
        0,
        &v99);
      v8 = a2 + 2;
      v9 = 1;
LABEL_207:
      v10 = 61;
      goto LABEL_6;
    case 0x220u:
    case 0x221u:
      if ( a3 != 16 )
        goto LABEL_11;
      v68 = 94;
LABEL_363:
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        v68,
        0,
        &v99);
      v8 = a2 + 2;
      v9 = 1;
      v10 = 172;
      goto LABEL_6;
    case 0x222u:
    case 0x223u:
      if ( a3 != 20 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 99;
      v9 = 0;
      goto LABEL_6;
    case 0x224u:
      if ( a3 == 16 )
        goto LABEL_721;
      goto LABEL_11;
    case 0x225u:
    case 0x226u:
    case 0x227u:
    case 0x228u:
    case 0x229u:
    case 0x22Au:
      if ( a3 < 0x10 )
        goto LABEL_11;
LABEL_721:
      v8 = a2 + 1;
      v9 = 0;
      v10 = 110;
      goto LABEL_6;
    case 0x22Bu:
    case 0x22Cu:
      if ( a3 < 0x10 )
        goto LABEL_11;
      v8 = a2 + 1;
      v9 = 0;
      goto LABEL_726;
    case 0x22Du:
    case 0x22Eu:
    case 0x22Fu:
      if ( a3 != 16 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 135;
      v9 = 0;
      goto LABEL_6;
    case 0x230u:
    case 0x231u:
    case 0x232u:
    case 0x233u:
    case 0x234u:
    case 0x235u:
    case 0x236u:
      if ( a3 != 16 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 136;
      v9 = 0;
      goto LABEL_6;
    case 0x237u:
    case 0x238u:
    case 0x239u:
    case 0x23Au:
      if ( a3 != 16 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 139;
      v9 = 0;
      goto LABEL_6;
    case 0x23Bu:
    case 0x23Cu:
    case 0x23Du:
    case 0x23Eu:
    case 0x23Fu:
    case 0x240u:
      if ( a3 != 16 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 140;
      v9 = 0;
      goto LABEL_6;
    case 0x241u:
    case 0x249u:
    case 0x24Au:
    case 0x24Bu:
    case 0x24Cu:
    case 0x24Du:
    case 0x24Eu:
    case 0x24Fu:
      if ( a3 != 16 )
        goto LABEL_11;
      v8 = a2 + 1;
      v9 = 0;
LABEL_489:
      v10 = 144;
      goto LABEL_6;
    case 0x242u:
    case 0x243u:
    case 0x244u:
    case 0x245u:
    case 0x246u:
    case 0x247u:
    case 0x248u:
      if ( a3 != 16 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        144,
        0,
        &v99);
      v8 = a2 + 2;
      v9 = 1;
      v10 = 158;
      goto LABEL_6;
    case 0x250u:
    case 0x253u:
      if ( a3 != 16 )
        goto LABEL_11;
      v92 = 146;
      goto LABEL_741;
    case 0x251u:
      v93 = a3 == 28;
      goto LABEL_743;
    case 0x252u:
    case 0x254u:
      v93 = a3 == 16;
LABEL_743:
      if ( !v93 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 146;
      v9 = 0;
      goto LABEL_6;
    case 0x255u:
      if ( a3 != 16 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        147,
        0,
        &v99);
      v8 = a2 + 2;
      v9 = 1;
LABEL_105:
      v10 = 30;
      goto LABEL_6;
    case 0x256u:
    case 0x257u:
      if ( a3 < 0x10 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        148,
        0,
        &v99);
      if ( a2[2] != v4 - 16 )
        goto LABEL_11;
      v38 = (unsigned __int64)(v4 - 16) >> 2;
      v39 = (char *)(a2 + 3);
      v37 = 148LL;
      goto LABEL_163;
    case 0x258u:
    case 0x259u:
      if ( a3 < 0x10 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        148,
        0,
        &v99);
      if ( a2[2] != v4 - 16 )
        goto LABEL_11;
      v38 = (unsigned __int64)(v4 - 16) >> 2;
      v39 = (char *)(a2 + 3);
      v37 = 141LL;
      goto LABEL_163;
    case 0x25Au:
      if ( a3 != 16 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        148,
        0,
        &v99);
      v8 = a2 + 2;
      v9 = 1;
      v10 = 147;
      goto LABEL_6;
    case 0x25Bu:
    case 0x25Cu:
    case 0x25Fu:
    case 0x261u:
    case 0x263u:
      v94 = a3 == 16;
      goto LABEL_757;
    case 0x25Du:
    case 0x260u:
    case 0x262u:
      if ( a3 != 16 )
        goto LABEL_11;
      v92 = 150;
LABEL_741:
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        v92,
        0,
        &v99);
      v8 = a2 + 2;
      v9 = 1;
      v10 = 143;
      goto LABEL_6;
    case 0x25Eu:
      v94 = a3 == 24;
LABEL_757:
      if ( !v94 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 150;
      v9 = 0;
      goto LABEL_6;
    case 0x264u:
      if ( a3 != 16 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        153,
        0,
        &v99);
      v8 = a2 + 2;
      v9 = 1;
      v10 = 148;
      goto LABEL_6;
    case 0x265u:
    case 0x266u:
    case 0x267u:
    case 0x268u:
      if ( a3 != 16 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 160;
      v9 = 0;
      goto LABEL_6;
    case 0x269u:
      if ( a3 != 28 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 162;
      v9 = 0;
      goto LABEL_6;
    case 0x26Au:
      if ( a3 != 16 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        165,
        0,
        &v99);
      v8 = a2 + 2;
      v9 = 1;
      v10 = 166;
      goto LABEL_6;
    case 0x26Bu:
      if ( a3 != 16 )
        goto LABEL_11;
      v52 = 168;
LABEL_250:
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        v52,
        0,
        &v99);
      v8 = a2 + 2;
LABEL_251:
      v9 = 1;
LABEL_149:
      v10 = 41;
      goto LABEL_6;
    case 0x26Cu:
    case 0x270u:
      if ( a3 != 16 )
        goto LABEL_11;
      v46 = 168;
LABEL_216:
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        v46,
        0,
        &v99);
      v8 = a2 + 2;
      v9 = 1;
LABEL_217:
      v10 = 157;
      goto LABEL_6;
    case 0x26Du:
    case 0x26Eu:
    case 0x26Fu:
    case 0x271u:
    case 0x272u:
    case 0x273u:
    case 0x274u:
    case 0x275u:
    case 0x276u:
      if ( a3 != 16 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 168;
      v9 = 0;
      goto LABEL_6;
    case 0x277u:
      if ( a3 != 16 )
        goto LABEL_11;
      v43 = 170;
LABEL_185:
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        v43,
        0,
        &v99);
      v8 = a2 + 2;
LABEL_186:
      v9 = 1;
      v10 = 17;
      goto LABEL_6;
    case 0x278u:
    case 0x279u:
      if ( a3 != 20 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 170;
      v9 = 0;
      goto LABEL_6;
    case 0x27Au:
    case 0x27Bu:
      if ( a3 < 0x10 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        171,
        0,
        &v99);
      if ( a2[2] != v4 - 16 )
        goto LABEL_11;
      v38 = (unsigned __int64)(v4 - 16) >> 2;
      v39 = (char *)(a2 + 3);
      v37 = 35LL;
      goto LABEL_163;
    case 0x27Cu:
    case 0x27Du:
    case 0x27Eu:
    case 0x27Fu:
      if ( a3 < 0x10 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        171,
        0,
        &v99);
      if ( a2[2] != v4 - 16 )
        goto LABEL_11;
      v38 = (unsigned __int64)(v4 - 16) >> 2;
      v39 = (char *)(a2 + 3);
      v37 = 42LL;
      goto LABEL_163;
    case 0x280u:
    case 0x281u:
      if ( a3 < 0x10 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        174,
        0,
        &v99);
      if ( a2[2] != v4 - 16 )
        goto LABEL_11;
      v38 = (unsigned __int64)(v4 - 16) >> 2;
      v39 = (char *)(a2 + 3);
      v37 = 173LL;
      goto LABEL_163;
    case 0x282u:
    case 0x283u:
      if ( a3 < 0x10 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        175,
        0,
        &v99);
      if ( a2[2] != v4 - 16 )
        goto LABEL_11;
      v38 = (unsigned __int64)(v4 - 16) >> 2;
      v39 = (char *)(a2 + 3);
      v37 = 172LL;
      goto LABEL_163;
    case 0x284u:
    case 0x285u:
      if ( a3 != 16 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 176;
      v9 = 0;
      goto LABEL_6;
    case 0x286u:
    case 0x287u:
    case 0x288u:
      if ( a3 != 16 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 177;
      v9 = 0;
      goto LABEL_6;
    case 0x289u:
      if ( a3 != 16 )
        goto LABEL_11;
      v31 = 183;
LABEL_119:
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        v31,
        0,
        &v99);
      v8 = a2 + 2;
LABEL_52:
      v9 = 1;
LABEL_53:
      v10 = 182;
      goto LABEL_6;
    case 0x28Au:
    case 0x28Bu:
      if ( a3 < 0x10 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        185,
        0,
        &v99);
      if ( a2[2] != v4 - 16 )
        goto LABEL_11;
      v38 = (unsigned __int64)(v4 - 16) >> 2;
      v39 = (char *)(a2 + 3);
      v37 = 182LL;
LABEL_163:
      LOBYTE(v96) = 0;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandleArray(
        this,
        v39,
        v38,
        v37,
        v96,
        &v99);
      goto LABEL_7;
    case 0x28Cu:
    case 0x28Du:
    case 0x28Eu:
    case 0x290u:
    case 0x297u:
    case 0x298u:
    case 0x299u:
      v95 = a3 == 28;
      goto LABEL_802;
    case 0x28Fu:
    case 0x291u:
    case 0x29Cu:
    case 0x29Du:
      v95 = a3 == 20;
      goto LABEL_802;
    case 0x292u:
      if ( a3 != 16 )
        goto LABEL_11;
      v75 = 190;
LABEL_443:
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        v75,
        0,
        &v99);
      v8 = a2 + 2;
LABEL_444:
      v9 = 1;
LABEL_225:
      v10 = 66;
      goto LABEL_6;
    case 0x293u:
    case 0x294u:
    case 0x295u:
    case 0x296u:
      v95 = a3 == 16;
LABEL_802:
      if ( !v95 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 190;
      v9 = 0;
      goto LABEL_6;
    case 0x29Au:
      if ( a3 != 16 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        190,
        0,
        &v99);
      v8 = a2 + 2;
      v9 = 1;
LABEL_691:
      v10 = 64;
      goto LABEL_6;
    case 0x29Bu:
      if ( a3 != 16 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        190,
        0,
        &v99);
      v8 = a2 + 2;
      v9 = 1;
LABEL_726:
      v10 = 129;
LABEL_6:
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        v8,
        v10,
        v9,
        &v99);
LABEL_7:
      v3 = v99;
      break;
    default:
LABEL_11:
      v3 = -1073741811;
      break;
  }
  return v3;
}
