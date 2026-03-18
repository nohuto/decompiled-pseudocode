/*
 * XREFs of ?GrepSelectFont@@YAPEAUHFONT__@@AEAVXDCOBJ@@PEAU1@H@Z @ 0x140054DF0
 * Callers:
 *     GreSelectFont @ 0x140054D30 (GreSelectFont.c)
 *     NtGdiSelectFont @ 0x140054D90 (NtGdiSelectFont.c)
 *     ?NtGdiFlushUserBatchInternal@@YAXPEAX@Z @ 0x1400835D0 (-NtGdiFlushUserBatchInternal@@YAXPEAX@Z.c)
 * Callees:
 *     ??1?$HmgShareLockResult@VLFONT@@@@QEAA@XZ @ 0x14030ECE8 (--1-$HmgShareLockResult@VLFONT@@@@QEAA@XZ.c)
 */

HFONT __fastcall GrepSelectFont(struct XDCOBJ *a1, HFONT a2, int a3)
{
  HFONT v3; // rbx
  HFONT v4; // rsi
  HFONT *v6; // rcx
  __int64 v7; // r9
  __int64 v8; // rcx
  __int64 v10; // [rsp+20h] [rbp-38h] BYREF
  _OWORD v11[3]; // [rsp+28h] [rbp-30h] BYREF

  v3 = 0LL;
  v4 = a2;
  if ( a3 || (*(_DWORD *)(HmgPentryFromPobj(*(_QWORD *)a1) + 8) & 0xFFFFFFFE) != 0 )
  {
    v6 = *(HFONT **)(*(_QWORD *)a1 + 152LL);
    if ( v6 )
      v3 = *v6;
    if ( v4 != v3 )
    {
      LOBYTE(a2) = 10;
      v10 = HmgShareLockCheck(v4, a2);
      memset(v11, 0, 32);
      PushThreadGuardedObject(
        v11,
        &v10,
        UnexpectedThreadTerminationHandler<HmgShareLockResult<LFONT>>::OnUnexpectedThreadTerminationStatic,
        v7);
      if ( !v10 || (*(_BYTE *)(HmgPentryFromPobj(v10) + 15) & 2) != 0 )
      {
        v3 = 0LL;
      }
      else
      {
        DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(*(struct LFONT **)(*(_QWORD *)a1 + 152LL));
        v8 = v10;
        v10 = 0LL;
        *(_QWORD *)(*(_QWORD *)a1 + 152LL) = v8;
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 296LL) = v4;
        *(_QWORD *)(*(_QWORD *)a1 + 1744LL) = 0LL;
        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 152LL) |= 0x10u;
        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 152LL) &= ~0x20u;
      }
      HmgShareLockResult<LFONT>::~HmgShareLockResult<LFONT>(&v10);
    }
  }
  return v3;
}
