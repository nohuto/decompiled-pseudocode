/*
 * XREFs of SetManifestWinVer @ 0x140189BD0
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     SbGetProcessSwitchContext @ 0x140189D10 (SbGetProcessSwitchContext.c)
 */

__int64 __fastcall SetManifestWinVer(__int64 a1, __int64 a2)
{
  struct tagTHREADINFO *v2; // rbx
  _QWORD *v3; // rcx
  __int64 v4; // rcx
  __int64 ProcessSwitchContext; // rax
  _QWORD *v6; // r9
  int v7; // edx
  unsigned int i; // ecx
  __int64 v9; // r10
  __int64 v10; // r8
  __int64 result; // rax
  unsigned __int16 v12; // [rsp+20h] [rbp-28h]
  char *v13; // [rsp+50h] [rbp+8h]
  __int64 ProcessWow64Process; // [rsp+58h] [rbp+10h]

  v2 = PtiCurrent(a1, a2);
  v12 = -26368;
  v3 = (_QWORD *)*((_QWORD *)v2 + 58);
  if ( v3 )
  {
    v13 = 0LL;
    ProcessWow64Process = PsGetProcessWow64Process(*v3);
    v4 = ProcessWow64Process
       ? *(unsigned int *)(ProcessWow64Process + 488)
       : *(_QWORD *)(PsGetProcessPeb(**((_QWORD **)v2 + 58)) + 728);
    ProcessSwitchContext = SbGetProcessSwitchContext(v4);
    if ( ProcessSwitchContext )
    {
      v6 = (_QWORD *)(ProcessSwitchContext + 48);
      v7 = 0;
      if ( ProcessSwitchContext != -48 )
      {
        v13 = 0LL;
        for ( i = 0; i < 5; ++i )
        {
          v9 = 32LL * i;
          v10 = *v6 - *(_QWORD *)((char *)&SbSupportedOsList + v9 + 4);
          if ( *v6 == *(_QWORD *)((char *)&SbSupportedOsList + v9 + 4) )
            v10 = *(_QWORD *)(ProcessSwitchContext + 56) - *(_QWORD *)((char *)&SbSupportedOsList + v9 + 12);
          if ( !v10 )
          {
            v7 = 1;
            v13 = (char *)&SbSupportedOsList + v9;
            break;
          }
        }
      }
      if ( v7 )
        v12 = *((_WORD *)v13 + 11) | (*((_WORD *)v13 + 10) << 8);
    }
  }
  result = v12;
  *((_DWORD *)v2 + 169) = v12;
  return result;
}
