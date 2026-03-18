/*
 * XREFs of ?GetTextureMemoryLayoutData@CPrimitiveGroupRenderStrategy@@UEBAJPEBVCSurfaceBrush@@AEBUD2D_SIZE_F@@AEAV?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@@Z @ 0x180283C30
 * Callers:
 *     <none>
 * Callees:
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x180038E20 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x1800C44D0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ?ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@PEAULayoutData@CContent@@@Z @ 0x18020305C (-ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@PEAULayoutData@CContent@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CPrimitiveGroupRenderStrategy::GetTextureMemoryLayoutData(
        __int64 a1,
        CSurfaceBrush *a2,
        const struct D2D_SIZE_F *a3,
        char **a4)
{
  __int64 v6; // rsi
  int v7; // eax
  unsigned int v8; // edi
  int v9; // eax
  char *v10; // rcx
  char *v11; // r9
  unsigned __int64 v12; // rdx
  int v13; // r11d
  __int64 v14; // xmm0_8
  __int64 v15; // r10
  __int64 v16; // rax
  __int64 v17; // r9
  char *v18; // rax
  char *v19; // rax
  char *v20; // rcx
  __int128 v22; // [rsp+30h] [rbp-39h] BYREF
  char *v23; // [rsp+40h] [rbp-29h]
  __int128 v24; // [rsp+48h] [rbp-21h] BYREF
  __int64 v25; // [rsp+58h] [rbp-11h]
  _OWORD v26[3]; // [rsp+60h] [rbp-9h] BYREF
  __int64 v27; // [rsp+90h] [rbp+27h]

  if ( *a4 != a4[1] )
    a4[1] = *a4;
  v6 = *((_QWORD *)a2 + 23);
  v27 = 0LL;
  v23 = 0LL;
  memset(v26, 0, sizeof(v26));
  v22 = 0LL;
  v7 = CSurfaceBrush::ComputeLayout(a2, a3, (struct CContent::LayoutData *)v26);
  v8 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0x69Du, 0LL);
    goto LABEL_12;
  }
  v9 = (*(__int64 (__fastcall **)(__int64, const struct D2D_SIZE_F *, __int128 *))(*(_QWORD *)v6 + 296LL))(v6, a3, &v22);
  v8 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0x69Eu, 0LL);
LABEL_12:
    v11 = (char *)v22;
    goto LABEL_13;
  }
  v10 = (char *)*((_QWORD *)&v22 + 1);
  v11 = (char *)v22;
  if ( 0x6DB6DB6DB6DB6DB7LL * ((__int64)(*((_QWORD *)&v22 + 1) - v22) >> 3) )
  {
    v12 = 0LL;
    do
    {
      D2D1::Matrix3x2F::SetProduct(
        (D2D1::Matrix3x2F *)&v24,
        (const struct D2D1::Matrix3x2F *)v26,
        (const struct D2D1::Matrix3x2F *)&v11[56 * v12]);
      v14 = v25;
      v16 = 56 * v15;
      v12 = (unsigned int)(v13 + 1);
      *(_OWORD *)(v16 + v17) = v24;
      *(_QWORD *)(v16 + v17 + 16) = v14;
      v10 = (char *)*((_QWORD *)&v22 + 1);
      v11 = (char *)v22;
    }
    while ( v12 < 0x6DB6DB6DB6DB6DB7LL * ((__int64)(*((_QWORD *)&v22 + 1) - v22) >> 3) );
  }
  if ( a4 != (char **)&v22 )
  {
    v18 = *a4;
    *a4 = v11;
    v11 = v18;
    *(_QWORD *)&v22 = v18;
    v19 = a4[1];
    a4[1] = v10;
    v20 = a4[2];
    *((_QWORD *)&v22 + 1) = v19;
    a4[2] = v23;
    v23 = v20;
  }
LABEL_13:
  if ( v11 )
    std::_Deallocate<16>(v11, 8 * ((v23 - v11) >> 3));
  return v8;
}
