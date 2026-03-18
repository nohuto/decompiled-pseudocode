/*
 * XREFs of ?QueryFontCaps@PDEVOBJ@@QEAAJKPEAK@Z @ 0x14033A8B4
 * Callers:
 *     ?bRealizeFont@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAUHDEV__@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_XFORM@@QEAU_POINTL@@KKHHK@Z @ 0x14010651C (-bRealizeFont@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAUHDEV__@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_X.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PDEVOBJ::QueryFontCaps(PDEVOBJ *this, __int64 a2, unsigned int *a3)
{
  return (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)this + 3032LL))(2LL, a3);
}
