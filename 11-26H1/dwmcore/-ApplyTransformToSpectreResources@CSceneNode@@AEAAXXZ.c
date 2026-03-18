/*
 * XREFs of ?ApplyTransformToSpectreResources@CSceneNode@@AEAAXXZ @ 0x1802813FC
 * Callers:
 *     ?SetTransform@?$CSceneNodeGeneratedT@VCSceneNode@@VCSceneObject@@@@QEAAJPEAVCSceneModelTransform@@@Z @ 0x18021C948 (-SetTransform@-$CSceneNodeGeneratedT@VCSceneNode@@VCSceneObject@@@@QEAAJPEAVCSceneModelTransform.c)
 *     ?HydrateSpectreResources@CSceneNode@@QEAAJPEAVCSceneWorld@@@Z @ 0x1802815AC (-HydrateSpectreResources@CSceneNode@@QEAAJPEAVCSceneWorld@@@Z.c)
 *     ?OnChanged@CSceneNode@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180281750 (-OnChanged@CSceneNode@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z @ 0x18005F520 (-GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CSceneNode::ApplyTransformToSpectreResources(CSceneNode *this)
{
  const struct CMILMatrix *Matrix; // rax
  __int64 v3; // rcx
  CTransform3D *v4; // rcx
  __int64 v5; // rcx
  _OWORD v6[4]; // [rsp+20h] [rbp-49h] BYREF
  int v7; // [rsp+60h] [rbp-9h]
  _OWORD v8[4]; // [rsp+70h] [rbp+7h] BYREF

  Matrix = 0LL;
  v3 = *((_QWORD *)this + 9);
  if ( v3 )
  {
    v4 = *(CTransform3D **)(v3 + 72);
    if ( v4 )
      Matrix = CTransform3D::GetMatrix(v4, 0LL);
  }
  v7 = 0;
  if ( !Matrix )
  {
    v6[0] = _mm_load_si128((const __m128i *)&_xmm);
    v6[1] = _mm_load_si128((const __m128i *)&_xmm);
    BYTE1(v7) = BYTE1(v7) & 0xC0 | 0x29;
    Matrix = (const struct CMILMatrix *)v6;
    v6[2] = _mm_load_si128((const __m128i *)&_xmm);
    v6[3] = _mm_load_si128((const __m128i *)&_xmm);
    LOBYTE(v7) = -86;
  }
  v5 = *((_QWORD *)this + 18);
  v8[0] = *(_OWORD *)Matrix;
  v8[1] = *((_OWORD *)Matrix + 1);
  v8[2] = *((_OWORD *)Matrix + 2);
  v8[3] = *((_OWORD *)Matrix + 3);
  (*(void (__fastcall **)(__int64, _OWORD *))(*(_QWORD *)v5 + 64LL))(v5, v8);
}
