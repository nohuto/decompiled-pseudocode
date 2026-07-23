/*
 * XREFs of WheapQueryPshedForErrorSources @ 0x140CEE698
 * Callers:
 *     WheaInitialize @ 0x140CEDE58 (WheaInitialize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WheapQueryPshedForErrorSources(_DWORD *a1, _QWORD *a2)
{
  __int64 result; // rax
  int AllErrorSources; // eax
  _QWORD v6[2]; // [rsp+20h] [rbp-10h] BYREF
  ULONG Size; // [rsp+50h] [rbp+20h] BYREF
  int v8; // [rsp+58h] [rbp+28h] BYREF

  v6[0] = 0LL;
  Size = 0;
  v8 = 0;
  if ( (unsigned int)PshedGetAllErrorSources(&v8, v6, &Size) == -1073741789 )
  {
    v6[0] = PshedAllocateMemory(Size);
    if ( !v6[0] )
    {
      ++*(_DWORD *)&WheapConfigTableLock.ApcStateFill[24];
      result = 3221225626LL;
      *(_DWORD *)&WheapConfigTableLock.ApcStateFill[28] |= 1u;
      return result;
    }
    AllErrorSources = PshedGetAllErrorSources(&v8, v6, &Size);
    if ( AllErrorSources >= 0 )
    {
      *a2 = v6[0];
      *a1 = v8;
      return 0LL;
    }
    ++*(_DWORD *)&WheapConfigTableLock.ApcStateFill[24];
    *(_DWORD *)&WheapConfigTableLock.ApcStateFill[28] |= 0x20u;
    *(_DWORD *)&WheapConfigTableLock.ApcStateFill[32] = AllErrorSources;
  }
  else
  {
    ++*(_DWORD *)&WheapConfigTableLock.ApcStateFill[24];
    *(_DWORD *)&WheapConfigTableLock.ApcStateFill[28] |= 4u;
  }
  return 3221225473LL;
}
