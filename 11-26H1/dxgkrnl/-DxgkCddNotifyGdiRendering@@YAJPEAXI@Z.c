/*
 * XREFs of ?DxgkCddNotifyGdiRendering@@YAJPEAXI@Z @ 0x1403D2490
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x14000F7F0 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x14028D8E0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x14028E390 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 */

__int64 __fastcall DxgkCddNotifyGdiRendering(struct _KTHREAD **a1, unsigned int a2)
{
  __int64 v2; // rdi
  unsigned int v4; // eax
  int v5; // r8d
  struct _KTHREAD *v6; // rcx
  struct _EX_RUNDOWN_REF *v7; // rdx
  ULONG_PTR Count; // rcx
  unsigned int v9; // ebx
  _BYTE v11[40]; // [rsp+50h] [rbp-28h] BYREF
  struct _EX_RUNDOWN_REF *v12; // [rsp+80h] [rbp+8h] BYREF

  v2 = a2;
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v11, a1);
  v4 = ((unsigned int)v2 >> 6) & 0xFFFFFF;
  if ( v4 < *((_DWORD *)a1 + 74) )
  {
    v5 = *((_DWORD *)a1[35] + 4 * v4 + 2);
    if ( (((unsigned int)v2 >> 25) & 0x60) == (*((_BYTE *)a1[35] + 16 * v4 + 8) & 0x60)
      && (v5 & 0x2000) == 0
      && (v5 & 0x1F) != 0 )
    {
      v6 = a1[35];
      if ( (*((_BYTE *)v6 + 16 * v4 + 8) & 0x1F) == 5 )
      {
        v7 = (struct _EX_RUNDOWN_REF *)*((_QWORD *)v6 + 2 * v4);
        goto LABEL_7;
      }
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 318;
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
  v7 = 0LL;
LABEL_7:
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v12, v7);
  if ( v12 )
  {
    Count = v12[6].Count;
    if ( Count )
      *(_DWORD *)(Count + 4) &= ~0x400u;
    v9 = 0;
  }
  else
  {
    v9 = -1073741811;
    WdLogSingleEntry2(3LL, v2, -1073741811LL);
    WdLogGlobalForLineNumber = 3755;
  }
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v12);
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v11);
  return v9;
}
