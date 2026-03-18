/*
 * XREFs of ?FindVirtualMachineByGuidAndAcquireLock@@YAPEAVDXGVIRTUALMACHINE@@PEAU_GUID@@@Z @ 0x1401F5E90
 * Callers:
 *     ?DxgkpDuplicateHandleToVm@@YAJPEAU_D3DKMT_DUPLICATEHANDLE@@@Z @ 0x1401E9C54 (-DxgkpDuplicateHandleToVm@@YAJPEAU_D3DKMT_DUPLICATEHANDLE@@@Z.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140009344 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x14000FC20 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 */

struct DXGVIRTUALMACHINE *__fastcall FindVirtualMachineByGuidAndAcquireLock(struct _GUID *a1)
{
  struct DXGGLOBAL *Global; // rax
  _QWORD *v3; // rbx
  struct DXGGLOBAL *v4; // rax
  _QWORD **v5; // r8
  _QWORD *i; // rdx
  _QWORD *v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rax
  _BYTE v11[24]; // [rsp+30h] [rbp-38h] BYREF
  _BYTE v12[32]; // [rsp+48h] [rbp-20h] BYREF

  Global = DXGGLOBAL::GetGlobal();
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v12, (struct _KTHREAD **)Global + 58);
  v3 = 0LL;
  v4 = DXGGLOBAL::GetGlobal();
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v11, (struct _KTHREAD **)v4 + 62);
  v5 = (_QWORD **)((char *)DXGGLOBAL::GetGlobal() + 1704);
  for ( i = *v5; i != v5; i = (_QWORD *)*i )
  {
    v7 = i - 1;
    v8 = i[35] - *(_QWORD *)&a1->Data1;
    if ( !v8 )
      v8 = v7[37] - *(_QWORD *)a1->Data4;
    if ( !v8 )
      goto LABEL_10;
    v9 = *(_QWORD *)&a1->Data1;
    if ( !*(_QWORD *)&a1->Data1 )
      v9 = *(_QWORD *)a1->Data4;
    if ( !v9 )
    {
LABEL_10:
      WdLogSingleEntry1(4LL);
      WdLogGlobalForLineNumber = 6799;
      v3 = v7;
      break;
    }
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v11);
  if ( v3 )
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v3 + 8));
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v12);
  return (struct DXGVIRTUALMACHINE *)v3;
}
