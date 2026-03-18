/*
 * XREFs of VidMmCreateProcess @ 0x14003F240
 * Callers:
 *     <none>
 * Callees:
 *     ??_GVIDMM_PROCESS@@QEAAPEAXI@Z @ 0x14000480C (--_GVIDMM_PROCESS@@QEAAPEAXI@Z.c)
 *     ??0VIDMM_PROCESS@@QEAA@XZ @ 0x14011ADF8 (--0VIDMM_PROCESS@@QEAA@XZ.c)
 *     ?Init@VIDMM_PROCESS@@QEAAJPEAVDXGPROCESS@@@Z @ 0x14012981C (-Init@VIDMM_PROCESS@@QEAAJPEAVDXGPROCESS@@@Z.c)
 */

VIDMM_PROCESS *__fastcall VidMmCreateProcess(struct DXGPROCESS *a1)
{
  struct _LIST_ENTRY *Pool2; // rax
  VIDMM_PROCESS *v3; // rax
  VIDMM_PROCESS *v4; // rdi
  VIDMM_PROCESS *v5; // rbx

  Pool2 = (struct _LIST_ENTRY *)ExAllocatePool2(256LL, 352LL, 959474006LL);
  if ( !Pool2 )
    return 0LL;
  v3 = VIDMM_PROCESS::VIDMM_PROCESS(Pool2);
  v4 = v3;
  v5 = v3;
  if ( v3 && (int)VIDMM_PROCESS::Init(v3, a1) < 0 )
  {
    VIDMM_PROCESS::`scalar deleting destructor'(v4);
    return 0LL;
  }
  return v5;
}
