/*
 * XREFs of XmPopStack @ 0x1404A1068
 * Callers:
 *     XmPopOp @ 0x1404A1040 (XmPopOp.c)
 *     XmIretOp @ 0x1405B01A0 (XmIretOp.c)
 *     XmLeaveOp @ 0x1405B0210 (XmLeaveOp.c)
 *     XmRetOp @ 0x1405B0260 (XmRetOp.c)
 * Callees:
 *     x86BiosTranslateAddress @ 0x1404A21B0 (x86BiosTranslateAddress.c)
 *     XmSetSourceValue @ 0x1404A226C (XmSetSourceValue.c)
 *     longjmp @ 0x140535DC0 (longjmp.c)
 */

__int64 __fastcall XmPopStack(__int64 a1)
{
  __int64 v1; // rdx
  int v3; // ecx
  int v4; // eax
  __int64 v5; // rcx
  __int64 v6; // rax

  v1 = *(unsigned int *)(a1 + 40);
  v3 = *(_DWORD *)(a1 + 120);
  if ( (unsigned int)v1 > (unsigned int)*(unsigned __int16 *)(a1 + 72) - v3 )
    longjmp((_JBTYPE *)(a1 + 160), 16);
  v4 = v3 + 1;
  v5 = *(unsigned __int16 *)(a1 + 60);
  *(_DWORD *)(a1 + 40) = v1 + v4;
  v6 = x86BiosTranslateAddress(v5, v1);
  XmSetSourceValue(a1, v6);
  return *(unsigned int *)(a1 + 108);
}
