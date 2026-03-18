/*
 * XREFs of PspMapSystemDll @ 0x140962C14
 * Callers:
 *     PsLocateSystemDlls @ 0x1407EE038 (PsLocateSystemDlls.c)
 *     PspLocateSystemDll @ 0x1407EE38C (PspLocateSystemDll.c)
 *     PsMapSystemDlls @ 0x140962ADC (PsMapSystemDlls.c)
 *     PspInitPhase3 @ 0x140CD85C4 (PspInitPhase3.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x140265740 (ObFastDereferenceObject.c)
 *     RtlImageNtHeader @ 0x1404696C0 (RtlImageNtHeader.c)
 *     MmMapViewOfSectionEx @ 0x1404BCA5C (MmMapViewOfSectionEx.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     RtlReadULong64FromUser @ 0x14077F554 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x14077F590 (RtlReadULongFromUser.c)
 *     RtlReadUShortFromUser @ 0x14077F5CC (RtlReadUShortFromUser.c)
 *     PspReferenceSystemDll @ 0x140962FE8 (PspReferenceSystemDll.c)
 */

__int64 __fastcall PspMapSystemDll(struct _KPROCESS *a1, __int64 a2, int a3, int a4)
{
  ULONG_PTR v8; // r15
  int v9; // edx
  int v10; // r8d
  int v11; // ecx
  unsigned __int64 v12; // rax
  unsigned int v13; // edi
  _DWORD *v15; // rsi
  int v16; // [rsp+58h] [rbp-A0h]
  unsigned __int64 v17; // [rsp+70h] [rbp-88h] BYREF
  __int64 v18; // [rsp+80h] [rbp-78h] BYREF
  __int64 v19; // [rsp+88h] [rbp-70h] BYREF
  __int128 v20; // [rsp+90h] [rbp-68h] BYREF
  __int64 v21; // [rsp+A0h] [rbp-58h]
  _QWORD v22[4]; // [rsp+A8h] [rbp-50h] BYREF
  __int128 v23; // [rsp+C8h] [rbp-30h]

  v8 = PspReferenceSystemDll(*(_QWORD *)a2);
  if ( v8 )
  {
    v17 = 0LL;
    v19 = 0LL;
    v18 = 0LL;
    v9 = 2;
    v22[0] = 1LL;
    v22[2] = 5LL;
    v23 = 0LL;
    v22[1] = &v20;
    v22[3] = 32LL;
    v10 = *(_DWORD *)(a2 + 8);
    if ( (v10 & 0x20) != 0 )
    {
      v9 = 3;
      LOBYTE(v23) = 6;
      *((_QWORD *)&v23 + 1) = *(unsigned __int16 *)(a2 + 10);
    }
    v20 = 0LL;
    v21 = 0LL;
    v11 = (a3 != 0 ? 0x20000000 : 0) | 0x40000;
    if ( !a4 )
      v11 = a3 != 0 ? 0x20000000 : 0;
    v12 = _mm_srli_si128((__m128i)0LL, 8).m128i_u64[0];
    if ( (v10 & 8) == 0 )
      v12 = 0x7FFFFFFEFFFFLL;
    *((_QWORD *)&v20 + 1) = v12;
    v13 = MmMapViewOfSectionEx(
            v8,
            (ULONG_PTR)a1,
            (__int64)&v17,
            (__int64)&v19,
            (__int64)&v18,
            v11,
            2,
            v22,
            v9,
            0,
            0LL,
            v16,
            0x2000000);
    ObFastDereferenceObject(*(signed __int64 **)a2, v8, 0x64537350u);
    if ( v13 == 1073741827 && a1 != PsInitialSystemProcess )
      v13 = -1073741800;
    if ( (v13 & 0x80000000) != 0 )
      return v13;
    if ( a4 )
    {
      v13 = 0;
      v15 = RtlImageNtHeader(v17);
      if ( (unsigned __int16)RtlReadUShortFromUser((unsigned __int16 *)v15 + 12) == 267 )
        *(_QWORD *)(a2 + 32) = (unsigned int)RtlReadULongFromUser(v15 + 13);
      else
        *(_QWORD *)(a2 + 32) = RtlReadULong64FromUser(v15 + 12);
      *(_DWORD *)(a2 + 12) = RtlReadULongFromUser(v15 + 20);
      *(_QWORD *)(a2 + 40) = v17;
      return v13;
    }
    if ( *(_QWORD *)(a2 + 32) == v17 )
      return v13;
  }
  return 3221225473LL;
}
