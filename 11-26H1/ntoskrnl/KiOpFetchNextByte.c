/*
 * XREFs of KiOpFetchNextByte @ 0x1403D2DB4
 * Callers:
 *     KiOpDecode @ 0x1403D23D8 (KiOpDecode.c)
 *     KiOpLocateDecodeEntry @ 0x1403D2B50 (KiOpLocateDecodeEntry.c)
 *     KiOpFetchBytes @ 0x1403D2C90 (KiOpFetchBytes.c)
 *     KiOpDecodeModRM @ 0x1403D2CD8 (KiOpDecodeModRM.c)
 * Callees:
 *     RtlReadUCharFromUser @ 0x14077F51C (RtlReadUCharFromUser.c)
 */

__int64 __fastcall KiOpFetchNextByte(__int64 a1, _BYTE *a2)
{
  char *v4; // rax
  char UCharFromUser; // al

  v4 = *(char **)(a1 + 16);
  if ( v4 == *(char **)(a1 + 8) )
    return 3221225473LL;
  if ( *(_BYTE *)(a1 + 81) )
    UCharFromUser = RtlReadUCharFromUser(*(_QWORD *)(a1 + 16));
  else
    UCharFromUser = *v4;
  *a2 = UCharFromUser;
  ++*(_QWORD *)(a1 + 16);
  return 0LL;
}
