/*
 * XREFs of MiFindContiguousPagesPrepare @ 0x14028E928
 * Callers:
 *     MiFindContiguousPagesEx @ 0x14028E660 (MiFindContiguousPagesEx.c)
 * Callees:
 *     MiAssignDefaultChannel @ 0x140283900 (MiAssignDefaultChannel.c)
 *     MiSufficientAvailablePages @ 0x14028E010 (MiSufficientAvailablePages.c)
 *     MiReferencePageRuns @ 0x14028E44C (MiReferencePageRuns.c)
 *     MiCreateUltraThreadContext @ 0x1402D6670 (MiCreateUltraThreadContext.c)
 */

__int64 __fastcall MiFindContiguousPagesPrepare(__int64 **a1)
{
  __int64 *v1; // rdi
  __int64 v3; // rbp
  int v4; // esi
  __int64 *v5; // r15
  struct _KTHREAD *CurrentThread; // rcx
  unsigned int IdealGlobalNode; // r9d
  unsigned __int8 v8; // al
  __int64 v9; // r10
  __int64 v10; // r11
  char v11; // r9
  __int64 v12; // r9
  unsigned int v13; // edx
  __int64 *v14; // rax
  __int64 result; // rax

  v1 = *a1;
  v3 = **a1;
  v4 = *((_DWORD *)*a1 + 15);
  v5 = (__int64 *)(*a1)[5];
  if ( (*(_DWORD *)(v3 + 4) & 0x10) == 0 && !(unsigned int)MiSufficientAvailablePages(**a1, (unsigned __int64)v5 + 50) )
    return 3221225626LL;
  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread->ApcState.Process == (_KPROCESS *)-1024LL
    || (CurrentThread->ApcState.Process[2].ContextSwitches & 0xF) != 0
    || CurrentThread->ApcStateIndex != 1 )
  {
    IdealGlobalNode = *(_DWORD *)(KiProcessorBlock[CurrentThread->IdealProcessor] + 34644);
  }
  else
  {
    IdealGlobalNode = CurrentThread->ApcState.Process->IdealGlobalNode;
  }
  v8 = MiAssignDefaultChannel(IdealGlobalNode);
  *((_DWORD *)a1 + 6) = ((2 * (v11 & 0x3F | 0x380)) | v8 & 1) << 8;
  if ( !v9 || (*(_DWORD *)(v9 + 184) & 0xF) != 0 )
    v9 = v10 + 34640;
  a1[2] = (__int64 *)v9;
  v12 = 4LL;
  if ( *((_BYTE *)a1 + 8) != 2 )
    v12 = 0LL;
  if ( !(unsigned int)MiCreateUltraThreadContext(a1 + 14, a1 + 2, 8LL, v12) )
    return 3221225626LL;
  if ( (v4 & 0xB800008) == 0x8000000 && (MiFlags & 0x30) != 0 )
    *((_BYTE *)a1 + 9) = 1;
  v13 = *((_DWORD *)v1 + 13);
  if ( v13 >= (unsigned __int16)KeNumberNodes )
    *((_DWORD *)v1 + 13) = v13 | 0x80000000;
  v14 = (__int64 *)MiReferencePageRuns(v3, 1u);
  a1[30] = v14;
  a1[31] = &v14[2 * *(unsigned int *)v14 + 2];
  if ( ((v1[3] - 1) & v1[3]) != 0 )
    v1[3] = 0LL;
  a1[7] = (__int64 *)v1[1];
  a1[9] = (__int64 *)v1[3];
  a1[11] = (__int64 *)v1[4];
  a1[10] = v5;
  result = 0LL;
  *((_BYTE *)a1 + 96) = (v4 & 0x2000) != 0;
  return result;
}
