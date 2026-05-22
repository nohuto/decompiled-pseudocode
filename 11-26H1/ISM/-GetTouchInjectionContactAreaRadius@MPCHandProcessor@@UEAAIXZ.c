/*
 * XREFs of ?GetTouchInjectionContactAreaRadius@MPCHandProcessor@@UEAAIXZ @ 0x1800BFEB0
 * Callers:
 *     <none>
 * Callees:
 *     ?length@?$_WChar_traits@G@std@@SA_KPEBG@Z @ 0x180025A0C (-length@-$_WChar_traits@G@std@@SA_KPEBG@Z.c)
 *     ?GetInstance@MPCConstantManager@@SAPEAV1@XZ @ 0x180025DA0 (-GetInstance@MPCConstantManager@@SAPEAV1@XZ.c)
 *     ??$GetConstant@K@MPCConstantManager@@QEAAKPEAUIMPCInputProviderBase@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x18007AFE8 (--$GetConstant@K@MPCConstantManager@@QEAAKPEAUIMPCInputProviderBase@@V-$basic_string_view@GU-$ch.c)
 */

__int64 __fastcall MPCHandProcessor::GetTouchInjectionContactAreaRadius(
        __int64 this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  __int64 v5; // r9
  __int128 v7; // [rsp+20h] [rbp-18h] BYREF

  MPCConstantManager::GetInstance(this, a2, a3, a4);
  *(_QWORD *)&v7 = L"TouchInjectionContactAreaRadius";
  *((_QWORD *)&v7 + 1) = std::_WChar_traits<unsigned short>::length((__int64)L"TouchInjectionContactAreaRadius");
  return MPCConstantManager::GetConstant<unsigned long>(v5, this & -(__int64)(this != 24), &v7);
}
