/*
 * XREFs of ?GrepSelectFont@@YAPEAUHFONT__@@AEAVXDCOBJ@@PEAU1@H@Z @ 0x140159278
 * Callers:
 *     ?NtGdiFlushUserBatchInternal@@YAXPEAX@Z @ 0x1401ACC30 (-NtGdiFlushUserBatchInternal@@YAXPEAX@Z.c)
 * Callees:
 *     ?W32PidDCOwner@XDCOBJ@@QEAAKXZ @ 0x14015941C (-W32PidDCOwner@XDCOBJ@@QEAAKXZ.c)
 */

HFONT __fastcall GrepSelectFont(struct Gre::Base::SESSION_GLOBALS **a1, HFONT a2, __int64 a3)
{
  HFONT v3; // rbx
  HFONT *v6; // rcx
  struct Gre::Base::SESSION_GLOBALS *v7; // r15
  Gre::Base *v8; // rcx
  struct LFONT *v9; // rdi
  __int64 v10; // rcx
  struct Gre::Base::SESSION_GLOBALS *v11; // rax
  struct Gre::Base::SESSION_GLOBALS *v13; // rax
  __int64 v14; // [rsp+20h] [rbp-30h] BYREF
  _OWORD v15[2]; // [rsp+28h] [rbp-28h] BYREF

  v3 = 0LL;
  if ( (_DWORD)a3 || XDCOBJ::W32PidDCOwner((XDCOBJ *)a1) )
  {
    v6 = (HFONT *)*((_QWORD *)*a1 + 19);
    if ( v6 )
      v3 = *v6;
    if ( a2 != v3 )
    {
      v7 = a1[2];
      LOBYTE(a3) = 10;
      v14 = HmgShareLock(v7, a2, a3, 0LL);
      memset(v15, 0, sizeof(v15));
      PushThreadGuardedObject(
        v15,
        &v14,
        UnexpectedThreadTerminationHandler<HmgShareLockResult<LFONT>>::OnUnexpectedThreadTerminationStatic);
      v9 = (struct LFONT *)v14;
      if ( v14 )
      {
        if ( (*(_BYTE *)(HmgPentryFromPobj(v7, v14) + 15) & 2) == 0 )
        {
          DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v7, *((struct LFONT **)*a1 + 19));
          v10 = v14;
          v11 = *a1;
          v14 = 0LL;
          *((_QWORD *)v11 + 19) = v10;
          *(_QWORD *)(*((_QWORD *)*a1 + 122) + 296LL) = a2;
          *((_QWORD *)*a1 + 218) = 0LL;
          *(_DWORD *)(*((_QWORD *)*a1 + 122) + 152LL) |= 0x10u;
          v8 = (Gre::Base *)*((_QWORD *)*a1 + 122);
          *((_DWORD *)v8 + 38) &= ~0x20u;
          v9 = (struct LFONT *)v14;
LABEL_8:
          if ( v9 )
          {
            v13 = Gre::Base::Globals(v8);
            DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v13, v9);
            v14 = 0LL;
          }
          PopThreadGuardedObject(v15);
          return v3;
        }
        v9 = (struct LFONT *)v14;
      }
      v3 = 0LL;
      goto LABEL_8;
    }
  }
  return v3;
}
