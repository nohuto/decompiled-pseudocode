/*
 * XREFs of NtDxgkOutputDuplPresentToHwQueue @ 0x14034CC50
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?TranslateAndCopyDWMMoveRegionToDDAMoveRegions@@YAXKPEBU_D3DKMT_MOVE_RECT@@PEAU1@@Z @ 0x140194BE4 (-TranslateAndCopyDWMMoveRegionToDDAMoveRegions@@YAXKPEBU_D3DKMT_MOVE_RECT@@PEAU1@@Z.c)
 *     ?OutputDuplPresentToHwQueue@@YAJPEAU_D3DKMT_OUTPUTDUPLPRESENTTOHWQUEUE@@PEAVDXGPROCESS@@@Z @ 0x14029CB18 (-OutputDuplPresentToHwQueue@@YAJPEAU_D3DKMT_OUTPUTDUPLPRESENTTOHWQUEUE@@PEAVDXGPROCESS@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@I$03@@QEAAPEAII@Z @ 0x14034DC40 (-AllocateElements@-$PagedPoolZeroedArray@I$03@@QEAAPEAII@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@E$0BA@@@QEAAPEAEI@Z @ 0x14034E770 (-AllocateElements@-$PagedPoolZeroedArray@E$0BA@@@QEAAPEAEI@Z.c)
 */

__int64 __fastcall NtDxgkOutputDuplPresentToHwQueue(void *Src)
{
  __int64 v2; // rcx
  struct DXGPROCESS *Current; // rax
  __int64 v4; // rcx
  struct _KTHREAD **v5; // r15
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rsi
  char *v9; // r14
  struct _D3DKMT_MOVE_RECT *v10; // rbx
  unsigned int v11; // ebx
  __int64 CurrentProcess; // rax
  __int64 v13; // rcx
  __int64 v14; // [rsp+28h] [rbp-D0h]
  void *v15[9]; // [rsp+50h] [rbp-A8h] BYREF
  PVOID P; // [rsp+98h] [rbp-60h] BYREF
  _BYTE v17[16]; // [rsp+A0h] [rbp-58h] BYREF
  int v18; // [rsp+B0h] [rbp-48h]
  PVOID v19; // [rsp+B8h] [rbp-40h] BYREF
  _BYTE v20[16]; // [rsp+C0h] [rbp-38h] BYREF
  int v21; // [rsp+D0h] [rbp-28h]

  memset(v15, 0, 0x40uLL);
  Current = DXGPROCESS::GetCurrent(v2);
  v5 = (struct _KTHREAD **)Current;
  v15[8] = Current;
  if ( !Current )
  {
    CurrentProcess = PsGetCurrentProcess(v4);
    WdLogSingleEntry2(2LL, -1073741811LL, CurrentProcess);
    WdLogGlobalForLineNumber = 3427;
    v14 = PsGetCurrentProcess(v13);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Presenting from unexpected process 0x%I64x 0x%I64x",
      -1073741811LL,
      v14,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  if ( (*((_DWORD *)Current + 102) & 4) == 0 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 3434;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Function can only be called from DWM process",
      3434LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  P = 0LL;
  v18 = 0;
  RtlCopyFromUser(v15, Src, 0x40uLL);
  if ( !LODWORD(v15[1]) )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 3446;
    if ( P != v17 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v18 = 0;
    return 3221225485LL;
  }
  if ( !PagedPoolZeroedArray<unsigned int,4>::AllocateElements(&P) )
  {
    if ( P != v17 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v18 = 0;
    return 3221225495LL;
  }
  RtlCopyFromUser(P, v15[2], 4LL * LODWORD(v15[1]));
  v15[2] = P;
  v7 = 16LL * LODWORD(v15[3]);
  if ( v7 > 0xFFFFFFFF )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 3471;
    goto LABEL_29;
  }
  v8 = 24LL * LODWORD(v15[5]);
  if ( v8 > 0xFFFFFFFF )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 3478;
    goto LABEL_29;
  }
  if ( (int)v8 + (int)v7 < (unsigned int)v8 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 3485;
LABEL_29:
    if ( P != v17 && P )
      ExFreePoolWithTag(P, 0);
    return 3221225621LL;
  }
  v19 = 0LL;
  v21 = 0;
  if ( !((_DWORD)v8 + (_DWORD)v7) )
  {
    v15[4] = 0LL;
    v15[6] = 0LL;
LABEL_25:
    v11 = OutputDuplPresentToHwQueue((struct _D3DKMT_OUTPUTDUPLPRESENTTOHWQUEUE *)v15, v5);
    if ( v19 != v20 && v19 )
      ExFreePoolWithTag(v19, 0);
    v19 = 0LL;
    v21 = 0;
    if ( P != v17 )
    {
      if ( P )
        ExFreePoolWithTag(P, 0);
    }
    return v11;
  }
  v9 = (char *)PagedPoolZeroedArray<unsigned char,16>::AllocateElements(&v19);
  if ( v9 )
  {
    v10 = (struct _D3DKMT_MOVE_RECT *)&v9[16 * LODWORD(v15[3])];
    if ( LODWORD(v15[3]) )
    {
      RtlCopyFromUser(v9, v15[4], (unsigned int)v7);
      v15[4] = v9;
    }
    else
    {
      v15[4] = 0LL;
    }
    if ( LODWORD(v15[5]) )
    {
      ProbeForRead(v15[6], (unsigned int)v8, 1u);
      TranslateAndCopyDWMMoveRegionToDDAMoveRegions((unsigned int)v15[5], (const struct _D3DKMT_MOVE_RECT *)v15[6], v10);
      v15[6] = v10;
    }
    else
    {
      v15[6] = 0LL;
    }
    goto LABEL_25;
  }
  WdLogSingleEntry0(6LL);
  WdLogGlobalForLineNumber = 3497;
  DxgkLogInternalTriageEvent(
    0LL,
    262145,
    -1,
    (__int64)L"Failed to alloc buffer for kernel copy of meta data.",
    3497LL,
    0LL,
    0LL,
    0LL,
    0LL);
  if ( v19 != v20 && v19 )
    ExFreePoolWithTag(v19, 0);
  v19 = 0LL;
  v21 = 0;
  if ( P != v17 && P )
    ExFreePoolWithTag(P, 0);
  return 3221225495LL;
}
