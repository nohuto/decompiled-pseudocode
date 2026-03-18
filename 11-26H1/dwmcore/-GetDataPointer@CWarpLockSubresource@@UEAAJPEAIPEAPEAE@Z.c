/*
 * XREFs of ?GetDataPointer@CWarpLockSubresource@@UEAAJPEAIPEAPEAE@Z @ 0x1802AA2C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?HrCalcRequiredBufferSizeWorker@@YAJIIIIPEAI@Z @ 0x1800E6A08 (-HrCalcRequiredBufferSizeWorker@@YAJIIIIPEAI@Z.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x1800E8010 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 */

__int64 __fastcall CWarpLockSubresource::GetDataPointer(
        CWarpLockSubresource *this,
        unsigned int *a2,
        unsigned __int8 **a3)
{
  unsigned __int8 PixelFormatSize; // al
  __int64 v4; // r11
  _QWORD *v5; // r8
  unsigned __int8 v6; // al
  __int64 v7; // r11
  unsigned int *v8; // rdx
  unsigned int v9; // r8d
  int v10; // r9d
  int v11; // eax
  unsigned int v12; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  PixelFormatSize = GetPixelFormatSize(*((_DWORD *)this + 13));
  *v5 = *(_QWORD *)(v4 + 88)
      + (unsigned int)(*(_DWORD *)(v4 + 96) * *(_DWORD *)(v4 + 108))
      + (unsigned __int64)(*(_DWORD *)(v4 + 104) * (PixelFormatSize >> 3));
  v6 = GetPixelFormatSize(*(_DWORD *)(v4 + 52));
  v11 = HrCalcRequiredBufferSizeWorker(v6, *(_DWORD *)(v7 + 96), v9, v10, v8);
  v12 = v11;
  if ( v11 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x62,
      (int)"onecoreuap\\windows\\DWM\\dwmcore\\hw\\WarpLockSubresource.h",
      (const char *)(unsigned int)v11);
  return v12;
}
