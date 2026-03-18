/*
 * XREFs of NtUserfnINLPMDICREATESTRUCT @ 0x1402A3B50
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     RtlInitLargeUnicodeString @ 0x140185E0C (RtlInitLargeUnicodeString.c)
 *     RtlInitLargeAnsiString @ 0x1401B0F6C (RtlInitLargeAnsiString.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

__int64 __fastcall NtUserfnINLPMDICREATESTRUCT(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        ULONG64 a4,
        __int64 a5,
        char a6,
        int a7)
{
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 UserSessionState; // rax
  _OWORD v20[3]; // [rsp+40h] [rbp-68h] BYREF
  __int64 v21; // [rsp+70h] [rbp-38h]
  _BYTE v22[16]; // [rsp+78h] [rbp-30h] BYREF
  _BYTE v23[24]; // [rsp+88h] [rbp-20h] BYREF

  memset_0(v20, 0, 0x58uLL);
  PtiCurrent(v12, v11);
  if ( a4 >= MmUserProbeAddress )
    a4 = MmUserProbeAddress;
  v20[0] = *(_OWORD *)a4;
  v20[1] = *(_OWORD *)(a4 + 16);
  v20[2] = *(_OWORD *)(a4 + 32);
  v21 = *(_QWORD *)(a4 + 48);
  v13 = *((_QWORD *)&v20[0] + 1);
  if ( !a7 )
  {
    if ( *((_QWORD *)&v20[0] + 1) )
    {
      if ( (BYTE8(v20[0]) & 1) != 0 )
        goto LABEL_17;
      v13 = *((_QWORD *)&v20[0] + 1);
    }
    RtlInitLargeUnicodeString((__int64)v22, v13);
    v17 = *(_QWORD *)&v20[0];
    if ( (*(_QWORD *)&v20[0] & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      if ( *(_QWORD *)&v20[0] )
      {
        if ( (v20[0] & 1) != 0 )
LABEL_17:
          ExRaiseDatatypeMisalignment();
        v17 = *(_QWORD *)&v20[0];
      }
    }
    else
    {
      v17 = 0LL;
    }
    RtlInitLargeUnicodeString((__int64)v23, v17);
    goto LABEL_21;
  }
  if ( *((_QWORD *)&v20[0] + 1) )
    v13 = *((_QWORD *)&v20[0] + 1);
  RtlInitLargeAnsiString((__int64)v22, v13);
  v14 = *(_QWORD *)&v20[0];
  if ( (*(_QWORD *)&v20[0] & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    if ( *(_QWORD *)&v20[0] )
      v14 = *(_QWORD *)&v20[0];
  }
  else
  {
    v14 = 0LL;
  }
  RtlInitLargeAnsiString((__int64)v23, v14);
LABEL_21:
  UserSessionState = W32GetUserSessionState(v16, v15);
  return (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _OWORD *, __int64))(UserSessionState
                                                                                + 8LL * ((a6 + 6) & 0x1F)
                                                                                + 70920))(
           a1,
           a2,
           a3,
           v20,
           a5);
}
