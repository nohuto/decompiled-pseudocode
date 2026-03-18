/*
 * XREFs of ?CopyUmdFileName@ADAPTER_RENDER@@QEBAJPEAU_D3DKMT_UMDFILENAMEINFO@@@Z @ 0x1403B0220
 * Callers:
 *     ?DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x14039A290 (-DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     ?GetUMDFileName@ADAPTER_RENDER@@AEBAJW4_KMTUMDVERSION@@AEAU_UNICODE_STRING@@@Z @ 0x1403B072C (-GetUMDFileName@ADAPTER_RENDER@@AEBAJW4_KMTUMDVERSION@@AEAU_UNICODE_STRING@@@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER::CopyUmdFileName(ADAPTER_RENDER *this, struct _D3DKMT_UMDFILENAMEINFO *a2)
{
  enum _KMTUMDVERSION Version; // edx
  __int64 result; // rax
  WCHAR *UmdFileName; // rdx
  unsigned __int64 v6; // rcx
  __int64 v7; // r8
  signed __int64 v8; // r10
  WCHAR v9; // ax
  WCHAR *v10; // rcx
  struct _UNICODE_STRING v11; // [rsp+20h] [rbp-18h] BYREF

  Version = a2->Version;
  if ( (unsigned int)Version >= (NUM_KMTUMDVERSIONS|KMTUMDVERSION_DX11) )
    return 3221225485LL;
  v11 = 0LL;
  result = ADAPTER_RENDER::GetUMDFileName(this, Version, &v11);
  if ( (int)result >= 0 )
  {
    if ( !v11.Length || v11.Length == 4 && *(_DWORD *)v11.Buffer == 4063292 )
      return 3221225485LL;
    UmdFileName = a2->UmdFileName;
    v6 = (unsigned __int64)v11.Length >> 1;
    v7 = 260LL;
    v8 = (char *)v11.Buffer - (char *)a2->UmdFileName;
    do
    {
      if ( !(v7 + v6 - 260) )
        break;
      v9 = *(WCHAR *)((char *)UmdFileName + v8);
      if ( !v9 )
        break;
      *UmdFileName++ = v9;
      --v7;
    }
    while ( v7 );
    v10 = UmdFileName - 1;
    result = v7 == 0 ? 0x80000005 : 0;
    if ( v7 )
      v10 = UmdFileName;
    *v10 = 0;
  }
  return result;
}
