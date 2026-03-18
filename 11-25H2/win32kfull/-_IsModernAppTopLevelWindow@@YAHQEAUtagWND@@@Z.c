/*
 * XREFs of ?_IsModernAppTopLevelWindow@@YAHQEAUtagWND@@@Z @ 0x1402AC9FC
 * Callers:
 *     InitializeMonitorInfo @ 0x1400901C8 (InitializeMonitorInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall _IsModernAppTopLevelWindow(struct tagWND *const a1)
{
  __int64 v1; // rax
  unsigned int v2; // edx
  __int64 v3; // r8

  v1 = *((_QWORD *)a1 + 13);
  v2 = 0;
  if ( v1 )
  {
    v3 = *(_QWORD *)(v1 + 16);
    if ( (*(_DWORD *)(v3 + 1360) & 0x40000) != 0 )
      return *(_QWORD *)(v3 + 1592) == (_QWORD)a1;
  }
  return v2;
}
