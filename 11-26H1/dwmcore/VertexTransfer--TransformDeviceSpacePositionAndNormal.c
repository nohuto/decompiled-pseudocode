/*
 * XREFs of VertexTransfer::TransformDeviceSpacePositionAndNormal @ 0x18011FE34
 * Callers:
 *     VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____0_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x18011F93C (VertexTransfer--Transfer_VertexTransfer--CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldX.c)
 *     VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____2_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x1801E3E74 (VertexTransfer--Transfer_VertexTransfer--CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ.c)
 *     VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____1_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x1801E3F90 (VertexTransfer--Transfer_VertexTransfer--CScale2DOperator_Vertex_UVxN_VertexXYW_Col_ea_1801E3F90.c)
 *     VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____0_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x1801E4510 (VertexTransfer--Transfer_VertexTransfer--CScale2DOperator_Vertex_UVxN_VertexXYW_Col_ea_1801E4510.c)
 *     VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____2_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x1801E4610 (VertexTransfer--Transfer_VertexTransfer--CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_World.c)
 *     VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____1_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x1801E470C (VertexTransfer--Transfer_VertexTransfer--CNonScale2DOperator_Vertex_UVxN_VertexXYW__ea_1801E470C.c)
 *     VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____0_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x18021250C (VertexTransfer--Transfer_VertexTransfer--CNonScale2DOperator_Vertex_UVxN_VertexXYW__ea_18021250C.c)
 *     VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____1_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x18025BB50 (VertexTransfer--Transfer_VertexTransfer--CGeneral3DOperator_Vertex_UVxN_VertexXYW_C_ea_18025BB50.c)
 *     VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____2_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x18025BCB4 (VertexTransfer--Transfer_VertexTransfer--CGeneral3DOperator_Vertex_UVxN_VertexXYW_C_ea_18025BCB4.c)
 * Callees:
 *     ?XMConvertFloatToHalfStream@PackedVector@DirectX@@YAPEAGPEAG_KPEBM11@Z @ 0x180120DD8 (-XMConvertFloatToHalfStream@PackedVector@DirectX@@YAPEAGPEAG_KPEBM11@Z.c)
 *     ?TransformIgnoreZW@CMILMatrix@@QEBAXPEBUD2D_POINT_2F@@PEAUD2D_POINT_4F@@I@Z @ 0x180121E2C (-TransformIgnoreZW@CMILMatrix@@QEBAXPEBUD2D_POINT_2F@@PEAUD2D_POINT_4F@@I@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 */

unsigned __int16 *__fastcall VertexTransfer::TransformDeviceSpacePositionAndNormal(
        struct D2D_POINT_2F *a1,
        CMILMatrix *this,
        _DWORD *a3,
        __int64 a4)
{
  float v7; // xmm3_4
  float v8; // xmm4_4
  float v9; // xmm0_4
  unsigned __int64 v11; // [rsp+20h] [rbp-48h]
  unsigned __int64 v12; // [rsp+28h] [rbp-40h]
  __int128 v13; // [rsp+30h] [rbp-38h] BYREF

  if ( this )
  {
    v13 = 0LL;
    CMILMatrix::TransformIgnoreZW(this, a1, (struct D2D_POINT_4F *)&v13, a4);
    v7 = *((float *)&v13 + 1);
    v8 = *((float *)&v13 + 2);
    *(_DWORD *)(a4 + 16) = v13;
    *(float *)(a4 + 20) = v7;
    *(float *)(a4 + 24) = v8;
    v9 = *((float *)&v13 + 3);
    if ( *((float *)&v13 + 3) != 1.0 && *((float *)&v13 + 3) != 0.0 )
    {
      *(float *)(a4 + 16) = (float)(1.0 / *((float *)&v13 + 3)) * *(float *)(a4 + 16);
      *(float *)(a4 + 20) = (float)(1.0 / v9) * v7;
      *(float *)(a4 + 24) = (float)(1.0 / v9) * v8;
    }
    *(_DWORD *)(a4 + 32) = *a3;
    *(_DWORD *)(a4 + 36) = a3[1];
    *(_DWORD *)(a4 + 40) = a3[2];
    *(_DWORD *)(a4 + 44) = a3[3];
  }
  else
  {
    *(FLOAT *)(a4 + 16) = a1->x;
    *(_QWORD *)(a4 + 20) = LODWORD(a1->y);
    *(_QWORD *)(a4 + 32) = 0LL;
    *(_DWORD *)(a4 + 40) = 0;
    *(_DWORD *)(a4 + 44) = 1065353216;
  }
  return DirectX::PackedVector::XMConvertFloatToHalfStream(
           (DirectX::PackedVector *)(a4 + 28),
           (unsigned __int16 *)this,
           (unsigned __int64)a1,
           (const float *)a4,
           v11,
           v12);
}
