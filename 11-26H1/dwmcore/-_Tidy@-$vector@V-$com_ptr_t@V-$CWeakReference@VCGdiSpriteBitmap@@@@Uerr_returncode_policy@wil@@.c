/*
 * XREFs of ?_Tidy@?$vector@V?$com_ptr_t@V?$CWeakReference@VCGdiSpriteBitmap@@@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@V?$CWeakReference@VCGdiSpriteBitmap@@@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXXZ @ 0x18002F760
 * Callers:
 *     ?ProcessLegacyTokens@CGlobalSurfaceManager@@AEAAJXZ @ 0x18002F240 (-ProcessLegacyTokens@CGlobalSurfaceManager@@AEAAJXZ.c)
 *     ??1CLegacySurfaceManager@@UEAA@XZ @ 0x18022DED0 (--1CLegacySurfaceManager@@UEAA@XZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1801513C8 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180220694 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<wil::com_ptr_t<CWeakReference<CGdiSpriteBitmap>,wil::err_returncode_policy>>::_Tidy(
        void **a1)
{
  char *v1; // rbx
  char *v3; // rsi
  char *v4; // rcx
  signed __int64 v5; // rdx
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // [rsp+30h] [rbp+8h] BYREF
  void *v8; // [rsp+38h] [rbp+10h] BYREF

  v1 = (char *)*a1;
  if ( *a1 )
  {
    v3 = (char *)a1[1];
    while ( v1 != v3 )
    {
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(v1);
      v1 += 8;
    }
    v4 = (char *)*a1;
    v5 = (_BYTE *)a1[2] - (_BYTE *)*a1;
    v8 = *a1;
    v6 = v5 & 0xFFFFFFFFFFFFFFF8uLL;
    v7 = v6;
    if ( v6 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v8, &v7);
      v6 = v7;
      v4 = (char *)v8;
    }
    operator delete(v4, v6);
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
}
