/*
 * XREFs of sub_14003A52C @ 0x14003A52C
 * Callers:
 *     sub_14006B21C @ 0x14006B21C (sub_14006B21C.c)
 * Callees:
 *     sub_14008D9B8 @ 0x14008D9B8 (sub_14008D9B8.c)
 */

__int64 __fastcall sub_14003A52C(union _SLIST_HEADER *a1)
{
  unsigned int i; // edi
  int Alignment_low; // ecx
  int v4; // ebp
  ULONGLONG Region; // rsi
  __int64 Pool2; // rax

  if ( LOWORD(a1->Alignment) >= 0xAu )
    return 0LL;
  for ( i = 0; ; ++i )
  {
    Alignment_low = LOWORD(a1->Alignment);
    if ( i >= 10 - Alignment_low )
    {
      LOWORD(a1->Alignment) = i + Alignment_low;
      return 0LL;
    }
    v4 = *((unsigned __int16 *)&a1->Header8 + 1);
    Region = a1[2].Region;
    Pool2 = ExAllocatePool2(64LL, *((unsigned __int16 *)&a1->Header8 + 1), 1715757394LL);
    if ( !Pool2 )
      break;
    *(_DWORD *)(Pool2 + 16) = 134684675;
    ExpInterlockedPushEntrySList(a1 + 5, (PSLIST_ENTRY)Pool2);
  }
  if ( Region )
    sub_14008D9B8(Region, 64, v4, 1715757394, 0x80000000);
  LOWORD(a1->Alignment) += i;
  return 3221225495LL;
}
