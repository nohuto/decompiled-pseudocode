/*
 * XREFs of ?ReadKey@ApplicationSpecificEndpointInfo@@CAJPEAUHKEY__@@PEBGPEAPEAG@Z @ 0x18002D978
 * Callers:
 *     ?GetAppKey@ApplicationSpecificEndpointInfo@@AEAAJK_NPEAPEAUHKEY__@@@Z @ 0x180004694 (-GetAppKey@ApplicationSpecificEndpointInfo@@AEAAJK_NPEAPEAUHKEY__@@@Z.c)
 *     ?LoadApplicationDefaultEndpoints@ApplicationSpecificEndpointInfo@@AEAAJXZ @ 0x180005ACC (-LoadApplicationDefaultEndpoints@ApplicationSpecificEndpointInfo@@AEAAJXZ.c)
 *     ?AttemptToUpdateEndpointInterfaceId@ApplicationSpecificEndpointInfo@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEAPEAG@Z @ 0x18002B8C8 (-AttemptToUpdateEndpointInterfaceId@ApplicationSpecificEndpointInfo@@AEAAJW4__MIDL___MIDL_itf_mm.c)
 * Callees:
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x180001FB0 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000CDE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$make_unique_cotaskmem_nothrow@$$BY0A@G@wil@@YA?AV?$unique_ptr@$$BY0A@GU?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@_K@Z @ 0x1800494FC (--$make_unique_cotaskmem_nothrow@$$BY0A@G@wil@@YA-AV-$unique_ptr@$$BY0A@GU-$function_deleter@P6A.c)
 */

LSTATUS __fastcall ApplicationSpecificEndpointInfo::ReadKey(HKEY hkey, LPCWSTR lpValue, unsigned __int16 **a3)
{
  LSTATUS result; // eax
  PVOID v7; // rbx
  unsigned int ValueW; // eax
  int v9; // edi
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  DWORD pcbData; // [rsp+70h] [rbp+18h] BYREF
  PVOID pv; // [rsp+78h] [rbp+20h] BYREF

  *a3 = 0LL;
  pcbData = 0;
  result = RegGetValueW(hkey, 0LL, lpValue, 2u, 0LL, 0LL, &pcbData);
  if ( result )
  {
    if ( result > 0 )
      return (unsigned __int16)result | 0x80070000;
  }
  else
  {
    pcbData += 2;
    wil::make_unique_cotaskmem_nothrow<unsigned short [0]>(&pv, pcbData);
    v7 = pv;
    if ( pv )
    {
      ValueW = RegGetValueW(hkey, 0LL, lpValue, 2u, 0LL, pv, &pcbData);
      if ( ValueW )
      {
        v9 = wil::details::in1diag3::Return_Win32(
               retaddr,
               (void *)0x288,
               (int)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
               (const char *)ValueW);
        CoTaskMemFree(v7);
        return v9;
      }
      else
      {
        *a3 = (unsigned __int16 *)v7;
        return 0;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x286,
        (int)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
        (const char *)0x8007000ELL);
      return -2147024882;
    }
  }
  return result;
}
