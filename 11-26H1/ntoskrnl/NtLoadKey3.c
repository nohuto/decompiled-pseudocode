/*
 * XREFs of NtLoadKey3 @ 0x140855240
 * Callers:
 *     DifNtLoadKey3Wrapper @ 0x14067E390 (DifNtLoadKey3Wrapper.c)
 * Callees:
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F8FB0 (ExRaiseDatatypeMisalignment.c)
 *     CmLoadDifferencingKey @ 0x14093D400 (CmLoadDifferencingKey.c)
 */

NTSTATUS __cdecl NtLoadKey3(
        POBJECT_ATTRIBUTES TargetKey,
        POBJECT_ATTRIBUTES SourceFile,
        ULONG Flags,
        PCM_EXTENDED_PARAMETER ExtendedParameters,
        ULONG ExtendedParameterCount,
        ACCESS_MASK DesiredAccess,
        PHANDLE RootHandle,
        PVOID Reserved)
{
  __int64 v9; // r12
  __int64 v10; // r15
  int v11; // ebx
  KPROCESSOR_MODE PreviousMode; // si
  __int64 v13; // r13
  _OWORD v16[5]; // [rsp+98h] [rbp-50h] BYREF

  v16[0] = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v13 = 0LL;
  while ( ExtendedParameterCount )
  {
    if ( PreviousMode )
    {
      if ( ((unsigned __int8)ExtendedParameters & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      RtlCopyFromUser(v16, ExtendedParameters, 0x10uLL);
    }
    else
    {
      RtlCopyVolatileMemory(v16, ExtendedParameters, 0x10uLL);
    }
    switch ( LOBYTE(v16[0]) )
    {
      case 1u:
        if ( (v11 & 2) != 0 )
          return -1073741582;
        v13 = *((_QWORD *)&v16[0] + 1);
        v11 |= 2u;
        break;
      case 2u:
        if ( (v11 & 4) != 0 )
          return -1073741582;
        v9 = *((_QWORD *)&v16[0] + 1);
        v11 |= 4u;
        break;
      case 3u:
        if ( (v11 & 8) != 0 )
          return -1073741582;
        v10 = *((_QWORD *)&v16[0] + 1);
        v11 |= 8u;
        break;
      default:
        return -1073741582;
    }
    ++ExtendedParameters;
    --ExtendedParameterCount;
  }
  return CmLoadDifferencingKey(
           TargetKey,
           v13,
           v9,
           DesiredAccess,
           (__int64)RootHandle,
           (int)Reserved,
           0LL,
           0,
           v10,
           PreviousMode);
}
