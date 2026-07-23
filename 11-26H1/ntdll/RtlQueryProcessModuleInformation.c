/*
 * XREFs of RtlQueryProcessModuleInformation @ 0x180075A08
 * Callers:
 *     RtlQueryProcessDebugInformation @ 0x1800742B0 (RtlQueryProcessDebugInformation.c)
 * Callees:
 *     RtlpCommitQueryDebugInfo @ 0x1800BB000 (RtlpCommitQueryDebugInfo.c)
 *     LdrQueryProcessModuleInformationEx2 @ 0x1800BF120 (LdrQueryProcessModuleInformationEx2.c)
 *     LdrQueryProcessModuleInformationEx @ 0x1800C9630 (LdrQueryProcessModuleInformationEx.c)
 *     RtlpDeCommitQueryDebugInfo @ 0x18010E83C (RtlpDeCommitQueryDebugInfo.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlQueryProcessModuleInformation(__int64 a1, unsigned int a2, _QWORD *a3)
{
  int v3; // r14d
  int v5; // edi
  int v6; // r15d
  unsigned int ProcessModuleInformationEx2; // eax
  unsigned int v8; // r10d
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rax
  unsigned int v11; // r12d
  void *DebugInfo; // rax
  void *v13; // rbx
  int ProcessModuleInformation; // eax
  int v16; // [rsp+60h] [rbp+8h] BYREF
  size_t Size; // [rsp+68h] [rbp+10h] BYREF

  v16 = 0;
  v3 = a1;
  LODWORD(Size) = 0;
  v5 = (a1 == 0 ? 2 : 0) | (a2 >> 6) & 1;
  v6 = a2 & 0x100;
  if ( (a2 & 0x100) != 0 )
    ProcessModuleInformationEx2 = LdrQueryProcessModuleInformationEx2(a1, v5, 0, 0, (__int64)&Size);
  else
    ProcessModuleInformationEx2 = LdrQueryProcessModuleInformationEx(a1, v5, 0, 0, (__int64)&Size);
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
    DebugInfo = (void *)RtlpCommitQueryDebugInfo(a3, (unsigned int)Size);
    v13 = DebugInfo;
    if ( DebugInfo )
    {
      memset_thunk_772440563353939046(DebugInfo, 0, v11);
      if ( v6 )
        ProcessModuleInformation = LdrQueryProcessModuleInformationEx2(v3, v5, (_DWORD)v13, Size, (__int64)&v16);
      else
        ProcessModuleInformation = LdrQueryProcessModuleInformationEx(v3, v5, (_DWORD)v13, Size, (__int64)&v16);
      if ( ProcessModuleInformation >= 0 )
      {
        a3[12] = v13;
        return 0LL;
      }
      RtlpDeCommitQueryDebugInfo(a3, v13, (unsigned int)Size);
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  return v8;
}
