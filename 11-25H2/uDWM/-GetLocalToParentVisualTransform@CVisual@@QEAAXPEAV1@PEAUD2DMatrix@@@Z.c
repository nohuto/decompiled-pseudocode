/*
 * XREFs of ?GetLocalToParentVisualTransform@CVisual@@QEAAXPEAV1@PEAUD2DMatrix@@@Z @ 0x180018108
 * Callers:
 *     ?NcAdornmentInfoQuery@CTopLevelWindow@@QEAAJPEAUNCADORNMENT_INFO@@@Z @ 0x180017F04 (-NcAdornmentInfoQuery@CTopLevelWindow@@QEAAJPEAUNCADORNMENT_INFO@@@Z.c)
 * Callees:
 *     ?GetCurrentTransform@CVisual@@AEAA_NPEAUD2DMatrix@@@Z @ 0x1800181F0 (-GetCurrentTransform@CVisual@@AEAA_NPEAUD2DMatrix@@@Z.c)
 *     ?D2DMatrixIdentity@@YAPEAUD2DMatrix@@PEAU1@@Z @ 0x180018404 (-D2DMatrixIdentity@@YAPEAUD2DMatrix@@PEAU1@@Z.c)
 *     ?D2DMatrixTranslation@@YAPEAUD2DMatrix@@PEAU1@MMM@Z @ 0x18001843C (-D2DMatrixTranslation@@YAPEAUD2DMatrix@@PEAU1@MMM@Z.c)
 *     ?D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z @ 0x180018480 (-D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z.c)
 *     __security_check_cookie @ 0x18009A7F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CVisual::GetLocalToParentVisualTransform(CVisual *this, struct CVisual *a2, struct D2DMatrix *a3)
{
  CVisual *v6; // rax
  _BYTE v7[64]; // [rsp+20h] [rbp-98h] BYREF
  _BYTE v8[64]; // [rsp+60h] [rbp-58h] BYREF

  D2DMatrixIdentity(a3);
  do
  {
    if ( CVisual::GetCurrentTransform(this, (struct D2DMatrix *)v8) )
      D2DMatrixMultiply(a3, a3, (const struct D2DMatrix *)v8);
    D2DMatrixTranslation((struct D2DMatrix *)v7, (float)*((int *)this + 16), (float)*((int *)this + 17), 0.0);
    D2DMatrixMultiply(a3, a3, (const struct D2DMatrix *)v7);
    v6 = (CVisual *)(*(__int64 (__fastcall **)(CVisual *))(*(_QWORD *)this + 64LL))(this);
    this = v6;
  }
  while ( v6 && (*(__int64 (__fastcall **)(CVisual *))(*(_QWORD *)v6 + 64LL))(v6) && this != a2 );
}
