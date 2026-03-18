/*
 * XREFs of DxgkEngAddRedirBitmapD3DDirtyRgn @ 0x14009B990
 * Callers:
 *     <none>
 * Callees:
 *     GreAddBitmapD3DDirtyRgn @ 0x140097F10 (GreAddBitmapD3DDirtyRgn.c)
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x14009A87C (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJA@@QEAA@XZ @ 0x14009A8C8 (--1DCOBJA@@QEAA@XZ.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

void __fastcall DxgkEngAddRedirBitmapD3DDirtyRgn(HDC a1, __int64 a2)
{
  __int64 v3; // r9
  __int64 v4; // rax
  __int64 v5; // rdx
  void (__fastcall *v6)(__int64, __int64); // rax
  _QWORD v7[11]; // [rsp+20h] [rbp-58h] BYREF

  DCOBJA::DCOBJA((DCOBJA *)v7, a1);
  v3 = v7[0];
  if ( v7[0] )
  {
    v4 = *(_QWORD *)(v7[0] + 48LL);
    if ( v4 )
    {
      v5 = *(_QWORD *)(v7[0] + 496LL);
      if ( (*(_DWORD *)(v5 + 116) & 1) != 0 )
      {
        ++*(_DWORD *)(v5 + 92);
        v6 = *(void (__fastcall **)(__int64, __int64))(v4 + 3464);
        if ( v6 )
          v6((*(_QWORD *)(v7[0] + 496LL) + 24LL) & -(__int64)(*(_QWORD *)(v7[0] + 496LL) != 0LL), a2);
        v3 = v7[0];
      }
    }
    if ( a2 )
      GreAddBitmapD3DDirtyRgn(*(Gre::Base **)(v3 + 472), *(_DWORD *)a2, *(struct tagRECT **)(a2 + 8));
  }
  DCOBJA::~DCOBJA((DCOBJA *)v7);
}
