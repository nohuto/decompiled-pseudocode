/*
 * XREFs of ?InitializeGraphicsDevice@CGraphicsDeviceManager@@IEAAJXZ @ 0x180089634
 * Callers:
 *     ?EnsureGraphicsDeviceCreated@CGraphicsDeviceManager@@IEAAJXZ @ 0x18000F6B8 (-EnsureGraphicsDeviceCreated@CGraphicsDeviceManager@@IEAAJXZ.c)
 *     ?Initialize@CGraphicsDeviceManager@@IEAAJXZ @ 0x18006E104 (-Initialize@CGraphicsDeviceManager@@IEAAJXZ.c)
 * Callees:
 *     ?ReleaseGraphicsDevice@CGraphicsDeviceManager@@IEAAJXZ @ 0x180053870 (-ReleaseGraphicsDevice@CGraphicsDeviceManager@@IEAAJXZ.c)
 *     ?InitializeGraphicsDeviceType@CGraphicsDeviceManager@@IEAAJW4D3D_DRIVER_TYPE@@@Z @ 0x180053A00 (-InitializeGraphicsDeviceType@CGraphicsDeviceManager@@IEAAJW4D3D_DRIVER_TYPE@@@Z.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180084EE8 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180085D88 (ModuleFailFastForHRESULT.c)
 */

HRESULT __fastcall CGraphicsDeviceManager::InitializeGraphicsDevice(CGraphicsDeviceManager *this)
{
  char v1; // dl
  int v3; // eax
  int v4; // edi
  HRESULT result; // eax
  DWORD v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  D3D_DRIVER_TYPE v8; // [rsp+30h] [rbp+8h]
  int v9; // [rsp+34h] [rbp+Ch]

  v1 = *((_BYTE *)this + 121);
  v8 = D3D_DRIVER_TYPE_WARP;
  v3 = v9;
  if ( !v1 )
    v3 = 1;
  v9 = v3;
  v4 = 2 - (v1 != 0);
  while ( 1 )
  {
    result = CGraphicsDeviceManager::InitializeGraphicsDeviceType((wil::details **)this, *(&v8 + (unsigned int)--v4));
    v6 = result;
    if ( result >= 0 )
      break;
    wil::details::in1diag3::Log_Hr(
      retaddr,
      (void *)0x5A,
      (int)"clientcore\\windows\\dwm\\udwm\\graphicsdevicemanager.cpp",
      (const char *)(unsigned int)result);
    CGraphicsDeviceManager::ReleaseGraphicsDevice(this);
    if ( !v4 )
      ModuleFailFastForHRESULT(v6, retaddr);
  }
  return result;
}
