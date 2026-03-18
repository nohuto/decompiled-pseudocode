/*
 * XREFs of ??$ResolveProhibitedMotion@UDwmMousewheelInteractionConfigurationPrimitive@@W4FlagsEnum@DwmInteractionTypeMousewheelPrimitiveType@@@CInteractionProcessor@@AEAA_NAEBV?$DynArray@UDwmMousewheelInteractionConfigurationPrimitive@@$0A@@@PEAUInteractionAxis@@PEAW4InteractionState@@@Z @ 0x1801B9D78
 * Callers:
 *     ?ResolveProhibitedMotion@CInteractionProcessor@@AEAA_NAEBV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@PEAUInteractionAxis@@PEAW4InteractionState@@@Z @ 0x18017AFC4 (-ResolveProhibitedMotion@CInteractionProcessor@@AEAA_NAEBV-$DynArray@PEAUInteractionConfiguratio.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3333AEBU?$_tlgWrapperByVal@$03@@44444444444444444444@Z @ 0x180001344 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U.c)
 *     ?D3DXVec3TransformCoord@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z @ 0x18017B44C (-D3DXVec3TransformCoord@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z.c)
 *     ?AxisContainsInteraction@magic@@YA_NAEBUInteractionAxis@@@Z @ 0x1801BA1A8 (-AxisContainsInteraction@magic@@YA_NAEBUInteractionAxis@@@Z.c)
 */

char __fastcall CInteractionProcessor::ResolveProhibitedMotion<DwmMousewheelInteractionConfigurationPrimitive,enum DwmInteractionTypeMousewheelPrimitiveType::FlagsEnum>(
        __int64 *a1,
        __int64 *a2,
        __int64 a3,
        _DWORD *a4)
{
  char v8; // si
  __int64 v10; // r14
  __int64 v11; // rax
  unsigned int v12; // ecx
  __int64 v13; // rax
  int v14; // ecx
  int v15; // eax
  int v16; // eax
  const struct InteractionAxis *v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // [rsp+148h] [rbp-30h] BYREF
  int v20; // [rsp+150h] [rbp-28h]
  _DWORD v21[5]; // [rsp+158h] [rbp-20h] BYREF
  float v22; // [rsp+16Ch] [rbp-Ch]
  int v23; // [rsp+170h] [rbp-8h]
  int v24; // [rsp+174h] [rbp-4h]
  int v25; // [rsp+178h] [rbp+0h]
  int v26; // [rsp+17Ch] [rbp+4h]
  float v27; // [rsp+180h] [rbp+8h]
  __int64 v28; // [rsp+184h] [rbp+Ch]
  __int64 v29; // [rsp+18Ch] [rbp+14h]
  int v30; // [rsp+194h] [rbp+1Ch]
  __int64 v31; // [rsp+198h] [rbp+20h]
  __int64 v32; // [rsp+1A0h] [rbp+28h]
  __int64 v33; // [rsp+1A8h] [rbp+30h]
  __int64 v34; // [rsp+1B0h] [rbp+38h]
  __int64 *v35; // [rsp+1B8h] [rbp+40h]

  if ( *((_DWORD *)a2 + 6) && !magic::AxisContainsInteraction((magic *)a3, (const struct InteractionAxis *)a2) )
    return 0;
  v8 = 1;
  v10 = 0LL;
  do
  {
    if ( (unsigned int)v10 >= *((_DWORD *)a2 + 6) )
      break;
    v11 = *a2;
    v12 = *((_DWORD *)a1 + 198);
    if ( v12 >= *(_DWORD *)(*a2 + 12 * v10) && v12 <= *(_DWORD *)(v11 + 12 * v10 + 4) )
    {
      if ( (*(_BYTE *)(v11 + 12 * v10 + 8) & 0x40) != 0 )
        *(_BYTE *)a3 = 0;
      if ( *(char *)(*a2 + 12 * v10 + 8) < 0 )
        *(_BYTE *)(a3 + 1) = 0;
      v13 = *a2;
      v26 = 0;
      v25 = 0;
      v23 = 0;
      v14 = *(_DWORD *)(v13 + 12 * v10 + 8);
      v21[4] = 0;
      v21[2] = 0;
      v21[1] = 0;
      v27 = FLOAT_1_0;
      v22 = FLOAT_1_0;
      *(float *)v21 = FLOAT_1_0;
      v29 = 0LL;
      v28 = 0LL;
      v24 = 0;
      v21[3] = 0;
      v30 = 1065353216;
      if ( (v14 & 1) != 0 && *(float *)(a3 + 4) > 0.0 )
        v21[0] = 0;
      if ( (v14 & 2) != 0 && *(float *)(a3 + 4) < 0.0 )
        v21[0] = 0;
      if ( (v14 & 4) != 0 && *(float *)(a3 + 8) > 0.0 )
        v22 = 0.0;
      if ( (v14 & 8) != 0 && *(float *)(a3 + 8) < 0.0 )
        v22 = 0.0;
      if ( (v14 & 0x10) != 0 && *(float *)(a3 + 12) < 0.0 )
        v27 = 0.0;
      if ( (v14 & 0x20) != 0 && *(float *)(a3 + 12) > 0.0 )
        v27 = 0.0;
      v15 = *(_DWORD *)(a3 + 12);
      v19 = *(_QWORD *)(a3 + 4);
      v20 = v15;
      D3DXVec3TransformCoord((struct D2DVector3 *)&v19, (const struct D2DVector3 *)&v19, (const struct D2DMatrix *)v21);
      v16 = v20;
      *(_QWORD *)(a3 + 4) = v19;
      *(_DWORD *)(a3 + 12) = v16;
      if ( !magic::AxisContainsInteraction((magic *)a3, v17) )
      {
        v8 = 0;
        *a4 = *((_DWORD *)a1 + 196);
      }
      if ( (unsigned int)dword_1803DC880 > 4 && (qword_1803DC890 & 2) != 0 && (qword_1803DC898 & 2) == qword_1803DC898 )
      {
        v18 = *a2;
        v31 = a1[60];
        v32 = a1[40];
        v33 = a1[20];
        v34 = *a1;
        v35 = a1;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          v18,
          (__int64)&unk_1803B122C);
      }
    }
    v10 = (unsigned int)(v10 + 1);
  }
  while ( v8 );
  return v8;
}
