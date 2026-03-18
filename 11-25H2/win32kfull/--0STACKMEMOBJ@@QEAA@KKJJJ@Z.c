/*
 * XREFs of ??0STACKMEMOBJ@@QEAA@KKJJJ@Z @ 0x140160B9C
 * Callers:
 *     NtGdiExtFloodFill @ 0x14015F420 (NtGdiExtFloodFill.c)
 * Callees:
 *     PALLOCNOZ @ 0x1400FD16C (PALLOCNOZ.c)
 */

STACKMEMOBJ *__fastcall STACKMEMOBJ::STACKMEMOBJ(STACKMEMOBJ *this, unsigned int a2, int a3, int a4, int a5, int a6)
{
  _DWORD *v10; // rax
  _DWORD *v11; // rax
  __int64 v12; // rax

  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  v10 = (_DWORD *)Win32AllocPool(188LL, 1684817479LL);
  *((_QWORD *)this + 2) = v10;
  if ( v10 )
  {
    *v10 = 188;
    *(_DWORD *)(*((_QWORD *)this + 2) + 16LL) = 0;
    if ( a3 == 1 )
    {
      v11 = (_DWORD *)Win32AllocPool(188LL, 1684817479LL);
      *((_QWORD *)this + 3) = v11;
      if ( !v11 )
        return this;
      *v11 = 188;
      *(_DWORD *)(*((_QWORD *)this + 3) + 16LL) = 0;
    }
    *(_DWORD *)this = a2;
    *((_DWORD *)this + 1) = 40;
    v12 = PALLOCNOZ(a2, 1684817479LL);
    *((_QWORD *)this + 4) = v12;
    if ( v12 )
    {
      *((_QWORD *)this + 1) = v12;
      *(_DWORD *)(v12 + 20) = a4;
      *(_DWORD *)(*((_QWORD *)this + 1) + 16LL) = 1;
      **((_DWORD **)this + 1) = 40;
      *(_QWORD *)(*((_QWORD *)this + 1) + 8LL) = *((_QWORD *)this + 1);
      *(_DWORD *)(*((_QWORD *)this + 1) + 28LL) = a5;
      *(_DWORD *)(*((_QWORD *)this + 1) + 32LL) = a6;
    }
  }
  return this;
}
