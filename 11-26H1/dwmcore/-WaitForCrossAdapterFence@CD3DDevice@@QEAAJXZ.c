/*
 * XREFs of ?WaitForCrossAdapterFence@CD3DDevice@@QEAAJXZ @ 0x1802997A0
 * Callers:
 *     ?IncrementAndSignalCrossAdapterFence@CD3DDevice@@QEAAJXZ @ 0x1802995AC (-IncrementAndSignalCrossAdapterFence@CD3DDevice@@QEAAJXZ.c)
 *     ?Update@CCachedTexture@@IEAAJXZ @ 0x1802B1FF4 (-Update@CCachedTexture@@IEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD3DDevice::WaitForCrossAdapterFence(CD3DDevice *this)
{
  int v1; // ebx
  __int64 v2; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !*((_QWORD *)this + 76) )
  {
    v1 = -2003292287;
    v2 = 518LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v2,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\d3ddevice.cpp",
      (const char *)(unsigned int)v1);
    return (unsigned int)v1;
  }
  if ( CD3DDevice::s_crossAdapterFenceValue )
  {
    if ( *((_QWORD *)this + 77) != CD3DDevice::s_crossAdapterFenceValue )
    {
      *((_QWORD *)this + 77) = CD3DDevice::s_crossAdapterFenceValue;
      v1 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 69) + 1184LL))(*((_QWORD *)this + 69));
      if ( v1 < 0 )
      {
        v2 = 525LL;
        goto LABEL_3;
      }
    }
  }
  return 0LL;
}
