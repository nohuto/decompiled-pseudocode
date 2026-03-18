/*
 * XREFs of NtAddAtomEx @ 0x140841670
 * Callers:
 *     DifNtAddAtomExWrapper @ 0x14066A080 (DifNtAddAtomExWrapper.c)
 *     NtAddAtom @ 0x140841650 (NtAddAtom.c)
 * Callees:
 *     RtlAddAtomToAtomTableEx @ 0x140461AD0 (RtlAddAtomToAtomTableEx.c)
 *     RtlCopyFromUser @ 0x140533E38 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140733080 (RtlCopyVolatileMemory.c)
 *     RtlReadUShortFromUser @ 0x14077F5CC (RtlReadUShortFromUser.c)
 *     RtlWriteUShortToUser @ 0x14077F7E4 (RtlWriteUShortToUser.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F29F0 (ExRaiseDatatypeMisalignment.c)
 *     PsInvokeWin32Callout @ 0x140A41140 (PsInvokeWin32Callout.c)
 */

__int64 __fastcall NtAddAtomEx(_WORD *Src, size_t Size, unsigned __int16 *a3, unsigned int a4)
{
  size_t v6; // rbx
  __int64 v8; // r12
  __int64 result; // rax
  char PreviousMode; // r14
  _WORD *v11; // r15
  __int16 UShortFromUser; // ax
  unsigned __int16 Srca[6]; // [rsp+24h] [rbp-274h] BYREF
  __int128 v14; // [rsp+30h] [rbp-268h] BYREF
  __int64 v15; // [rsp+40h] [rbp-258h]
  _WORD *v16; // [rsp+48h] [rbp-250h]
  _WORD v17[256]; // [rsp+50h] [rbp-248h] BYREF

  v6 = (unsigned int)Size;
  if ( (a4 & 0xFFFFFFFD) != 0 )
    return 3221225485LL;
  v14 = 0LL;
  v15 = 0LL;
  PsInvokeWin32Callout(2LL, &v14, 0LL, 0LL);
  v8 = v15;
  if ( !v15 )
    return 3221225506LL;
  if ( (unsigned int)v6 > 0x1FE )
    return 3221225485LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v11 = Src;
  if ( PreviousMode )
  {
    if ( a3 )
    {
      UShortFromUser = RtlReadUShortFromUser(a3);
      RtlWriteUShortToUser(a3, UShortFromUser);
    }
    if ( Src )
    {
      v11 = v17;
      v16 = v17;
      if ( (_DWORD)v6 && ((unsigned __int8)Src & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      RtlCopyFromUser(v17, Src, v6);
      v17[v6 >> 1] = 0;
    }
  }
  Srca[0] = 0;
  result = RtlAddAtomToAtomTableEx(v8, v11, Srca, a4);
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
