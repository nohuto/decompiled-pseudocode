/*
 * XREFs of DxgkTestGetSysMmAdapter @ 0x140209910
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x14000F7F0 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x14000FC20 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

struct _KTHREAD **__fastcall DxgkTestGetSysMmAdapter(unsigned int a1)
{
  struct _KTHREAD **result; // rax
  __int64 v3; // rbx
  struct _KTHREAD **v4; // rdi
  unsigned int v5; // esi
  struct _KTHREAD *v6; // r15
  int v7; // edx
  __int64 v8; // rcx
  __int64 v9; // rdi
  int v10; // r8d
  struct _KTHREAD *v11; // rdi
  _BYTE v12[32]; // [rsp+50h] [rbp-38h] BYREF

  result = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  v3 = 0LL;
  v4 = result;
  if ( !result )
    return result;
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v12, result);
  v5 = (a1 >> 6) & 0xFFFFFF;
  if ( ((_DWORD)v4[51] & 0x100) != 0 )
  {
    v6 = v4[74];
    DXGPUSHLOCK::AcquireShared((struct _KTHREAD *)((char *)v6 + 248));
    if ( v5 < *((_DWORD *)v6 + 74) )
    {
      v7 = *(_DWORD *)(*((_QWORD *)v6 + 35) + 16LL * v5 + 8);
      if ( ((a1 >> 25) & 0x60) == (*(_BYTE *)(*((_QWORD *)v6 + 35) + 16LL * v5 + 8) & 0x60)
        && (v7 & 0x2000) == 0
        && (v7 & 0x1F) != 0 )
      {
        v8 = *((_QWORD *)v6 + 35);
        if ( (*(_BYTE *)(v8 + 16LL * v5 + 8) & 0x1F) == 1 )
        {
          v9 = *(_QWORD *)(v8 + 16LL * v5);
          goto LABEL_10;
        }
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 318;
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
    v9 = 0LL;
LABEL_10:
    _InterlockedDecrement((volatile signed __int32 *)v6 + 66);
    ExReleasePushLockSharedEx((char *)v6 + 248, 0LL);
    KeLeaveCriticalRegion();
    goto LABEL_19;
  }
  if ( v5 < *((_DWORD *)v4 + 74) )
  {
    v10 = *((_DWORD *)v4[35] + 4 * v5 + 2);
    if ( ((a1 >> 25) & 0x60) == (*((_BYTE *)v4[35] + 16 * v5 + 8) & 0x60) && (v10 & 0x2000) == 0 && (v10 & 0x1F) != 0 )
    {
      v11 = v4[35];
      if ( (*((_BYTE *)v11 + 16 * v5 + 8) & 0x1F) == 1 )
      {
        v9 = *((_QWORD *)v11 + 2 * v5);
        goto LABEL_19;
      }
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 318;
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
  v9 = 0LL;
LABEL_19:
  if ( v9 )
    v3 = *(_QWORD *)(v9 + 224);
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v12);
  return (struct _KTHREAD **)v3;
}
