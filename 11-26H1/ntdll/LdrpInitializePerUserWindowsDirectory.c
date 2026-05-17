/*
 * XREFs of LdrpInitializePerUserWindowsDirectory @ 0x1800989AC
 * Callers:
 *     LdrpInitializeProcess @ 0x1800CF8B8 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x1800323C0 (RtlAppendUnicodeToString.c)
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     LdrpLogInternal @ 0x180046B90 (LdrpLogInternal.c)
 *     RtlAppendUnicodeStringToString @ 0x180058DC0 (RtlAppendUnicodeStringToString.c)
 *     LdrAddDllDirectory @ 0x18009A310 (LdrAddDllDirectory.c)
 *     RtlpSignalSystemDirsModification @ 0x18011E5CC (RtlpSignalSystemDirsModification.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180170020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall LdrpInitializePerUserWindowsDirectory(__int64 (__fastcall *a1)(_BYTE *, __int64))
{
  int v1; // eax
  __int16 v3; // bx
  __m128i v4; // [rsp+30h] [rbp-D0h] BYREF
  const void *v5[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v6; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v7[528]; // [rsp+60h] [rbp-A0h] BYREF

  v6 = 0LL;
  HIDWORD(v5[0]) = 0;
  v4.m128i_i32[1] = 0;
  v1 = 2 * a1(v7, 260LL);
  if ( !v1 )
    return 0LL;
  v5[1] = v7;
  WORD1(v5[0]) = 520;
  LOWORD(v5[0]) = v1;
  if ( !*((_QWORD *)&RtlpSystemDirs + 1) )
  {
LABEL_6:
    LdrAddDllDirectory(v5, &v6);
    return 0LL;
  }
  v3 = v1 + RtlpSystemDirs + 2;
  v4.m128i_i64[1] = RtlAllocateHeap_0();
  if ( v4.m128i_i64[1] )
  {
    v4.m128i_i16[0] = 0;
    v4.m128i_i16[1] = v3;
    RtlAppendUnicodeStringToString((unsigned __int16 *)&v4, (const void **)&RtlpSystemDirs);
    RtlAppendUnicodeStringToString((unsigned __int16 *)&v4, v5);
    RtlAppendUnicodeToString((unsigned __int16 *)&v4, L";");
    RtlFreeHeap_0();
    RtlpSystemDirs = (__int128)v4;
    *((_QWORD *)&RtlpSystem32Dirs + 1) = _mm_srli_si128(v4, 8).m128i_u64[0];
    RtlpSignalSystemDirsModification();
    goto LABEL_6;
  }
  LdrpLogInternal(
    (int)"minkernel\\ldr\\ldrinit.c",
    4709,
    (__int64)"LdrpInitializePerUserWindowsDirectory",
    0,
    "Failed to reallocate the system dirs string !\n");
  return 3221225495LL;
}
