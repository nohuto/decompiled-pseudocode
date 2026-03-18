/*
 * XREFs of ?UnloadFontFile@PDEVOBJ@@QEAAH_K@Z @ 0x140227198
 * Callers:
 *     ?GreMakeFontDir@@YAKKPEAEPEAG@Z @ 0x140226FB4 (-GreMakeFontDir@@YAKKPEAEPEAG@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PDEVOBJ::UnloadFontFile(PDEVOBJ *this, __int64 a2)
{
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)this + 3048LL))(a2);
}
