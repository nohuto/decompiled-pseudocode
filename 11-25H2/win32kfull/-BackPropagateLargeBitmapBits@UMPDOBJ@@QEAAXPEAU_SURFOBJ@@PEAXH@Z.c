/*
 * XREFs of ?BackPropagateLargeBitmapBits@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@PEAXH@Z @ 0x1403345D0
 * Callers:
 *     ?UMPDDrvCopyBits@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@@Z @ 0x1402635C0 (-UMPDDrvCopyBits@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@@Z.c)
 * Callees:
 *     ?vUnlock@PUSHLOCKEX@Gre@@QEAAXH@Z @ 0x1401717F4 (-vUnlock@PUSHLOCKEX@Gre@@QEAAXH@Z.c)
 *     ??0MALLOCOBJ@@QEAA@K@Z @ 0x1401BADE4 (--0MALLOCOBJ@@QEAA@K@Z.c)
 *     ??1MALLOCOBJ@@QEAA@XZ @ 0x1401C2A8C (--1MALLOCOBJ@@QEAA@XZ.c)
 *     wil::scope_exit__NtGdiSetPUMPDOBJ_::_2_::_lambda_1___ @ 0x1401F18A4 (wil--scope_exit__NtGdiSetPUMPDOBJ_--_2_--_lambda_1___.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     memmove @ 0x140342600 (memmove.c)
 */

void __fastcall UMPDOBJ::BackPropagateLargeBitmapBits(UMPDOBJ *this, struct _SURFOBJ *a2, void *a3, int a4)
{
  bool v7; // zf
  struct W32_PUSH_LOCK *v8; // rcx
  void *v9; // rcx
  ULONG *p_cjBits; // rdi
  void *v11; // rbx
  void *Src; // [rsp+20h] [rbp-A8h] BYREF
  PEPROCESS Process; // [rsp+28h] [rbp-A0h] BYREF
  PVOID *v14; // [rsp+30h] [rbp-98h] BYREF
  char v15; // [rsp+38h] [rbp-90h]
  struct W32_PUSH_LOCK *v16; // [rsp+40h] [rbp-88h] BYREF
  _QWORD v17[3]; // [rsp+48h] [rbp-80h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+60h] [rbp-68h] BYREF

  if ( a4 )
  {
    v17[1] = a3;
    v7 = (UMPDOBJ *)((char *)this + 400) == 0LL;
    v8 = (UMPDOBJ *)((char *)this + 400);
    v16 = v8;
    if ( !v7 )
      GreAcquirePushLockExclusive(v8);
    v9 = (void *)*((_QWORD *)this + 51);
    if ( v9 )
    {
      ObfReferenceObject(v9);
      Process = (PEPROCESS)*((_QWORD *)this + 51);
      Gre::PUSHLOCKEX::vUnlock(&v16, 0);
      v17[0] = &Process;
      wil::scope_exit__NtGdiSetPUMPDOBJ_::_2_::_lambda_1___((__int64)&v14, v17);
      if ( PsGetProcessId(Process) == *(HANDLE *)(*((_QWORD *)this + 53) + 32LL) )
      {
        p_cjBits = &a2->cjBits;
        v17[2] = &a2->cjBits;
        MALLOCOBJ::MALLOCOBJ((MALLOCOBJ *)&Src, a2->cjBits);
        v11 = Src;
        if ( Src )
        {
          memset(&ApcState, 0, sizeof(ApcState));
          KeStackAttachProcess(Process, &ApcState);
          memmove(v11, a2->pvBits, *p_cjBits);
          KeUnstackDetachProcess(&ApcState);
          memmove(a3, v11, *p_cjBits);
        }
        MALLOCOBJ::~MALLOCOBJ((MALLOCOBJ *)&Src);
      }
      if ( v15 )
        ObfDereferenceObject(*v14);
    }
    else
    {
      Gre::PUSHLOCKEX::vUnlock(&v16, 0);
    }
  }
}
