/*
 * XREFs of SdbpCheckContainment @ 0x1800948B0
 * Callers:
 *     <none>
 * Callees:
 *     AslLogCallPrintf @ 0x18006DFF0 (AslLogCallPrintf.c)
 *     SdbFindFirstTag @ 0x1800930BC (SdbFindFirstTag.c)
 *     SdbGetStringTagPtr @ 0x1800933A4 (SdbGetStringTagPtr.c)
 *     SdbReadDWORDTag @ 0x180093760 (SdbReadDWORDTag.c)
 *     SdbpGetVelocityState @ 0x18009699C (SdbpGetVelocityState.c)
 */

_BOOL8 __fastcall SdbpCheckContainment(_DWORD *a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, __int64 a6)
{
  BOOL v8; // ebx
  int v9; // ebp
  unsigned int FirstTag; // r14d
  unsigned int v11; // esi
  unsigned int DWORDTag; // r14d
  __int64 StringTagPtr; // rax
  int v14; // eax
  __int64 v15; // rcx
  _QWORD v17[7]; // [rsp+20h] [rbp-38h] BYREF
  int v18; // [rsp+60h] [rbp+8h] BYREF

  v8 = 0;
  v9 = 0;
  LODWORD(v17[0]) = 0;
  v18 = 0;
  FirstTag = SdbFindFirstTag(a3, a5, 16484);
  if ( FirstTag )
  {
    v11 = SdbFindFirstTag(a3, a5, 24649);
    if ( v11 )
    {
      DWORDTag = SdbReadDWORDTag(a3, FirstTag, 0);
      if ( DWORDTag )
      {
        StringTagPtr = SdbGetStringTagPtr(a3, v11);
        if ( StringTagPtr )
        {
          v14 = ((__int64 (__fastcall *)(_QWORD *, int *, __int64, _QWORD))SdbpGetVelocityState)(
                  v17,
                  &v18,
                  StringTagPtr,
                  DWORDTag);
          v9 = v18;
          v8 = v14 != 0;
        }
        else
        {
          AslLogCallPrintf(1LL, "SdbpCheckContainment", 3145LL, "Failed to get the string from the database", v17[0]);
        }
      }
    }
  }
  v15 = a6;
  *a1 = v9;
  if ( v15 )
    *(_DWORD *)(v15 + 80) = 1;
  return v8;
}
