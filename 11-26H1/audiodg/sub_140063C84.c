/*
 * XREFs of sub_140063C84 @ 0x140063C84
 * Callers:
 *     sub_14006425C @ 0x14006425C (sub_14006425C.c)
 * Callees:
 *     memcmp @ 0x14004A694 (memcmp.c)
 */

__int64 __fastcall sub_140063C84(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rdi
  __int128 Buf2; // [rsp+20h] [rbp-10h] BYREF

  v1 = 2;
  if ( *(_DWORD *)(*(_QWORD *)a1 + 40LL) == 2 )
  {
    v2 = *(_QWORD *)(*(_QWORD *)a1 + 32LL);
    Buf2 = *(_OWORD *)(v2 + 24);
    if ( !memcmp(&xmmword_1400C6878, &Buf2, 0x10uLL) )
    {
      return 1;
    }
    else
    {
      Buf2 = *(_OWORD *)(v2 + 24);
      if ( memcmp(&qword_1400C9778, &Buf2, 0x10uLL) )
      {
        Buf2 = *(_OWORD *)(v2 + 24);
        if ( !memcmp(&unk_1400C9650, &Buf2, 0x10uLL) )
        {
          return 3;
        }
        else
        {
          Buf2 = *(_OWORD *)(v2 + 24);
          if ( !memcmp(&unk_1400C96A0, &Buf2, 0x10uLL) )
          {
            return 4;
          }
          else
          {
            Buf2 = *(_OWORD *)(v2 + 24);
            if ( !memcmp(&unk_1400C96F0, &Buf2, 0x10uLL) )
            {
              return 5;
            }
            else
            {
              Buf2 = *(_OWORD *)(v2 + 24);
              if ( !memcmp(&unk_1400C96E0, &Buf2, 0x10uLL) )
              {
                return 9;
              }
              else
              {
                Buf2 = *(_OWORD *)(v2 + 24);
                if ( !memcmp(&unk_1400C96D0, &Buf2, 0x10uLL) )
                {
                  return 6;
                }
                else
                {
                  Buf2 = *(_OWORD *)(v2 + 24);
                  if ( !memcmp(&unk_1400C9720, &Buf2, 0x10uLL) )
                  {
                    return 7;
                  }
                  else
                  {
                    Buf2 = *(_OWORD *)(v2 + 24);
                    return memcmp(&unk_1400C96B0, &Buf2, 0x10uLL) == 0 ? 8 : 0;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  else
  {
    return 0;
  }
  return v1;
}
