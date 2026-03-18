/*
 * XREFs of ?Reset@PaddedBitmap@CCursorState@@QEAAJI_N@Z @ 0x1802174A4
 * Callers:
 *     ?UpdateHardwareCursorOverlay@CCursorState@@AEAAXPEAUMonitorData@1@_N@Z @ 0x18015FA8C (-UpdateHardwareCursorOverlay@CCursorState@@AEAAXPEAUMonitorData@1@_N@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?HrMalloc@@YAJ_K0PEAPEAX@Z @ 0x1800E1EE0 (-HrMalloc@@YAJ_K0PEAPEAX@Z.c)
 *     memset_0 @ 0x1802215C0 (memset_0.c)
 */

__int64 __fastcall CCursorState::PaddedBitmap::Reset(CCursorState::PaddedBitmap *this, unsigned int a2, char a3)
{
  unsigned int *v3; // rsi
  unsigned int v4; // ebx
  int v8; // eax
  unsigned int v9; // ebp
  _DWORD *v10; // rdx
  _DWORD *v11; // rcx
  unsigned int v12; // eax
  __int64 v13; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  void *v15; // [rsp+40h] [rbp+8h] BYREF

  v3 = (unsigned int *)((char *)this + 12);
  v4 = 0;
  if ( a2 <= *((_DWORD *)this + 3) )
  {
    v10 = (_DWORD *)((char *)this + 12);
  }
  else
  {
    if ( a2 > 0x400 )
      return 2147942487LL;
    *v3 = a2;
    *((_DWORD *)this + 2) = 4 * a2;
    v15 = 0LL;
    v8 = HrMalloc(4 * a2, a2, &v15);
    v9 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB5,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\cursor\\CursorState.h",
        (const char *)(unsigned int)v8);
      return v9;
    }
    operator delete(*(void **)this);
    v10 = (_DWORD *)((char *)this + 12);
    *(_QWORD *)this = v15;
  }
  v11 = *(_DWORD **)this;
  v12 = *v3;
  if ( a3 )
  {
    if ( v12 * v12 )
    {
      do
      {
        v13 = v4++;
        v11[v13] = -16777216;
      }
      while ( v4 < *v10 * *v10 );
    }
  }
  else
  {
    memset_0(v11, 0, *((_DWORD *)this + 2) * v12);
  }
  return 0LL;
}
