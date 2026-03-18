/*
 * XREFs of ?EmitUpdateCommands@CRectangleClipMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1400B0230
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1400ADE60 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?EmitUpdateCommands@CGeometryMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1400AFDD0 (-EmitUpdateCommands@CGeometryMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_adea4d0abd8eda5f6785acddb97df7f7___ @ 0x1400B0910 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_adea4d0abd8eda5f6785acddb97df7f.c)
 *     ?EmitSetTopInset@CRectangleClipMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1400B0990 (-EmitSetTopInset@CRectangleClipMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetRightInset@CRectangleClipMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1400B0A04 (-EmitSetRightInset@CRectangleClipMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitRectangle@CRectangleClipMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1400B0A78 (-EmitRectangle@CRectangleClipMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_434462f31b25e0468172fd3eb5297425___ @ 0x1400B1878 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_434462f31b25e0468172fd3eb529742.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_43b8043df50856006a6ed6aa1fc2f146___ @ 0x1400B1964 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_43b8043df50856006a6ed6aa1fc2f14.c)
 */

char __fastcall DirectComposition::CRectangleClipMarshaler::EmitUpdateCommands(
        DirectComposition::CRectangleClipMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v2; // di
  int v5; // eax
  DirectComposition::CGeometryMarshaler *v6; // rcx
  int v7; // r14d
  DirectComposition::CGeometryMarshaler *v8; // rcx
  int v10; // eax
  DirectComposition::CGeometryMarshaler *v11; // [rsp+40h] [rbp+20h] BYREF

  v2 = 0;
  if ( *((_BYTE *)this + 145) )
  {
    if ( DirectComposition::CGeometryMarshaler::EmitUpdateCommands(this, a2)
      && DirectComposition::CRectangleClipMarshaler::EmitRectangle(this, (struct DirectComposition::CBatch **)a2) )
    {
      v10 = *((_DWORD *)this + 4);
      v11 = this;
      if ( (v10 & 0x2000) == 0 )
      {
        if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_434462f31b25e0468172fd3eb5297425___(
                                 this,
                                 a2,
                                 &v11) )
          return v2;
        *((_DWORD *)this + 4) |= 0x2000u;
        v10 = *((_DWORD *)this + 4);
      }
      v7 = 0x8000;
      v11 = this;
      if ( (v10 & 0x8000) != 0 )
        return 1;
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_43b8043df50856006a6ed6aa1fc2f146___(
                               this,
                               a2,
                               &v11) )
        return v2;
      goto LABEL_14;
    }
  }
  else if ( DirectComposition::CGeometryMarshaler::EmitUpdateCommands(this, a2) )
  {
    v5 = *((_DWORD *)this + 4);
    v11 = this;
    if ( (v5 & 0x1000) == 0 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_adea4d0abd8eda5f6785acddb97df7f7___(
                               this,
                               a2,
                               &v11) )
        return v2;
      *((_DWORD *)this + 4) |= 0x1000u;
      v5 = *((_DWORD *)this + 4);
    }
    if ( (v5 & 0x2000) == 0 )
    {
      v11 = 0LL;
      if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, (void **)&v11) )
        return v2;
      v6 = v11;
      *(_DWORD *)v11 = 16;
      *((_QWORD *)v6 + 1) = 0LL;
      *((_DWORD *)v6 + 1) = 237;
      *((_DWORD *)v6 + 2) = *((_DWORD *)this + 8);
      *((_DWORD *)v6 + 3) = *((_DWORD *)this + 24);
      *((_DWORD *)this + 4) |= 0x2000u;
    }
    if ( DirectComposition::CRectangleClipMarshaler::EmitSetTopInset(this, (struct DirectComposition::CBatch **)a2)
      && DirectComposition::CRectangleClipMarshaler::EmitSetRightInset(this, (struct DirectComposition::CBatch **)a2) )
    {
      v7 = 0x10000;
      if ( (*((_DWORD *)this + 4) & 0x10000) != 0 )
        return 1;
      v11 = 0LL;
      if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, (void **)&v11) )
      {
        v8 = v11;
        *(_DWORD *)v11 = 16;
        *((_QWORD *)v8 + 1) = 0LL;
        *((_DWORD *)v8 + 1) = 236;
        *((_DWORD *)v8 + 2) = *((_DWORD *)this + 8);
        *((_DWORD *)v8 + 3) = *((_DWORD *)this + 27);
LABEL_14:
        *((_DWORD *)this + 4) |= v7;
        return 1;
      }
    }
  }
  return v2;
}
