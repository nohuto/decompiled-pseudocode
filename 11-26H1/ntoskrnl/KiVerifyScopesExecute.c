/*
 * XREFs of KiVerifyScopesExecute @ 0x140CD2080
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     KiVerifyPdata @ 0x140CD1F84 (KiVerifyPdata.c)
 */

void __fastcall KiVerifyScopesExecute(PVOID Parameter)
{
  int v1; // ebx
  ULONG_PTR BugCheckParameter4; // rdx
  __int64 (__fastcall **v3)(); // rdi
  int v4; // esi
  __int64 (__fastcall *v5)(); // rax
  unsigned __int64 v6; // [rsp+30h] [rbp-30h] BYREF
  __int128 v7; // [rsp+38h] [rbp-28h]
  ULONG_PTR v8; // [rsp+48h] [rbp-18h]
  __int64 v9; // [rsp+50h] [rbp-10h]

  v1 = KiVerifyPass;
  v8 = 0LL;
  BugCheckParameter4 = 0LL;
  v7 = 0LL;
  v6 = 0xFEFFFFFFFFFFFFFFuLL;
  v9 = 0LL;
  while ( v1 )
  {
    v3 = KiVerifyXcptRoutines;
    LODWORD(v7) = (v1 & 1) == 0;
    v4 = 0;
    while ( (__int64)v3 < (__int64)qword_140FFC148 )
    {
      v5 = *v3;
      *(_QWORD *)((char *)&v7 + 4) = 0LL;
      ((void (__fastcall *)(unsigned __int64 *, ULONG_PTR))v5)(&v6, BugCheckParameter4);
      if ( !DWORD2(v7) )
        KeBugCheckEx(0x14Du, v4, v1, SDWORD1(v7), 0LL);
      ++v4;
      BugCheckParameter4 = __ROL8__(v8 ^ SDWORD1(v7), BYTE4(v7) & 0x3F);
      v8 = BugCheckParameter4;
      ++v3;
    }
    --v1;
  }
  if ( BugCheckParameter4 != 0x7493D5224FA9E69ALL )
    KeBugCheckEx(0x14Du, 0xFFFFFFFFuLL, 0LL, 0x7493D5224FA9E69AuLL, BugCheckParameter4);
  KiVerifyPdata((ULONG_PTR)PsNtosImageBase);
  KiVerifyPdata((ULONG_PTR)PsHalImageBase);
}
