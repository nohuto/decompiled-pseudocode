/*
 * XREFs of sub_1400F2B50 @ 0x1400F2B50
 * Callers:
 *     sub_1400E2990 @ 0x1400E2990 (sub_1400E2990.c)
 *     sub_1400E63C4 @ 0x1400E63C4 (sub_1400E63C4.c)
 * Callees:
 *     sub_14002CDD0 @ 0x14002CDD0 (sub_14002CDD0.c)
 *     sub_1400A870C @ 0x1400A870C (sub_1400A870C.c)
 */

__int64 __fastcall sub_1400F2B50(__int64 a1)
{
  unsigned int v2; // ebx
  unsigned int v3; // esi
  int v4; // ebp
  int v5; // esi
  char v6; // si

  v2 = 0;
  v3 = 0;
  if ( *(_WORD *)(a1 + 22) )
  {
    while ( 2 )
    {
      v4 = 0;
      while ( *(_WORD *)(*(_QWORD *)(a1 + 728) + 192LL * v3 + 152) )
      {
        sub_14002CDD0(0x3E8u);
        if ( (unsigned int)++v4 >= 0x7D0 )
        {
          v6 = v3 + 1;
LABEL_12:
          v2 = -1073741643;
          sub_1400A870C(
            a1,
            1,
            3,
            (__int64)L"Controller submission queue completion quiesce timeout",
            L"QueueId",
            v6,
            &dword_140149108,
            0,
            &dword_140149108,
            0,
            &dword_140149108,
            0,
            (void *)&dword_140149108,
            0,
            (void *)&dword_140149108,
            0,
            (void *)&dword_140149108,
            0,
            (void *)&dword_140149108,
            0);
          return v2;
        }
      }
      if ( ++v3 < *(unsigned __int16 *)(a1 + 22) )
        continue;
      break;
    }
  }
  v5 = 0;
  while ( *(_WORD *)(*(_QWORD *)(a1 + 712) + 152LL) )
  {
    sub_14002CDD0(0x3E8u);
    if ( (unsigned int)++v5 >= 0x7D0 )
    {
      v6 = 0;
      goto LABEL_12;
    }
  }
  return v2;
}
