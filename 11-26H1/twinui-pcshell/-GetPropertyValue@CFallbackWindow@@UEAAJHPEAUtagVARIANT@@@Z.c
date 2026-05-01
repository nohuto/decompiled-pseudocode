/*
 * XREFs of ?GetPropertyValue@CFallbackWindow@@UEAAJHPEAUtagVARIANT@@@Z @ 0x1801F4950
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_GetVisibleApp@CFallbackWindow@@AEAAJPEAPEAUIImmersiveApplication@@@Z @ 0x1802A8E04 (-_GetVisibleApp@CFallbackWindow@@AEAAJPEAPEAUIImmersiveApplication@@@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CFallbackWindow::GetPropertyValue(CFallbackWindow *this, int a2, struct tagVARIANT *a3)
{
  BSTR v6; // rax
  int VisibleApp; // eax
  BSTR v8; // rax
  struct IImmersiveApplication *v9; // rcx
  struct IImmersiveApplication *v11[2]; // [rsp+20h] [rbp-238h] BYREF
  WCHAR Buffer[264]; // [rsp+30h] [rbp-228h] BYREF

  VariantInit(a3);
  if ( a2 == 30003 )
  {
    a3->vt = 3;
    a3->lVal = 50000;
  }
  else if ( a2 == 30010 )
  {
    a3->vt = 11;
    a3->iVal = -(*((_DWORD *)this + 7) != 1);
  }
  else if ( ((a2 - 30009) & 0xFFFFFFF7) != 0 )
  {
    if ( a2 == 30011 )
    {
      v6 = SysAllocString(L"ImmersiveBackground");
      if ( v6 )
      {
        a3->vt = 8;
        a3->llVal = (LONGLONG)v6;
      }
    }
    else if ( a2 == 30005 )
    {
      v11[0] = 0LL;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)v11);
      VisibleApp = CFallbackWindow::_GetVisibleApp((CFallbackWindow *)((char *)this - 88), v11);
      if ( LoadStringW(&_ImageBase, (VisibleApp >> 31) + 9103, Buffer, 260) )
      {
        v8 = SysAllocString(Buffer);
        if ( v8 )
        {
          a3->vt = 8;
          a3->llVal = (LONGLONG)v8;
        }
      }
      v9 = v11[0];
      if ( v11[0] )
      {
        v11[0] = 0LL;
        (*(void (__fastcall **)(struct IImmersiveApplication *))(*(_QWORD *)v9 + 16LL))(v9);
      }
    }
  }
  else
  {
    a3->vt = 11;
    a3->iVal = -1;
  }
  return 0LL;
}
