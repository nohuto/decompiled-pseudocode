/*
 * XREFs of ?EnsureBitmapCacheSource@CSectionBitmapRealization@@MEAAJXZ @ 0x1801956E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?HrCreateBitmapFromMemoryEx@@YAJIIAEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@@@Z @ 0x1800E62DC (-HrCreateBitmapFromMemoryEx@@YAJIIAEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x1800E8010 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ?InitializeCache@CD2DBitmapCache@@QEAAXPEAVID2DBitmapCacheSource@@@Z @ 0x1800F51D4 (-InitializeCache@CD2DBitmapCache@@QEAAXPEAVID2DBitmapCacheSource@@@Z.c)
 *     ?MapSection@CSectionBitmapRealization@@IEAAJXZ @ 0x1801958DC (-MapSection@CSectionBitmapRealization@@IEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSectionBitmapRealization::EnsureBitmapCacheSource(CSectionBitmapRealization *this)
{
  unsigned int v1; // esi
  struct ID2DBitmapCacheSource **v2; // r14
  int v5; // ebp
  int v6; // ebx
  int v7; // eax
  unsigned __int8 PixelFormatSize; // al
  _DWORD *v9; // r9
  unsigned int v10; // eax
  unsigned int v11; // edx
  unsigned int v12; // ecx
  int v13; // eax
  struct ID2DBitmapCacheSource *v14; // rcx
  struct IBitmapSource *v15; // rbx
  int v16; // eax
  __int64 v17; // rax
  struct IBitmapSource *v18; // rcx
  unsigned __int8 *v19; // [rsp+28h] [rbp-40h]
  _DWORD v20[4]; // [rsp+40h] [rbp-28h] BYREF
  struct IBitmapSource *v21; // [rsp+70h] [rbp+8h] BYREF

  v1 = 0;
  v2 = (struct ID2DBitmapCacheSource **)((char *)this + 344);
  if ( !*((_QWORD *)this + 43) )
  {
    v5 = *((_DWORD *)this + 90);
    if ( v5 )
    {
      v6 = *((_DWORD *)this + 91);
      if ( v6 )
      {
        v20[0] = *((_DWORD *)this + 93);
        v20[1] = *((_DWORD *)this + 26);
        v20[2] = *((_DWORD *)this + 38);
        v7 = CSectionBitmapRealization::MapSection(this);
        v1 = v7;
        if ( v7 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0xDCu, 0LL);
          return v1;
        }
        PixelFormatSize = GetPixelFormatSize(*((_DWORD *)this + 93));
        v10 = *v9 * (v6 - 1) + (v5 * PixelFormatSize + 7) / 8;
        LODWORD(v9) = *v9;
        v11 = *((_DWORD *)this + 91);
        v19 = (unsigned __int8 *)*((_QWORD *)this + 47);
        v12 = *((_DWORD *)this + 90);
        v21 = 0LL;
        v13 = HrCreateBitmapFromMemoryEx(
                v12,
                v11,
                (const struct PixelFormatInfo *)v20,
                (unsigned int)v9,
                v10,
                v19,
                0LL,
                &v21);
        v1 = v13;
        if ( v13 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v13, 0xE9u, 0LL);
          v18 = v21;
          if ( !v21 )
            return v1;
          v17 = *(_QWORD *)v21;
        }
        else
        {
          v14 = *v2;
          *v2 = 0LL;
          if ( v14 )
            (*(void (__fastcall **)(struct ID2DBitmapCacheSource *))(*(_QWORD *)v14 + 16LL))(v14);
          v15 = v21;
          v16 = (**(__int64 (__fastcall ***)(struct IBitmapSource *, GUID *, struct ID2DBitmapCacheSource **))v21)(
                  v21,
                  &GUID_e3dc98f9_eabc_4e58_bacc_71f136bda5d3,
                  v2);
          v1 = v16;
          if ( v16 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v16, 0xEBu, 0LL);
            wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v21);
            return v1;
          }
          CD2DBitmapCache::InitializeCache(this, *v2);
          v17 = *(_QWORD *)v15;
          v18 = v15;
        }
        (*(void (__fastcall **)(struct IBitmapSource *))(v17 + 16))(v18);
      }
    }
  }
  return v1;
}
