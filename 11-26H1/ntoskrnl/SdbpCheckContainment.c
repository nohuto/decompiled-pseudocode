/*
 * XREFs of SdbpCheckContainment @ 0x1408888D0
 * Callers:
 *     <none>
 * Callees:
 *     SdbpUmaInit_PCWSTR @ 0x1407196AC (SdbpUmaInit_PCWSTR.c)
 *     SdbpGetVelocityState @ 0x14088AE20 (SdbpGetVelocityState.c)
 *     SdbGetStringTagPtr @ 0x1409D4804 (SdbGetStringTagPtr.c)
 *     SdbFindFirstTag @ 0x1409D4F20 (SdbFindFirstTag.c)
 *     AslLogCallPrintf @ 0x1409D5294 (AslLogCallPrintf.c)
 *     SdbReadDWORDTag @ 0x1409D5464 (SdbReadDWORDTag.c)
 *     AslFree @ 0x1409D6144 (AslFree.c)
 */

_BOOL8 __fastcall SdbpCheckContainment(_DWORD *a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, __int64 a6)
{
  BOOL v8; // ebp
  int v9; // r15d
  __int64 v10; // rcx
  unsigned int FirstTag; // r14d
  unsigned int v12; // esi
  __int64 v13; // r9
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned int DWORDTag; // r14d
  __int64 (*StringTagPtr)(void); // rax
  __int128 v18; // kr00_16
  int v19; // eax
  __int64 v20; // rcx
  int v22; // [rsp+20h] [rbp-48h] BYREF
  __int128 v23; // [rsp+28h] [rbp-40h] BYREF
  int v24; // [rsp+70h] [rbp+8h] BYREF

  v8 = 0;
  v9 = 0;
  v24 = 0;
  v22 = 0;
  v23 = 0LL;
  FirstTag = SdbFindFirstTag(a3, a5, 16484LL);
  if ( FirstTag
    && (v12 = SdbFindFirstTag(a3, a5, 24649LL)) != 0
    && (DWORDTag = SdbReadDWORDTag(a3, FirstTag, 0LL, v13)) != 0 )
  {
    StringTagPtr = (__int64 (*)(void))SdbGetStringTagPtr(a3, v12, v14, v15);
    SdbpUmaInit_PCWSTR(StringTagPtr, (__int64 (**)(void))&v23);
    v18 = v23;
    if ( (_QWORD)v23 )
    {
      v19 = ((__int64 (__fastcall *)(int *, int *, _QWORD, _QWORD))SdbpGetVelocityState)(&v22, &v24, v23, DWORDTag);
      v9 = v24;
      v8 = v19 != 0;
    }
    else
    {
      if ( *((_QWORD *)&v23 + 1) )
      {
        AslLogCallPrintf(1, (unsigned int)"SdbpCheckContainment", 3139, (unsigned int)"Out of memory");
        goto LABEL_13;
      }
      AslLogCallPrintf(
        1,
        (unsigned int)"SdbpCheckContainment",
        3145,
        (unsigned int)"Failed to get the string from the database");
    }
  }
  else
  {
    v18 = v23;
  }
  if ( (_QWORD)v18 && (_QWORD)v18 != *((_QWORD *)&v18 + 1) )
    AslFree(v10, v18);
LABEL_13:
  v20 = a6;
  *a1 = v9;
  if ( v20 )
    *(_DWORD *)(v20 + 80) = 1;
  return v8;
}
