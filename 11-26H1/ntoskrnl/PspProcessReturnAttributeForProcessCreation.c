/*
 * XREFs of PspProcessReturnAttributeForProcessCreation @ 0x140A79F0C
 * Callers:
 *     PspBuildCreateProcessContext @ 0x140A79424 (PspBuildCreateProcessContext.c)
 * Callees:
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F8FB0 (ExRaiseDatatypeMisalignment.c)
 *     ProbeForWrite @ 0x140925C90 (ProbeForWrite.c)
 */

__int64 __fastcall PspProcessReturnAttributeForProcessCreation(__int64 a1, _QWORD *a2, SIZE_T a3, __int64 a4, char a5)
{
  __int64 v5; // r9
  unsigned int v8; // ebx
  _QWORD *v9; // rcx
  SIZE_T Src; // [rsp+50h] [rbp+18h] BYREF

  Src = a3;
  v5 = a3;
  if ( *(_QWORD *)(a1 + 8) == a3 )
  {
    v8 = 0;
    if ( a5 )
    {
      ProbeForWrite(*(volatile void **)(a1 + 16), a3, 4u);
      v5 = Src;
    }
    *a2 = *(_QWORD *)(a1 + 16);
    v9 = *(_QWORD **)(a1 + 24);
    if ( v9 )
    {
      if ( a5 )
      {
        if ( ((unsigned __int8)v9 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        RtlWriteULong64ToUser(v9, v5);
      }
      else
      {
        RtlCopyVolatileMemory(v9, &Src, 8uLL);
      }
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v8;
}
