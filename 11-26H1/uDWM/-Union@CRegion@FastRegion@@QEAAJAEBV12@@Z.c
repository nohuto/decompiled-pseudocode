/*
 * XREFs of ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180054A84
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x1800151F0 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 * Callees:
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800164A4 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ??3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800164E0 (--3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180030CA4 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?CopyData@CRegion@FastRegion@@IEAAJPEBVCRgnData@Internal@2@@Z @ 0x180054BDC (-CopyData@CRegion@FastRegion@@IEAAJPEBVCRgnData@Internal@2@@Z.c)
 *     ?EstimateSizeUnion@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z @ 0x180054D4C (-EstimateSizeUnion@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z.c)
 *     ?Union@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x180055060 (-Union@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 */

__int64 __fastcall FastRegion::CRegion::Union(
        const struct FastRegion::Internal::CRgnData **this,
        const struct FastRegion::Internal::CRgnData **a2)
{
  unsigned int v3; // edi
  const struct FastRegion::Internal::CRgnData *v4; // rdx
  const struct FastRegion::Internal::CRgnData *v6; // rcx
  __int64 result; // rax
  int v8; // eax
  FastRegion::Internal::CRgnData *v9; // rcx
  const struct std::nothrow_t *v10; // rdx
  struct FastRegion::Internal::CRgnData *v11; // r14
  FastRegion::Internal::CRgnData *v12; // rax
  int v13; // [rsp+20h] [rbp-E0h]
  struct FastRegion::Internal::CRgnData *v14; // [rsp+28h] [rbp-D8h]
  _BYTE v15[256]; // [rsp+30h] [rbp-D0h] BYREF

  v3 = 0;
  v4 = *a2;
  if ( !*(_DWORD *)v4 )
    return 0LL;
  v6 = *this;
  if ( *(_DWORD *)v6 )
  {
    v8 = FastRegion::Internal::CRgnData::EstimateSizeUnion(v6, v4);
    v9 = (FastRegion::Internal::CRgnData *)v15;
    v14 = (struct FastRegion::Internal::CRgnData *)v15;
    v13 = v8;
    if ( (unsigned __int64)v8 > 0x100 )
    {
      v12 = (FastRegion::Internal::CRgnData *)operator new[](v8, (const struct std::nothrow_t *)v8);
      v9 = v12;
      if ( !v12 )
        return 2147942414LL;
      v14 = v12;
    }
    FastRegion::Internal::CRgnData::Union(v9, *this, *a2);
    v11 = v14;
    if ( *(_DWORD *)v14 )
    {
      if ( v15 == (_BYTE *)v14 )
      {
        v3 = FastRegion::CRegion::CopyData((FastRegion::CRegion *)this, v14);
      }
      else
      {
        v14 = (struct FastRegion::Internal::CRgnData *)v15;
        FastRegion::CRegion::FreeMemory((void **)this, v10);
        *this = v11;
        *((_DWORD *)this + 2) = v13;
      }
    }
    else
    {
      *(_DWORD *)*this = 0;
    }
    if ( v15 != (_BYTE *)v14 )
      CDisplayBlackCurtainAnimatedVisual::operator delete(v14, v10);
    return v3;
  }
  if ( this == a2 )
    return v3;
  result = FastRegion::CRegion::CopyData((FastRegion::CRegion *)this, v4);
  if ( (int)result >= 0 )
    return v3;
  return result;
}
