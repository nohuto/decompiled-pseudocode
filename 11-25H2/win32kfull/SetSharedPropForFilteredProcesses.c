/*
 * XREFs of SetSharedPropForFilteredProcesses @ 0x1402C0DAC
 * Callers:
 *     InternalSetProp @ 0x14005BFA8 (InternalSetProp.c)
 * Callees:
 *     GETCLIENTWNDINFO @ 0x14026E78C (GETCLIENTWNDINFO.c)
 */

__int64 __fastcall SetSharedPropForFilteredProcesses(const struct tagWND *a1, __int16 a2, __int64 a3)
{
  __int64 v5; // rdx
  volatile void *v6; // rcx
  int v7; // ebx
  __int64 CurrentProcessWow64Process; // rax
  __int16 v9; // cx
  volatile void *Address; // [rsp+40h] [rbp+8h]

  if ( *(char *)(*((_QWORD *)a1 + 5) + 19LL) >= 0 )
  {
    for ( Address = *(volatile void **)(GETCLIENTWNDINFO(a1) + 24); Address; Address = v6 )
    {
      v7 = 0;
      CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v6, v5);
      ProbeForWrite(Address, 0x618uLL, CurrentProcessWow64Process != 0 ? 1 : 4);
      while ( 1 )
      {
        v5 = 3LL * v7;
        if ( v7 >= 64 )
          break;
        v9 = *((_WORD *)Address + 12 * v7 + 8);
        if ( !v9 )
          return 0LL;
        if ( v9 == a2 )
        {
          *((_QWORD *)Address + 3 * v7 + 1) = a3;
          return 1LL;
        }
        ++v7;
      }
      v6 = (volatile void *)*((_QWORD *)Address + 3 * v7);
    }
  }
  return 0LL;
}
