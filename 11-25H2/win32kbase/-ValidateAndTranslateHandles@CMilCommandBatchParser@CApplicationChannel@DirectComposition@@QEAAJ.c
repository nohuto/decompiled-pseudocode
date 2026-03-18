/*
 * XREFs of ?ValidateAndTranslateHandles@CMilCommandBatchParser@CApplicationChannel@DirectComposition@@QEAAJXZ @ 0x14005B550
 * Callers:
 *     ?Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_N1PEBUSynchronizationObject@2@PEAVCMilProtocolBlock@@PEAII@Z @ 0x14004F890 (-Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_N1PEBUSynchronizationObject@2@PEAVCMil.c)
 * Callees:
 *     ?TranslateMilCommandBatchHandle@CMilCommandBatchParser@CApplicationChannel@DirectComposition@@AEAAXPEAIW4MIL_RESOURCE_TYPE@@_NPEAJ@Z @ 0x14002194C (-TranslateMilCommandBatchHandle@CMilCommandBatchParser@CApplicationChannel@DirectComposition@@AE.c)
 *     ?LookupResourceMarshaler@CApplicationChannel@DirectComposition@@QEAAPEAVCResourceMarshaler@2@I@Z @ 0x1400221BC (-LookupResourceMarshaler@CApplicationChannel@DirectComposition@@QEAAPEAVCResourceMarshaler@2@I@Z.c)
 *     ?IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z @ 0x14005B060 (-IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z.c)
 *     ?ValidateAndTranslateRenderDataInstructionGenerated@CMilCommandBatchParser@CApplicationChannel@DirectComposition@@AEAAJPEAXI@Z @ 0x14005B21C (-ValidateAndTranslateRenderDataInstructionGenerated@CMilCommandBatchParser@CApplicationChannel@D.c)
 *     ?ValidateAndTranslateCommandGenerated@CMilCommandBatchParser@CApplicationChannel@DirectComposition@@AEAAJPEAXI@Z @ 0x14005B7F4 (-ValidateAndTranslateCommandGenerated@CMilCommandBatchParser@CApplicationChannel@DirectCompositi.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::CMilCommandBatchParser::ValidateAndTranslateHandles(
        DirectComposition::CApplicationChannel::CMilCommandBatchParser *this)
{
  _QWORD *v1; // r12
  int v2; // ebx
  unsigned int v3; // r13d
  unsigned int *v4; // r15
  __int64 v5; // rsi
  struct DirectComposition::CResourceMarshaler *v7; // rax
  unsigned int i; // ecx
  unsigned int *v9; // r14
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // r15
  struct DirectComposition::CResourceMarshaler *v13; // rax
  struct DirectComposition::CResourceMarshaler *v14; // r14
  struct DirectComposition::CResourceMarshaler *v15; // rax
  struct DirectComposition::CResourceMarshaler *v16; // rbx
  int v18; // [rsp+88h] [rbp+50h] BYREF
  unsigned int *v19; // [rsp+90h] [rbp+58h]
  _QWORD *v20; // [rsp+98h] [rbp+60h]

  v1 = (_QWORD *)*((_QWORD *)this + 1);
  v2 = 0;
  v20 = v1;
  do
  {
    if ( !v1 )
      return (unsigned int)v2;
    v3 = *((_DWORD *)v1 + 5);
    v4 = (unsigned int *)(v1 + 3);
    v2 = 0;
    v19 = (unsigned int *)(v1 + 3);
    v18 = 0;
    while ( v3 >= 8 )
    {
      v5 = *v4;
      if ( (v5 & 3) != 0 || (unsigned int)v5 < 8 || (unsigned int)v5 > v3 )
      {
        v2 = -1073741811;
        v18 = -1073741811;
        goto LABEL_13;
      }
      switch ( v4[1] )
      {
        case 0x146u:
          if ( (unsigned int)v5 >= 0x10 )
          {
            v7 = DirectComposition::CApplicationChannel::LookupResourceMarshaler(
                   *(DirectComposition::CApplicationChannel **)this,
                   v4[2]);
            if ( v7 )
            {
              for ( i = *((_DWORD *)v7 + 9); i < 0xC0; i = dword_140274520[i] )
              {
                if ( i == 132 )
                {
                  v4[2] = *((_DWORD *)v7 + 8);
                  goto LABEL_26;
                }
              }
            }
            v2 = -1073741811;
            v18 = -1073741811;
LABEL_26:
            v9 = v4 + 4;
            v10 = v5 - 16;
            if ( v2 < 0 )
              goto LABEL_12;
            do
            {
              if ( v10 < 8 )
                break;
              v11 = *v9;
              v12 = v11;
              v2 = v11 > v10
                 ? -1073741811
                 : DirectComposition::CApplicationChannel::CMilCommandBatchParser::ValidateAndTranslateRenderDataInstructionGenerated(
                     (DirectComposition::CApplicationChannel **)this,
                     v9 + 1,
                     v11);
              v9 = (unsigned int *)((char *)v9 + v12);
              v18 = v2;
              v10 -= v12;
            }
            while ( v2 >= 0 );
            v4 = v19;
            if ( v2 < 0 || !v10 )
              goto LABEL_12;
          }
LABEL_30:
          v2 = -1073741811;
          v18 = -1073741811;
          goto LABEL_12;
        case 0x17Cu:
          if ( (_DWORD)v5 == 24 )
          {
            v15 = DirectComposition::CApplicationChannel::LookupResourceMarshaler(
                    *(DirectComposition::CApplicationChannel **)this,
                    v4[2]);
            v16 = v15;
            if ( v15
              && (DirectComposition::CResourceMarshaler::IsDerivedResourceType(*((_DWORD *)v15 + 9), 182)
               || (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *))(*(_QWORD *)v16 + 208LL))(v16)
               && !v4[4]) )
            {
              v4[2] = *((_DWORD *)v16 + 8);
            }
            else
            {
              v18 = -1073741811;
            }
            DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
              (DirectComposition::CApplicationChannel **)this,
              v4 + 3,
              182,
              1,
              &v18);
            DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
              (DirectComposition::CApplicationChannel **)this,
              v4 + 4,
              182,
              1,
              &v18);
            v2 = v18;
            goto LABEL_12;
          }
          goto LABEL_30;
        case 0x17Eu:
          if ( (_DWORD)v5 == 12 )
          {
            v13 = DirectComposition::CApplicationChannel::LookupResourceMarshaler(
                    *(DirectComposition::CApplicationChannel **)this,
                    v4[2]);
            v14 = v13;
            if ( v13 )
            {
              if ( DirectComposition::CResourceMarshaler::IsDerivedResourceType(*((_DWORD *)v13 + 9), 182)
                || (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *))(*(_QWORD *)v14 + 208LL))(v14) )
              {
                v4[2] = *((_DWORD *)v14 + 8);
                goto LABEL_12;
              }
            }
          }
          goto LABEL_30;
      }
      v2 = DirectComposition::CApplicationChannel::CMilCommandBatchParser::ValidateAndTranslateCommandGenerated(
             this,
             v4 + 1,
             v5);
      v18 = v2;
LABEL_12:
      v4 = (unsigned int *)((char *)v4 + v5);
      v19 = v4;
      v3 -= v5;
LABEL_13:
      if ( v2 < 0 )
        break;
    }
    if ( v2 >= 0 && v3 )
      v2 = -1073741811;
    v1 = (_QWORD *)*v20;
    v20 = (_QWORD *)*v20;
  }
  while ( v2 >= 0 );
  return (unsigned int)v2;
}
