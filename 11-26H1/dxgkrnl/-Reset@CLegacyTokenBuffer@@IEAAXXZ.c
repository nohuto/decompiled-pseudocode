/*
 * XREFs of ?Reset@CLegacyTokenBuffer@@IEAAXXZ @ 0x14001EB9C
 * Callers:
 *     ?Retire@CCompositionFrame@@UEAAXAEBUDXGI_FRAME_STATISTICS@@0@Z @ 0x14001DFE0 (-Retire@CCompositionFrame@@UEAAXAEBUDXGI_FRAME_STATISTICS@@0@Z.c)
 *     ?Release@CCompositionFrame@@UEAAJXZ @ 0x14001E210 (-Release@CCompositionFrame@@UEAAJXZ.c)
 *     ?Discard@CCompositionFrame@@UEAAXXZ @ 0x14001E5A0 (-Discard@CCompositionFrame@@UEAAXXZ.c)
 *     ?Create@CLegacyTokenBuffer@@KAJPEAPEAV1@@Z @ 0x14003B37C (-Create@CLegacyTokenBuffer@@KAJPEAPEAV1@@Z.c)
 *     ??_GCLegacyTokenBuffer@@AEAAPEAXI@Z @ 0x14005FD70 (--_GCLegacyTokenBuffer@@AEAAPEAXI@Z.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 */

void __fastcall CLegacyTokenBuffer::Reset(CLegacyTokenBuffer *this)
{
  char *v2; // rbx
  char **v3; // rax
  char **v4; // rcx

  v2 = (char *)this + 16;
  while ( 1 )
  {
    v3 = (char **)*((_QWORD *)v2 + 1);
    if ( *v3 != v2 || (v4 = (char **)v3[1], *v4 != (char *)v3) )
      __fastfail(3u);
    *((_QWORD *)v2 + 1) = v4;
    *v4 = v2;
    if ( v3 == (char **)v2 )
      break;
    if ( v3 )
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v3);
  }
  *((_DWORD *)v2 + 4) = 0;
  *((_QWORD *)this + 261) = v2;
  *((_QWORD *)this + 262) = (char *)this + 36;
  *((_DWORD *)this + 521) = 0;
  *((_DWORD *)this + 526) = 2048;
  *((_BYTE *)this + 2108) = 0;
}
