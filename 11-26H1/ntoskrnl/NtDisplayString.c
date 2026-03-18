/*
 * XREFs of NtDisplayString @ 0x140837360
 * Callers:
 *     DifNtDisplayStringWrapper @ 0x140676490 (DifNtDisplayStringWrapper.c)
 * Callees:
 *     RtlCopyFromUser @ 0x140533E38 (RtlCopyFromUser.c)
 *     BgkDisplayStringEx @ 0x1405C5504 (BgkDisplayStringEx.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     RtlReadULong64FromUser @ 0x14077F554 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x14077F590 (RtlReadULongFromUser.c)
 *     RtlReadUShortFromUser @ 0x14077F5CC (RtlReadUShortFromUser.c)
 *     ProbeForRead @ 0x1408EF880 (ProbeForRead.c)
 *     SeSinglePrivilegeCheck @ 0x140932280 (SeSinglePrivilegeCheck.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall NtDisplayString(__int64 a1)
{
  KPROCESSOR_MODE PreviousMode; // di
  volatile void *ULong64FromUser; // rsi
  _WORD *Pool2; // rax
  _WORD *v6; // rdi
  _WORD *v7; // rax
  _WORD *v8; // rax
  char v9; // bl
  int ULongFromUser; // [rsp+30h] [rbp-28h]

  if ( !a1 )
    return 3221225485LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
    return 3221225569LL;
  if ( PreviousMode )
  {
    ULongFromUser = RtlReadULongFromUser((unsigned int *)a1);
    ULong64FromUser = (volatile void *)RtlReadULong64FromUser((volatile void *)(a1 + 8));
    if ( !ULong64FromUser || !HIWORD(ULongFromUser) )
      return 0LL;
    ProbeForRead(ULong64FromUser, HIWORD(ULongFromUser), 1u);
    if ( !(unsigned __int16)RtlReadUShortFromUser((unsigned __int16 *)ULong64FromUser) )
      return 0LL;
    Pool2 = (_WORD *)ExAllocatePool2(0x40uLL);
    v6 = Pool2;
    if ( Pool2 )
    {
      RtlCopyFromUser(Pool2, (void *)ULong64FromUser, HIWORD(ULongFromUser));
      v6[(unsigned __int64)HIWORD(ULongFromUser) >> 1] = 0;
      goto LABEL_19;
    }
    return 3221225495LL;
  }
  v7 = *(_WORD **)(a1 + 8);
  if ( !v7 || !*(_WORD *)(a1 + 2) || !*v7 )
    return 0LL;
  v8 = (_WORD *)ExAllocatePool2(0x40uLL);
  v6 = v8;
  if ( !v8 )
    return 3221225495LL;
  memmove(v8, *(const void **)(a1 + 8), *(unsigned __int16 *)(a1 + 2));
  v6[(unsigned __int64)*(unsigned __int16 *)(a1 + 2) >> 1] = 0;
LABEL_19:
  v9 = BgkDisplayStringEx(v6);
  ExFreePoolWithTag(v6, 0);
  if ( !v9 )
    return 3221225473LL;
  return 0LL;
}
