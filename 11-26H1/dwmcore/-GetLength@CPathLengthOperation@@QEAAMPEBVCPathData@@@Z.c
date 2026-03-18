/*
 * XREFs of ?GetLength@CPathLengthOperation@@QEAAMPEBVCPathData@@@Z @ 0x180054E8C
 * Callers:
 *     ?Trim@CTrimPathOperation@@QEAAJPEBVCPathData@@MMMPEAPEAV2@@Z @ 0x180053598 (-Trim@CTrimPathOperation@@QEAAJPEBVCPathData@@MMMPEAPEAV2@@Z.c)
 * Callees:
 *     ??Econst_iterator@SegmentCollection@Path@@QEAAAEAV012@XZ @ 0x180053E1C (--Econst_iterator@SegmentCollection@Path@@QEAAAEAV012@XZ.c)
 *     ?Flatten@?$CBezierFlattener@MVCMilPoint2F@@@@QEAA_NPEAVCMilPoint2F@@0PEAMIPEAI_N@Z @ 0x180054480 (-Flatten@-$CBezierFlattener@MVCMilPoint2F@@@@QEAA_NPEAVCMilPoint2F@@0PEAMIPEAI_N@Z.c)
 *     ?GetFirstTangent@?$CBezierFlattener@MVCMilPoint2F@@@@QEBAJAEAVCMilPoint2F@@@Z @ 0x1800546A0 (-GetFirstTangent@-$CBezierFlattener@MVCMilPoint2F@@@@QEBAJAEAVCMilPoint2F@@@Z.c)
 *     ?IsSimpleGeometry@CPathData@@QEBA_NXZ @ 0x180054E28 (-IsSimpleGeometry@CPathData@@QEBA_NXZ.c)
 *     ?SetPoints@?$CBezierFlattener@MVCMilPoint2F@@@@QEAAXAEBVCMilPoint2F@@000@Z @ 0x18018492C (-SetPoints@-$CBezierFlattener@MVCMilPoint2F@@@@QEAAXAEBVCMilPoint2F@@000@Z.c)
 *     ?SumPointDistances@CPathLengthOperation@@AEBAMI@Z @ 0x1801C9F48 (-SumPointDistances@CPathLengthOperation@@AEBAMI@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 *     _hypot_0 @ 0x1802B9684 (_hypot_0.c)
 */

float __fastcall CPathLengthOperation::GetLength(CPathLengthOperation *this, const struct CPathData *a2)
{
  float v3; // xmm7_4
  _BYTE *v6; // rbx
  float v7; // xmm11_4
  _BYTE *v8; // rdi
  float v9; // xmm12_4
  float v10; // xmm8_4
  float v11; // xmm9_4
  float v12; // xmm10_4
  int v13; // xmm1_4
  int v14; // xmm0_4
  int v15; // xmm1_4
  int v16; // xmm0_4
  int v17; // xmm1_4
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // r8
  char v21; // si
  __int64 v22; // r8
  double v23; // xmm0_8
  int v24; // xmm0_4
  _DWORD v25[2]; // [rsp+48h] [rbp-59h] BYREF
  _DWORD v26[2]; // [rsp+50h] [rbp-51h] BYREF
  _BYTE *v27; // [rsp+58h] [rbp-49h] BYREF
  __int128 v28; // [rsp+60h] [rbp-41h] BYREF
  void *retaddr; // [rsp+100h] [rbp+5Fh]
  unsigned int v30; // [rsp+110h] [rbp+6Fh] BYREF
  int v31; // [rsp+118h] [rbp+77h] BYREF
  int v32; // [rsp+11Ch] [rbp+7Bh]
  int v33; // [rsp+120h] [rbp+7Fh] BYREF
  int v34; // [rsp+124h] [rbp+83h]

  v3 = *((float *)a2 + 12);
  if ( v3 == 0.0 && CPathData::IsSimpleGeometry(a2) )
  {
    v6 = (_BYTE *)*((_QWORD *)a2 + 2);
    v7 = 0.0;
    v8 = (_BYTE *)*((_QWORD *)a2 + 3);
    v9 = 0.0;
    v27 = v6;
    v10 = 0.0;
    v11 = 0.0;
    while ( v6 != v8 )
    {
      v12 = 0.0;
      if ( *v6 )
      {
        switch ( *v6 )
        {
          case 1:
            if ( v6[2] )
              v12 = hypot_0((float)(v7 - v10), (float)(v9 - v11));
            break;
          case 2:
            v23 = hypot_0((float)(v10 - *((float *)v6 + 2)), (float)(v11 - *((float *)v6 + 3)));
            v10 = *((float *)v6 + 2);
            v11 = *((float *)v6 + 3);
            v12 = v23;
            break;
          case 5:
            v13 = *((_DWORD *)v6 + 7);
            v31 = *((_DWORD *)v6 + 6);
            v14 = *((_DWORD *)v6 + 4);
            v32 = v13;
            v15 = *((_DWORD *)v6 + 5);
            v33 = v14;
            v16 = *((_DWORD *)v6 + 2);
            v34 = v15;
            v17 = *((_DWORD *)v6 + 3);
            v25[0] = v16;
            v25[1] = v17;
            *(float *)v26 = v10;
            *(float *)&v26[1] = v11;
            CBezierFlattener<float,CMilPoint2F>::SetPoints(
              (_DWORD)this,
              (unsigned int)v26,
              (unsigned int)v25,
              (unsigned int)&v33,
              (__int64)&v31);
            if ( (int)CBezierFlattener<float,CMilPoint2F>::GetFirstTangent(v18, (__int64)&v28) >= 0 )
            {
              *((float *)this + 23) = v10;
              *((float *)this + 24) = v11;
              v30 = 0;
              v21 = CBezierFlattener<float,CMilPoint2F>::Flatten(v19, (__int64)this + 100, v20, 0LL, 0xFu, &v30, 1);
              v12 = CPathLengthOperation::SumPointDistances(this, v30) + 0.0;
              while ( v21 )
              {
                v24 = *((_DWORD *)this + 54);
                *((_DWORD *)this + 23) = *((_DWORD *)this + 53);
                *((_DWORD *)this + 24) = v24;
                v30 = 0;
                v21 = CBezierFlattener<float,CMilPoint2F>::Flatten(
                        (__int64)this,
                        (__int64)this + 100,
                        v22,
                        0LL,
                        0xFu,
                        &v30,
                        1);
                v12 = v12 + CPathLengthOperation::SumPointDistances(this, v30);
              }
            }
            v10 = *((float *)v6 + 6);
            v11 = *((float *)v6 + 7);
            break;
          default:
            ModuleFailFastForHRESULT(-2147418113, retaddr);
        }
      }
      else
      {
        v7 = *((float *)v6 + 2);
        v9 = *((float *)v6 + 3);
        v10 = v7;
        v11 = v9;
      }
      *((float *)v6 + 1) = v12;
      v3 = v3 + v12;
      Path::SegmentCollection::const_iterator::operator++(&v27);
      v6 = v27;
    }
    *((float *)a2 + 12) = v3;
  }
  return v3;
}
