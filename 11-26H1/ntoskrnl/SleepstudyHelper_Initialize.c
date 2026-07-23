/*
 * XREFs of SleepstudyHelper_Initialize @ 0x140B3E3F0
 * Callers:
 *     <none>
 * Callees:
 *     SleepstudyHelperCreateLibraryEx @ 0x1404E6CF0 (SleepstudyHelperCreateLibraryEx.c)
 */

__int64 __fastcall SleepstudyHelper_Initialize(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // rdx
  int v6; // [rsp+20h] [rbp-18h] BYREF
  __int64 v7; // [rsp+24h] [rbp-14h]
  __int64 v8; // [rsp+50h] [rbp+18h] BYREF

  v8 = 0LL;
  v7 = 1818784627LL;
  v6 = 1;
  result = SleepstudyHelperCreateLibraryEx(&v6, &v8);
  if ( (int)result >= 0 )
  {
    v5 = v8;
    *(_QWORD *)(v8 + 32) = a2;
    *a1 = v5;
  }
  return result;
}
