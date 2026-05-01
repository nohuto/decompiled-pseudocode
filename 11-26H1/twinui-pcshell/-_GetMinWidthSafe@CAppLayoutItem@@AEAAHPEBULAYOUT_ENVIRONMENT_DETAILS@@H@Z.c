/*
 * XREFs of ?_GetMinWidthSafe@CAppLayoutItem@@AEAAHPEBULAYOUT_ENVIRONMENT_DETAILS@@H@Z @ 0x1806C91A8
 * Callers:
 *     ?GetMinWidthSafe@CAppLayoutItem@@UEAAHPEBULAYOUT_ENVIRONMENT_DETAILS@@H@Z @ 0x1806C8990 (-GetMinWidthSafe@CAppLayoutItem@@UEAAHPEBULAYOUT_ENVIRONMENT_DETAILS@@H@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIWin32ApplicationView@@@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIWin32ApplicationView@@@WRL@Microsoft@@@Details@12@@Z @ 0x1801CB814 (--$As@UIWin32ApplicationView@@@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAppLayoutItem::_GetMinWidthSafe(
        CAppLayoutItem *this,
        const struct LAYOUT_ENVIRONMENT_DETAILS *a2,
        signed int a3)
{
  unsigned int v6; // ebx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v6 = 2 * (int)(float)((float)*((int *)a2 + 4) / 100.0) - (int)(float)((float)(500 * *((_DWORD *)a2 + 4)) / -100.0);
  if ( *((_DWORD *)this + 10) == 1 )
  {
    if ( (*((_BYTE *)this + 24) & 2) != 0 )
    {
      v6 = a3 / 2;
      if ( a3 / 2 >= MulDiv(360, *((_DWORD *)a2 + 4), 100) )
        return (unsigned int)MulDiv(360, *((_DWORD *)a2 + 4), 100);
    }
    else
    {
      v8 = 0LL;
      if ( (int)Microsoft::WRL::ComPtr<IApplicationView>::As<IWin32ApplicationView>(
                  (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 6,
                  &v8) >= 0 )
        v6 = (*(__int64 (__fastcall **)(char *, const struct LAYOUT_ENVIRONMENT_DETAILS *, _QWORD))(*((_QWORD *)this + 1)
                                                                                                  + 72LL))(
               (char *)this + 8,
               a2,
               (unsigned int)a3);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v8);
    }
  }
  return v6;
}
