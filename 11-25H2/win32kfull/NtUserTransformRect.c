/*
 * XREFs of NtUserTransformRect @ 0x140165030
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     SetLastNtError @ 0x140113F80 (SetLastNtError.c)
 *     ?IsDpiValid@@YA_NI@Z @ 0x1401652DC (-IsDpiValid@@YA_NI@Z.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14028C73C (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserTransformRect(_OWORD *a1, unsigned int a2, unsigned int a3, __int64 a4)
{
  int v7; // ebx
  unsigned int v8; // ecx
  BOOL v9; // eax
  unsigned int v10; // ecx
  BOOL v11; // eax
  _BYTE *v12; // rdx
  __int64 v13; // rcx
  _QWORD v15[3]; // [rsp+20h] [rbp-88h] BYREF
  _OWORD *v16; // [rsp+38h] [rbp-70h]
  __int64 v17; // [rsp+40h] [rbp-68h]
  _BYTE v18[24]; // [rsp+50h] [rbp-58h] BYREF
  __int128 v19; // [rsp+68h] [rbp-40h] BYREF

  v16 = a1;
  v7 = 1;
  EnterLeaveCritShared::EnterLeaveCritShared(v18, 1LL);
  v19 = 0LL;
  v15[0] = 0LL;
  v8 = a2 & 0x7FFFFFFF;
  if ( (a2 & 0x7FFFFFFF) == 0x22 || v8 == 24592 || v8 == 1073766416 || v8 == 18 )
    v9 = 1;
  else
    v9 = (((a2 & 0x7FFE00FF) - 17) & 0xFFFFFFFD) == 0 && (a2 & 0x7FFE00FF) != 0x13 && IsDpiValid((v8 >> 8) & 0x1FF);
  if ( v9
    && ((v10 = a3 & 0x7FFFFFFF, (a3 & 0x7FFFFFFF) == 0x22) || v10 == 24592 || v10 == 1073766416 || v10 == 18
      ? (v11 = 1)
      : (((a3 & 0x7FFE00FF) - 17) & 0xFFFFFFFD) != 0 || (a3 & 0x7FFE00FF) == 0x13
      ? (v11 = 0)
      : (v11 = IsDpiValid((v10 >> 8) & 0x1FF)),
        v11) )
  {
    v12 = v16;
    if ( (unsigned __int64)v16 >= MmUserProbeAddress )
      v12 = (_BYTE *)MmUserProbeAddress;
    *v12 = *v12;
    v12[15] = v12[15];
    v19 = *v16;
    if ( a4 && (a2 & 0xF) == 2 )
      v15[0] = ValidateHmonitor(a4);
    if ( !v15[0] )
    {
      LODWORD(v17) = (DWORD2(v19) + (int)v19) / 2;
      HIDWORD(v17) = (HIDWORD(v19) + DWORD1(v19)) / 2;
      v15[0] = GuessMonitorOverrideForCoordinateConversions(v17, a3, 0LL);
    }
    LogicalToPhysicalDPIRect(&v19, &v19, a3, v15);
    PhysicalToLogicalDPIRect(&v19, &v19, a2, v15);
    *v16 = v19;
  }
  else
  {
    v7 = 0;
    UserSetLastError(87);
  }
  UserSessionSwitchLeaveCrit(v13);
  return v7;
}
