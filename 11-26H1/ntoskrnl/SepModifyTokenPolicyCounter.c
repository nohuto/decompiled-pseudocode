/*
 * XREFs of SepModifyTokenPolicyCounter @ 0x140777FAC
 * Callers:
 *     NtSetInformationToken @ 0x140816660 (NtSetInformationToken.c)
 *     SepDuplicateToken @ 0x1409060B0 (SepDuplicateToken.c)
 *     SepFilterToken @ 0x1409E3714 (SepFilterToken.c)
 *     SepTokenDeleteMethod @ 0x140B85580 (SepTokenDeleteMethod.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SepModifyTokenPolicyCounter(__int64 a1, char a2)
{
  _LIST_ENTRY *v2; // r9
  $9F5D72EF54BCA79AE5AD03946D2C2FEF *v3; // r10
  int v4; // ebx
  __int64 v5; // rsi
  unsigned int v6; // r8d
  char v7; // di
  unsigned __int16 v8; // r11
  __int64 result; // rax

  v2 = &ExpPlatformBinaryLock.ApcState.ApcListHead[1];
  v3 = &SepRmCapTableLock.216;
  v4 = 0;
  v5 = 9LL;
  v6 = a2 != 0 ? 1 : -1;
  do
  {
    v7 = 0;
    v8 = 0;
    if ( LOWORD(v2->Flink) )
    {
      do
      {
        if ( ((*(_BYTE *)(((unsigned __int64)(v4 + (unsigned int)v8) >> 1) + a1) >> (4 * ((v8 + v4) & 1))) & 0xF) != 0 )
        {
          _InterlockedAdd((volatile signed __int32 *)&SepRmCapTableLock.Timer.DueTime + v4 + (unsigned int)v8, v6);
          v7 = 1;
        }
        ++v8;
      }
      while ( v8 < LOWORD(v2->Flink) );
      if ( v7 )
        _InterlockedAdd((volatile signed __int32 *)v3, v6);
    }
    result = LOWORD(v2->Flink);
    v3 = ($9F5D72EF54BCA79AE5AD03946D2C2FEF *)((char *)v3 + 4);
    v4 += result;
    v2 = (_LIST_ENTRY *)((char *)v2 + 2);
    --v5;
  }
  while ( v5 );
  return result;
}
