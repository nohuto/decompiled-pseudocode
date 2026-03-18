/*
 * XREFs of ?GreIsThreadTerminating@@YA_NPEAU_GRETHREAD@@@Z @ 0x140095020
 * Callers:
 *     bConstructGET @ 0x140094F10 (bConstructGET.c)
 *     _PDEVOBJ::PDEVOBJ_::_2_::_lambda_1_::operator() @ 0x14019D5BC (_PDEVOBJ--PDEVOBJ_--_2_--_lambda_1_--operator().c)
 * Callees:
 *     <none>
 */

bool __fastcall GreIsThreadTerminating(PETHREAD *a1)
{
  return PsIsThreadTerminating(*(a1 - 1)) != 0;
}
