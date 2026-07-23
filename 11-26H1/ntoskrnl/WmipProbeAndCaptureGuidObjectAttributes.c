/*
 * XREFs of WmipProbeAndCaptureGuidObjectAttributes @ 0x140A0BAA0
 * Callers:
 *     WmipIoControl @ 0x140A0BC50 (WmipIoControl.c)
 * Callees:
 *     IoIs32bitProcess @ 0x140428770 (IoIs32bitProcess.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F8FB0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall WmipProbeAndCaptureGuidObjectAttributes(_QWORD *a1, __int64 a2, _WORD *a3, void *a4)
{
  unsigned int v8; // ebx
  unsigned int *v9; // r15
  __int128 v11; // [rsp+28h] [rbp-60h]
  __int64 ULong64FromUser; // [rsp+38h] [rbp-50h]
  __int128 v13; // [rsp+40h] [rbp-48h] BYREF
  __int64 v14; // [rsp+50h] [rbp-38h]

  v13 = 0LL;
  v14 = 0LL;
  v8 = 0;
  if ( IoIs32bitProcess(0LL) )
  {
    if ( ((unsigned __int8)a4 & 3) != 0 )
      goto LABEL_14;
    RtlCopyFromUser(&v13, a4, 0x18uLL);
    *(_DWORD *)a1 = 48;
    a1[1] = DWORD1(v13);
    *((_DWORD *)a1 + 6) = HIDWORD(v13);
    a1[4] = (unsigned int)v14;
    a1[5] = HIDWORD(v14);
    if ( !DWORD2(v13) )
      return (unsigned int)-1073741811;
    if ( (BYTE8(v13) & 3) != 0 )
LABEL_14:
      ExRaiseDatatypeMisalignment();
    ULong64FromUser = RtlReadULong64FromUser((volatile void *)DWORD2(v13));
    *(_DWORD *)a2 = ULong64FromUser;
    *(_QWORD *)(a2 + 8) = HIDWORD(ULong64FromUser);
  }
  else
  {
    RtlCopyFromUser(a1, a4, 0x30uLL);
    v9 = (unsigned int *)a1[2];
    if ( !v9 )
      return (unsigned int)-1073741811;
    DWORD1(v11) = 0;
    LODWORD(v11) = RtlReadULongFromUser(v9);
    *((_QWORD *)&v11 + 1) = RtlReadULong64FromUser(v9 + 2);
    *(_OWORD *)a2 = v11;
  }
  if ( a1[4] || a1[5] )
  {
    return (unsigned int)-1073741811;
  }
  else if ( *(_WORD *)a2 == 90 )
  {
    RtlCopyFromUser(a3, *(void **)(a2 + 8), 0x5AuLL);
    a3[45] = 0;
    *(_QWORD *)(a2 + 8) = a3;
    a1[2] = a2;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v8;
}
