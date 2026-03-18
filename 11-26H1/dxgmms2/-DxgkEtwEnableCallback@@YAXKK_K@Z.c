/*
 * XREFs of ?DxgkEtwEnableCallback@@YAXKK_K@Z @ 0x140124758
 * Callers:
 *     McGenControlCallbackV2 @ 0x140043980 (McGenControlCallbackV2.c)
 * Callees:
 *     <none>
 */

void __fastcall DxgkEtwEnableCallback()
{
  bool v0; // al

  v0 = (qword_14008A010 & 0x461C8ED7) != 0 && (qword_14008A018 & 0xFFFFFFFFB9E37128uLL) == 0;
  bTracingEnabled = v0;
}
