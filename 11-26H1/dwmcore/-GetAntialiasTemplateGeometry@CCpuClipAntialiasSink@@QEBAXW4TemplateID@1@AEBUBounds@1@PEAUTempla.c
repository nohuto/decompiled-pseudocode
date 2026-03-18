/*
 * XREFs of ?GetAntialiasTemplateGeometry@CCpuClipAntialiasSink@@QEBAXW4TemplateID@1@AEBUBounds@1@PEAUTemplateGeometryDesc@1@@Z @ 0x180178A10
 * Callers:
 *     ?FillLightingData@CCpuClipAntialiasDrawListEntry@@QEBAXAEBUBounds@CCpuClipAntialiasSink@@_NAEBVCMILMatrix@@AEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@@Z @ 0x18025DD7C (-FillLightingData@CCpuClipAntialiasDrawListEntry@@QEBAXAEBUBounds@CCpuClipAntialiasSink@@_NAEBVC.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCpuClipAntialiasSink::GetAntialiasTemplateGeometry(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4)
{
  float v4; // xmm0_4
  float v6; // xmm6_4
  __int64 v7; // rdi
  float v8; // xmm0_4
  unsigned __int16 v9; // ax
  __int64 v10; // r8
  int v11; // ecx
  int v12; // eax
  __int64 v13; // r10
  __int64 v14; // rcx
  __int64 v15; // r9
  __int64 v16; // rdx
  int v17; // ecx
  __int64 result; // rax
  float Y; // [rsp+50h] [rbp+18h] BYREF

  v4 = *(float *)(a3 + 8);
  v6 = *(float *)(a3 + 4);
  if ( v4 <= v6 )
  {
    result = 0LL;
    *(_QWORD *)a4 = 0LL;
    *(_QWORD *)(a4 + 8) = 0LL;
    *(_QWORD *)(a4 + 16) = 0LL;
    *(_QWORD *)(a4 + 24) = 0LL;
    *(_QWORD *)(a4 + 32) = 0LL;
    *(_QWORD *)(a4 + 40) = 0LL;
    *(_QWORD *)(a4 + 48) = 0LL;
    *(_QWORD *)(a4 + 56) = 0LL;
  }
  else
  {
    Y = 0.0;
    v7 = *(_QWORD *)(a1 + 8LL * a2 + 40);
    v8 = modff(v4, &Y);
    v9 = (int)Y - 1;
    v10 = (unsigned int)(int)v6;
    if ( COERCE_FLOAT(LODWORD(v8) & _xmm) >= 0.000081380211 )
      v9 = (int)Y;
    v11 = v9;
    v12 = (unsigned __int16)v10;
    LOWORD(v10) = 2 * v10;
    v13 = v11 - v12 + 1;
    v14 = (unsigned __int16)v10;
    v15 = 2 * v13 + 2;
    v16 = *(_QWORD *)(v7 + 40) + 8LL * (unsigned __int16)v10;
    if ( !v16 && 2 * v13 != -2 )
      goto LABEL_6;
    *(_QWORD *)a4 = v15;
    *(_QWORD *)(a4 + 8) = v16;
    v16 = (unsigned int)(8 * *(_DWORD *)(v7 + 16) + 16);
    *(_QWORD *)(a4 + 16) = *(_QWORD *)(v7 + 24) + (int)(v16 * (unsigned __int16)v10);
    *(_DWORD *)(a4 + 24) = v16;
    *(_DWORD *)(a4 + 28) = v15;
    v17 = 8 * *(_DWORD *)(v7 + 16) + 16;
    v10 = v17 * (unsigned int)(unsigned __int16)v10;
    *(_QWORD *)(a4 + 32) = *(_QWORD *)(v7 + 32) + (int)v10;
    *(_DWORD *)(a4 + 40) = v17;
    result = 6 * v13;
    *(_DWORD *)(a4 + 44) = v15;
    v14 = *(_QWORD *)(v7 + 48);
    if ( !v14 )
    {
      if ( result )
      {
LABEL_6:
        ((void (__fastcall *)(__int64, __int64, __int64, __int64))`gsl::details::get_terminate_handler'::`2'::handler)(
          v14,
          v16,
          v10,
          v15);
        __debugbreak();
      }
    }
    *(_QWORD *)(a4 + 48) = result;
    *(_QWORD *)(a4 + 56) = v14;
  }
  return result;
}
