/*
 * XREFs of ?DisableDxgkrnlIndependentFlipMode@CFlipExBuffer@@IEAAJPEAH@Z @ 0x14005395C
 * Callers:
 *     ??1CFlipExBuffer@@MEAA@XZ @ 0x14004E2D8 (--1CFlipExBuffer@@MEAA@XZ.c)
 *     ?SetIndependentFlip@CFlipExBuffer@@UEAAJ_N0IIPEBIPEAH@Z @ 0x140053880 (-SetIndependentFlip@CFlipExBuffer@@UEAAJ_N0IIPEBIPEAH@Z.c)
 * Callees:
 *     memset @ 0x1400A5E00 (memset.c)
 *     DxgkSetIndependentFlipMode @ 0x1403BD518 (DxgkSetIndependentFlipMode.c)
 */

__int64 __fastcall CFlipExBuffer::DisableDxgkrnlIndependentFlipMode(CFlipExBuffer *this, int *a2)
{
  char *v2; // rbx
  unsigned int v5; // eax
  unsigned int v6; // ebp
  int v8; // [rsp+70h] [rbp+8h] BYREF
  __int64 v9; // [rsp+78h] [rbp+10h]

  v2 = (char *)this + 568;
  v9 = *((_QWORD *)this + 1);
  v8 = 0;
  v5 = DxgkSetIndependentFlipMode(
         *((HANDLE *)this + 70),
         *((_DWORD *)this + 159),
         *((_DWORD *)this + 158),
         (__int64)this + 568,
         (__int64)&v8,
         (__int64)this + 552);
  *((_DWORD *)this + 100) = 0;
  *((_DWORD *)this + 158) = 0;
  v6 = v5;
  memset(v2, 0, 0x40uLL);
  ObCloseHandle(*((HANDLE *)this + 70), 0);
  *((_QWORD *)this + 70) = 0LL;
  *((_BYTE *)this + 644) = 0;
  if ( a2 )
    *a2 = v8;
  return v6;
}
