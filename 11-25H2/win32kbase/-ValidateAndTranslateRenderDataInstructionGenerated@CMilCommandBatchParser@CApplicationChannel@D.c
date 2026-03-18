/*
 * XREFs of ?ValidateAndTranslateRenderDataInstructionGenerated@CMilCommandBatchParser@CApplicationChannel@DirectComposition@@AEAAJPEAXI@Z @ 0x14005B21C
 * Callers:
 *     ?ValidateAndTranslateHandles@CMilCommandBatchParser@CApplicationChannel@DirectComposition@@QEAAJXZ @ 0x14005B550 (-ValidateAndTranslateHandles@CMilCommandBatchParser@CApplicationChannel@DirectComposition@@QEAAJ.c)
 * Callees:
 *     ?TranslateMilCommandBatchHandle@CMilCommandBatchParser@CApplicationChannel@DirectComposition@@AEAAXPEAIW4MIL_RESOURCE_TYPE@@_NPEAJ@Z @ 0x14002194C (-TranslateMilCommandBatchHandle@CMilCommandBatchParser@CApplicationChannel@DirectComposition@@AE.c)
 *     ?LookupResourceMarshaler@CApplicationChannel@DirectComposition@@QEAAPEAVCResourceMarshaler@2@I@Z @ 0x1400221BC (-LookupResourceMarshaler@CApplicationChannel@DirectComposition@@QEAAPEAVCResourceMarshaler@2@I@Z.c)
 *     ?IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z @ 0x14005B060 (-IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::CMilCommandBatchParser::ValidateAndTranslateRenderDataInstructionGenerated(
        DirectComposition::CApplicationChannel **this,
        unsigned int *a2,
        int a3)
{
  unsigned int v3; // eax
  unsigned int v4; // edi
  unsigned int v7; // eax
  unsigned int v8; // eax
  unsigned int v9; // eax
  unsigned int v10; // eax
  int v11; // edx
  struct DirectComposition::CResourceMarshaler *v12; // rax
  int v13; // edx
  unsigned int v14; // eax
  unsigned int v15; // eax
  int v16; // edx
  struct DirectComposition::CResourceMarshaler *v17; // rax
  __int64 v18; // r8
  int v19; // edx
  struct DirectComposition::CResourceMarshaler *v20; // rax
  int v21; // edx
  __int64 v22; // r8
  int v23; // edx
  __int64 v24; // r8
  bool v26; // zf
  bool v27; // zf
  int v28; // edx
  unsigned int v29; // eax
  unsigned int v30; // eax
  int v31; // edx
  struct DirectComposition::CResourceMarshaler *v32; // rax
  __int64 v33; // r8
  int v34; // edx
  int v35; // edx
  unsigned int v36; // [rsp+48h] [rbp+10h] BYREF

  v3 = *a2;
  v4 = 0;
  v36 = 0;
  if ( v3 <= 0x1A8 )
  {
    if ( v3 == 424 )
    {
      if ( a3 != 28 )
        return (unsigned int)-1073741811;
      v23 = a2[1];
      if ( v23 )
      {
        v12 = DirectComposition::CApplicationChannel::LookupResourceMarshaler(*this, v23);
        if ( !v12 )
          return (unsigned int)-1073741811;
        v13 = 94;
        goto LABEL_28;
      }
      return v4;
    }
    v14 = v3 - 419;
    if ( v14 )
    {
      v15 = v14 - 1;
      if ( !v15 )
      {
        if ( a3 != 16 )
          return (unsigned int)-1073741811;
        v16 = a2[1];
        if ( v16 )
        {
          v17 = DirectComposition::CApplicationChannel::LookupResourceMarshaler(*this, v16);
          if ( v17 && DirectComposition::CResourceMarshaler::IsDerivedResourceType(*((_DWORD *)v17 + 9), 94) )
            a2[1] = *(_DWORD *)(v18 + 32);
          else
            v4 = -1073741811;
        }
        v19 = a2[2];
        if ( !v19 )
          return v4;
        v20 = DirectComposition::CApplicationChannel::LookupResourceMarshaler(*this, v19);
        if ( !v20 )
          return (unsigned int)-1073741811;
        v21 = 66;
LABEL_22:
        if ( !DirectComposition::CResourceMarshaler::IsDerivedResourceType(*((_DWORD *)v20 + 9), v21) )
          return (unsigned int)-1073741811;
        a2[2] = *(_DWORD *)(v22 + 32);
        return v4;
      }
      v29 = v15 - 1;
      if ( !v29 )
      {
        if ( a3 == 32 )
        {
          DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
            this,
            a2 + 1,
            66,
            1,
            &v36);
          DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
            this,
            a2 + 2,
            25,
            1,
            &v36);
          DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
            this,
            a2 + 3,
            25,
            1,
            &v36);
          DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
            this,
            a2 + 4,
            61,
            1,
            &v36);
          DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
            this,
            a2 + 5,
            61,
            1,
            &v36);
          DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
            this,
            a2 + 6,
            61,
            1,
            &v36);
          return v36;
        }
        return (unsigned int)-1073741811;
      }
      v30 = v29 - 1;
      if ( v30 )
      {
        if ( a3 != 16 || v30 != 1 )
          return (unsigned int)-1073741811;
        v31 = a2[1];
        if ( v31 )
        {
          v32 = DirectComposition::CApplicationChannel::LookupResourceMarshaler(*this, v31);
          if ( v32 && DirectComposition::CResourceMarshaler::IsDerivedResourceType(*((_DWORD *)v32 + 9), 67) )
            a2[1] = *(_DWORD *)(v33 + 32);
          else
            v4 = -1073741811;
        }
        v34 = a2[2];
        if ( !v34 )
          return v4;
        v20 = DirectComposition::CApplicationChannel::LookupResourceMarshaler(*this, v34);
        if ( !v20 )
          return (unsigned int)-1073741811;
        v21 = 84;
        goto LABEL_22;
      }
      v26 = a3 == 28;
    }
    else
    {
      v26 = a3 == 16;
    }
LABEL_32:
    if ( !v26 )
      return (unsigned int)-1073741811;
    v28 = a2[1];
    if ( !v28 )
      return v4;
    v12 = DirectComposition::CApplicationChannel::LookupResourceMarshaler(*this, v28);
    if ( !v12 )
      return (unsigned int)-1073741811;
    v13 = 84;
    goto LABEL_28;
  }
  v7 = v3 - 425;
  if ( !v7 )
  {
    v27 = a3 == 40;
LABEL_35:
    if ( v27 )
      return v4;
    return (unsigned int)-1073741811;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    v26 = a3 == 40;
    goto LABEL_32;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    if ( a3 != 12 )
      return (unsigned int)-1073741811;
    v35 = a2[1];
    if ( !v35 )
      return v4;
    v12 = DirectComposition::CApplicationChannel::LookupResourceMarshaler(*this, v35);
    if ( !v12 )
      return (unsigned int)-1073741811;
    v13 = 182;
    goto LABEL_28;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    v27 = a3 == 8;
    goto LABEL_35;
  }
  if ( a3 != 12 || v10 != 1 )
    return (unsigned int)-1073741811;
  v11 = a2[1];
  if ( v11 )
  {
    v12 = DirectComposition::CApplicationChannel::LookupResourceMarshaler(*this, v11);
    if ( !v12 )
      return (unsigned int)-1073741811;
    v13 = 172;
LABEL_28:
    if ( DirectComposition::CResourceMarshaler::IsDerivedResourceType(*((_DWORD *)v12 + 9), v13) )
    {
      a2[1] = *(_DWORD *)(v24 + 32);
      return v4;
    }
    return (unsigned int)-1073741811;
  }
  return v4;
}
