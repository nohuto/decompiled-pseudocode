/*
 * XREFs of ?bValid@DLODCOBJ@@QEAA_NXZ @ 0x140159BC0
 * Callers:
 *     ?bPrepareSrcDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@HH@Z @ 0x1400A9B14 (-bPrepareSrcDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@HH@Z.c)
 *     ?bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z @ 0x1400AA178 (-bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall DLODCOBJ::bValid(DLODCOBJ *this)
{
  return *(_QWORD *)this && *((_BYTE *)this + 97);
}
