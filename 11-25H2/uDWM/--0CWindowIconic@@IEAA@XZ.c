/*
 * XREFs of ??0CWindowIconic@@IEAA@XZ @ 0x180054868
 * Callers:
 *     ?Create@CWindowIconic@@SAJPEAVCWindowData@@PEAPEAV1@_N@Z @ 0x18005478C (-Create@CWindowIconic@@SAJPEAVCWindowData@@PEAPEAV1@_N@Z.c)
 * Callees:
 *     ??0CBaseObject@@QEAA@XZ @ 0x1800088E4 (--0CBaseObject@@QEAA@XZ.c)
 *     ??0CBitmapSourceArray@@QEAA@XZ @ 0x180011E44 (--0CBitmapSourceArray@@QEAA@XZ.c)
 */

CWindowIconic *__fastcall CWindowIconic::CWindowIconic(CWindowIconic *this)
{
  _QWORD *v1; // r9
  CWindowIconic *v2; // r9
  CWindowIconic *result; // rax

  CBaseObject::CBaseObject(this);
  *v1 = &CWindowIconic::`vftable';
  CBitmapSourceArray::CBitmapSourceArray((CBitmapSourceArray *)(v1 + 4));
  result = v2;
  *((_QWORD *)v2 + 3) = 0LL;
  *((_QWORD *)v2 + 8) = 0LL;
  *((_QWORD *)v2 + 10) = 0LL;
  *((_QWORD *)v2 + 11) = 0LL;
  *((_QWORD *)v2 + 12) = 0LL;
  *((_QWORD *)v2 + 13) = 0LL;
  *((_QWORD *)v2 + 14) = 0LL;
  return result;
}
