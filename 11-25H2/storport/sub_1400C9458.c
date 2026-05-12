/*
 * XREFs of sub_1400C9458 @ 0x1400C9458
 * Callers:
 *     sub_1400D94E0 @ 0x1400D94E0 (sub_1400D94E0.c)
 *     sub_1400E74D0 @ 0x1400E74D0 (sub_1400E74D0.c)
 *     sub_1400EE760 @ 0x1400EE760 (sub_1400EE760.c)
 *     sub_14010171C @ 0x14010171C (sub_14010171C.c)
 *     sub_140117870 @ 0x140117870 (sub_140117870.c)
 *     sub_14012FF7C @ 0x14012FF7C (sub_14012FF7C.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_1400C9458(__int64 a1, __int64 a2)
{
  int v3; // ebx
  USHORT DepthSList; // ax
  __int64 v6; // rcx
  union _SLIST_HEADER *v8; // rcx

  v3 = *(_DWORD *)(a2 + 124);
  if ( (*(_BYTE *)(*(_QWORD *)(a2 + 88) + 136LL) & 2) == 0 )
    --v3;
  DepthSList = ExQueryDepthSList((PSLIST_HEADER)(a2 + 64));
  v6 = *(unsigned __int16 *)(a2 + 136);
  if ( !(_WORD)v6 )
    v3 -= *(unsigned __int16 *)(a2 + 150);
  if ( (*(_BYTE *)(a1 + 136) & 2) != 0 )
    return _InterlockedCompareExchange16((volatile signed __int16 *)(a2 + 148), 0, 0) != 0;
  if ( (_WORD)v6 )
    v8 = (union _SLIST_HEADER *)(*(_QWORD *)(a1 + 1168) - 16LL + 16 * v6);
  else
    v8 = (union _SLIST_HEADER *)(a1 + 1152);
  return DepthSList < v3 - (unsigned int)ExQueryDepthSList(v8);
}
