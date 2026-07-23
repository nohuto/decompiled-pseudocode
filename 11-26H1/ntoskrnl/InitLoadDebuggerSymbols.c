/*
 * XREFs of InitLoadDebuggerSymbols @ 0x140CB1450
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitAnsiString @ 0x140466120 (RtlInitAnsiString.c)
 *     DbgLoadImageSymbols @ 0x1404D8DB0 (DbgLoadImageSymbols.c)
 *     __report_rangecheckfailure @ 0x1405246B0 (__report_rangecheckfailure.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     RtlStringCbPrintfA @ 0x140578AF8 (RtlStringCbPrintfA.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall InitLoadDebuggerSymbols(__int64 a1, _DWORD *a2)
{
  bool v2; // cc
  CHAR *v4; // r8
  unsigned int v5; // r9d
  __int64 v6; // rdx
  CHAR v7; // al
  unsigned __int16 *v9; // r11
  __int64 v10; // rcx
  NTSTATUS v11; // eax
  STRING DestinationString; // [rsp+30h] [rbp-128h] BYREF
  CHAR SourceString[256]; // [rsp+40h] [rbp-118h] BYREF

  v2 = ++a2[2] <= 3u;
  DestinationString = 0LL;
  if ( !v2 )
  {
    v4 = *(CHAR **)(a1 + 80);
    if ( *(_WORD *)v4 == 92 )
    {
      v5 = *(unsigned __int16 *)(a1 + 72) >> 1;
      if ( (unsigned __int64)v5 + 1 <= 0x100 )
      {
        v6 = 0LL;
        do
        {
          v7 = *v4;
          v4 += 2;
          SourceString[v6] = v7;
          v6 = (unsigned int)(v6 + 1);
        }
        while ( (unsigned int)v6 < v5 );
        if ( (unsigned int)v6 >= 0x100 )
          _report_rangecheckfailure();
        SourceString[v6] = 0;
LABEL_8:
        RtlInitAnsiString(&DestinationString, SourceString);
        DbgLoadImageSymbols((__int64)&DestinationString, *(_QWORD *)(a1 + 48), 0xFFFFFFFFLL);
      }
    }
    else
    {
      v9 = (unsigned __int16 *)(a1 + 88);
      v10 = -1LL;
      do
        ++v10;
      while ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)a2 + 200LL) + v10) );
      if ( ((unsigned __int64)*v9 >> 1) + 18 + v10 <= 0x100 )
      {
        v11 = RtlStringCbPrintfA(SourceString, 0x100uLL, "%sSystem32\\Drivers\\%wZ");
        if ( v11 < 0 )
          KeBugCheckEx(0x31u, v11, 3uLL, 0LL, 0LL);
        goto LABEL_8;
      }
    }
  }
  return 0LL;
}
