/*
 * XREFs of TpWaitForAlpcCompletion @ 0x1800C97B0
 * Callers:
 *     <none>
 * Callees:
 *     TppBarrierAdjust @ 0x18002D290 (TppBarrierAdjust.c)
 *     TppAlpcpValidateAlpc @ 0x1800C99AC (TppAlpcpValidateAlpc.c)
 *     ZwAlpcQueryInformation @ 0x180160090 (ZwAlpcQueryInformation.c)
 */

struct _TEB *__fastcall TpWaitForAlpcCompletion(__int64 a1)
{
  struct _TEB *result; // rax
  int v3; // [rsp+48h] [rbp+10h] BYREF

  result = (struct _TEB *)TppAlpcpValidateAlpc(a1, 0LL, 0LL);
  if ( (_DWORD)result )
  {
    v3 = *(_DWORD *)(a1 + 280);
    if ( v3 )
      ZwAlpcQueryInformation(*(_QWORD *)(a1 + 272), 11LL, &v3);
    return TppBarrierAdjust((signed __int64 *)(a1 + 128), 0, 1);
  }
  return result;
}
