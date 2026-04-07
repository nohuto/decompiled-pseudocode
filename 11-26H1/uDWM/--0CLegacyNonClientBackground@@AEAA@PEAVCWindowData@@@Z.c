/*
 * XREFs of ??0CLegacyNonClientBackground@@AEAA@PEAVCWindowData@@@Z @ 0x18006973C
 * Callers:
 *     ?Create@CLegacyNonClientBackground@@SAJPEAVCWindowData@@PEAPEAV1@@Z @ 0x18006969C (-Create@CLegacyNonClientBackground@@SAJPEAVCWindowData@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??0CContainerVisual@@IEAA@XZ @ 0x1800212BC (--0CContainerVisual@@IEAA@XZ.c)
 */

CLegacyNonClientBackground *__fastcall CLegacyNonClientBackground::CLegacyNonClientBackground(
        CLegacyNonClientBackground *this,
        struct CWindowData *a2)
{
  __int64 v2; // r9
  __int64 v3; // r10
  CLegacyNonClientBackground *result; // rax

  CContainerVisual::CContainerVisual(this);
  *(_QWORD *)(v3 + 184) = v2;
  *(_QWORD *)v3 = &CLegacyNonClientBackground::`vftable';
  *(_QWORD *)(v3 + 192) = 0LL;
  *(_QWORD *)(v3 + 200) = 0LL;
  *(_DWORD *)(v3 + 208) = -1082130432;
  *(_DWORD *)(v3 + 212) = -1082130432;
  *(_DWORD *)(v3 + 216) = -1082130432;
  *(_DWORD *)(v3 + 220) = -1082130432;
  result = (CLegacyNonClientBackground *)v3;
  *(_QWORD *)(v3 + 224) = 0LL;
  *(_QWORD *)(v3 + 232) = 0LL;
  *(_OWORD *)(v3 + 240) = 0LL;
  *(_OWORD *)(v3 + 256) = 0LL;
  return result;
}
