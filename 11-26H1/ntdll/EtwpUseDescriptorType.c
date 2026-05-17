/*
 * XREFs of EtwpUseDescriptorType @ 0x180158D0C
 * Callers:
 *     EtwEventSetInformation @ 0x180117E20 (EtwEventSetInformation.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x180056610 (RtlSetLastWin32Error.c)
 *     RtlNtStatusToDosError @ 0x180056660 (RtlNtStatusToDosError.c)
 *     ProviderHandleLookup @ 0x18006D200 (ProviderHandleLookup.c)
 *     NtTraceControl @ 0x180162A10 (NtTraceControl.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 */

__int64 __fastcall EtwpUseDescriptorType(__int64 a1, unsigned __int8 *a2)
{
  __int16 v3; // rbx^4
  __int64 v4; // rax
  __int64 v5; // rsi
  unsigned __int8 v6; // di
  ULONG v7; // ebx
  NTSTATUS v8; // eax
  int v10; // [rsp+30h] [rbp-28h] BYREF
  __int128 v11; // [rsp+38h] [rbp-20h] BYREF

  v10 = 0;
  v11 = 0LL;
  v3 = WORD2(a1);
  v4 = ProviderHandleLookup(a1, a1);
  v5 = v4;
  if ( !v4 || v3 != *(_WORD *)(v4 + 84) )
  {
    v7 = 6;
    goto LABEL_10;
  }
  v6 = *a2;
  if ( v6 >= 2u )
  {
    v7 = 87;
LABEL_10:
    RtlSetLastWin32Error(v7);
    return v7;
  }
  *(_QWORD *)&v11 = *(_QWORD *)(v4 + 88);
  BYTE8(v11) = v6;
  v8 = NtTraceControl(31LL, &v11, 16LL, 0LL, 0, &v10);
  if ( v8 )
  {
    v7 = RtlNtStatusToDosError(v8);
    if ( v7 )
      goto LABEL_10;
  }
  else
  {
    v7 = 0;
  }
  *(_WORD *)(v5 + 86) &= ~0x4000u;
  *(_WORD *)(v5 + 86) |= (v6 & 1) << 14;
  return v7;
}
