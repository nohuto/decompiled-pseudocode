/*
 * XREFs of ?IncrementAndSignalCrossAdapterFence@CD3DDevice@@QEAAJXZ @ 0x1802995AC
 * Callers:
 *     ?Update@CCachedTexture@@IEAAJXZ @ 0x1802B1FF4 (-Update@CCachedTexture@@IEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?WaitForCrossAdapterFence@CD3DDevice@@QEAAJXZ @ 0x1802997A0 (-WaitForCrossAdapterFence@CD3DDevice@@QEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD3DDevice::IncrementAndSignalCrossAdapterFence(CD3DDevice *this)
{
  int v2; // ebx
  __int64 v3; // rdx
  int v5; // eax
  unsigned int v6; // edi
  __int64 v7; // rdx
  unsigned __int64 v8; // r8
  __int64 v9; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !*((_QWORD *)this + 76) )
  {
    v2 = -2003292287;
    v3 = 499LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\d3ddevice.cpp",
      (const char *)(unsigned int)v2);
    return (unsigned int)v2;
  }
  v5 = CD3DDevice::WaitForCrossAdapterFence(this);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v7 = *((_QWORD *)this + 76);
    v8 = CD3DDevice::s_crossAdapterFenceValue + 1;
    *((_QWORD *)this + 77) = CD3DDevice::s_crossAdapterFenceValue + 1;
    *((_BYTE *)this + 1491) = 0;
    v9 = *((_QWORD *)this + 28);
    CD3DDevice::s_crossAdapterFenceValue = v8;
    v2 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 152LL))(v9, v7);
    if ( v2 < 0 )
    {
      v3 = 508LL;
      goto LABEL_3;
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1F6,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\d3ddevice.cpp",
      (const char *)(unsigned int)v5);
    return v6;
  }
}
