/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_qDqs @ 0x14013A35C
 * Callers:
 *     ?FreezeChangeNotify@tagPROCESSINFO@@SAXPEAPEAU_EPROCESS@@K@Z @ 0x14013A1DC (-FreezeChangeNotify@tagPROCESSINFO@@SAXPEAPEAU_EPROCESS@@K@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

void __fastcall WPP_RECORDER_AND_TRACE_SF_qDqs(
        __int64 a1,
        char a2,
        char a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        char a9,
        char a10,
        char a11,
        const char *a12)
{
  __int64 v12; // rbx
  __int64 v13; // rdi
  __int64 v17; // rax
  __int64 v18; // rax
  const char *v19; // rcx
  int v20; // [rsp+20h] [rbp-68h]

  v12 = (__int64)a12;
  v13 = -1LL;
  if ( a2 )
  {
    if ( a12 )
    {
      v17 = -1LL;
      do
        ++v17;
      while ( a12[v17] );
      v18 = v17 + 1;
    }
    else
    {
      v18 = 5LL;
    }
    v19 = a12;
    if ( !a12 )
      v19 = "NULL";
    ((void (__fastcall *)(__int64, __int64, void *, __int64, char *, __int64, char *, __int64, char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
      a1,
      43LL,
      &WPP_ecd75a293f58357f88bf2c1d127de49e_Traceguids,
      31LL,
      &a9,
      8LL,
      &a10,
      4LL,
      &a11,
      8LL,
      v19,
      v18,
      0LL);
  }
  if ( a3 )
  {
    if ( v12 )
    {
      do
        ++v13;
      while ( *(_BYTE *)(v12 + v13) );
    }
    LOWORD(v20) = 31;
    WppAutoLogTrace(a4, 4LL, 14LL, &WPP_ecd75a293f58357f88bf2c1d127de49e_Traceguids, v20, &a9, 8LL, &a10, 4LL, &a11);
  }
}
