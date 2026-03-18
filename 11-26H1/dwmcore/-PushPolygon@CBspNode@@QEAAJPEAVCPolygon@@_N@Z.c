/*
 * XREFs of ?PushPolygon@CBspNode@@QEAAJPEAVCPolygon@@_N@Z @ 0x180073624
 * Callers:
 *     ?CheckVisibilityAndInsertIntoBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@_N@Z @ 0x180071C64 (-CheckVisibilityAndInsertIntoBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@_N@Z.c)
 *     ?PushPolygon@CBspNode@@QEAAJPEAVCPolygon@@_N@Z @ 0x180073624 (-PushPolygon@CBspNode@@QEAAJPEAVCPolygon@@_N@Z.c)
 *     ?PreComputePostSubgraph@CBspPreComputeHelper@@QEAAJPEAVCVisual@@PEBV2@@Z @ 0x1800737B0 (-PreComputePostSubgraph@CBspPreComputeHelper@@QEAAJPEAVCVisual@@PEBV2@@Z.c)
 * Callees:
 *     ??2CBspNode@@SAPEAX_K@Z @ 0x180071FB8 (--2CBspNode@@SAPEAX_K@Z.c)
 *     ??0CBspNode@@QEAA@_N@Z @ 0x180071FE8 (--0CBspNode@@QEAA@_N@Z.c)
 *     ?PushPolygon@CBspNode@@QEAAJPEAVCPolygon@@_N@Z @ 0x180073624 (-PushPolygon@CBspNode@@QEAAJPEAVCPolygon@@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ReleaseSubTree@CBspNode@@QEAAXXZ @ 0x18019DFF8 (-ReleaseSubTree@CBspNode@@QEAAXXZ.c)
 *     ??$ReleaseInterfaceNoNULL@VCPolygon@@@@YAXPEAVCPolygon@@@Z @ 0x18019E020 (--$ReleaseInterfaceNoNULL@VCPolygon@@@@YAXPEAVCPolygon@@@Z.c)
 *     ?CompareAndSplit@CPolygon@@QEAAJPEAV1@PEAW4Relation@D2DVectorHelper@@PEAPEAV1@2@Z @ 0x1801A20A0 (-CompareAndSplit@CPolygon@@QEAAJPEAV1@PEAW4Relation@D2DVectorHelper@@PEAPEAV1@2@Z.c)
 *     ?AddPolygon@CBspNode@@AEAAXPEAVCPolygon@@@Z @ 0x1801C73F8 (-AddPolygon@CBspNode@@AEAAXPEAVCPolygon@@@Z.c)
 */

__int64 __fastcall CBspNode::PushPolygon(CBspNode *this, struct CPolygon *a2, char a3)
{
  int v3; // ebx
  CPolygon **v5; // rcx
  struct CPolygon *v7; // rsi
  int v8; // eax
  struct CPolygon *v9; // r14
  CBspNode *v11; // rax
  CBspNode *v12; // rax
  CBspNode *v13; // rax
  CBspNode *v14; // rax
  int v15; // r9d
  int v16; // eax
  unsigned int v17; // [rsp+20h] [rbp-20h]
  struct CPolygon *v18; // [rsp+30h] [rbp-10h] BYREF
  int v19; // [rsp+70h] [rbp+30h] BYREF
  struct CPolygon *v20; // [rsp+88h] [rbp+48h] BYREF

  v3 = 0;
  v5 = (CPolygon **)*((_QWORD *)this + 4);
  v7 = a2;
  v20 = 0LL;
  v18 = 0LL;
  v19 = 0;
  if ( v5 == *((CPolygon ***)this + 5) )
  {
    CBspNode::AddPolygon(this, a2);
    return (unsigned int)v3;
  }
  v8 = CPolygon::CompareAndSplit(*v5, a2, (enum D2DVectorHelper::Relation *)&v19, &v20, &v18);
  v3 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x80u, 0LL);
    v9 = v20;
    v7 = v18;
    goto LABEL_8;
  }
  if ( !v19 )
  {
    CBspNode::AddPolygon(this, v7);
    v9 = v20;
    goto LABEL_5;
  }
  if ( v19 == 1 )
  {
    v9 = v7;
    goto LABEL_5;
  }
  v9 = v20;
  if ( v19 != 2 )
LABEL_5:
    v7 = v18;
  if ( !v9 )
    goto LABEL_7;
  v11 = (CBspNode *)*((_QWORD *)this + 2);
  if ( !v11 )
  {
    v12 = (CBspNode *)CBspNode::operator new();
    if ( !v12 )
    {
      *((_QWORD *)this + 2) = 0LL;
LABEL_28:
      v17 = 153;
LABEL_31:
      v15 = -2147024882;
      v3 = -2147024882;
LABEL_33:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, v17, 0LL);
      goto LABEL_8;
    }
    v11 = CBspNode::CBspNode(v12, a3);
    *((_QWORD *)this + 2) = v11;
    if ( !v11 )
      goto LABEL_28;
  }
  v16 = CBspNode::PushPolygon(v11, v9, a3);
  v3 = v16;
  if ( v16 < 0 )
  {
    v17 = 155;
    goto LABEL_32;
  }
LABEL_7:
  if ( v7 )
  {
    v13 = (CBspNode *)*((_QWORD *)this + 3);
    if ( !v13 )
    {
      v14 = (CBspNode *)CBspNode::operator new();
      if ( !v14 )
      {
        *((_QWORD *)this + 3) = 0LL;
LABEL_30:
        v17 = 163;
        goto LABEL_31;
      }
      v13 = CBspNode::CBspNode(v14, a3);
      *((_QWORD *)this + 3) = v13;
      if ( !v13 )
        goto LABEL_30;
    }
    v16 = CBspNode::PushPolygon(v13, v7, a3);
    v3 = v16;
    if ( v16 >= 0 )
      goto LABEL_8;
    v17 = 165;
LABEL_32:
    v15 = v16;
    goto LABEL_33;
  }
LABEL_8:
  if ( v19 == 3 )
  {
    ReleaseInterfaceNoNULL<CPolygon>(v9);
    ReleaseInterfaceNoNULL<CPolygon>(v7);
  }
  if ( v3 < 0 )
    CBspNode::ReleaseSubTree(this);
  return (unsigned int)v3;
}
