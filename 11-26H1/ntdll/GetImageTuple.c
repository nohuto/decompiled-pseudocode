/*
 * XREFs of GetImageTuple @ 0x18008E3A0
 * Callers:
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x18008DC80 (MicrosoftTelemetryAssertTriggeredWorker.c)
 * Callees:
 *     GetModuleFullPathName @ 0x18002052C (GetModuleFullPathName.c)
 *     memmove @ 0x180164600 (memmove.c)
 */

char __fastcall GetImageTuple(__int64 a1, char *a2, __int64 a3, _DWORD *a4, _DWORD *a5)
{
  __int64 v6; // rax
  int v7; // edx
  int v8; // r8d
  unsigned int ModuleFullPathName; // eax
  unsigned int v11; // edx
  unsigned int i; // ecx

  if ( !a1 )
    return 0;
  v6 = *(int *)(a1 + 60);
  if ( *(_WORD *)(v6 + a1 + 24) == 267 || *(_WORD *)(v6 + a1 + 24) == 523 )
  {
    v7 = *(_DWORD *)(v6 + a1 + 80);
    v8 = *(_DWORD *)(v6 + a1 + 8);
  }
  else
  {
    v7 = 0;
    v8 = 0;
  }
  *a4 = v8;
  *a5 = v7;
  ModuleFullPathName = (unsigned int)GetModuleFullPathName(a1, a2);
  if ( !ModuleFullPathName )
    return 0;
  v11 = ModuleFullPathName - 1;
  for ( i = ModuleFullPathName - 1; i; --i )
  {
    if ( a2[i] == 92 )
    {
      v11 = i;
      break;
    }
  }
  if ( v11 != 259 )
    memmove(a2, &a2[v11 + 1], 259 - v11);
  return 1;
}
