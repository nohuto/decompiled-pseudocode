/*
 * XREFs of ?ValidateAndTranslateHandles@CMilCommandBatchParser@CApplicationChannel@DirectComposition@@QEAAJXZ @ 0x140114718
 * Callers:
 *     ?Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_N1PEBUSynchronizationObject@2@PEAVCMilProtocolBlock@@PEAII@Z @ 0x1400A7400 (-Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_N1PEBUSynchronizationObject@2@PEAVCMil.c)
 * Callees:
 *     ?IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z @ 0x1400AA340 (-IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z.c)
 *     ?TranslateMilCommandBatchHandle@CMilCommandBatchParser@CApplicationChannel@DirectComposition@@AEAAXPEAIW4MIL_RESOURCE_TYPE@@_NPEAJ@Z @ 0x1400AA368 (-TranslateMilCommandBatchHandle@CMilCommandBatchParser@CApplicationChannel@DirectComposition@@AE.c)
 *     ?LookupResourceMarshaler@CApplicationChannel@DirectComposition@@QEAAPEAVCResourceMarshaler@2@I@Z @ 0x1400ABE60 (-LookupResourceMarshaler@CApplicationChannel@DirectComposition@@QEAAPEAVCResourceMarshaler@2@I@Z.c)
 *     ?ValidateAndTranslateCommandGenerated@CMilCommandBatchParser@CApplicationChannel@DirectComposition@@AEAAJPEAXI@Z @ 0x1401148FC (-ValidateAndTranslateCommandGenerated@CMilCommandBatchParser@CApplicationChannel@DirectCompositi.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::CMilCommandBatchParser::ValidateAndTranslateHandles(
        DirectComposition::CApplicationChannel::CMilCommandBatchParser *this)
{
  __int64 *v1; // r14
  int v3; // ebx
  unsigned int v4; // ebp
  unsigned int *v5; // r12
  __int64 v6; // rdi
  struct DirectComposition::CResourceMarshaler *v8; // rax
  struct DirectComposition::CResourceMarshaler *v9; // r15
  struct DirectComposition::CResourceMarshaler *v10; // rax
  struct DirectComposition::CResourceMarshaler *v11; // rbx
  int v12; // [rsp+60h] [rbp+8h] BYREF

  v1 = (__int64 *)*((_QWORD *)this + 1);
  v3 = 0;
  do
  {
    if ( !v1 )
      return (unsigned int)v3;
    v4 = *((_DWORD *)v1 + 5);
    v5 = (unsigned int *)(v1 + 3);
    v3 = 0;
    v12 = 0;
    while ( v4 >= 8 )
    {
      v6 = *v5;
      if ( (v6 & 3) != 0 || (unsigned int)v6 < 8 || (unsigned int)v6 > v4 )
      {
        v3 = -1073741811;
        v12 = -1073741811;
        goto LABEL_12;
      }
      if ( v5[1] == 295 )
      {
        if ( (_DWORD)v6 == 24 )
        {
          v10 = DirectComposition::CApplicationChannel::LookupResourceMarshaler(
                  *(DirectComposition::CApplicationChannel **)this,
                  v5[2]);
          v11 = v10;
          if ( v10
            && (DirectComposition::CResourceMarshaler::IsDerivedResourceType(*((_DWORD *)v10 + 9), 156)
             || (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *))(*(_QWORD *)v11 + 200LL))(v11)
             && !v5[4]) )
          {
            v5[2] = *((_DWORD *)v11 + 8);
          }
          else
          {
            v12 = -1073741811;
          }
          DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
            (DirectComposition::CApplicationChannel **)this,
            v5 + 3,
            156,
            1,
            &v12);
          DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
            (DirectComposition::CApplicationChannel **)this,
            v5 + 4,
            156,
            1,
            &v12);
          v3 = v12;
          goto LABEL_11;
        }
LABEL_32:
        v3 = -1073741811;
        v12 = -1073741811;
        goto LABEL_11;
      }
      if ( v5[1] == 297 )
      {
        if ( (_DWORD)v6 != 12 )
          goto LABEL_32;
        v8 = DirectComposition::CApplicationChannel::LookupResourceMarshaler(
               *(DirectComposition::CApplicationChannel **)this,
               v5[2]);
        v9 = v8;
        if ( !v8
          || !DirectComposition::CResourceMarshaler::IsDerivedResourceType(*((_DWORD *)v8 + 9), 156)
          && !(*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *))(*(_QWORD *)v9 + 200LL))(v9) )
        {
          goto LABEL_32;
        }
        v5[2] = *((_DWORD *)v9 + 8);
      }
      else
      {
        v3 = DirectComposition::CApplicationChannel::CMilCommandBatchParser::ValidateAndTranslateCommandGenerated(
               this,
               v5 + 1,
               v6);
        v12 = v3;
      }
LABEL_11:
      v5 = (unsigned int *)((char *)v5 + v6);
      v4 -= v6;
LABEL_12:
      if ( v3 < 0 )
        break;
    }
    if ( v3 >= 0 && v4 )
      v3 = -1073741811;
    v1 = (__int64 *)*v1;
  }
  while ( v3 >= 0 );
  return (unsigned int)v3;
}
