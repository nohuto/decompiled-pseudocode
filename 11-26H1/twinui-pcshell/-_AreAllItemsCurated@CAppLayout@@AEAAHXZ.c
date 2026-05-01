/*
 * XREFs of ?_AreAllItemsCurated@CAppLayout@@AEAAHXZ @ 0x1806C7AE4
 * Callers:
 *     ?IsCurated@CAppLayout@@UEAAHPEAUIAppLayoutItem@@@Z @ 0x1806C6AF0 (-IsCurated@CAppLayout@@UEAAHPEAUIAppLayoutItem@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?ComputeGutterWidth@ImmersiveApplicationLayout@@YAHUtagSIZE@@W4DEVICE_SCALE_FACTOR@@@Z @ 0x18067F850 (-ComputeGutterWidth@ImmersiveApplicationLayout@@YAHUtagSIZE@@W4DEVICE_SCALE_FACTOR@@@Z.c)
 *     ?VerifyLayout@CAppLayout@@UEAAJXZ @ 0x1806C7480 (-VerifyLayout@CAppLayout@@UEAAJXZ.c)
 *     ?_GetItemCountOfType@CAppLayout@@AEAAIW4APP_LAYOUT_ITEM_TYPE@@@Z @ 0x1806C81D8 (-_GetItemCountOfType@CAppLayout@@AEAAIW4APP_LAYOUT_ITEM_TYPE@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAppLayout::_AreAllItemsCurated(RTL_SRWLOCK *this)
{
  unsigned int v2; // ebx
  int ItemCountOfType; // ebp
  int v4; // esi
  int v5; // eax
  int Ptr; // edi
  int v7; // ebx
  struct tagSIZE Ptr_low; // rdx
  enum DEVICE_SCALE_FACTOR v9; // r8d
  int v10; // eax
  PVOID v11; // r15
  int v12; // eax
  unsigned int v13; // eax
  unsigned __int64 v14; // rdi
  unsigned int v15; // ebp
  _QWORD **v16; // rax
  int v17; // esi
  __int64 v18; // rcx
  __int64 v19; // rcx
  ImmersiveApplicationLayout *v21[2]; // [rsp+20h] [rbp-48h] BYREF

  v2 = 0;
  if ( (int)CAppLayout::VerifyLayout(this + 5) >= 0 )
  {
    ItemCountOfType = CAppLayout::_GetItemCountOfType(this, 1LL);
    v4 = CAppLayout::_GetItemCountOfType(this, 4LL);
    v5 = CAppLayout::_GetItemCountOfType(this, 2LL);
    Ptr = (int)this[9].Ptr;
    v7 = v5;
    Ptr_low = (struct tagSIZE)LODWORD(this[10].Ptr);
    LODWORD(v21[0]) = Ptr - LODWORD(this[8].Ptr);
    HIDWORD(v21[0]) = HIDWORD(this[9].Ptr) - HIDWORD(this[8].Ptr);
    v10 = ImmersiveApplicationLayout::ComputeGutterWidth(v21[0], Ptr_low, v9);
    v11 = this[14].Ptr;
    v12 = v7 * v10;
    v2 = 1;
    v13 = Ptr - v12 - LODWORD(this[8].Ptr);
    v14 = 0LL;
    v15 = v13 / (v4 + ItemCountOfType);
    if ( v11 )
    {
      do
      {
        if ( !v2 )
          break;
        v16 = (_QWORD **)this[13].Ptr;
        *(_OWORD *)v21 = 0LL;
        (*(void (__fastcall **)(_QWORD *, _QWORD, ImmersiveApplicationLayout **))(*v16[v14] + 56LL))(v16[v14], 0LL, v21);
        v17 = LODWORD(v21[1]) - LODWORD(v21[0]);
        v18 = *((_QWORD *)this[13].Ptr + v14);
        if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v18 + 24LL))(v18) != 1 )
        {
          v19 = *((_QWORD *)this[13].Ptr + v14);
          if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v19 + 24LL))(v19) != 4 )
            continue;
        }
        if ( v17 != v15 && v17 != v15 + 1 )
          v2 = 0;
        ++v14;
      }
      while ( v14 < (unsigned __int64)v11 );
    }
  }
  return v2;
}
