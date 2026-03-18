/*
 * XREFs of ?DiscardPendingPresent@BLTQUEUE@@AEAAXXZ @ 0x1402830B8
 * Callers:
 *     ?ResetInternal@BLTQUEUE@@AEAAXXZ @ 0x14041C384 (-ResetInternal@BLTQUEUE@@AEAAXXZ.c)
 *     ?ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z @ 0x140446230 (-ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z.c)
 *     ?RestartQueueWorker@BLTQUEUE@@AEAAXXZ @ 0x140446740 (-RestartQueueWorker@BLTQUEUE@@AEAAXXZ.c)
 * Callees:
 *     Feature_SafeDodBltQueueAccesses__private_IsEnabledDeviceUsageNoInline @ 0x14009B7EC (Feature_SafeDodBltQueueAccesses__private_IsEnabledDeviceUsageNoInline.c)
 *     ?InsertQueueTail@BLTQUEUE@@AEAAXPEAU_LIST_ENTRY@@PEAVBLTENTRY@@W4BltQueueEntryAddReason@1@@Z @ 0x1403B7F94 (-InsertQueueTail@BLTQUEUE@@AEAAXPEAU_LIST_ENTRY@@PEAVBLTENTRY@@W4BltQueueEntryAddReason@1@@Z.c)
 *     ?AssignNull@DXGALLOCATIONREFERENCE@@QEAAXXZ @ 0x1403D3C54 (-AssignNull@DXGALLOCATIONREFERENCE@@QEAAXXZ.c)
 *     ?ReleasePresentDoneEvent@BLTENTRY@@QEAAXE@Z @ 0x1403FC694 (-ReleasePresentDoneEvent@BLTENTRY@@QEAAXE@Z.c)
 *     ?ReleaseRenderingDoneEvent@BLTENTRY@@QEAAXXZ @ 0x1403FC814 (-ReleaseRenderingDoneEvent@BLTENTRY@@QEAAXXZ.c)
 *     ?FinishCommand@BLTQUEUE@@AEAAXJ@Z @ 0x1404460AC (-FinishCommand@BLTQUEUE@@AEAAXJ@Z.c)
 */

void __fastcall BLTQUEUE::DiscardPendingPresent(BLTQUEUE *this)
{
  struct _KMUTANT *v1; // rbx
  _QWORD **v3; // rdi
  _QWORD *v4; // rax
  _QWORD *v5; // rcx
  _QWORD *v6; // rbp
  _BYTE *v7; // rax
  __int64 v8; // rax
  char v9; // [rsp+40h] [rbp+8h]

  v1 = (struct _KMUTANT *)((char *)this + 160);
  KeWaitForSingleObject((char *)this + 160, Executive, 0, 0, 0LL);
  v3 = (_QWORD **)((char *)this + 216);
  while ( 1 )
  {
    v4 = *v3;
    if ( *v3 == v3 )
      break;
    if ( (_QWORD **)v4[1] != v3 || (v5 = (_QWORD *)*v4, *(_QWORD **)(*v4 + 8LL) != v4) )
      __fastfail(3u);
    *v3 = v5;
    v6 = v4 - 1;
    v5[1] = v3;
    if ( v4[4] )
      BLTENTRY::ReleaseRenderingDoneEvent((BLTENTRY *)(v4 - 1));
    BLTENTRY::ReleasePresentDoneEvent((BLTENTRY *)v6, 1u);
    DXGALLOCATIONREFERENCE::AssignNull((DXGALLOCATIONREFERENCE *)(v6 + 4));
    BLTQUEUE::InsertQueueTail(this, (char *)this + 232, v6, 1LL);
  }
  if ( (unsigned int)Feature_SafeDodBltQueueAccesses__private_IsEnabledDeviceUsageNoInline() )
  {
    KeWaitForSingleObject((char *)this + 600, Executive, 0, 0, 0LL);
    v8 = *(_QWORD *)((char *)this + 676);
    *((_DWORD *)this + 169) &= 0xFFFFFF9F;
    v9 = v8;
    KeReleaseMutex((PRKMUTEX)((char *)this + 600), 0);
    if ( (v9 & 0x60) != 0 )
      goto LABEL_14;
  }
  else
  {
    v7 = (char *)this + 662;
    if ( *((_BYTE *)this + 661) || *v7 )
    {
      *((_BYTE *)this + 661) = 0;
      *v7 = 0;
LABEL_14:
      BLTQUEUE::FinishCommand(this, 0);
    }
  }
  KeReleaseMutex(v1, 0);
}
