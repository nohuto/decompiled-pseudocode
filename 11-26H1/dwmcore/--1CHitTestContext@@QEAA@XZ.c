/*
 * XREFs of ??1CHitTestContext@@QEAA@XZ @ 0x1802268E4
 * Callers:
 *     ??1CInputManager@@MEAA@XZ @ 0x18022695C (--1CInputManager@@MEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x1800C44D0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall CHitTestContext::~CHitTestContext(void **this)
{
  void *v2; // rcx

  operator delete(this[24]);
  operator delete(this[21]);
  v2 = this[16];
  if ( v2 )
  {
    std::_Deallocate<16>(v2, ((_BYTE *)this[18] - (_BYTE *)v2) & 0xFFFFFFFFFFFFFFF8uLL);
    this[16] = 0LL;
    this[17] = 0LL;
    this[18] = 0LL;
  }
  operator delete(this[5]);
}
