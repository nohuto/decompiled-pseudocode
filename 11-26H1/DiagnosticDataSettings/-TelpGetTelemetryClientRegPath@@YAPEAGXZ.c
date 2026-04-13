/*
 * XREFs of ?TelpGetTelemetryClientRegPath@@YAPEAGXZ @ 0x1800035C0
 * Callers:
 *     TelGetRegionalSettingsValue @ 0x180004140 (TelGetRegionalSettingsValue.c)
 *     TelIsOsInProcessorMode @ 0x180004620 (TelIsOsInProcessorMode.c)
 * Callees:
 *     TelpReadRegistryString @ 0x180003870 (TelpReadRegistryString.c)
 */

unsigned __int16 *__fastcall TelpGetTelemetryClientRegPath(__int64 a1)
{
  signed int v1; // eax
  HANDLE ProcessHeap; // rax
  __int64 v3; // rcx
  void *v4; // rbx
  HANDLE v6; // rax
  HANDLE v7; // rax
  LPVOID v8; // rax
  __int64 v9; // rdx
  _WORD *v10; // rcx
  char *v11; // rdi
  __int16 v12; // ax
  _WORD *v13; // rax
  HANDLE v14; // rax
  unsigned int v15; // [rsp+40h] [rbp+8h] BYREF

  v15 = 0;
  v1 = TelpReadRegistryString(
         a1,
         L"Software\\Microsoft\\Windows\\CurrentVersion\\Diagnostics\\DiagTrack",
         L"RedirectedRegistryRoot",
         0LL,
         &v15);
  if ( v1 > 0 )
    v1 = (unsigned __int16)v1 | 0x80070000;
  if ( v1 == -2147024662 )
  {
    ProcessHeap = GetProcessHeap();
    v4 = HeapAlloc(ProcessHeap, 8u, 2LL * v15);
    if ( !v4 )
    {
LABEL_9:
      SetLastError(0xEu);
      return 0LL;
    }
    if ( (int)TelpReadRegistryString(
                v3,
                L"Software\\Microsoft\\Windows\\CurrentVersion\\Diagnostics\\DiagTrack",
                L"RedirectedRegistryRoot",
                v4,
                &v15) >= 0 )
      return (unsigned __int16 *)v4;
    v6 = GetProcessHeap();
    HeapFree(v6, 0, v4);
  }
  v7 = GetProcessHeap();
  v8 = HeapAlloc(v7, 8u, 0x80uLL);
  v4 = v8;
  if ( !v8 )
    goto LABEL_9;
  v9 = 64LL;
  v10 = v8;
  v11 = (char *)((char *)L"Software\\Microsoft\\Windows\\CurrentVersion\\Diagnostics\\DiagTrack" - (_BYTE *)v8);
  do
  {
    if ( v9 == -2147483582 )
      break;
    v12 = *(_WORD *)((char *)v10 + (_QWORD)v11);
    if ( !v12 )
      break;
    *v10++ = v12;
    --v9;
  }
  while ( v9 );
  v13 = v10 - 1;
  if ( v9 )
    v13 = v10;
  *v13 = 0;
  if ( v9 )
    return (unsigned __int16 *)v4;
  v14 = GetProcessHeap();
  HeapFree(v14, 0, v4);
  return 0LL;
}
