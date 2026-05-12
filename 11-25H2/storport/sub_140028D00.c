/*
 * XREFs of sub_140028D00 @ 0x140028D00
 * Callers:
 *     sub_140009D88 @ 0x140009D88 (sub_140009D88.c)
 *     sub_14000EF0C @ 0x14000EF0C (sub_14000EF0C.c)
 *     sub_140027FB4 @ 0x140027FB4 (sub_140027FB4.c)
 *     sub_140028AF8 @ 0x140028AF8 (sub_140028AF8.c)
 *     sub_140028C24 @ 0x140028C24 (sub_140028C24.c)
 *     sub_1400530F8 @ 0x1400530F8 (sub_1400530F8.c)
 *     sub_140059D04 @ 0x140059D04 (sub_140059D04.c)
 *     sub_14006D53C @ 0x14006D53C (sub_14006D53C.c)
 *     sub_14009D9B4 @ 0x14009D9B4 (sub_14009D9B4.c)
 *     sub_1400A10B8 @ 0x1400A10B8 (sub_1400A10B8.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_140028D00(struct _EX_RUNDOWN_REF *a1, char a2)
{
  signed __int64 Count; // rbx
  bool v4; // zf
  signed __int64 v5; // rax
  signed __int64 v6; // rax

  Count = a1[11].Count;
  if ( a2 )
  {
    if ( (Count & 1) == 0 )
    {
      ExWaitForRundownProtectionRelease(a1 + 10);
      ExRundownCompleted(a1 + 10);
      do
      {
        v5 = _InterlockedCompareExchange64((volatile signed __int64 *)&a1[11], Count | 1, Count);
        v4 = Count == v5;
        Count = v5;
      }
      while ( !v4 && (v5 & 1) == 0 );
    }
  }
  else if ( (Count & 3) == 0 )
  {
    do
    {
      v6 = _InterlockedCompareExchange64((volatile signed __int64 *)&a1[11], Count | 2, Count);
      v4 = Count == v6;
      Count = v6;
    }
    while ( !v4 && (v6 & 3) == 0 );
  }
}
