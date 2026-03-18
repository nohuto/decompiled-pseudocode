/*
 * XREFs of ?ValidateAndTranslateCommandGenerated@CMilCommandBatchParser@CApplicationChannel@DirectComposition@@AEAAJPEAXI@Z @ 0x1401148FC
 * Callers:
 *     ?ValidateAndTranslateHandles@CMilCommandBatchParser@CApplicationChannel@DirectComposition@@QEAAJXZ @ 0x140114718 (-ValidateAndTranslateHandles@CMilCommandBatchParser@CApplicationChannel@DirectComposition@@QEAAJ.c)
 * Callees:
 *     ?TranslateMilCommandBatchHandle@CMilCommandBatchParser@CApplicationChannel@DirectComposition@@AEAAXPEAIW4MIL_RESOURCE_TYPE@@_NPEAJ@Z @ 0x1400AA368 (-TranslateMilCommandBatchHandle@CMilCommandBatchParser@CApplicationChannel@DirectComposition@@AE.c)
 *     ?TranslateMilCommandBatchHandleArray@CMilCommandBatchParser@CApplicationChannel@DirectComposition@@AEAAXPEAIIW4MIL_RESOURCE_TYPE@@_NPEAJ@Z @ 0x14014B5E8 (-TranslateMilCommandBatchHandleArray@CMilCommandBatchParser@CApplicationChannel@DirectCompositio.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::CMilCommandBatchParser::ValidateAndTranslateCommandGenerated(
        DirectComposition::CApplicationChannel **this,
        unsigned int *a2,
        unsigned int a3)
{
  __int64 v3; // rbx
  unsigned int *v6; // rdx
  char v7; // r9
  int v8; // r8d
  bool v9; // zf
  int v11; // r8d
  int v12; // r8d
  unsigned int *v13; // rdi
  char *v14; // rbx
  unsigned int *v15; // rax
  unsigned int *v16; // rdx
  bool v17; // zf
  unsigned int *v18; // rdi
  char *v19; // rbx
  unsigned int *v20; // rax
  unsigned int *v21; // rdx
  bool v22; // zf
  int v23; // r8d
  bool v24; // zf
  bool v25; // zf
  bool v26; // cf
  bool v27; // zf
  bool v28; // zf
  int v29; // r8d
  __int64 v30; // r9
  int v31; // r8d
  int v32; // r8d
  bool v33; // zf
  int v34; // r8d
  bool v35; // zf
  int v36; // r8d
  bool v37; // cf
  bool v38; // cf
  int v39; // r8d
  int v40; // r8d
  bool v41; // zf
  bool v42; // zf
  bool v43; // zf
  bool v44; // zf
  int v45; // r8d
  bool v46; // zf
  int v47; // r8d
  bool v48; // zf
  int v49; // r8d
  bool v50; // zf
  int v51; // r8d
  bool v52; // zf
  bool v53; // zf
  bool v54; // zf
  bool v55; // zf
  bool v56; // zf
  int v57; // r8d
  int v58; // r8d
  int v59; // r8d
  bool v60; // zf
  bool v61; // zf
  bool v62; // zf
  bool v63; // zf
  bool v64; // zf
  bool v65; // zf
  int v66; // r8d
  int v67; // r8d
  bool v68; // zf
  bool v69; // zf
  bool v70; // zf
  bool v71; // zf
  int v72; // r8d
  bool v73; // zf
  bool v74; // zf
  bool v75; // zf
  bool v76; // zf
  bool v77; // zf
  int v78; // r8d
  bool v79; // zf
  bool v80; // zf
  int v81; // r8d
  bool v82; // zf
  bool v83; // zf
  bool v84; // zf
  bool v85; // zf
  bool v86; // zf
  bool v87; // zf
  int v88; // [rsp+20h] [rbp-10h]
  unsigned int v89; // [rsp+58h] [rbp+28h] BYREF

  v3 = a3;
  v89 = 0;
  switch ( *a2 )
  {
    case 1u:
    case 2u:
      if ( a3 < 0xC )
        goto LABEL_8;
      goto LABEL_3;
    case 3u:
    case 6u:
      v9 = a3 == 12;
      goto LABEL_7;
    case 4u:
    case 8u:
      v9 = a3 == 16;
      goto LABEL_7;
    case 5u:
      if ( a3 != 60 )
        goto LABEL_8;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        3,
        0,
        &v89);
      v6 = a2 + 6;
      v7 = 1;
      goto LABEL_4;
    case 7u:
      if ( a3 != 16 )
        goto LABEL_8;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        3,
        0,
        &v89);
      v6 = a2 + 2;
      v7 = 1;
      goto LABEL_15;
    case 9u:
      if ( a3 != 24 )
        goto LABEL_8;
      v11 = 3;
      goto LABEL_18;
    case 0xAu:
    case 0xBu:
      v9 = a3 == 28;
LABEL_7:
      if ( !v9 )
        goto LABEL_8;
LABEL_3:
      v6 = a2 + 1;
      v7 = 0;
LABEL_4:
      v8 = 3;
      goto LABEL_5;
    case 0xCu:
    case 0xDu:
      if ( a3 != 20 )
        goto LABEL_8;
      v12 = 9;
      goto LABEL_24;
    case 0xEu:
      if ( a3 < 0xC )
        goto LABEL_8;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        10,
        0,
        &v89);
      v13 = a2 + 2;
      v14 = (char *)&v13[(unsigned int)((unsigned __int64)(v3 - 12) >> 2)];
      if ( v13 < (unsigned int *)v14 )
      {
        v15 = v13;
        do
        {
          v16 = v13;
          v13 = v15 + 1;
          DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
            this,
            v16,
            50,
            0,
            &v89);
          v15 = v13;
        }
        while ( v13 < (unsigned int *)v14 );
      }
      return v89;
    case 0xFu:
    case 0x12u:
    case 0x14u:
      v17 = a3 == 16;
      goto LABEL_33;
    case 0x10u:
      v17 = a3 == 12;
      goto LABEL_33;
    case 0x11u:
      if ( a3 < 0xC )
        goto LABEL_8;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        10,
        0,
        &v89);
      v18 = a2 + 2;
      v19 = (char *)&v18[(unsigned int)((unsigned __int64)(v3 - 12) >> 2)];
      if ( v18 < (unsigned int *)v19 )
      {
        v20 = v18;
        do
        {
          v21 = v18;
          v18 = v20 + 1;
          DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
            this,
            v21,
            50,
            0,
            &v89);
          v20 = v18;
        }
        while ( v18 < (unsigned int *)v19 );
      }
      return v89;
    case 0x13u:
      v17 = a3 == 44;
LABEL_33:
      if ( !v17 )
        goto LABEL_8;
      v6 = a2 + 1;
      v7 = 0;
      goto LABEL_35;
    case 0x15u:
      v22 = a3 == 12;
      goto LABEL_44;
    case 0x16u:
    case 0x1Au:
    case 0x1Fu:
      v22 = a3 == 20;
      goto LABEL_44;
    case 0x17u:
      if ( a3 >= 0x10 )
        goto LABEL_45;
      goto LABEL_8;
    case 0x18u:
      if ( a3 != 16 )
        goto LABEL_8;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        18,
        0,
        &v89);
      v6 = a2 + 2;
      v7 = 1;
      goto LABEL_51;
    case 0x19u:
    case 0x1Bu:
    case 0x1Cu:
    case 0x1Du:
    case 0x1Eu:
      v22 = a3 == 16;
LABEL_44:
      if ( !v22 )
        goto LABEL_8;
LABEL_45:
      v6 = a2 + 1;
      v7 = 0;
      v8 = 18;
      goto LABEL_5;
    case 0x20u:
      if ( a3 != 16 )
        goto LABEL_8;
      v23 = 18;
      goto LABEL_55;
    case 0x21u:
    case 0x2Bu:
    case 0x2Cu:
    case 0xB9u:
      v56 = a3 == 8;
      goto LABEL_290;
    case 0x22u:
    case 0xC7u:
    case 0xC8u:
      v56 = a3 == 16;
      goto LABEL_290;
    case 0x23u:
      v24 = a3 == 16;
      goto LABEL_57;
    case 0x24u:
      v24 = a3 == 12;
LABEL_57:
      if ( !v24 )
        goto LABEL_8;
      v6 = a2 + 1;
      goto LABEL_25;
    case 0x25u:
    case 0xC4u:
    case 0xC5u:
    case 0xC6u:
    case 0x104u:
      v25 = a3 == 16;
      goto LABEL_61;
    case 0x26u:
      v25 = a3 == 12;
      goto LABEL_61;
    case 0x27u:
    case 0xB4u:
    case 0xB7u:
    case 0xBEu:
    case 0xC2u:
      v56 = a3 == 12;
      goto LABEL_290;
    case 0x28u:
    case 0x2Au:
      v26 = a3 < 0xC;
      goto LABEL_278;
    case 0x29u:
    case 0xBBu:
    case 0xC9u:
      v56 = a3 == 28;
      goto LABEL_290;
    case 0x2Du:
      if ( a3 != 52 )
        goto LABEL_8;
      v6 = a2 + 10;
      goto LABEL_67;
    case 0x2Eu:
      if ( a3 != 24 )
        goto LABEL_8;
      v11 = 23;
      goto LABEL_18;
    case 0x2Fu:
    case 0x30u:
    case 0x31u:
    case 0x33u:
      v27 = a3 == 20;
      goto LABEL_72;
    case 0x32u:
      v27 = a3 == 16;
      goto LABEL_72;
    case 0x34u:
      v27 = a3 == 36;
LABEL_72:
      if ( !v27 )
        goto LABEL_8;
      v6 = a2 + 1;
      v7 = 0;
      goto LABEL_74;
    case 0x35u:
      v28 = a3 == 20;
      goto LABEL_78;
    case 0x36u:
    case 0x37u:
    case 0x3Au:
    case 0x3Bu:
      v28 = a3 == 24;
      goto LABEL_78;
    case 0x38u:
      v28 = a3 == 28;
      goto LABEL_78;
    case 0x39u:
      v28 = a3 == 16;
      goto LABEL_78;
    case 0x3Cu:
      v28 = a3 == 76;
LABEL_78:
      if ( !v28 )
        goto LABEL_8;
      v6 = a2 + 1;
      v7 = 0;
      goto LABEL_80;
    case 0x3Du:
      if ( a3 == 32 )
        goto LABEL_86;
      goto LABEL_8;
    case 0x3Eu:
      if ( a3 < 0x10 )
        goto LABEL_8;
LABEL_86:
      v6 = a2 + 1;
      v7 = 0;
      v8 = 29;
      goto LABEL_5;
    case 0x3Fu:
      if ( a3 != 28 )
        goto LABEL_8;
      v6 = a2 + 1;
      v7 = 0;
      goto LABEL_91;
    case 0x40u:
    case 0x42u:
      if ( a3 < 0xC )
        goto LABEL_8;
      v29 = 34;
      goto LABEL_94;
    case 0x41u:
    case 0x44u:
      if ( a3 < 0xC )
        goto LABEL_8;
      v31 = 34;
      goto LABEL_98;
    case 0x43u:
      if ( a3 != 16 )
        goto LABEL_8;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        34,
        0,
        &v89);
      v6 = a2 + 2;
      v7 = 1;
      goto LABEL_101;
    case 0x45u:
      if ( a3 != 16 )
        goto LABEL_8;
      v6 = a2 + 1;
      v7 = 0;
      goto LABEL_104;
    case 0x46u:
    case 0x47u:
      if ( a3 < 0xC )
        goto LABEL_8;
      v32 = 35;
      goto LABEL_107;
    case 0x48u:
    case 0x155u:
      if ( a3 != 28 )
        goto LABEL_8;
      v6 = a2 + 1;
      v7 = 0;
      goto LABEL_110;
    case 0x49u:
      if ( a3 != 28 )
        goto LABEL_8;
      v6 = a2 + 1;
      v8 = 40;
      v7 = 0;
      goto LABEL_5;
    case 0x4Au:
      v33 = a3 == 60;
      goto LABEL_114;
    case 0x4Bu:
      if ( a3 != 16 )
        goto LABEL_8;
      v34 = 41;
      goto LABEL_118;
    case 0x4Cu:
      v33 = a3 == 16;
      goto LABEL_114;
    case 0x4Du:
      v33 = a3 == 68;
LABEL_114:
      if ( !v33 )
        goto LABEL_8;
      v6 = a2 + 1;
      v7 = 0;
      v8 = 41;
      goto LABEL_5;
    case 0x4Eu:
    case 0x52u:
    case 0x53u:
      v35 = a3 == 16;
      goto LABEL_123;
    case 0x4Fu:
      v35 = a3 == 28;
      goto LABEL_123;
    case 0x50u:
      if ( a3 != 16 )
        goto LABEL_8;
      v36 = 45;
      goto LABEL_129;
    case 0x51u:
      v35 = a3 == 24;
LABEL_123:
      if ( !v35 )
        goto LABEL_8;
      v6 = a2 + 1;
      v7 = 0;
      goto LABEL_125;
    case 0x54u:
    case 0x55u:
      if ( a3 != 20 )
        goto LABEL_8;
      v6 = a2 + 1;
      v8 = 49;
      v7 = 0;
      goto LABEL_5;
    case 0x56u:
      if ( a3 != 24 )
        goto LABEL_8;
      v11 = 50;
      goto LABEL_18;
    case 0x57u:
      v37 = a3 < 0x10;
      goto LABEL_136;
    case 0x58u:
    case 0x59u:
      v37 = a3 < 0x14;
LABEL_136:
      if ( v37 )
        goto LABEL_8;
      v6 = a2 + 1;
      v7 = 0;
LABEL_101:
      v8 = 50;
      goto LABEL_5;
    case 0x5Au:
      v38 = a3 < 0xC;
      goto LABEL_140;
    case 0x5Bu:
      if ( a3 == 52 )
        goto LABEL_141;
      goto LABEL_8;
    case 0x5Cu:
      v38 = a3 < 0x1C;
LABEL_140:
      if ( v38 )
        goto LABEL_8;
LABEL_141:
      v6 = a2 + 1;
      v7 = 0;
      v8 = 55;
      goto LABEL_5;
    case 0x5Du:
      if ( a3 != 28 )
        goto LABEL_8;
      v39 = 55;
      goto LABEL_147;
    case 0x5Eu:
      if ( a3 != 24 )
        goto LABEL_8;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        55,
        0,
        &v89);
      v6 = a2 + 2;
      v7 = 1;
LABEL_110:
      v8 = 37;
      goto LABEL_5;
    case 0x5Fu:
      if ( a3 != 16 )
        goto LABEL_8;
      v40 = 56;
      goto LABEL_153;
    case 0x60u:
    case 0x61u:
    case 0x62u:
      if ( a3 != 16 )
        goto LABEL_8;
      v6 = a2 + 1;
      v7 = 0;
      goto LABEL_156;
    case 0x63u:
      if ( a3 != 36 )
        goto LABEL_8;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        62,
        0,
        &v89);
      v6 = a2 + 6;
      goto LABEL_67;
    case 0x64u:
      v41 = a3 == 12;
      goto LABEL_160;
    case 0x65u:
      v41 = a3 == 28;
LABEL_160:
      if ( !v41 )
        goto LABEL_8;
      v6 = a2 + 1;
      v7 = 0;
      v8 = 62;
      goto LABEL_5;
    case 0x66u:
      if ( a3 != 24 )
        goto LABEL_8;
      v11 = 63;
      goto LABEL_18;
    case 0x67u:
      v42 = a3 == 56;
      goto LABEL_166;
    case 0x68u:
      v42 = a3 == 16;
      goto LABEL_166;
    case 0x69u:
      v42 = a3 == 52;
      goto LABEL_166;
    case 0x6Au:
      v42 = a3 == 24;
LABEL_166:
      if ( !v42 )
        goto LABEL_8;
      v6 = a2 + 1;
      v7 = 0;
      v8 = 64;
      goto LABEL_5;
    case 0x6Bu:
      v43 = a3 == 28;
      goto LABEL_172;
    case 0x6Cu:
    case 0x6Du:
    case 0x71u:
    case 0x74u:
      v43 = a3 == 16;
      goto LABEL_172;
    case 0x6Eu:
      if ( a3 != 16 )
        goto LABEL_8;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        65,
        0,
        &v89);
      v6 = a2 + 2;
      v7 = 1;
      v8 = 60;
      goto LABEL_5;
    case 0x6Fu:
      v43 = a3 == 20;
      goto LABEL_172;
    case 0x70u:
      if ( a3 != 16 )
        goto LABEL_8;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        65,
        0,
        &v89);
      v6 = a2 + 2;
      v7 = 1;
      goto LABEL_181;
    case 0x72u:
      if ( a3 >= 0x18 )
        goto LABEL_173;
      goto LABEL_8;
    case 0x73u:
      v43 = a3 == 24;
LABEL_172:
      if ( !v43 )
        goto LABEL_8;
LABEL_173:
      v6 = a2 + 1;
      v7 = 0;
      goto LABEL_174;
    case 0x75u:
    case 0x7Du:
      v44 = a3 == 24;
      goto LABEL_186;
    case 0x76u:
    case 0x7Fu:
      if ( a3 >= 0x10 )
        goto LABEL_187;
      goto LABEL_8;
    case 0x77u:
    case 0x79u:
      v44 = a3 == 28;
      goto LABEL_186;
    case 0x78u:
      v44 = a3 == 12;
      goto LABEL_186;
    case 0x7Au:
    case 0x81u:
    case 0x83u:
      v44 = a3 == 16;
      goto LABEL_186;
    case 0x7Bu:
    case 0x7Cu:
      if ( a3 != 16 )
        goto LABEL_8;
      v45 = 66;
      goto LABEL_195;
    case 0x7Eu:
      if ( a3 < 0x14 )
        goto LABEL_8;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        66,
        0,
        &v89);
      v6 = a2 + 3;
      goto LABEL_196;
    case 0x80u:
    case 0x82u:
      v44 = a3 == 20;
      goto LABEL_186;
    case 0x84u:
    case 0x87u:
      v44 = a3 == 32;
      goto LABEL_186;
    case 0x85u:
      v44 = a3 == 36;
LABEL_186:
      if ( !v44 )
        goto LABEL_8;
LABEL_187:
      v6 = a2 + 1;
      v7 = 0;
      v8 = 66;
      goto LABEL_5;
    case 0x86u:
      v46 = a3 == 28;
      goto LABEL_203;
    case 0x88u:
      v46 = a3 == 36;
LABEL_203:
      if ( !v46 )
        goto LABEL_8;
      v47 = 66;
      goto LABEL_205;
    case 0x89u:
      if ( a3 != 24 )
        goto LABEL_8;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        69,
        0,
        &v89);
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 2,
        68,
        1,
        &v89);
      v6 = a2 + 3;
      v7 = 1;
      v8 = 68;
      goto LABEL_5;
    case 0x8Au:
    case 0x8Du:
      if ( a3 < 0xC )
        goto LABEL_8;
      v29 = 70;
LABEL_94:
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        v29,
        0,
        &v89);
      v30 = 50LL;
      goto LABEL_95;
    case 0x8Bu:
      if ( a3 != 16 )
        goto LABEL_8;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        70,
        0,
        &v89);
      v6 = a2 + 2;
      v7 = 1;
      goto LABEL_213;
    case 0x8Cu:
      if ( a3 != 72 )
        goto LABEL_8;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        70,
        0,
        &v89);
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 3,
        132,
        1,
        &v89);
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 11,
        3,
        1,
        &v89);
      v6 = a2 + 12;
      goto LABEL_19;
    case 0x8Eu:
      if ( a3 >= 0x14 )
        goto LABEL_217;
      goto LABEL_8;
    case 0x8Fu:
    case 0x90u:
    case 0x91u:
      v48 = a3 == 16;
      goto LABEL_219;
    case 0x92u:
    case 0x93u:
      v48 = a3 == 36;
LABEL_219:
      if ( !v48 )
        goto LABEL_8;
LABEL_217:
      v6 = a2 + 1;
      v7 = 0;
      v8 = 70;
      goto LABEL_5;
    case 0x94u:
    case 0x96u:
      if ( a3 != 16 )
        goto LABEL_8;
      v6 = a2 + 1;
      v8 = 71;
      v7 = 0;
      goto LABEL_5;
    case 0x95u:
      if ( a3 != 16 )
        goto LABEL_8;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        71,
        0,
        &v89);
      v6 = a2 + 2;
      v7 = 1;
      goto LABEL_226;
    case 0x97u:
      if ( a3 != 16 )
        goto LABEL_8;
      v49 = 71;
      goto LABEL_229;
    case 0x98u:
      if ( a3 != 20 )
        goto LABEL_8;
      v6 = a2 + 1;
      v7 = 0;
LABEL_15:
      v8 = 72;
      goto LABEL_5;
    case 0x99u:
      v50 = a3 == 36;
      goto LABEL_233;
    case 0x9Au:
      if ( a3 != 16 )
        goto LABEL_8;
      v34 = 73;
      goto LABEL_118;
    case 0x9Bu:
      v50 = a3 == 16;
      goto LABEL_233;
    case 0x9Cu:
      v50 = a3 == 68;
LABEL_233:
      if ( !v50 )
        goto LABEL_8;
      v6 = a2 + 1;
      v7 = 0;
      v8 = 73;
      goto LABEL_5;
    case 0x9Du:
      if ( a3 != 52 )
        goto LABEL_8;
      v51 = 75;
      goto LABEL_241;
    case 0x9Eu:
    case 0x9Fu:
      if ( a3 != 20 )
        goto LABEL_8;
      v6 = a2 + 1;
      v8 = 79;
      v7 = 0;
      goto LABEL_5;
    case 0xA0u:
      v52 = a3 == 76;
      goto LABEL_245;
    case 0xA1u:
      v52 = a3 == 228;
      goto LABEL_245;
    case 0xA2u:
      v52 = a3 == 112;
      goto LABEL_245;
    case 0xA3u:
      if ( a3 != 16 )
        goto LABEL_8;
      v23 = 81;
LABEL_55:
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        v23,
        0,
        &v89);
      v6 = a2 + 2;
      v7 = 1;
      v8 = 159;
      goto LABEL_5;
    case 0xA4u:
      v52 = a3 == 16;
      goto LABEL_245;
    case 0xA5u:
      if ( a3 != 16 )
        goto LABEL_8;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        81,
        0,
        &v89);
      v6 = a2 + 2;
      v7 = 1;
      v8 = 147;
      goto LABEL_5;
    case 0xA6u:
      v52 = a3 == 220;
LABEL_245:
      if ( !v52 )
        goto LABEL_8;
      v6 = a2 + 1;
      v7 = 0;
      v8 = 81;
      goto LABEL_5;
    case 0xA7u:
      if ( a3 >= 0xC )
        goto LABEL_256;
      goto LABEL_8;
    case 0xA8u:
      if ( a3 != 32 )
        goto LABEL_8;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        82,
        0,
        &v89);
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 2,
        34,
        1,
        &v89);
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 3,
        34,
        1,
        &v89);
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 4,
        34,
        1,
        &v89);
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 5,
        34,
        1,
        &v89);
      v6 = a2 + 6;
      goto LABEL_196;
    case 0xA9u:
      v53 = a3 == 148;
      goto LABEL_260;
    case 0xAAu:
      v53 = a3 == 32;
LABEL_260:
      if ( !v53 )
        goto LABEL_8;
LABEL_256:
      v6 = a2 + 1;
      v7 = 0;
LABEL_181:
      v8 = 82;
      goto LABEL_5;
    case 0xABu:
      v54 = a3 == 60;
      goto LABEL_264;
    case 0xACu:
      v54 = a3 == 16;
      goto LABEL_264;
    case 0xADu:
    case 0xB2u:
      v55 = a3 == 20;
      goto LABEL_268;
    case 0xAEu:
      v55 = a3 == 44;
      goto LABEL_268;
    case 0xAFu:
    case 0xB0u:
    case 0xB1u:
      v55 = a3 == 24;
LABEL_268:
      if ( !v55 )
        goto LABEL_8;
      v6 = a2 + 1;
      v7 = 0;
      v8 = 87;
      goto LABEL_5;
    case 0xB3u:
      if ( a3 != 16 )
        goto LABEL_8;
      v6 = a2 + 1;
      v8 = 89;
      v7 = 0;
      goto LABEL_5;
    case 0xB5u:
      v56 = a3 == 128;
      goto LABEL_290;
    case 0xB6u:
    case 0xC0u:
      v56 = a3 == 44;
      goto LABEL_290;
    case 0xB8u:
      v56 = a3 == 60;
      goto LABEL_290;
    case 0xBAu:
      v26 = a3 < 8;
LABEL_278:
      if ( !v26 )
        return v89;
      goto LABEL_8;
    case 0xBCu:
      v56 = a3 == 32;
      goto LABEL_290;
    case 0xBDu:
    case 0xC1u:
      v56 = a3 == 36;
      goto LABEL_290;
    case 0xBFu:
      v25 = a3 == 36;
      goto LABEL_61;
    case 0xC3u:
      v56 = a3 == 156;
      goto LABEL_290;
    case 0xCAu:
    case 0x100u:
      v25 = a3 == 20;
      goto LABEL_61;
    case 0xCBu:
      v56 = a3 == 24;
LABEL_290:
      if ( v56 )
        return v89;
      goto LABEL_8;
    case 0xCCu:
      if ( a3 != 24 )
        goto LABEL_8;
      v11 = 90;
      goto LABEL_18;
    case 0xCDu:
      if ( a3 != 28 )
        goto LABEL_8;
      v6 = a2 + 1;
      v8 = 93;
      v7 = 0;
      goto LABEL_5;
    case 0xCEu:
      if ( a3 != 24 )
        goto LABEL_8;
      v11 = 94;
      goto LABEL_18;
    case 0xCFu:
    case 0xD2u:
      if ( a3 < 0xC )
        goto LABEL_8;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        94,
        0,
        &v89);
      v30 = 93LL;
      goto LABEL_95;
    case 0xD0u:
    case 0xD4u:
      if ( a3 < 0xC )
        goto LABEL_8;
      v57 = 94;
      goto LABEL_302;
    case 0xD1u:
      if ( a3 == 28 )
        goto LABEL_304;
      goto LABEL_8;
    case 0xD3u:
      if ( a3 < 0x10 )
        goto LABEL_8;
LABEL_304:
      v6 = a2 + 1;
      v7 = 0;
      v8 = 94;
      goto LABEL_5;
    case 0xD5u:
    case 0xD7u:
      if ( a3 != 16 )
        goto LABEL_8;
      v51 = 96;
      goto LABEL_241;
    case 0xD6u:
      if ( a3 != 16 )
        goto LABEL_8;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        96,
        0,
        &v89);
      v6 = a2 + 2;
      v7 = 1;
      goto LABEL_311;
    case 0xD8u:
      if ( a3 != 16 )
        goto LABEL_8;
      v36 = 96;
      goto LABEL_129;
    case 0xD9u:
      if ( a3 != 16 )
        goto LABEL_8;
      v6 = a2 + 1;
      v8 = 97;
      v7 = 0;
      goto LABEL_5;
    case 0xDAu:
      if ( a3 != 16 )
        goto LABEL_8;
      v36 = 97;
      goto LABEL_129;
    case 0xDBu:
      if ( a3 != 16 )
        goto LABEL_8;
      v51 = 97;
      goto LABEL_241;
    case 0xDCu:
    case 0xDFu:
      if ( a3 < 0xC )
        goto LABEL_8;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        98,
        0,
        &v89);
      v30 = 96LL;
      goto LABEL_95;
    case 0xDDu:
    case 0xE6u:
      if ( a3 < 0xC )
        goto LABEL_8;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        98,
        0,
        &v89);
      v30 = 97LL;
      goto LABEL_95;
    case 0xDEu:
    case 0xE1u:
    case 0xE2u:
    case 0xE3u:
    case 0xE4u:
    case 0xE5u:
      if ( a3 != 16 )
        goto LABEL_8;
      v6 = a2 + 1;
      v8 = 98;
      v7 = 0;
      goto LABEL_5;
    case 0xE0u:
      if ( a3 != 16 )
        goto LABEL_8;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        98,
        0,
        &v89);
      v6 = a2 + 2;
      v7 = 1;
      goto LABEL_328;
    case 0xE7u:
      if ( a3 != 16 )
        goto LABEL_8;
      v6 = a2 + 1;
      v8 = 99;
      v7 = 0;
      goto LABEL_5;
    case 0xE8u:
      if ( a3 >= 0x1C )
        goto LABEL_332;
      goto LABEL_8;
    case 0xE9u:
      if ( a3 != 16 )
        goto LABEL_8;
LABEL_332:
      v6 = a2 + 1;
      v7 = 0;
      goto LABEL_333;
    case 0xEAu:
      if ( a3 != 16 )
        goto LABEL_8;
      v58 = 101;
      goto LABEL_338;
    case 0xEBu:
      if ( a3 != 16 )
        goto LABEL_8;
      v59 = 101;
      goto LABEL_342;
    case 0xECu:
    case 0xEDu:
    case 0xF0u:
    case 0xF2u:
      v60 = a3 == 16;
      goto LABEL_345;
    case 0xEEu:
    case 0xF1u:
      v60 = a3 == 20;
      goto LABEL_345;
    case 0xEFu:
      v60 = a3 == 48;
LABEL_345:
      if ( !v60 )
        goto LABEL_8;
      v6 = a2 + 1;
      v7 = 0;
      v8 = 103;
      goto LABEL_5;
    case 0xF3u:
      if ( a3 != 16 )
        goto LABEL_8;
      v51 = 104;
      goto LABEL_241;
    case 0xF4u:
    case 0xF8u:
    case 0xF9u:
      v61 = a3 == 20;
      goto LABEL_352;
    case 0xF5u:
      v61 = a3 == 12;
      goto LABEL_352;
    case 0xF6u:
    case 0xFAu:
      v61 = a3 == 16;
      goto LABEL_352;
    case 0xF7u:
      v61 = a3 == 28;
LABEL_352:
      if ( !v61 )
        goto LABEL_8;
      v6 = a2 + 1;
      v7 = 0;
      v8 = 106;
      goto LABEL_5;
    case 0xFBu:
      v62 = a3 == 20;
      goto LABEL_358;
    case 0xFCu:
      if ( a3 != 16 )
        goto LABEL_8;
      v34 = 107;
LABEL_118:
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        v34,
        0,
        &v89);
      v6 = a2 + 2;
      v7 = 1;
      goto LABEL_119;
    case 0xFDu:
      v62 = a3 == 36;
LABEL_358:
      if ( !v62 )
        goto LABEL_8;
      v6 = a2 + 1;
      v7 = 0;
      v8 = 107;
      goto LABEL_5;
    case 0xFEu:
      if ( a3 != 16 )
        goto LABEL_8;
      v51 = 109;
      goto LABEL_241;
    case 0xFFu:
      if ( a3 != 12 )
        goto LABEL_8;
      v6 = a2 + 1;
      v8 = 109;
      v7 = 0;
      goto LABEL_5;
    case 0x101u:
    case 0x102u:
      v25 = a3 == 28;
LABEL_61:
      if ( !v25 )
        goto LABEL_8;
      v6 = a2 + 1;
      v7 = 0;
      goto LABEL_26;
    case 0x103u:
      if ( a3 != 20 )
        goto LABEL_8;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        110,
        0,
        &v89);
      v6 = a2 + 3;
      goto LABEL_25;
    case 0x105u:
      if ( a3 != 16 )
        goto LABEL_8;
      v6 = a2 + 1;
      v8 = 114;
      v7 = 0;
      goto LABEL_5;
    case 0x106u:
      if ( a3 != 16 )
        goto LABEL_8;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        121,
        0,
        &v89);
      v6 = a2 + 2;
      v7 = 1;
      v8 = 118;
      goto LABEL_5;
    case 0x107u:
      if ( a3 != 16 )
        goto LABEL_8;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        121,
        0,
        &v89);
      v6 = a2 + 2;
      v7 = 1;
      goto LABEL_376;
    case 0x108u:
      if ( a3 < 0x10 )
        goto LABEL_8;
      v6 = a2 + 1;
      v7 = 0;
      v8 = 121;
      goto LABEL_5;
    case 0x109u:
    case 0x10Bu:
    case 0x10Cu:
      if ( a3 != 16 )
        goto LABEL_8;
      v6 = a2 + 1;
      v8 = 128;
      v7 = 0;
      goto LABEL_5;
    case 0x10Au:
      if ( a3 != 32 )
        goto LABEL_8;
      v12 = 128;
      goto LABEL_24;
    case 0x10Du:
    case 0x10Eu:
      if ( a3 < 0xC )
        goto LABEL_8;
      v32 = 131;
LABEL_107:
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        v32,
        0,
        &v89);
      v30 = 154LL;
      goto LABEL_95;
    case 0x10Fu:
      if ( a3 != 16 )
        goto LABEL_8;
      v59 = 131;
LABEL_342:
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        v59,
        0,
        &v89);
      v6 = a2 + 2;
      v7 = 1;
      goto LABEL_343;
    case 0x110u:
      if ( a3 >= 0x14 )
        goto LABEL_388;
      goto LABEL_8;
    case 0x111u:
      if ( a3 != 24 )
        goto LABEL_8;
      v11 = 134;
LABEL_18:
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        v11,
        0,
        &v89);
      v6 = a2 + 2;
LABEL_19:
      v7 = 1;
      goto LABEL_20;
    case 0x112u:
      if ( a3 != 76 )
        goto LABEL_8;
      v6 = a2 + 1;
      v8 = 136;
      v7 = 0;
      goto LABEL_5;
    case 0x113u:
      if ( a3 != 28 )
        goto LABEL_8;
      v51 = 136;
      goto LABEL_241;
    case 0x114u:
    case 0x117u:
      if ( a3 != 16 )
        goto LABEL_8;
      v36 = 138;
      goto LABEL_129;
    case 0x115u:
      if ( a3 != 16 )
        goto LABEL_8;
      v58 = 138;
      goto LABEL_338;
    case 0x116u:
    case 0x119u:
    case 0x11Au:
    case 0x11Cu:
      v63 = a3 == 16;
      goto LABEL_400;
    case 0x118u:
      if ( a3 >= 0x10 )
        goto LABEL_401;
      goto LABEL_8;
    case 0x11Bu:
      v63 = a3 == 28;
LABEL_400:
      if ( !v63 )
        goto LABEL_8;
LABEL_401:
      v6 = a2 + 1;
      v8 = 138;
      v7 = 0;
      goto LABEL_5;
    case 0x11Du:
      if ( a3 != 16 )
        goto LABEL_8;
      v36 = 139;
      goto LABEL_129;
    case 0x11Eu:
      if ( a3 != 16 )
        goto LABEL_8;
      v49 = 139;
LABEL_229:
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        v49,
        0,
        &v89);
      v6 = a2 + 2;
      v7 = 1;
LABEL_125:
      v8 = 45;
      goto LABEL_5;
    case 0x11Fu:
      if ( a3 != 16 )
        goto LABEL_8;
      v40 = 154;
      goto LABEL_153;
    case 0x120u:
    case 0x123u:
    case 0x124u:
      v64 = a3 == 16;
      goto LABEL_412;
    case 0x121u:
    case 0x122u:
      v64 = a3 == 20;
LABEL_412:
      if ( !v64 )
        goto LABEL_8;
      v6 = a2 + 1;
      v7 = 0;
LABEL_343:
      v8 = 155;
      goto LABEL_5;
    case 0x125u:
    case 0x129u:
      v65 = a3 == 12;
      goto LABEL_416;
    case 0x126u:
    case 0x128u:
    case 0x12Bu:
    case 0x133u:
    case 0x137u:
    case 0x138u:
    case 0x139u:
    case 0x13Au:
    case 0x142u:
      v65 = a3 == 16;
      goto LABEL_416;
    case 0x127u:
      if ( a3 != 24 )
        goto LABEL_8;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        156,
        0,
        &v89);
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 2,
        156,
        1,
        &v89);
      v6 = a2 + 3;
      goto LABEL_67;
    case 0x12Au:
      if ( a3 != 16 )
        goto LABEL_8;
      v51 = 156;
      goto LABEL_241;
    case 0x12Cu:
      if ( a3 != 16 )
        goto LABEL_8;
      v12 = 156;
      goto LABEL_24;
    case 0x12Du:
    case 0x131u:
    case 0x13Fu:
    case 0x144u:
      v65 = a3 == 28;
      goto LABEL_416;
    case 0x12Eu:
      if ( a3 != 16 )
        goto LABEL_8;
      v58 = 156;
      goto LABEL_338;
    case 0x12Fu:
      v65 = a3 == 112;
      goto LABEL_416;
    case 0x130u:
      if ( a3 != 16 )
        goto LABEL_8;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        156,
        0,
        &v89);
      v6 = a2 + 2;
      v7 = 1;
      v8 = 36;
      goto LABEL_5;
    case 0x132u:
      if ( a3 != 16 )
        goto LABEL_8;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        156,
        0,
        &v89);
      v6 = a2 + 2;
      v7 = 1;
      v8 = 46;
      goto LABEL_5;
    case 0x134u:
      v65 = a3 == 36;
      goto LABEL_416;
    case 0x135u:
      if ( a3 != 16 )
        goto LABEL_8;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        156,
        0,
        &v89);
      v6 = a2 + 2;
      v7 = 1;
LABEL_174:
      v8 = 65;
      goto LABEL_5;
    case 0x136u:
    case 0x13Bu:
      v65 = a3 == 24;
      goto LABEL_416;
    case 0x13Cu:
    case 0x13Eu:
      v65 = a3 == 20;
      goto LABEL_416;
    case 0x13Du:
      v65 = a3 == 52;
LABEL_416:
      if ( !v65 )
        goto LABEL_8;
      v6 = a2 + 1;
      v7 = 0;
      goto LABEL_68;
    case 0x140u:
      if ( a3 != 16 )
        goto LABEL_8;
      v66 = 156;
      goto LABEL_441;
    case 0x141u:
      if ( a3 != 20 )
        goto LABEL_8;
      v67 = 156;
      goto LABEL_444;
    case 0x143u:
      if ( a3 != 16 )
        goto LABEL_8;
      v36 = 156;
      goto LABEL_129;
    case 0x145u:
    case 0x14Au:
      v68 = a3 == 16;
      goto LABEL_448;
    case 0x146u:
    case 0x147u:
    case 0x148u:
      v68 = a3 == 20;
LABEL_448:
      if ( !v68 )
        goto LABEL_8;
      v6 = a2 + 1;
      v8 = 162;
      v7 = 0;
      goto LABEL_5;
    case 0x149u:
      if ( a3 != 16 )
        goto LABEL_8;
      v51 = 162;
      goto LABEL_241;
    case 0x14Bu:
      if ( a3 != 24 )
        goto LABEL_8;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        165,
        0,
        &v89);
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 2,
        31,
        1,
        &v89);
      v6 = a2 + 3;
      goto LABEL_455;
    case 0x154u:
      if ( a3 != 24 )
        goto LABEL_8;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        22,
        0,
        &v89);
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 3,
        56,
        1,
        &v89);
      v6 = a2 + 4;
      goto LABEL_339;
    case 0x156u:
      v54 = a3 == 12;
LABEL_264:
      if ( !v54 )
        goto LABEL_8;
      v6 = a2 + 1;
      v7 = 0;
      v8 = 83;
      goto LABEL_5;
    case 0x157u:
      if ( a3 != 36 )
        goto LABEL_8;
      v6 = a2 + 1;
      v8 = 85;
      v7 = 0;
      goto LABEL_5;
    case 0x158u:
      if ( a3 != 76 )
        goto LABEL_8;
      v6 = a2 + 1;
      v8 = 86;
      v7 = 0;
      goto LABEL_5;
    case 0x159u:
      if ( a3 != 28 )
        goto LABEL_8;
      v6 = a2 + 1;
      v7 = 0;
LABEL_20:
      v8 = 132;
      goto LABEL_5;
    case 0x15Au:
      if ( a3 != 28 )
        goto LABEL_8;
LABEL_388:
      v6 = a2 + 1;
      v7 = 0;
      goto LABEL_148;
    case 0x15Bu:
      if ( a3 != 40 )
        goto LABEL_8;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        158,
        0,
        &v89);
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 2,
        156,
        1,
        &v89);
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 3,
        156,
        1,
        &v89);
      v6 = a2 + 4;
      goto LABEL_455;
    case 0x15Cu:
    case 0x15Du:
    case 0x15Eu:
    case 0x15Fu:
    case 0x160u:
    case 0x161u:
    case 0x162u:
    case 0x163u:
    case 0x164u:
      if ( a3 != 16 )
        goto LABEL_8;
      v6 = a2 + 1;
      v8 = 1;
      v7 = 0;
      goto LABEL_5;
    case 0x165u:
      v69 = a3 == 28;
      goto LABEL_472;
    case 0x166u:
      v69 = a3 == 16;
LABEL_472:
      if ( !v69 )
        goto LABEL_8;
      v6 = a2 + 1;
      v7 = 0;
      v8 = 2;
      goto LABEL_5;
    case 0x167u:
    case 0x168u:
      if ( a3 != 16 )
        goto LABEL_8;
      v6 = a2 + 1;
      v7 = 0;
LABEL_213:
      v8 = 4;
      goto LABEL_5;
    case 0x169u:
      if ( a3 != 16 )
        goto LABEL_8;
      v6 = a2 + 1;
      v8 = 5;
      v7 = 0;
      goto LABEL_5;
    case 0x16Au:
      if ( a3 != 16 )
        goto LABEL_8;
      v47 = 6;
      goto LABEL_205;
    case 0x16Bu:
    case 0x16Cu:
      if ( a3 < 0xC )
        goto LABEL_8;
      v31 = 6;
LABEL_98:
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        v31,
        0,
        &v89);
      v30 = 10LL;
      goto LABEL_95;
    case 0x16Du:
    case 0x16Eu:
      if ( a3 != 20 )
        goto LABEL_8;
      v6 = a2 + 1;
      v8 = 6;
      v7 = 0;
      goto LABEL_5;
    case 0x16Fu:
    case 0x170u:
    case 0x171u:
    case 0x172u:
    case 0x173u:
      if ( a3 != 16 )
        goto LABEL_8;
      v6 = a2 + 1;
      v8 = 7;
      v7 = 0;
      goto LABEL_5;
    case 0x174u:
      if ( a3 != 16 )
        goto LABEL_8;
      v6 = a2 + 1;
      v8 = 13;
      v7 = 0;
      goto LABEL_5;
    case 0x175u:
    case 0x176u:
    case 0x177u:
    case 0x178u:
      if ( a3 != 16 )
        goto LABEL_8;
      v6 = a2 + 1;
      v8 = 15;
      v7 = 0;
      goto LABEL_5;
    case 0x179u:
    case 0x17Fu:
      if ( a3 != 16 )
        goto LABEL_8;
      v51 = 17;
      goto LABEL_241;
    case 0x17Au:
    case 0x17Du:
    case 0x17Eu:
    case 0x183u:
      v70 = a3 == 16;
      goto LABEL_494;
    case 0x17Bu:
    case 0x182u:
      v70 = a3 == 20;
LABEL_494:
      if ( v70 )
        goto LABEL_495;
      goto LABEL_8;
    case 0x17Cu:
      if ( a3 != 16 )
        goto LABEL_8;
      v66 = 17;
      goto LABEL_441;
    case 0x180u:
    case 0x181u:
      if ( a3 < 0xC )
        goto LABEL_8;
LABEL_495:
      v6 = a2 + 1;
      v7 = 0;
LABEL_51:
      v8 = 17;
      goto LABEL_5;
    case 0x184u:
      if ( a3 != 16 )
        goto LABEL_8;
      v67 = 17;
LABEL_444:
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        v67,
        0,
        &v89);
      v6 = a2 + 2;
      v7 = 1;
      v8 = 160;
      goto LABEL_5;
    case 0x185u:
      if ( a3 != 28 )
        goto LABEL_8;
      v6 = a2 + 1;
      v7 = 0;
LABEL_311:
      v8 = 19;
      goto LABEL_5;
    case 0x186u:
      v71 = a3 == 16;
      goto LABEL_506;
    case 0x187u:
      v71 = a3 == 28;
LABEL_506:
      if ( !v71 )
        goto LABEL_8;
      v6 = a2 + 1;
      v7 = 0;
      v8 = 20;
      goto LABEL_5;
    case 0x188u:
    case 0x189u:
    case 0x18Au:
    case 0x18Bu:
    case 0x18Cu:
    case 0x18Du:
    case 0x18Eu:
    case 0x18Fu:
    case 0x190u:
    case 0x191u:
    case 0x192u:
    case 0x193u:
    case 0x194u:
    case 0x195u:
    case 0x196u:
    case 0x197u:
    case 0x198u:
    case 0x199u:
    case 0x19Au:
    case 0x19Bu:
    case 0x19Cu:
    case 0x19Du:
      if ( a3 != 16 )
        goto LABEL_8;
      v6 = a2 + 1;
      v8 = 21;
      v7 = 0;
      goto LABEL_5;
    case 0x19Eu:
      if ( a3 != 16 )
        goto LABEL_8;
      v6 = a2 + 1;
      v8 = 26;
      v7 = 0;
      goto LABEL_5;
    case 0x19Fu:
    case 0x1A0u:
      if ( a3 < 0xC )
        goto LABEL_8;
      v6 = a2 + 1;
      v7 = 0;
      v8 = 27;
      goto LABEL_5;
    case 0x1A1u:
      if ( a3 != 16 )
        goto LABEL_8;
      v72 = 27;
      goto LABEL_517;
    case 0x1A2u:
    case 0x1A3u:
      if ( a3 != 20 )
        goto LABEL_8;
      v6 = a2 + 1;
      v8 = 28;
      v7 = 0;
      goto LABEL_5;
    case 0x1A4u:
    case 0x1A5u:
    case 0x1A6u:
      if ( a3 != 16 )
        goto LABEL_8;
      v6 = a2 + 1;
      v8 = 32;
      v7 = 0;
      goto LABEL_5;
    case 0x1A7u:
    case 0x1A8u:
      v73 = a3 == 20;
      goto LABEL_523;
    case 0x1A9u:
    case 0x1AAu:
      v73 = a3 == 16;
LABEL_523:
      if ( !v73 )
        goto LABEL_8;
      v6 = a2 + 1;
      v7 = 0;
      v8 = 39;
      goto LABEL_5;
    case 0x1ABu:
      v74 = a3 == 28;
      goto LABEL_527;
    case 0x1ACu:
      v74 = a3 == 20;
LABEL_527:
      if ( !v74 )
        goto LABEL_8;
      v6 = a2 + 1;
      v7 = 0;
      v8 = 42;
      goto LABEL_5;
    case 0x1ADu:
      if ( a3 != 20 )
        goto LABEL_8;
      v6 = a2 + 1;
      v7 = 0;
LABEL_119:
      v8 = 43;
      goto LABEL_5;
    case 0x1AEu:
      if ( a3 != 16 )
        goto LABEL_8;
      v51 = 43;
      goto LABEL_241;
    case 0x1AFu:
      v75 = a3 == 28;
      goto LABEL_535;
    case 0x1B0u:
      v75 = a3 == 24;
      goto LABEL_535;
    case 0x1B1u:
      v75 = a3 == 16;
LABEL_535:
      if ( !v75 )
        goto LABEL_8;
      v6 = a2 + 1;
      v7 = 0;
      v8 = 44;
      goto LABEL_5;
    case 0x1B2u:
      if ( a3 != 16 )
        goto LABEL_8;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        47,
        0,
        &v89);
      v6 = a2 + 2;
      v7 = 1;
      v8 = 23;
      goto LABEL_5;
    case 0x1B3u:
      if ( a3 == 16 )
        goto LABEL_542;
      goto LABEL_8;
    case 0x1B4u:
      if ( a3 != 16 )
        goto LABEL_8;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        47,
        0,
        &v89);
      v6 = a2 + 2;
      v7 = 1;
LABEL_333:
      v8 = 100;
      goto LABEL_5;
    case 0x1B5u:
    case 0x1B6u:
      if ( a3 < 0xC )
        goto LABEL_8;
LABEL_542:
      v6 = a2 + 1;
      v7 = 0;
LABEL_226:
      v8 = 47;
      goto LABEL_5;
    case 0x1B7u:
    case 0x1B8u:
      if ( a3 < 0xC )
        goto LABEL_8;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        47,
        0,
        &v89);
      v30 = 16LL;
      goto LABEL_95;
    case 0x1B9u:
    case 0x1BAu:
      if ( a3 != 16 )
        goto LABEL_8;
      v6 = a2 + 1;
      v8 = 48;
      v7 = 0;
      goto LABEL_5;
    case 0x1BBu:
      if ( a3 != 16 )
        goto LABEL_8;
      v66 = 48;
LABEL_441:
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        v66,
        0,
        &v89);
      v6 = a2 + 2;
      v7 = 1;
      v8 = 148;
      goto LABEL_5;
    case 0x1BCu:
    case 0x1CBu:
      if ( a3 == 16 )
        goto LABEL_554;
      goto LABEL_8;
    case 0x1BDu:
    case 0x1BEu:
    case 0x1C1u:
    case 0x1C2u:
    case 0x1C5u:
    case 0x1C6u:
    case 0x1C7u:
    case 0x1C8u:
    case 0x1C9u:
    case 0x1CAu:
      if ( a3 < 0xC )
        goto LABEL_8;
LABEL_554:
      v6 = a2 + 1;
      v7 = 0;
      v8 = 51;
      goto LABEL_5;
    case 0x1BFu:
    case 0x1C0u:
      if ( a3 < 0xC )
        goto LABEL_8;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        51,
        0,
        &v89);
      v30 = 51LL;
      goto LABEL_95;
    case 0x1C3u:
    case 0x1C4u:
      if ( a3 < 0xC )
        goto LABEL_8;
      v57 = 51;
LABEL_302:
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        v57,
        0,
        &v89);
      v30 = 31LL;
      goto LABEL_95;
    case 0x1CCu:
      if ( a3 != 28 )
        goto LABEL_8;
      v6 = a2 + 1;
      v8 = 52;
      v7 = 0;
      goto LABEL_5;
    case 0x1CDu:
    case 0x1CEu:
    case 0x1CFu:
      if ( a3 != 16 )
        goto LABEL_8;
      v6 = a2 + 1;
      v8 = 53;
      v7 = 0;
      goto LABEL_5;
    case 0x1D0u:
    case 0x1D1u:
      if ( a3 >= 0xC )
        goto LABEL_566;
      goto LABEL_8;
    case 0x1D2u:
    case 0x1D3u:
      v76 = a3 == 16;
      goto LABEL_569;
    case 0x1D4u:
      v76 = a3 == 20;
      goto LABEL_569;
    case 0x1D5u:
      v76 = a3 == 28;
LABEL_569:
      if ( !v76 )
        goto LABEL_8;
LABEL_566:
      v6 = a2 + 1;
      v7 = 0;
      goto LABEL_567;
    case 0x1DAu:
      if ( a3 != 16 )
        goto LABEL_8;
      v40 = 59;
      goto LABEL_153;
    case 0x1DBu:
    case 0x1DCu:
    case 0x1DDu:
      if ( a3 != 16 )
        goto LABEL_8;
      v6 = a2 + 1;
      v8 = 59;
      v7 = 0;
      goto LABEL_5;
    case 0x1DEu:
    case 0x1DFu:
      if ( a3 < 0xC )
        goto LABEL_8;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        59,
        0,
        &v89);
      v30 = 20LL;
      goto LABEL_95;
    case 0x1E0u:
      if ( a3 != 16 )
        goto LABEL_8;
      v6 = a2 + 1;
      v8 = 61;
      v7 = 0;
      goto LABEL_5;
    case 0x1E1u:
    case 0x1E2u:
    case 0x1E4u:
    case 0x1E6u:
    case 0x1E9u:
    case 0x1EAu:
    case 0x1EBu:
    case 0x1ECu:
    case 0x1EDu:
    case 0x1EEu:
    case 0x1EFu:
    case 0x1F0u:
    case 0x1F2u:
    case 0x1F3u:
    case 0x1F4u:
    case 0x1F5u:
    case 0x1F6u:
    case 0x1F7u:
    case 0x1F8u:
    case 0x1F9u:
    case 0x1FAu:
    case 0x1FBu:
    case 0x1FCu:
    case 0x1FEu:
    case 0x1FFu:
    case 0x200u:
    case 0x201u:
    case 0x202u:
    case 0x203u:
    case 0x204u:
    case 0x205u:
    case 0x206u:
    case 0x20Cu:
    case 0x210u:
    case 0x214u:
    case 0x218u:
    case 0x21Fu:
    case 0x222u:
      v77 = a3 == 16;
      goto LABEL_582;
    case 0x1E3u:
    case 0x1E5u:
      v77 = a3 == 24;
      goto LABEL_582;
    case 0x1E7u:
    case 0x1E8u:
      v77 = a3 == 20;
LABEL_582:
      if ( v77 )
        goto LABEL_583;
      goto LABEL_8;
    case 0x1F1u:
    case 0x1FDu:
      if ( a3 != 16 )
        goto LABEL_8;
      v47 = 67;
LABEL_205:
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        v47,
        0,
        &v89);
      v6 = a2 + 2;
      v7 = 1;
LABEL_35:
      v8 = 10;
      goto LABEL_5;
    case 0x207u:
    case 0x208u:
    case 0x209u:
    case 0x20Du:
    case 0x211u:
    case 0x215u:
      if ( a3 != 16 )
        goto LABEL_8;
      v45 = 67;
LABEL_195:
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        v45,
        0,
        &v89);
      v6 = a2 + 2;
LABEL_196:
      v7 = 1;
LABEL_104:
      v8 = 34;
      goto LABEL_5;
    case 0x20Au:
    case 0x20Bu:
    case 0x20Eu:
    case 0x20Fu:
    case 0x212u:
    case 0x213u:
    case 0x216u:
    case 0x217u:
    case 0x21Du:
    case 0x21Eu:
    case 0x220u:
    case 0x221u:
      if ( a3 < 0xC )
        goto LABEL_8;
LABEL_583:
      v6 = a2 + 1;
      v7 = 0;
      v8 = 67;
      goto LABEL_5;
    case 0x219u:
    case 0x21Au:
      if ( a3 < 0xC )
        goto LABEL_8;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        67,
        0,
        &v89);
      v30 = 82LL;
      goto LABEL_95;
    case 0x21Bu:
    case 0x21Cu:
      if ( a3 < 0xC )
        goto LABEL_8;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        67,
        0,
        &v89);
      v30 = 65LL;
      goto LABEL_95;
    case 0x223u:
      if ( a3 != 16 )
        goto LABEL_8;
      v6 = a2 + 1;
      v7 = 0;
LABEL_328:
      v8 = 76;
      goto LABEL_5;
    case 0x224u:
    case 0x225u:
    case 0x226u:
    case 0x227u:
      if ( a3 < 0xC )
        goto LABEL_8;
      v78 = 76;
      goto LABEL_600;
    case 0x228u:
    case 0x229u:
      if ( a3 != 20 )
        goto LABEL_8;
      v6 = a2 + 1;
      v8 = 77;
      v7 = 0;
      goto LABEL_5;
    case 0x22Au:
    case 0x22Bu:
    case 0x22Cu:
    case 0x22Du:
    case 0x22Eu:
    case 0x22Fu:
    case 0x230u:
    case 0x231u:
    case 0x232u:
    case 0x233u:
    case 0x234u:
    case 0x235u:
    case 0x236u:
      if ( a3 != 16 )
        goto LABEL_8;
      v6 = a2 + 1;
      v8 = 78;
      v7 = 0;
      goto LABEL_5;
    case 0x237u:
    case 0x238u:
      if ( a3 != 16 )
        goto LABEL_8;
      v36 = 84;
      goto LABEL_129;
    case 0x239u:
    case 0x23Au:
    case 0x23Bu:
    case 0x23Cu:
    case 0x23Du:
    case 0x23Eu:
    case 0x23Fu:
    case 0x240u:
    case 0x241u:
      if ( a3 != 16 )
        goto LABEL_8;
      v6 = a2 + 1;
      v8 = 88;
      v7 = 0;
      goto LABEL_5;
    case 0x242u:
      if ( a3 != 16 )
        goto LABEL_8;
      v36 = 88;
      goto LABEL_129;
    case 0x243u:
      v79 = a3 == 28;
      goto LABEL_612;
    case 0x244u:
    case 0x245u:
    case 0x246u:
    case 0x247u:
    case 0x248u:
    case 0x24Au:
      v79 = a3 == 16;
      goto LABEL_612;
    case 0x249u:
      v79 = a3 == 24;
LABEL_612:
      if ( !v79 )
        goto LABEL_8;
      v6 = a2 + 1;
      v7 = 0;
      v8 = 91;
      goto LABEL_5;
    case 0x24Bu:
      if ( a3 != 16 )
        goto LABEL_8;
      v51 = 92;
      goto LABEL_241;
    case 0x24Cu:
    case 0x24Du:
    case 0x24Eu:
      if ( a3 != 20 )
        goto LABEL_8;
      v6 = a2 + 1;
      v8 = 102;
      v7 = 0;
      goto LABEL_5;
    case 0x24Fu:
    case 0x250u:
      if ( a3 < 0xC )
        goto LABEL_8;
      v6 = a2 + 1;
      v7 = 0;
      goto LABEL_622;
    case 0x251u:
      v80 = a3 == 20;
      goto LABEL_624;
    case 0x252u:
      v80 = a3 == 24;
LABEL_624:
      if ( !v80 )
        goto LABEL_8;
      v6 = a2 + 1;
      v7 = 0;
      v8 = 108;
      goto LABEL_5;
    case 0x253u:
      if ( a3 != 16 )
        goto LABEL_8;
      v72 = 108;
      goto LABEL_517;
    case 0x254u:
    case 0x255u:
    case 0x256u:
      if ( a3 != 16 )
        goto LABEL_8;
      v6 = a2 + 1;
      v8 = 111;
      v7 = 0;
      goto LABEL_5;
    case 0x257u:
    case 0x258u:
    case 0x259u:
    case 0x25Au:
    case 0x25Bu:
    case 0x25Cu:
    case 0x25Du:
      if ( a3 != 16 )
        goto LABEL_8;
      v6 = a2 + 1;
      v8 = 112;
      v7 = 0;
      goto LABEL_5;
    case 0x25Eu:
      if ( a3 != 16 )
        goto LABEL_8;
      v6 = a2 + 1;
      v8 = 113;
      v7 = 0;
      goto LABEL_5;
    case 0x25Fu:
    case 0x260u:
    case 0x261u:
    case 0x262u:
      if ( a3 != 16 )
        goto LABEL_8;
      v6 = a2 + 1;
      v8 = 115;
      v7 = 0;
      goto LABEL_5;
    case 0x263u:
    case 0x264u:
    case 0x265u:
    case 0x266u:
    case 0x267u:
    case 0x268u:
      if ( a3 != 16 )
        goto LABEL_8;
      v6 = a2 + 1;
      v8 = 116;
      v7 = 0;
      goto LABEL_5;
    case 0x269u:
    case 0x271u:
    case 0x272u:
    case 0x273u:
    case 0x274u:
    case 0x275u:
    case 0x276u:
    case 0x277u:
      if ( a3 != 16 )
        goto LABEL_8;
      v6 = a2 + 1;
      v7 = 0;
LABEL_376:
      v8 = 120;
      goto LABEL_5;
    case 0x26Au:
    case 0x26Bu:
    case 0x26Cu:
    case 0x26Du:
    case 0x26Eu:
    case 0x26Fu:
    case 0x270u:
      if ( a3 != 16 )
        goto LABEL_8;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        120,
        0,
        &v89);
      v6 = a2 + 2;
      v7 = 1;
      v8 = 134;
      goto LABEL_5;
    case 0x278u:
    case 0x27Bu:
      if ( a3 != 16 )
        goto LABEL_8;
      v81 = 122;
      goto LABEL_645;
    case 0x279u:
      v82 = a3 == 28;
      goto LABEL_647;
    case 0x27Au:
    case 0x27Cu:
      v82 = a3 == 16;
LABEL_647:
      if ( !v82 )
        goto LABEL_8;
      v6 = a2 + 1;
      v7 = 0;
      v8 = 122;
      goto LABEL_5;
    case 0x27Du:
      if ( a3 != 16 )
        goto LABEL_8;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        123,
        0,
        &v89);
      v6 = a2 + 2;
      v7 = 1;
LABEL_80:
      v8 = 25;
      goto LABEL_5;
    case 0x27Eu:
    case 0x27Fu:
      if ( a3 < 0xC )
        goto LABEL_8;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        124,
        0,
        &v89);
      v30 = 124LL;
      goto LABEL_95;
    case 0x280u:
    case 0x281u:
      if ( a3 < 0xC )
        goto LABEL_8;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        124,
        0,
        &v89);
      v30 = 117LL;
      goto LABEL_95;
    case 0x282u:
      if ( a3 != 16 )
        goto LABEL_8;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        124,
        0,
        &v89);
      v6 = a2 + 2;
      v7 = 1;
      v8 = 123;
      goto LABEL_5;
    case 0x283u:
    case 0x284u:
    case 0x287u:
    case 0x289u:
    case 0x28Bu:
      v83 = a3 == 16;
      goto LABEL_659;
    case 0x285u:
    case 0x288u:
    case 0x28Au:
      if ( a3 != 16 )
        goto LABEL_8;
      v81 = 126;
LABEL_645:
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        v81,
        0,
        &v89);
      v6 = a2 + 2;
      v7 = 1;
      v8 = 119;
      goto LABEL_5;
    case 0x286u:
      v83 = a3 == 24;
LABEL_659:
      if ( !v83 )
        goto LABEL_8;
      v6 = a2 + 1;
      v7 = 0;
      v8 = 126;
      goto LABEL_5;
    case 0x28Cu:
      if ( a3 != 16 )
        goto LABEL_8;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        129,
        0,
        &v89);
      v6 = a2 + 2;
      v7 = 1;
      v8 = 124;
      goto LABEL_5;
    case 0x28Du:
    case 0x28Eu:
    case 0x28Fu:
    case 0x290u:
    case 0x291u:
    case 0x292u:
      if ( a3 != 16 )
        goto LABEL_8;
      v6 = a2 + 1;
      v8 = 130;
      v7 = 0;
      goto LABEL_5;
    case 0x293u:
    case 0x294u:
    case 0x295u:
    case 0x296u:
      if ( a3 != 16 )
        goto LABEL_8;
      v6 = a2 + 1;
      v8 = 135;
      v7 = 0;
      goto LABEL_5;
    case 0x297u:
    case 0x299u:
    case 0x29Bu:
    case 0x29Cu:
    case 0x29Du:
    case 0x29Eu:
    case 0x2A0u:
    case 0x2A2u:
    case 0x2A3u:
      v84 = a3 == 16;
      goto LABEL_671;
    case 0x298u:
    case 0x29Fu:
      v84 = a3 == 24;
      goto LABEL_671;
    case 0x29Au:
    case 0x2A1u:
      v84 = a3 == 28;
LABEL_671:
      if ( !v84 )
        goto LABEL_8;
      v6 = a2 + 1;
      v8 = 137;
      v7 = 0;
      goto LABEL_5;
    case 0x2A4u:
      if ( a3 != 16 )
        goto LABEL_8;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        140,
        0,
        &v89);
      v6 = a2 + 2;
      v7 = 1;
      v8 = 141;
      goto LABEL_5;
    case 0x2A5u:
    case 0x2A9u:
    case 0x2AAu:
    case 0x2ABu:
    case 0x2ACu:
    case 0x2AEu:
    case 0x2AFu:
      v85 = a3 == 16;
      goto LABEL_678;
    case 0x2A6u:
    case 0x2A8u:
      v85 = a3 == 28;
LABEL_678:
      if ( !v85 )
        goto LABEL_8;
      v6 = a2 + 1;
      v8 = 142;
      v7 = 0;
      goto LABEL_5;
    case 0x2A7u:
      if ( a3 != 16 )
        goto LABEL_8;
      v12 = 142;
LABEL_24:
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        v12,
        0,
        &v89);
      v6 = a2 + 2;
LABEL_25:
      v7 = 1;
LABEL_26:
      v8 = 110;
      goto LABEL_5;
    case 0x2ADu:
      if ( a3 != 16 )
        goto LABEL_8;
      v40 = 142;
LABEL_153:
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        v40,
        0,
        &v89);
      v6 = a2 + 2;
      v7 = 1;
LABEL_74:
      v8 = 24;
      goto LABEL_5;
    case 0x2B0u:
      if ( a3 != 16 )
        goto LABEL_8;
      v72 = 143;
LABEL_517:
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        v72,
        0,
        &v89);
      v6 = a2 + 2;
LABEL_455:
      v7 = 1;
LABEL_91:
      v8 = 31;
      goto LABEL_5;
    case 0x2B1u:
    case 0x2B5u:
      if ( a3 != 16 )
        goto LABEL_8;
      v39 = 143;
LABEL_147:
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        v39,
        0,
        &v89);
      v6 = a2 + 2;
      v7 = 1;
LABEL_148:
      v8 = 133;
      goto LABEL_5;
    case 0x2B2u:
    case 0x2B3u:
    case 0x2B4u:
    case 0x2B6u:
    case 0x2B7u:
    case 0x2B8u:
    case 0x2B9u:
    case 0x2BAu:
    case 0x2BBu:
      if ( a3 != 16 )
        goto LABEL_8;
      v6 = a2 + 1;
      v8 = 143;
      v7 = 0;
      goto LABEL_5;
    case 0x2BCu:
    case 0x2BDu:
    case 0x2BEu:
    case 0x2BFu:
    case 0x2C0u:
      if ( a3 == 16 )
        goto LABEL_692;
      goto LABEL_8;
    case 0x2C1u:
    case 0x2C2u:
    case 0x2C3u:
    case 0x2C4u:
    case 0x2C5u:
    case 0x2C6u:
    case 0x2C7u:
    case 0x2C8u:
      if ( a3 < 0xC )
        goto LABEL_8;
LABEL_692:
      v6 = a2 + 1;
      v8 = 144;
      v7 = 0;
      goto LABEL_5;
    case 0x2C9u:
      if ( a3 != 16 )
        goto LABEL_8;
      v36 = 145;
LABEL_129:
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        v36,
        0,
        &v89);
      v6 = a2 + 2;
      v7 = 1;
      v8 = 16;
      goto LABEL_5;
    case 0x2CAu:
    case 0x2CBu:
      if ( a3 != 20 )
        goto LABEL_8;
      v6 = a2 + 1;
      v8 = 145;
      v7 = 0;
      goto LABEL_5;
    case 0x2CCu:
    case 0x2CDu:
      if ( a3 < 0xC )
        goto LABEL_8;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        146,
        0,
        &v89);
      v30 = 28LL;
      goto LABEL_95;
    case 0x2CEu:
    case 0x2CFu:
    case 0x2D0u:
    case 0x2D1u:
      if ( a3 < 0xC )
        goto LABEL_8;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        146,
        0,
        &v89);
      v30 = 32LL;
      goto LABEL_95;
    case 0x2D2u:
    case 0x2D3u:
      if ( a3 < 0xC )
        goto LABEL_8;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        149,
        0,
        &v89);
      v30 = 148LL;
      goto LABEL_95;
    case 0x2D4u:
    case 0x2D5u:
      if ( a3 < 0xC )
        goto LABEL_8;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        150,
        0,
        &v89);
      v30 = 147LL;
      goto LABEL_95;
    case 0x2D6u:
    case 0x2D7u:
      if ( a3 != 16 )
        goto LABEL_8;
      v6 = a2 + 1;
      v8 = 151;
      v7 = 0;
      goto LABEL_5;
    case 0x2D8u:
    case 0x2D9u:
    case 0x2DAu:
      if ( a3 != 16 )
        goto LABEL_8;
      v6 = a2 + 1;
      v8 = 152;
      v7 = 0;
      goto LABEL_5;
    case 0x2DBu:
    case 0x2DCu:
    case 0x2DDu:
      v86 = a3 == 20;
      goto LABEL_712;
    case 0x2DEu:
    case 0x2DFu:
    case 0x2E0u:
    case 0x2E1u:
      v86 = a3 == 16;
LABEL_712:
      if ( !v86 )
        goto LABEL_8;
      v6 = a2 + 1;
      v8 = 153;
      v7 = 0;
      goto LABEL_5;
    case 0x2E2u:
      if ( a3 != 16 )
        goto LABEL_8;
      v51 = 157;
      goto LABEL_241;
    case 0x2E3u:
    case 0x2E4u:
      if ( a3 < 0xC )
        goto LABEL_8;
      v78 = 159;
LABEL_600:
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        v78,
        0,
        &v89);
      v30 = 156LL;
LABEL_95:
      LOBYTE(v88) = 0;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandleArray(
        this,
        a2 + 2,
        (unsigned __int64)(v3 - 12) >> 2,
        v30,
        v88,
        &v89);
      return v89;
    case 0x2E5u:
      if ( a3 != 16 )
        goto LABEL_8;
      v51 = 161;
LABEL_241:
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        v51,
        0,
        &v89);
      v6 = a2 + 2;
LABEL_67:
      v7 = 1;
LABEL_68:
      v8 = 156;
      goto LABEL_5;
    case 0x2E6u:
    case 0x2E7u:
    case 0x2E8u:
    case 0x2EAu:
    case 0x2F1u:
    case 0x2F2u:
    case 0x2F3u:
      v87 = a3 == 28;
      goto LABEL_722;
    case 0x2E9u:
    case 0x2EBu:
    case 0x2F6u:
    case 0x2F7u:
      v87 = a3 == 20;
      goto LABEL_722;
    case 0x2ECu:
      if ( a3 != 16 )
        goto LABEL_8;
      v58 = 164;
LABEL_338:
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        v58,
        0,
        &v89);
      v6 = a2 + 2;
LABEL_339:
      v7 = 1;
LABEL_156:
      v8 = 56;
      goto LABEL_5;
    case 0x2EDu:
    case 0x2EEu:
    case 0x2EFu:
    case 0x2F0u:
      v87 = a3 == 16;
LABEL_722:
      if ( !v87 )
        goto LABEL_8;
      v6 = a2 + 1;
      v8 = 164;
      v7 = 0;
      goto LABEL_5;
    case 0x2F4u:
      if ( a3 != 16 )
        goto LABEL_8;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        164,
        0,
        &v89);
      v6 = a2 + 2;
      v7 = 1;
LABEL_567:
      v8 = 54;
      goto LABEL_5;
    case 0x2F5u:
      if ( a3 != 16 )
        goto LABEL_8;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        164,
        0,
        &v89);
      v6 = a2 + 2;
      v7 = 1;
LABEL_622:
      v8 = 105;
LABEL_5:
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        v6,
        v8,
        v7,
        &v89);
      break;
    default:
LABEL_8:
      v89 = -1073741811;
      break;
  }
  return v89;
}
