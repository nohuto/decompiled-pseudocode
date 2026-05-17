/*
 * XREFs of RtlQueryProcessModuleInformation @ 0x180090CA8
 * Callers:
 *     RtlQueryProcessDebugInformation @ 0x18008F550 (RtlQueryProcessDebugInformation.c)
 * Callees:
 *     LdrQueryProcessModuleInformationEx2 @ 0x18008EE40 (LdrQueryProcessModuleInformationEx2.c)
 *     RtlpDeCommitQueryDebugInfo @ 0x18008F354 (RtlpDeCommitQueryDebugInfo.c)
 *     RtlpCommitQueryDebugInfo @ 0x180092020 (RtlpCommitQueryDebugInfo.c)
 *     LdrQueryProcessModuleInformationEx @ 0x1800CBEC0 (LdrQueryProcessModuleInformationEx.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlQueryProcessModuleInformation(_QWORD *a1, unsigned int a2, _QWORD *a3)
{
  unsigned __int64 v5; // rdi
  int v6; // r15d
  unsigned int ProcessModuleInformationEx2; // eax
  unsigned int v8; // r10d
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rax
  unsigned int v11; // r12d
  _WORD *DebugInfo; // rax
  _WORD *v13; // rbx
  int ProcessModuleInformation; // eax
  unsigned int v16; // [rsp+60h] [rbp+8h] BYREF
  size_t Size; // [rsp+68h] [rbp+10h] BYREF

  v16 = 0;
  LODWORD(Size) = 0;
  v5 = (a1 == 0LL ? 2 : 0) | (unsigned __int64)((a2 >> 6) & 1);
  v6 = a2 & 0x100;
  if ( (a2 & 0x100) != 0 )
    ProcessModuleInformationEx2 = LdrQueryProcessModuleInformationEx2(a1, v5, 0LL, 0, (unsigned int *)&Size);
  else
    ProcessModuleInformationEx2 = LdrQueryProcessModuleInformationEx((_DWORD)a1, v5, 0, 0, (__int64)&Size);
  v8 = ProcessModuleInformationEx2;
  if ( ProcessModuleInformationEx2 == -1073741820 )
  {
    v9 = a3[9];
    v10 = 0LL;
    v11 = Size;
    if ( a3[11] >= v9 )
      v10 = a3[11] - v9;
    if ( v10 < (unsigned int)Size )
      return 3221225507LL;
    DebugInfo = (_WORD *)RtlpCommitQueryDebugInfo(a3, (unsigned int)Size);
    v13 = DebugInfo;
    if ( DebugInfo )
    {
      memset_thunk_772440563353939046(DebugInfo, 0, v11);
      if ( v6 )
        ProcessModuleInformation = LdrQueryProcessModuleInformationEx2(a1, v5, v13, Size, &v16);
      else
        ProcessModuleInformation = LdrQueryProcessModuleInformationEx((_DWORD)a1, v5, (_DWORD)v13, Size, (__int64)&v16);
      if ( ProcessModuleInformation >= 0 )
      {
        a3[12] = v13;
        return 0LL;
      }
      RtlpDeCommitQueryDebugInfo((__int64)a3, (__int64)v13, Size);
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  return v8;
}
