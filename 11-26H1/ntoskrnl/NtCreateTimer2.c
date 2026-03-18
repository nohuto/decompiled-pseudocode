/*
 * XREFs of NtCreateTimer2 @ 0x140ABD000
 * Callers:
 *     DifNtCreateTimer2Wrapper @ 0x140674200 (DifNtCreateTimer2Wrapper.c)
 *     NtCreateIRTimer @ 0x140ABCFD0 (NtCreateIRTimer.c)
 * Callees:
 *     KeInitializeIRTimer @ 0x140456C5C (KeInitializeIRTimer.c)
 *     ExpExTimerAttributesAreValid @ 0x140456E8C (ExpExTimerAttributesAreValid.c)
 *     KeInitializeTimer2 @ 0x140456ED0 (KeInitializeTimer2.c)
 *     RtlCopyFromUser @ 0x140533E38 (RtlCopyFromUser.c)
 *     RtlReadULong64FromUser @ 0x14077F554 (RtlReadULong64FromUser.c)
 *     RtlWriteULong64ToUser @ 0x14077F758 (RtlWriteULong64ToUser.c)
 *     ObCreateObjectEx @ 0x1408FD7D0 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x14092B470 (ObInsertObjectEx.c)
 *     ExpCheckIRTimerAccess @ 0x140ABD214 (ExpCheckIRTimerAccess.c)
 */

__int64 __fastcall NtCreateTimer2(_QWORD *a1, _DWORD *a2, __int64 a3, unsigned int a4, unsigned int a5)
{
  __int64 v8; // rdx
  __int64 v9; // r10
  char PreviousMode; // si
  __int64 ULong64FromUser; // rax
  int inserted; // edi
  __int64 v13; // rbx
  __int64 result; // rax
  __int64 v15; // [rsp+20h] [rbp-58h]
  unsigned __int16 v16[6]; // [rsp+54h] [rbp-24h] BYREF
  __int64 v17; // [rsp+60h] [rbp-18h] BYREF
  __int64 v18; // [rsp+68h] [rbp-10h] BYREF

  v18 = 0LL;
  v17 = 0LL;
  if ( !ExpExTimerAttributesAreValid(a4) )
    return 3221225714LL;
  if ( v9 )
    return 3221225713LL;
  if ( a2 && (a4 & 2) == 0 )
    return 3221225712LL;
  *(_DWORD *)v16 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    ULong64FromUser = RtlReadULong64FromUser(a1);
    RtlWriteULong64ToUser(a1, ULong64FromUser);
    if ( a2 )
      RtlCopyFromUser(v16, a2, 4uLL);
  }
  else if ( a2 )
  {
    *(_DWORD *)v16 = *a2;
  }
  if ( (a4 & 2) == 0
    || (LOBYTE(v8) = PreviousMode, result = ExpCheckIRTimerAccess(*(unsigned int *)v16, v8), (int)result >= 0) )
  {
    inserted = ObCreateObjectEx(PreviousMode, ExpIRTimerObjectType, 0LL, PreviousMode, v15, 168, 0, 0, &v17, 0LL);
    if ( inserted >= 0 )
    {
      v13 = v17;
      if ( (a4 & 2) != 0 )
        KeInitializeIRTimer(v17, 0LL, 0LL, v16, a4);
      else
        KeInitializeTimer2(v17, 0LL, 0LL, a4);
      *(_QWORD *)(v13 + 136) = 0LL;
      *(_DWORD *)(v13 + 160) = a4;
      inserted = ObInsertObjectEx((char *)v13, 0LL, a5, 0, 0, 0LL, &v18);
      LODWORD(v17) = inserted;
      if ( inserted >= 0 )
      {
        if ( PreviousMode )
          RtlWriteULong64ToUser(a1, v18);
        else
          *a1 = v18;
      }
    }
    return (unsigned int)inserted;
  }
  return result;
}
