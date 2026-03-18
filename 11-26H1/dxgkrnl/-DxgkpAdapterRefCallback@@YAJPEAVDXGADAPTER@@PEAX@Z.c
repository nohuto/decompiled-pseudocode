/*
 * XREFs of ?DxgkpAdapterRefCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x140198690
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x140017020 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x140018480 (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 */

__int64 __fastcall DxgkpAdapterRefCallback(struct DXGADAPTER *a1, _QWORD *a2)
{
  __int64 v4; // rax
  unsigned int v5; // ebx
  __int64 v6; // rcx
  __int64 v7; // rdx
  _BYTE v9[40]; // [rsp+20h] [rbp-28h] BYREF

  DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v9, a1, 1);
  if ( *((_DWORD *)a1 + 50) != 1 )
    goto LABEL_5;
  v4 = *(unsigned int *)a2;
  if ( (unsigned int)v4 < *((_DWORD *)a2 + 1) )
  {
    v6 = a2[1];
    v7 = 2 * v4;
    *(_DWORD *)a2 = v4 + 1;
    *(_QWORD *)(v6 + 8 * v7) = a1;
    _InterlockedIncrement64((volatile signed __int64 *)a1 + 3);
    *(_QWORD *)(v6 + 8 * v7 + 8) = -1LL;
LABEL_5:
    v5 = 0;
    goto LABEL_6;
  }
  v5 = -1073741789;
LABEL_6:
  DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v9);
  return v5;
}
