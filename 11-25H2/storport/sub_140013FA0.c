/*
 * XREFs of sub_140013FA0 @ 0x140013FA0
 * Callers:
 *     sub_140012624 @ 0x140012624 (sub_140012624.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 */

__int64 __fastcall sub_140013FA0(__int64 a1)
{
  ULONG **v1; // rsi
  unsigned int v2; // ebx
  unsigned int v4; // edi
  ULONG *v5; // rax

  v1 = (ULONG **)(a1 + 4880);
  v2 = 0;
  v4 = (*(unsigned __int8 *)(a1 + 456) >> 5) + 1;
  if ( (*(_BYTE *)(a1 + 456) & 0x1F) == 0 )
    v4 = *(unsigned __int8 *)(a1 + 456) >> 5;
  if ( *(char *)(a1 + 110) < 0 && (v5 = *v1) != 0LL
    || (v5 = (ULONG *)sub_1400143E0(64LL, 4LL * v4, 1297506642LL, *(_QWORD *)(a1 + 8)), (*v1 = v5) != 0LL) )
  {
    RtlInitializeBitMap((PRTL_BITMAP)(a1 + 4864), v5, 32 * v4);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v2;
}
