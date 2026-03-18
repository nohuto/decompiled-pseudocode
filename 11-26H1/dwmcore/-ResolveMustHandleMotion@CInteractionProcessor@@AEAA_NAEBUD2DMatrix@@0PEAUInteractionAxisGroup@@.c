/*
 * XREFs of ?ResolveMustHandleMotion@CInteractionProcessor@@AEAA_NAEBUD2DMatrix@@0PEAUInteractionAxisGroup@@PEAUInteractionAxis@@PEAW4InteractionState@@@Z @ 0x18017B0A4
 * Callers:
 *     ?CalculateHandledInteractions@CInteractionProcessor@@QEAAJAEBUInteractionAxis@@PEAUInteractionAxisGroup@@1AEBV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@PEAUIInteractionContextWrapper@@PEAW4InteractionState@@PEAU2@@Z @ 0x18017A7F8 (-CalculateHandledInteractions@CInteractionProcessor@@QEAAJAEBUInteractionAxis@@PEAUInteractionAx.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3333AEBU?$_tlgWrapperByVal@$03@@444444444444444@Z @ 0x1800A9B64 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@_ea_1800A9B64.c)
 *     ?D3DXVec3TransformCoord@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z @ 0x18017B44C (-D3DXVec3TransformCoord@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z.c)
 *     ?D3DXVector3Angle@@YAMAEBUD2DVector3@@0@Z @ 0x18017E660 (-D3DXVector3Angle@@YAMAEBUD2DVector3@@0@Z.c)
 */

unsigned __int8 __fastcall CInteractionProcessor::ResolveMustHandleMotion(
        CInteractionProcessor *this,
        const struct D2DMatrix *a2,
        const struct D2DMatrix *a3,
        struct InteractionAxisGroup *a4,
        struct InteractionAxis *a5,
        enum InteractionState *a6)
{
  unsigned int v7; // r11d
  CInteractionProcessor *v8; // r13
  unsigned __int8 v9; // bl
  char v10; // r15
  bool v11; // si
  bool v12; // r15
  int v13; // eax
  const struct D2DMatrix *v14; // r10
  unsigned int v15; // r12d
  __int64 v16; // rax
  __int64 v17; // xmm0_8
  float v18; // xmm0_4
  CInteractionProcessor *v20; // [rsp+D8h] [rbp-80h] BYREF
  int v21; // [rsp+E0h] [rbp-78h]
  __int64 v22; // [rsp+E8h] [rbp-70h] BYREF
  int v23; // [rsp+F0h] [rbp-68h]
  int v24; // [rsp+F8h] [rbp-60h]
  int v25; // [rsp+FCh] [rbp-5Ch]
  int v26; // [rsp+100h] [rbp-58h]
  int v27; // [rsp+104h] [rbp-54h]
  int v28; // [rsp+108h] [rbp-50h]
  int v29; // [rsp+10Ch] [rbp-4Ch]
  int v30; // [rsp+110h] [rbp-48h]
  int v31; // [rsp+114h] [rbp-44h]
  int v32; // [rsp+118h] [rbp-40h]
  int v33; // [rsp+11Ch] [rbp-3Ch]
  int v34; // [rsp+120h] [rbp-38h]
  BOOL v35; // [rsp+124h] [rbp-34h]
  BOOL v36; // [rsp+128h] [rbp-30h]
  int v37; // [rsp+12Ch] [rbp-2Ch]
  int v38; // [rsp+130h] [rbp-28h]
  __int64 v39; // [rsp+138h] [rbp-20h]
  __int64 v40; // [rsp+140h] [rbp-18h]
  __int64 v41; // [rsp+148h] [rbp-10h]

  v7 = 0;
  v8 = this;
  v9 = 1;
  if ( *((_BYTE *)a4 + 1) )
    v9 = *((_BYTE *)a5 + 1) != 0;
  if ( *(_BYTE *)a4 )
  {
    LOBYTE(this) = -(*(_BYTE *)a5 != 0);
    v9 &= (unsigned __int8)this;
  }
  if ( *((_BYTE *)a4 + 2) && *((float *)a5 + 3) == 0.0 )
    v9 &= -((*((_BYTE *)v8 + 808) & 4) != 0);
  v10 = *((_BYTE *)v8 + 148);
  v20 = 0LL;
  v11 = (v10 & 0x20) != 0;
  v21 = 0;
  v12 = (v10 & 0x10) != 0;
  if ( v12 || v11 )
  {
    v13 = *((_DWORD *)a5 + 3);
    v20 = *(CInteractionProcessor **)((char *)a5 + 4);
    v21 = v13;
    D3DXVec3TransformCoord((struct D2DVector3 *)&v20, (const struct D2DVector3 *)&v20, a3);
    v15 = v7;
    if ( !v9 )
    {
LABEL_17:
      this = (CInteractionProcessor *)*((unsigned int *)v8 + 196);
      *(_WORD *)a5 = 0;
      *(_DWORD *)a6 = (_DWORD)this;
      *(_QWORD *)((char *)a5 + 4) = 0LL;
      *((_DWORD *)a5 + 3) = v7;
      goto LABEL_18;
    }
    while ( v15 < *((_DWORD *)a4 + 8) )
    {
      v16 = *((_QWORD *)a4 + 1);
      v17 = *(_QWORD *)(v16 + 16LL * v15);
      LODWORD(v16) = *(_DWORD *)(v16 + 16LL * v15 + 8);
      v22 = v17;
      v23 = v16;
      D3DXVec3TransformCoord((struct D2DVector3 *)&v22, (const struct D2DVector3 *)&v22, v14);
      v18 = D3DXVector3Angle((const struct D2DVector3 *)&v20, (const struct D2DVector3 *)&v22);
      if ( COERCE_FLOAT(LODWORD(v18) & _xmm) < 0.17453
        || COERCE_FLOAT(COERCE_UNSIGNED_INT(v18 - 3.1415927) & _xmm) < 0.17453
        || COERCE_FLOAT(COERCE_UNSIGNED_INT(v18 + 3.1415927) & _xmm) < 0.17453 )
      {
        v9 = 1;
        v7 = 0;
      }
      else
      {
        v7 = 0;
        v9 = 0;
      }
      v14 = a2;
      ++v15;
      if ( !v9 )
        goto LABEL_16;
    }
  }
  else
  {
LABEL_16:
    if ( !v9 )
      goto LABEL_17;
  }
LABEL_18:
  if ( (unsigned int)dword_1803DC880 > 4 && (qword_1803DC890 & 2) != 0 && (qword_1803DC898 & 2) == qword_1803DC898 )
  {
    v24 = HIDWORD(v20);
    v25 = (int)v20;
    v26 = *((_DWORD *)a5 + 3);
    v27 = *((_DWORD *)a5 + 2);
    v28 = *((_DWORD *)a5 + 1);
    v29 = *((unsigned __int8 *)a5 + 1);
    v30 = *(unsigned __int8 *)a5;
    v31 = *((_DWORD *)a4 + 8);
    v32 = *((unsigned __int8 *)a4 + 2);
    v33 = *((unsigned __int8 *)a4 + 1);
    v34 = *(unsigned __int8 *)a4;
    v35 = v11;
    v36 = v12;
    v37 = v9;
    v38 = *((_DWORD *)v8 + 197);
    v39 = *((_QWORD *)v8 + 60);
    v40 = *((_QWORD *)v8 + 40);
    v41 = *((_QWORD *)v8 + 20);
    v22 = *(_QWORD *)v8;
    v20 = v8;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)this,
      (__int64)&unk_1803B1FE1);
  }
  return v9;
}
