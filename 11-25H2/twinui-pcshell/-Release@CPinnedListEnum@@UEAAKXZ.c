/*
 * XREFs of ?Release@CPinnedListEnum@@UEAAKXZ @ 0x18066EE80
 * Callers:
 *     ??1?$ComPtr@VCPinnedListEnum@@@WRL@Microsoft@@QEAA@XZ @ 0x180665848 (--1-$ComPtr@VCPinnedListEnum@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Attach@?$ComPtr@VCPinnedListEnum@@@WRL@Microsoft@@QEAAXPEAVCPinnedListEnum@@@Z @ 0x180666F08 (-Attach@-$ComPtr@VCPinnedListEnum@@@WRL@Microsoft@@QEAAXPEAVCPinnedListEnum@@@Z.c)
 *     ?EnumAllObjects@CPinnedList@@QEAAJPEAPEAUIEnumFullIDList@@@Z @ 0x18066826C (-EnumAllObjects@CPinnedList@@QEAAJPEAPEAUIEnumFullIDList@@@Z.c)
 *     ?EnumObjects@CPinnedList@@UEAAJPEAPEAUIEnumFullIDList@@@Z @ 0x180668370 (-EnumObjects@CPinnedList@@UEAAJPEAPEAUIEnumFullIDList@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1802D2D4C (--3@YAXPEAX@Z.c)
 *     ??1CPinnedListEnum@@AEAA@XZ @ 0x180665B18 (--1CPinnedListEnum@@AEAA@XZ.c)
 */

__int64 __fastcall CPinnedListEnum::Release(CPinnedListEnum *this)
{
  unsigned __int32 v2; // edi

  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v2 && this )
  {
    CPinnedListEnum::~CPinnedListEnum(this);
    operator delete(this);
  }
  return v2;
}
