/*
 * XREFs of SepModifyTokenPolicyCounter @ 0x140774FAC
 * Callers:
 *     NtSetInformationToken @ 0x140810BD0 (NtSetInformationToken.c)
 *     SepDuplicateToken @ 0x14092A5A0 (SepDuplicateToken.c)
 *     SepFilterToken @ 0x140A45584 (SepFilterToken.c)
 *     SepTokenDeleteMethod @ 0x140B7CB10 (SepTokenDeleteMethod.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SepModifyTokenPolicyCounter(__int64 a1, char a2)
{
  _LIST_ENTRY *v2; // r9
  PVOID *p_SparePtr; // r10
  int v4; // ebx
  __int64 v5; // rsi
  unsigned int v6; // r8d
  char v7; // di
  unsigned __int16 v8; // r11
  __int64 result; // rax

  v2 = &ExpPlatformBinaryLock.ApcState.ApcListHead[1];
  p_SparePtr = &SepRmCapTableLock.WaitBlock[3].SparePtr;
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
          _InterlockedAdd((volatile signed __int32 *)&SepRmCapTableLock.RelativeTimerBias + v4 + (unsigned int)v8, v6);
          v7 = 1;
        }
        ++v8;
      }
      while ( v8 < LOWORD(v2->Flink) );
      if ( v7 )
        _InterlockedAdd((volatile signed __int32 *)p_SparePtr, v6);
    }
    result = LOWORD(v2->Flink);
    p_SparePtr = (PVOID *)((char *)p_SparePtr + 4);
    v4 += result;
    v2 = (_LIST_ENTRY *)((char *)v2 + 2);
    --v5;
  }
  while ( v5 );
  return result;
}
