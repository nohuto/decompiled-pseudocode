/*
 * XREFs of PsSetProcessDxgProcess @ 0x140B19C90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall PsSetProcessDxgProcess(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a1 + 1760) = a2;
}
