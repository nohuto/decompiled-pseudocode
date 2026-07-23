/*
 * XREFs of LdrpLogError @ 0x1800FBAE0
 * Callers:
 *     LdrUnlockLoaderLock @ 0x180016140 (LdrUnlockLoaderLock.c)
 *     LdrpCallInitRoutine @ 0x1800369EC (LdrpCallInitRoutine.c)
 *     LdrpLoadDllInternal @ 0x18003C630 (LdrpLoadDllInternal.c)
 *     LdrpMapDllNtFileName @ 0x18007A750 (LdrpMapDllNtFileName.c)
 *     LdrpProcessWork @ 0x18007E6C0 (LdrpProcessWork.c)
 *     LdrpSnapModule @ 0x18011B2E0 (LdrpSnapModule.c)
 *     LdrpCompleteMapModule @ 0x18011C230 (LdrpCompleteMapModule.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180013230 (RtlGetCurrentServiceSessionId.c)
 *     LdrpLogEtwEvent @ 0x18007B5D8 (LdrpLogEtwEvent.c)
 */

int __fastcall LdrpLogError(int a1, char a2, char a3, unsigned __int16 *a4)
{
  __int64 v5; // rbp
  struct _PEB *v8; // rax
  __int64 v9; // r10
  __int64 v10; // rcx

  v5 = a1;
  LODWORD(v8) = RtlGetCurrentServiceSessionId();
  if ( (_DWORD)v8 )
  {
    v8 = NtCurrentPeb();
    v9 = (__int64)v8->SharedData + 554;
  }
  else
  {
    v9 = 2147353476LL;
  }
  if ( *(_BYTE *)v9 )
  {
    v8 = NtCurrentPeb();
    if ( (v8->TracingFlags & 4) != 0 )
    {
      LODWORD(v8) = RtlGetCurrentServiceSessionId();
      if ( (_DWORD)v8 )
      {
        v8 = NtCurrentPeb();
        v10 = (__int64)v8->SharedData + 555;
      }
      else
      {
        v10 = 2147353477LL;
      }
      if ( (*(_BYTE *)v10 & 0x20) != 0 )
        LODWORD(v8) = LdrpLogEtwEvent(5284, v5, a2, a3, a4, 0LL);
    }
  }
  return (int)v8;
}
