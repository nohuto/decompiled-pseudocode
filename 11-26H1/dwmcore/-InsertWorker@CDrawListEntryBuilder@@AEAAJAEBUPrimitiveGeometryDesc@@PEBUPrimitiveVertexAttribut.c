/*
 * XREFs of ?InsertWorker@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x1800105E0
 * Callers:
 *     ?Insert@CDrawListEntryBuilder@@QEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800B6BA0 (-Insert@CDrawListEntryBuilder@@QEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc.c)
 * Callees:
 *     ?InsertHW@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBV?$vector_facade@UPrimitiveSubRect@CDrawListEntryBuilder@@V?$buffer_impl@UPrimitiveSubRect@CDrawListEntryBuilder@@$08$00Vliberal_expansion_policy@detail@@@detail@@@detail@@_N@Z @ 0x180010850 (-InsertHW@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDe.c)
 *     ?PartitionPrimitive@CDrawListEntryBuilder@@AEAAJIAEBUD2D_RECT_F@@PEAV?$vector_facade@UPrimitiveSubRect@CDrawListEntryBuilder@@V?$buffer_impl@UPrimitiveSubRect@CDrawListEntryBuilder@@$08$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x180011AF0 (-PartitionPrimitive@CDrawListEntryBuilder@@AEAAJIAEBUD2D_RECT_F@@PEAV-$vector_facade@UPrimitiveS.c)
 *     ?IsAxisAlignedRectangle@CCpuClip@@QEBA_NXZ @ 0x1800130B0 (-IsAxisAlignedRectangle@CCpuClip@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FullyContains@CCpuClip@@QEBA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800CCC30 (-FullyContains@CCpuClip@@QEBA_NAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@U.c)
 *     ?InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@_N@Z @ 0x180144440 (-InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributes.c)
 *     ??1?$vector_facade@UPrimitiveSubRect@CDrawListEntryBuilder@@V?$buffer_impl@UPrimitiveSubRect@CDrawListEntryBuilder@@$08$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x180182B70 (--1-$vector_facade@UPrimitiveSubRect@CDrawListEntryBuilder@@V-$buffer_impl@UPrimitiveSubRect@CDr.c)
 *     ?HasClip@CCpuClip@@QEBA_NXZ @ 0x180185E80 (-HasClip@CCpuClip@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 */

__int64 __fastcall CDrawListEntryBuilder::InsertWorker(
        CDrawListEntryBuilder *this,
        const struct PrimitiveGeometryDesc *a2,
        const struct PrimitiveVertexAttributesDesc *a3)
{
  int v6; // eax
  int inserted; // esi
  char v9; // r13
  __int128 *v10; // rdx
  __int64 v11; // rcx
  bool v12; // bl
  int v13; // eax
  char *v14; // r8
  _BYTE *v15; // rdi
  _BYTE *v16; // rbx
  char v17; // al
  __int128 v18; // xmm0
  char v19; // [rsp+30h] [rbp-D0h]
  __int128 v20; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v21; // [rsp+48h] [rbp-B8h]
  _BYTE *v22; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE *v23; // [rsp+68h] [rbp-98h]
  __int64 *v24; // [rsp+70h] [rbp-90h]
  _BYTE v25[216]; // [rsp+78h] [rbp-88h] BYREF
  __int64 v26; // [rsp+150h] [rbp+50h] BYREF

  if ( *((_BYTE *)this + 28) && (*((_BYTE *)a2 + 24) & 1) == 0 )
  {
    v9 = 1;
    if ( !*((_BYTE *)this + 4490) || !CCpuClip::HasClip(*((CCpuClip **)this + 2)) )
      goto LABEL_8;
    v14 = (char *)this + 56;
    if ( !*((_BYTE *)this + 4489) )
      v14 = 0LL;
    v20 = *v10;
    if ( !(unsigned __int8)CCpuClip::FullyContains(v11, &v20, v14) )
    {
      v12 = 1;
      if ( !CCpuClip::IsAxisAlignedRectangle(*((CCpuClip **)this + 2)) )
      {
        v22 = v25;
        v23 = v25;
        v24 = &v26;
        inserted = CDrawListEntryBuilder::PartitionPrimitive(
                     this,
                     (unsigned int)CCommonRegistryData::CpuClipWarpPartitionThreshold,
                     a2,
                     &v22);
        if ( inserted < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, inserted, 0x1DAu, 0LL);
        }
        else
        {
          v15 = v23;
          v16 = v22;
          if ( v23 == v22 )
          {
            v9 = 0;
            goto LABEL_18;
          }
          v17 = 0;
          v19 = 0;
          v20 = 0LL;
          v21 = 0LL;
          while ( v16 != v15 )
          {
            if ( v16[20] )
            {
              v18 = *(_OWORD *)v16;
              LODWORD(v21) = *((_DWORD *)a2 + 4) & *((_DWORD *)v16 + 4);
              v20 = v18;
              inserted = CDrawListEntryBuilder::InsertWARP(this, (const struct PrimitiveGeometryDesc *)&v20, a3, 1);
              if ( inserted < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, inserted, 0x1EEu, 0LL);
                goto LABEL_28;
              }
              v17 = v19;
            }
            else
            {
              v17 = 1;
              v19 = 1;
            }
            v16 += 24;
          }
          if ( !v17 || (inserted = CDrawListEntryBuilder::InsertHW(this, 1), inserted >= 0) )
          {
LABEL_18:
            detail::vector_facade<CDrawListEntryBuilder::PrimitiveSubRect,detail::buffer_impl<CDrawListEntryBuilder::PrimitiveSubRect,9,1,detail::liberal_expansion_policy>>::~vector_facade<CDrawListEntryBuilder::PrimitiveSubRect,detail::buffer_impl<CDrawListEntryBuilder::PrimitiveSubRect,9,1,detail::liberal_expansion_policy>>(&v22);
            if ( v9 )
              return (unsigned int)inserted;
            goto LABEL_2;
          }
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, inserted, 0x1FDu, 0LL);
        }
LABEL_28:
        detail::vector_facade<CDrawListEntryBuilder::PrimitiveSubRect,detail::buffer_impl<CDrawListEntryBuilder::PrimitiveSubRect,9,1,detail::liberal_expansion_policy>>::~vector_facade<CDrawListEntryBuilder::PrimitiveSubRect,detail::buffer_impl<CDrawListEntryBuilder::PrimitiveSubRect,9,1,detail::liberal_expansion_policy>>(&v22);
        return (unsigned int)inserted;
      }
    }
    else
    {
LABEL_8:
      v12 = 0;
    }
    v13 = CDrawListEntryBuilder::InsertWARP(this, a2, a3, v12);
    inserted = v13;
    if ( v13 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x1D5u, 0LL);
    return (unsigned int)inserted;
  }
LABEL_2:
  v6 = CDrawListEntryBuilder::InsertHW(this, 0);
  inserted = v6;
  if ( v6 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x20Au, 0LL);
  return (unsigned int)inserted;
}
