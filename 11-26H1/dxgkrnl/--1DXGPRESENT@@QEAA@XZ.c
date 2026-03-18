/*
 * XREFs of ??1DXGPRESENT@@QEAA@XZ @ 0x1403A85B0
 * Callers:
 *     ??1DXGCONTEXT@@QEAA@XZ @ 0x1403A76E4 (--1DXGCONTEXT@@QEAA@XZ.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 */

void __fastcall DXGPRESENT::~DXGPRESENT(void **this)
{
  void *v2; // rcx
  __int64 v3; // rsi
  unsigned int v4; // ecx

  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(this[2]);
  v2 = this[15];
  this[2] = 0LL;
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v2);
  v3 = 0LL;
  this[15] = 0LL;
  while ( 1 )
  {
    v4 = 1;
    if ( *((_DWORD *)this + 17) )
      v4 = *((_DWORD *)this + 17);
    if ( (unsigned int)v3 >= v4 )
      break;
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(this[v3 + 28]);
    this[v3 + 28] = 0LL;
    v3 = (unsigned int)(v3 + 1);
  }
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(this[140]);
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(this[106]);
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(this[92]);
}
