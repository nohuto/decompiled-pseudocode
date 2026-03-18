/*
 * XREFs of ?CreateCompositionFrame@CTokenManager@@UEAAJAEBUCOMPOSITION_FRAME_INFO@@PEAPEAUICompositionFrame@@@Z @ 0x140037310
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CTokenManager::CreateCompositionFrame(
        CTokenManager *this,
        const struct COMPOSITION_FRAME_INFO *a2,
        struct ICompositionFrame **a3)
{
  unsigned int v6; // ebp
  __int64 Pool2; // rax
  __int64 v8; // rbx
  bool v9; // zf
  __int64 v10; // rax

  v6 = -1073741801;
  Pool2 = ExAllocatePool2(256LL, 304LL, 1717783892LL);
  v8 = Pool2;
  if ( Pool2 )
  {
    *(_DWORD *)(Pool2 + 8) = 1;
    *(_QWORD *)Pool2 = &CCompositionFrame::`vftable';
    *(_OWORD *)(Pool2 + 32) = *(_OWORD *)a2;
    *(_OWORD *)(Pool2 + 48) = *((_OWORD *)a2 + 1);
    *(_OWORD *)(Pool2 + 64) = *((_OWORD *)a2 + 2);
    *(_OWORD *)(Pool2 + 80) = *((_OWORD *)a2 + 3);
    *(_OWORD *)(Pool2 + 96) = *((_OWORD *)a2 + 4);
    *(_OWORD *)(Pool2 + 112) = *((_OWORD *)a2 + 5);
    *(_OWORD *)(Pool2 + 128) = *((_OWORD *)a2 + 6);
    *(_OWORD *)(Pool2 + 144) = *((_OWORD *)a2 + 7);
    *(_OWORD *)(Pool2 + 160) = *((_OWORD *)a2 + 8);
    *(_QWORD *)(Pool2 + 176) = *((_QWORD *)a2 + 18);
    v9 = (*((_QWORD *)this + 2))++ == -1LL;
    v10 = *((_QWORD *)this + 2);
    if ( v9 )
    {
      *((_QWORD *)this + 2) = 1LL;
      v10 = 1LL;
    }
    *(_QWORD *)(v8 + 184) = v10;
    *(_DWORD *)(v8 + 192) = 0;
    *(_QWORD *)(v8 + 200) = 0LL;
    *(_QWORD *)(v8 + 208) = 0LL;
    *(_BYTE *)(v8 + 216) = 0;
    *(_QWORD *)(v8 + 224) = 0LL;
    *(_QWORD *)(v8 + 232) = 0LL;
    *(_WORD *)(v8 + 240) = 0;
    *(_BYTE *)(v8 + 242) = 0;
    *(_QWORD *)(v8 + 296) = this;
    *(_QWORD *)(v8 + 256) = v8 + 248;
    *(_QWORD *)(v8 + 248) = v8 + 248;
    *(_QWORD *)(v8 + 272) = v8 + 264;
    *(_QWORD *)(v8 + 264) = v8 + 264;
    *(_QWORD *)(v8 + 288) = v8 + 280;
    *(_QWORD *)(v8 + 280) = v8 + 280;
    (**(void (__fastcall ***)(CTokenManager *))this)(this);
    v6 = 0;
    *a3 = (struct ICompositionFrame *)v8;
  }
  return v6;
}
