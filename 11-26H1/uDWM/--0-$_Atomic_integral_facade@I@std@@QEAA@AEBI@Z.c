/*
 * XREFs of ??0?$_Atomic_integral_facade@I@std@@QEAA@AEBI@Z @ 0x1800861BC
 * Callers:
 *     ??0?$atomic@H@std@@QEAA@H@Z @ 0x180086194 (--0-$atomic@H@std@@QEAA@H@Z.c)
 *     ??0?$atomic@I@std@@QEAA@I@Z @ 0x18008C47C (--0-$atomic@I@std@@QEAA@I@Z.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall std::_Atomic_integral_facade<unsigned int>::_Atomic_integral_facade<unsigned int>(
        _DWORD *a1,
        _DWORD *a2)
{
  *a1 = *a2;
  return a1;
}
