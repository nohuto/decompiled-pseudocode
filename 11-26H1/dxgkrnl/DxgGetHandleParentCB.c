/*
 * XREFs of DxgGetHandleParentCB @ 0x1401C45A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x14000F7F0 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x140034914 (--0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     ??1DXGVALIDATIONPROCESSATTACH@@QEAA@XZ @ 0x140038950 (--1DXGVALIDATIONPROCESSATTACH@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x14028D8E0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x14028E390 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgGetHandleParentCB(unsigned int a1)
{
  struct DXGPROCESS *Current; // rdi
  unsigned int v3; // ebx
  __int64 v4; // rdx
  int v5; // r8d
  __int64 v6; // rcx
  __int64 v7; // rdx
  struct DXGALLOCATION *v8; // rdx
  __int64 v9; // rcx
  __int64 v11; // [rsp+50h] [rbp-68h] BYREF
  _BYTE v12[24]; // [rsp+58h] [rbp-60h] BYREF
  _BYTE v13[56]; // [rsp+70h] [rbp-48h] BYREF

  DXGVALIDATIONPROCESSREATTACH::DXGVALIDATIONPROCESSREATTACH((DXGVALIDATIONPROCESSREATTACH *)v13);
  Current = DXGPROCESS::GetCurrent();
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v12, (struct _KTHREAD **)Current);
  v3 = 0;
  v4 = (a1 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v4 >= *((_DWORD *)Current + 74) )
    goto LABEL_7;
  v5 = *(_DWORD *)(*((_QWORD *)Current + 35) + 16LL * (unsigned int)v4 + 8);
  if ( ((a1 >> 25) & 0x60) != (*(_BYTE *)(*((_QWORD *)Current + 35) + 16LL * (unsigned int)v4 + 8) & 0x60)
    || (v5 & 0x2000) != 0
    || (v5 & 0x1F) == 0 )
  {
    goto LABEL_7;
  }
  v6 = *((_QWORD *)Current + 35);
  v7 = 2 * v4;
  if ( (*(_BYTE *)(v6 + 8 * v7 + 8) & 0x1F) != 5 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 318;
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
LABEL_7:
    v8 = 0LL;
    goto LABEL_8;
  }
  v8 = *(struct DXGALLOCATION **)(v6 + 8 * v7);
LABEL_8:
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v11, v8);
  if ( v11 )
  {
    v9 = *(_QWORD *)(v11 + 40);
    if ( v9 )
      v3 = *(_DWORD *)(v9 + 16);
  }
  else
  {
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 46;
  }
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v11);
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v12);
  DXGVALIDATIONPROCESSATTACH::~DXGVALIDATIONPROCESSATTACH((DXGVALIDATIONPROCESSATTACH *)v13);
  return v3;
}
