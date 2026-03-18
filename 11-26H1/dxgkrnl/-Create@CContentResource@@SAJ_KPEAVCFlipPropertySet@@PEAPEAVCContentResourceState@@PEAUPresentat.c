/*
 * XREFs of ?Create@CContentResource@@SAJ_KPEAVCFlipPropertySet@@PEAPEAVCContentResourceState@@PEAUPresentationSurfaceInfo@@@Z @ 0x1400450C8
 * Callers:
 *     ?AddContent@CFlipManager@@QEAAJ_KPEAVCFlipPropertySet@@@Z @ 0x1400449B8 (-AddContent@CFlipManager@@QEAAJ_KPEAVCFlipPropertySet@@@Z.c)
 * Callees:
 *     ?Release@CFlipResource@@QEAAKXZ @ 0x14001C888 (-Release@CFlipResource@@QEAAKXZ.c)
 *     ?Initialize@CContentResource@@IEAAJPEAUPresentationSurfaceInfo@@@Z @ 0x1400451FC (-Initialize@CContentResource@@IEAAJPEAUPresentationSurfaceInfo@@@Z.c)
 *     ??0CFlipResource@@QEAA@_KPEAVCFlipPropertySet@@@Z @ 0x1400452F0 (--0CFlipResource@@QEAA@_KPEAVCFlipPropertySet@@@Z.c)
 *     ??2?$DXGQUOTAALLOCATOR@$0BAA@$0HDHCEDEG@@@SAPEAX_K@Z @ 0x140045418 (--2-$DXGQUOTAALLOCATOR@$0BAA@$0HDHCEDEG@@@SAPEAX_K@Z.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CContentResource::Create(
        unsigned __int64 a1,
        struct CFlipPropertySet *a2,
        struct CContentResourceState **a3,
        struct PresentationSurfaceInfo *a4)
{
  CFlipResource *Pool2; // rax
  CFlipResource *v9; // rdi
  int v10; // ebx
  __int64 v12; // rax
  char v13; // cl

  Pool2 = (CFlipResource *)ExAllocatePool2(257LL, 64LL, 1919107910LL);
  v9 = Pool2;
  if ( Pool2 )
  {
    CFlipResource::CFlipResource(Pool2, a1, a2);
    *((_QWORD *)v9 + 6) = 0LL;
    *(_QWORD *)v9 = &CContentResource::`vftable';
    *((_QWORD *)v9 + 7) = 0LL;
    v10 = CContentResource::Initialize(v9, a4);
    if ( v10 >= 0 )
    {
      v12 = DXGQUOTAALLOCATOR<256,1936868166>::operator new();
      if ( v12 )
      {
        v13 = *(_BYTE *)(v12 + 32);
        *(_QWORD *)v12 = &CFlipResourceState::`vftable';
        *(_QWORD *)(v12 + 24) = v9;
        *a3 = (struct CContentResourceState *)v12;
        *(_BYTE *)(v12 + 32) = v13 & 0xF0 | 1;
        *(_QWORD *)(v12 + 16) = v12 + 8;
        *(_QWORD *)(v12 + 8) = v12 + 8;
        ++*(_DWORD *)(*(_QWORD *)(v12 + 24) + 24LL);
        *(_BYTE *)(v12 + 64) &= 0xFCu;
        *(_QWORD *)v12 = &CContentResourceState::`vftable';
        *(_QWORD *)(v12 + 40) = 0LL;
        *(_QWORD *)(v12 + 48) = 0LL;
        *(_QWORD *)(v12 + 56) = 0LL;
      }
      else
      {
        v10 = -1073741801;
      }
    }
    CFlipResource::Release(v9);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v10;
}
