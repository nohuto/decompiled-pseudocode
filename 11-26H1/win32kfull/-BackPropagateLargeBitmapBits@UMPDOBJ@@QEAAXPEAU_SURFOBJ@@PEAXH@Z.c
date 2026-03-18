/*
 * XREFs of ?BackPropagateLargeBitmapBits@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@PEAXH@Z @ 0x14034A094
 * Callers:
 *     ?UMPDDrvCopyBits@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@@Z @ 0x14034A9D0 (-UMPDDrvCopyBits@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@@Z.c)
 * Callees:
 *     ??1AttachProcessObj@Gre@@QEAA@XZ @ 0x1401403F0 (--1AttachProcessObj@Gre@@QEAA@XZ.c)
 *     ?Attach@AttachProcessObj@Gre@@QEAAXPEAU_EPROCESS@@@Z @ 0x1401405A0 (-Attach@AttachProcessObj@Gre@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     wil::scope_exit__UMPDOBJ::BackPropagateLargeBitmapBits_::_2_::_lambda_1___ @ 0x14016E3DC (wil--scope_exit__UMPDOBJ--BackPropagateLargeBitmapBits_--_2_--_lambda_1___.c)
 *     ??0MALLOCOBJ@@QEAA@K@Z @ 0x140186E18 (--0MALLOCOBJ@@QEAA@K@Z.c)
 *     ??1MALLOCOBJ@@QEAA@XZ @ 0x1401873F0 (--1MALLOCOBJ@@QEAA@XZ.c)
 *     ?vUnlock@PUSHLOCKEX@Gre@@QEAAXH@Z @ 0x1401AB8AC (-vUnlock@PUSHLOCKEX@Gre@@QEAAXH@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 */

void __fastcall UMPDOBJ::BackPropagateLargeBitmapBits(UMPDOBJ *this, struct _SURFOBJ *a2, void *a3, int a4)
{
  bool v7; // zf
  char *v8; // rcx
  __int64 v9; // rdi
  ULONG *p_cjBits; // rdi
  void *v11; // rbx
  void *Src; // [rsp+20h] [rbp-98h] BYREF
  __int64 v13; // [rsp+28h] [rbp-90h] BYREF
  _QWORD *v14; // [rsp+30h] [rbp-88h] BYREF
  char v15; // [rsp+38h] [rbp-80h]
  void *v16; // [rsp+40h] [rbp-78h]
  ULONG *v17; // [rsp+48h] [rbp-70h]
  struct _KAPC_STATE ApcState; // [rsp+50h] [rbp-68h] BYREF
  char v19; // [rsp+80h] [rbp-38h]

  if ( a4 )
  {
    v16 = a3;
    v7 = (UMPDOBJ *)((char *)this + 384) == 0LL;
    v8 = (char *)this + 384;
    Src = v8;
    if ( !v7 )
      GreAcquirePushLockExclusive((struct W32_PUSH_LOCK *)v8);
    v9 = *((_QWORD *)this + 49);
    if ( v9 )
    {
      ObfReferenceObject(*(PVOID *)v9);
      _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
      v13 = *((_QWORD *)this + 49);
      Gre::PUSHLOCKEX::vUnlock((struct W32_PUSH_LOCK **)&Src, 0);
      Src = &v13;
      wil::scope_exit__UMPDOBJ::BackPropagateLargeBitmapBits_::_2_::_lambda_1___((__int64)&v14, &Src);
      if ( *(_DWORD *)(v13 + 56) == (*(_DWORD *)(*((_QWORD *)this + 51) + 32LL) & 0xFFFFFFFC) )
      {
        p_cjBits = &a2->cjBits;
        v17 = &a2->cjBits;
        MALLOCOBJ::MALLOCOBJ((MALLOCOBJ *)&Src, a2->cjBits);
        v11 = Src;
        if ( Src )
        {
          memset(&ApcState, 0, sizeof(ApcState));
          v19 = 0;
          Gre::AttachProcessObj::Attach(&ApcState, *(PRKPROCESS *)v13);
          memmove(v11, a2->pvBits, *p_cjBits);
          Gre::AttachProcessObj::~AttachProcessObj((Gre::AttachProcessObj *)&ApcState);
          memmove(a3, v11, *p_cjBits);
        }
        MALLOCOBJ::~MALLOCOBJ((MALLOCOBJ *)&Src);
      }
      if ( v15 )
        DereferenceW32ProcessEx(*v14, 1LL);
    }
    else
    {
      Gre::PUSHLOCKEX::vUnlock((struct W32_PUSH_LOCK **)&Src, 0);
    }
  }
}
