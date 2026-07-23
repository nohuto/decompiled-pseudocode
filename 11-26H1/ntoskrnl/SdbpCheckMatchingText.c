/*
 * XREFs of SdbpCheckMatchingText @ 0x1408897A0
 * Callers:
 *     <none>
 * Callees:
 *     SdbpUmaInit_PCWSTR @ 0x1407196AC (SdbpUmaInit_PCWSTR.c)
 *     SdbpCheckMatchingTextEntry @ 0x140889950 (SdbpCheckMatchingTextEntry.c)
 *     SdbpGetMatchingTextAttributes @ 0x14088A7F0 (SdbpGetMatchingTextAttributes.c)
 *     AslLogCallPrintf @ 0x1409D5294 (AslLogCallPrintf.c)
 *     AslFree @ 0x1409D6144 (AslFree.c)
 */

__int64 __fastcall SdbpCheckMatchingText(_DWORD *a1, __int64 a2, int a3, __int64 a4, int a5, __int64 a6)
{
  unsigned int v8; // r15d
  __int64 v9; // rcx
  __int128 v10; // kr00_16
  __int64 v11; // r14
  int v13; // [rsp+50h] [rbp-30h] BYREF
  int v14; // [rsp+54h] [rbp-2Ch] BYREF
  int v15; // [rsp+58h] [rbp-28h] BYREF
  int v16; // [rsp+5Ch] [rbp-24h] BYREF
  __int64 v17; // [rsp+60h] [rbp-20h] BYREF
  void *Src; // [rsp+68h] [rbp-18h] BYREF
  __int128 v19; // [rsp+70h] [rbp-10h] BYREF
  int v20; // [rsp+B0h] [rbp+30h] BYREF

  v20 = 0x2000;
  *a1 = 0;
  v16 = 0;
  v15 = 0;
  Src = 0LL;
  v17 = 0LL;
  v14 = 0;
  v8 = 0;
  v13 = 0;
  v19 = 0LL;
  if ( (unsigned int)SdbpGetMatchingTextAttributes(
                       a3,
                       a5,
                       (unsigned int)&Src,
                       (unsigned int)&v17,
                       (__int64)&v14,
                       (__int64)&v13,
                       (__int64)&v20) )
  {
    SdbpUmaInit_PCWSTR((__int64 (*)(void))Src, (__int64 (**)(void))&v19);
    v10 = v19;
    if ( !(_QWORD)v19 && *((_QWORD *)&v19 + 1) )
    {
      AslLogCallPrintf(v19 + 1, (unsigned int)"SdbpCheckMatchingText", 2305, (unsigned int)"Out of memory");
      goto LABEL_12;
    }
    v11 = a6;
    if ( (unsigned int)SdbpCheckMatchingTextEntry(a2, a6, v19, v17, v14, v13, v20, &v16, &v15) )
    {
      v8 = 1;
      *(_DWORD *)(v11 + 80) |= v15;
      *a1 = v16;
    }
    else
    {
      AslLogCallPrintf(
        1,
        (unsigned int)"SdbpCheckMatchingText",
        2322,
        (unsigned int)"Failed to check MATCHING_TEXT entry");
    }
  }
  else
  {
    AslLogCallPrintf(1, (unsigned int)"SdbpCheckMatchingText", 2299, (unsigned int)"Failed to read MATCHING_TEXT entry");
    v10 = v19;
  }
  if ( (_QWORD)v10 && (_QWORD)v10 != *((_QWORD *)&v10 + 1) )
    AslFree(v9, v10);
LABEL_12:
  if ( v17 )
    AslFree(v9, v17);
  return v8;
}
