/*
 * XREFs of sub_1400F2220 @ 0x1400F2220
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400F1D38 @ 0x1400F1D38 (sub_1400F1D38.c)
 */

void __fastcall sub_1400F2220(PDEVICE_OBJECT DeviceObject, _DWORD *Context)
{
  volatile signed __int32 *v2; // rbx

  if ( Context )
  {
    v2 = Context - 356;
    sub_1400F1D38((__int64)(Context - 356), (char)Context, Context[2]);
    _interlockedbittestandreset(v2 + 268, 7u);
  }
}
