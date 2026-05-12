/*
 * XREFs of sub_1400C4FBC @ 0x1400C4FBC
 * Callers:
 *     sub_140185514 @ 0x140185514 (sub_140185514.c)
 *     sub_140185648 @ 0x140185648 (sub_140185648.c)
 *     sub_14018576C @ 0x14018576C (sub_14018576C.c)
 *     sub_140186D04 @ 0x140186D04 (sub_140186D04.c)
 *     sub_1401875C8 @ 0x1401875C8 (sub_1401875C8.c)
 *     sub_140187B58 @ 0x140187B58 (sub_140187B58.c)
 *     sub_140188328 @ 0x140188328 (sub_140188328.c)
 *     sub_14018852C @ 0x14018852C (sub_14018852C.c)
 *     sub_140188720 @ 0x140188720 (sub_140188720.c)
 *     sub_140188988 @ 0x140188988 (sub_140188988.c)
 *     sub_140188B8C @ 0x140188B8C (sub_140188B8C.c)
 *     sub_140188EAC @ 0x140188EAC (sub_140188EAC.c)
 *     sub_1401891B4 @ 0x1401891B4 (sub_1401891B4.c)
 *     sub_1401896FC @ 0x1401896FC (sub_1401896FC.c)
 * Callees:
 *     sub_1400C5164 @ 0x1400C5164 (sub_1400C5164.c)
 */

__int64 __fastcall sub_1400C4FBC(__int64 a1)
{
  signed __int64 v2; // rcx
  __int64 v3; // rax
  __int64 v4; // rcx
  unsigned int v5; // ebx

  ExAcquireFastMutex((PFAST_MUTEX)(*(_QWORD *)(a1 + 6160) + 128LL));
  v2 = _InterlockedExchangeAdd64((volatile signed __int64 *)(*(_QWORD *)(a1 + 6160) + 120LL), 0xFFFFFFFFFFFFFFFFuLL);
  v3 = *(_QWORD *)(a1 + 6160);
  v4 = v2 - 1;
  if ( v4 )
  {
    if ( v4 < 1 )
    {
      *(_DWORD *)(v3 + 8) |= 4u;
      v5 = -1073741595;
    }
    else if ( *(_DWORD *)(v3 + 32) == 1 )
    {
      v5 = 0;
    }
    else
    {
      *(_DWORD *)(v3 + 8) |= 2u;
      v5 = -1073741436;
    }
  }
  else
  {
    v5 = 0;
    if ( *(_DWORD *)(v3 + 32) )
      v5 = sub_1400C5164(a1, 0LL);
    else
      *(_DWORD *)(v3 + 8) |= 2u;
  }
  ExReleaseFastMutex((PFAST_MUTEX)(*(_QWORD *)(a1 + 6160) + 128LL));
  return v5;
}
