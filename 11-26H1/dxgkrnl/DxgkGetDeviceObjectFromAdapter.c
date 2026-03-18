/*
 * XREFs of DxgkGetDeviceObjectFromAdapter @ 0x1403C4138
 * Callers:
 *     DxgkHandleIndirectEscape @ 0x140250AE0 (DxgkHandleIndirectEscape.c)
 * Callees:
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x140017020 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x140017080 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x140017170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x140017DC0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AssignByHandle@DXGADAPTER_REFERENCE@@QEAA_NI@Z @ 0x1403C420C (-AssignByHandle@DXGADAPTER_REFERENCE@@QEAA_NI@Z.c)
 */

__int64 __fastcall DxgkGetDeviceObjectFromAdapter(unsigned int a1, __int64 a2, _QWORD *a3)
{
  DXGADAPTER *v5; // rbx
  void *v6; // rcx
  DXGADAPTER *v7[2]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v8[8]; // [rsp+30h] [rbp-28h] BYREF
  DXGADAPTER *v9; // [rsp+38h] [rbp-20h]
  char v10; // [rsp+40h] [rbp-18h]

  v7[0] = 0LL;
  if ( !a1 )
    return 3221226021LL;
  DXGADAPTER_REFERENCE::AssignByHandle(v7, a1);
  v5 = v7[0];
  if ( !v7[0] )
    return 3221226021LL;
  v9 = v7[0];
  v10 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v8);
  v6 = (void *)*((_QWORD *)v5 + 27);
  *a3 = v6;
  if ( v6 )
  {
    ObfReferenceObject(v6);
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v8);
    DXGADAPTER::ReleaseReference(v5);
    return 0LL;
  }
  else
  {
    WdLogSingleEntry2(3LL, v5, -1073741130LL);
    WdLogGlobalForLineNumber = 1491;
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v8);
    DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)v7, 0LL);
    return 3221226166LL;
  }
}
