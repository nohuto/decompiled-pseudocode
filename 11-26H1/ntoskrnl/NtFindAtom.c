/*
 * XREFs of NtFindAtom @ 0x1408417F0
 * Callers:
 *     DifNtFindAtomWrapper @ 0x140677B60 (DifNtFindAtomWrapper.c)
 * Callees:
 *     RtlCopyFromUser @ 0x140533E38 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140733080 (RtlCopyVolatileMemory.c)
 *     RtlReadUShortFromUser @ 0x14077F5CC (RtlReadUShortFromUser.c)
 *     RtlWriteUShortToUser @ 0x14077F7E4 (RtlWriteUShortToUser.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F29F0 (ExRaiseDatatypeMisalignment.c)
 *     RtlLookupAtomInAtomTable @ 0x14091A550 (RtlLookupAtomInAtomTable.c)
 *     PsInvokeWin32Callout @ 0x140A41140 (PsInvokeWin32Callout.c)
 */

__int64 __fastcall NtFindAtom(_WORD *Src, size_t Size, unsigned __int16 *a3)
{
  size_t v4; // rbx
  __int64 v6; // r12
  __int64 result; // rax
  char PreviousMode; // r14
  _WORD *v9; // r15
  __int16 UShortFromUser; // ax
  __int16 Srca[6]; // [rsp+24h] [rbp-274h] BYREF
  __int128 v12; // [rsp+30h] [rbp-268h] BYREF
  __int64 v13; // [rsp+40h] [rbp-258h]
  _WORD *v14; // [rsp+48h] [rbp-250h]
  _WORD v15[256]; // [rsp+50h] [rbp-248h] BYREF

  v4 = (unsigned int)Size;
  v12 = 0LL;
  v13 = 0LL;
  PsInvokeWin32Callout(2LL, &v12, 0LL, 0LL);
  v6 = v13;
  if ( !v13 )
    return 3221225506LL;
  if ( (unsigned int)v4 > 0x1FE )
    return 3221225485LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v9 = Src;
  if ( PreviousMode )
  {
    if ( a3 )
    {
      UShortFromUser = RtlReadUShortFromUser(a3);
      RtlWriteUShortToUser(a3, UShortFromUser);
    }
    if ( Src )
    {
      v9 = v15;
      v14 = v15;
      if ( (_DWORD)v4 && ((unsigned __int8)Src & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      RtlCopyFromUser(v15, Src, v4);
      v15[v4 >> 1] = 0;
    }
  }
  Srca[0] = 0;
  result = RtlLookupAtomInAtomTable(v6, v9, Srca);
  if ( (int)result >= 0 )
  {
    if ( a3 )
    {
      if ( PreviousMode )
        RtlWriteUShortToUser(a3, Srca[0]);
      else
        RtlCopyVolatileMemory(a3, Srca, 2uLL);
    }
    return 0LL;
  }
  return result;
}
