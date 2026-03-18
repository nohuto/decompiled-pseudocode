/*
 * XREFs of DxgkWaitForVerticalBlankEvent2 @ 0x1401B9270
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     DxgkWaitForVerticalBlankEventInternal @ 0x1402902F0 (DxgkWaitForVerticalBlankEventInternal.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkWaitForVerticalBlankEvent2(void *Src)
{
  unsigned int v2; // ebx
  struct DXGPROCESS *Current; // rax
  unsigned int v4; // edi
  int v5; // ecx
  __int64 v6; // rcx
  unsigned int i; // ebx
  __int64 v9; // rdi
  __int64 v10; // rsi
  NTSTATUS v11; // eax
  PVOID *v12; // rbx
  PVOID *v13; // rax
  unsigned int v14; // edi
  unsigned int j; // ebx
  __int64 v16; // rcx
  int v17; // [rsp+50h] [rbp-D8h] BYREF
  __int64 v18; // [rsp+58h] [rbp-D0h]
  char v19; // [rsp+60h] [rbp-C8h]
  PVOID Object; // [rsp+68h] [rbp-C0h] BYREF
  __int64 v21; // [rsp+70h] [rbp-B8h] BYREF
  HANDLE v22[10]; // [rsp+80h] [rbp-A8h] BYREF
  PVOID v23[8]; // [rsp+D0h] [rbp-58h] BYREF

  v17 = -1;
  v18 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v19 = 1;
    v17 = 2083;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)Src, (__int64)&EventProfilerEnter);
  }
  else
  {
    v19 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v17, 2083);
  memset(v22, 0, sizeof(v22));
  RtlCopyFromUser(v22, Src, 0x50uLL);
  if ( HIDWORD(v22[1]) > 8 )
  {
    v2 = -1073741811;
    WdLogSingleEntry3(3LL, HIDWORD(v22[1]), 32LL, -1073741811LL);
    WdLogGlobalForLineNumber = 8301;
LABEL_14:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v17);
    if ( v19 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v6, (__int64)&EventProfilerExit);
    }
    return v2;
  }
  Current = DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v2 = -1073741811;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 8310;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid process context, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_14;
  }
  v4 = HIDWORD(v22[1]);
  if ( HIDWORD(v22[1]) )
  {
    v5 = *((_DWORD *)Current + 102);
    if ( (v5 & 4) == 0 && (!g_OSTestSigningEnabled || (v5 & 0x2000) == 0) )
    {
      v2 = -1073741790;
      WdLogSingleEntry1(3LL);
      WdLogGlobalForLineNumber = 8319;
      goto LABEL_14;
    }
  }
  memset(v23, 0, sizeof(v23));
  for ( i = 0; i < v4; ++i )
  {
    v9 = i;
    v10 = i;
    Object = 0LL;
    v11 = ObReferenceObjectByHandle(v22[v10 + 2], 0x100000u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
    v23[v10] = Object;
    if ( v11 < 0 )
    {
      if ( i )
      {
        v12 = v23;
        do
        {
          ObfDereferenceObject(*v12++);
          --v9;
        }
        while ( v9 );
      }
      v2 = -1073741811;
      WdLogSingleEntry2(3LL, v22[v10 + 2], -1073741811LL);
      WdLogGlobalForLineNumber = 8342;
      goto LABEL_14;
    }
    v4 = HIDWORD(v22[1]);
  }
  v21 = -800000LL;
  v13 = v23;
  if ( !v4 )
    v13 = 0LL;
  v14 = DxgkWaitForVerticalBlankEventInternal(v22[0], HIDWORD(v22[0]), v22[1], v4, (__int64)v13, (__int64)&v21);
  for ( j = 0; j < HIDWORD(v22[1]); ++j )
    ObfDereferenceObject(v23[j]);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v17);
  if ( v19 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v16, (__int64)&EventProfilerExit);
  return v14;
}
