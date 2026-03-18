/*
 * XREFs of ??0STACKMEMOBJ@@QEAA@KKJJJ@Z @ 0x1401840E8
 * Callers:
 *     ??$NtGdiExtFloodFillImpl@$0A@@@YAHPEAUHDC__@@HHKI@Z @ 0x140331F58 (--$NtGdiExtFloodFillImpl@$0A@@@YAHPEAUHDC__@@HHKI@Z.c)
 * Callees:
 *     PALLOCNOZ @ 0x140184030 (PALLOCNOZ.c)
 */

STACKMEMOBJ *__fastcall STACKMEMOBJ::STACKMEMOBJ(
        STACKMEMOBJ *this,
        unsigned int a2,
        __int64 a3,
        int a4,
        int a5,
        int a6)
{
  int v9; // esi
  _DWORD *v10; // rax
  __int64 v11; // r8
  _DWORD *v12; // rax
  __int64 v13; // rax

  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  v9 = a3;
  v10 = (_DWORD *)Win32AllocPool(188LL, 1684817479LL, a3);
  *((_QWORD *)this + 2) = v10;
  if ( v10 )
  {
    *v10 = 188;
    *(_DWORD *)(*((_QWORD *)this + 2) + 16LL) = 0;
    if ( v9 == 1 )
    {
      v12 = (_DWORD *)Win32AllocPool(188LL, 1684817479LL, v11);
      *((_QWORD *)this + 3) = v12;
      if ( !v12 )
        return this;
      *v12 = 188;
      *(_DWORD *)(*((_QWORD *)this + 3) + 16LL) = 0;
    }
    *(_DWORD *)this = a2;
    *((_DWORD *)this + 1) = 40;
    v13 = PALLOCNOZ(a2, 1684817479LL, v11);
    *((_QWORD *)this + 4) = v13;
    if ( v13 )
    {
      *((_QWORD *)this + 1) = v13;
      *(_DWORD *)(v13 + 20) = a4;
      *(_DWORD *)(*((_QWORD *)this + 1) + 16LL) = 1;
      **((_DWORD **)this + 1) = 40;
      *(_QWORD *)(*((_QWORD *)this + 1) + 8LL) = *((_QWORD *)this + 1);
      *(_DWORD *)(*((_QWORD *)this + 1) + 28LL) = a5;
      *(_DWORD *)(*((_QWORD *)this + 1) + 32LL) = a6;
    }
  }
  return this;
}
