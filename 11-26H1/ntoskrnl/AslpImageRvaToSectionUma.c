/*
 * XREFs of AslpImageRvaToSectionUma @ 0x140895930
 * Callers:
 *     AslpImageRvaToVa @ 0x140895A08 (AslpImageRvaToVa.c)
 * Callees:
 *     MmIsUserAddress @ 0x1404468F0 (MmIsUserAddress.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     AslpImageFirstSectionUma @ 0x140895834 (AslpImageFirstSectionUma.c)
 */

unsigned __int64 __fastcall AslpImageRvaToSectionUma(unsigned __int64 *a1, unsigned int a2, __int64 a3)
{
  unsigned __int64 v5; // rbx
  bool IsUserAddress; // al
  unsigned int v7; // r15d
  bool v8; // r14
  unsigned int i; // edi
  unsigned int ULongFromUser; // esi
  int v11; // eax
  unsigned __int16 v13; // [rsp+50h] [rbp+8h] BYREF
  unsigned __int64 v14; // [rsp+68h] [rbp+20h] BYREF

  v13 = 0;
  v14 = 0LL;
  if ( a1 )
    v14 = *a1;
  v5 = AslpImageFirstSectionUma(&v13, &v14, a3);
  if ( !a1 || v14 == *a1 )
  {
    if ( !v5 )
      return 0LL;
  }
  else
  {
    if ( !v5 )
      return 0LL;
    *a1 = v14;
  }
  IsUserAddress = MmIsUserAddress(v5);
  v7 = v13;
  v8 = IsUserAddress;
  for ( i = 0; i < v7; ++i )
  {
    if ( v8 )
    {
      ULongFromUser = RtlReadULongFromUser((unsigned int *)(v5 + 12));
      v11 = RtlReadULongFromUser((unsigned int *)(v5 + 16));
    }
    else
    {
      ULongFromUser = *(_DWORD *)(v5 + 12);
      v11 = *(_DWORD *)(v5 + 16);
    }
    if ( a2 >= ULongFromUser && a2 < ULongFromUser + v11 )
      return v5;
    v5 += 40LL;
  }
  return 0LL;
}
