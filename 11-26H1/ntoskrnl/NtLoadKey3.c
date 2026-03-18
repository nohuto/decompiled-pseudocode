/*
 * XREFs of NtLoadKey3 @ 0x14084EF30
 * Callers:
 *     DifNtLoadKey3Wrapper @ 0x14067A7B0 (DifNtLoadKey3Wrapper.c)
 * Callees:
 *     RtlCopyFromUser @ 0x140533E38 (RtlCopyFromUser.c)
 *     RtlCopyVolatileMemory @ 0x140733080 (RtlCopyVolatileMemory.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F29F0 (ExRaiseDatatypeMisalignment.c)
 *     CmLoadDifferencingKey @ 0x14097B3F0 (CmLoadDifferencingKey.c)
 */

__int64 __fastcall NtLoadKey3(
        void *a1,
        __int64 a2,
        __int64 a3,
        char *a4,
        int a5,
        ACCESS_MASK DesiredAccess,
        __int64 a7,
        int a8)
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
  while ( a5 )
  {
    if ( PreviousMode )
    {
      if ( ((unsigned __int8)a4 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      RtlCopyFromUser(v16, a4, 0x10uLL);
    }
    else
    {
      RtlCopyVolatileMemory(v16, a4, 0x10uLL);
    }
    switch ( LOBYTE(v16[0]) )
    {
      case 1u:
        if ( (v11 & 2) != 0 )
          return 3221225714LL;
        v13 = *((_QWORD *)&v16[0] + 1);
        v11 |= 2u;
        break;
      case 2u:
        if ( (v11 & 4) != 0 )
          return 3221225714LL;
        v9 = *((_QWORD *)&v16[0] + 1);
        v11 |= 4u;
        break;
      case 3u:
        if ( (v11 & 8) != 0 )
          return 3221225714LL;
        v10 = *((_QWORD *)&v16[0] + 1);
        v11 |= 8u;
        break;
      default:
        return 3221225714LL;
    }
    a4 += 16;
    --a5;
  }
  return CmLoadDifferencingKey(a1, v13, v9, DesiredAccess, a7, a8, 0LL, 0, v10, PreviousMode);
}
