/*
 * XREFs of ??$IsIsolatedTypeBusy@V?$CTypeIsolation@$0NOAAA@$0NOA@@NSInstrumentation@@@@YA_NPEAX@Z @ 0x1400B70A4
 * Callers:
 *     GreCreateDisplayDC @ 0x14003DEF0 (GreCreateDisplayDC.c)
 * Callees:
 *     RIMLockShared @ 0x14006F3F0 (RIMLockShared.c)
 *     ?W32ReleasePushLockShared@@YAXPEAVW32_PUSH_LOCK@@@Z @ 0x1400B7020 (-W32ReleasePushLockShared@@YAXPEAVW32_PUSH_LOCK@@@Z.c)
 *     ?ReleaseShared@?$CAutoReleasableSharedCReaderWriterLock@VCPlatformReaderWriterLock@NSInstrumentation@@@NSInstrumentation@@QEAAXXZ @ 0x1400B7414 (-ReleaseShared@-$CAutoReleasableSharedCReaderWriterLock@VCPlatformReaderWriterLock@NSInstrumenta.c)
 */

char __fastcall IsIsolatedTypeBusy<NSInstrumentation::CTypeIsolation<909312,3552>>(unsigned __int64 a1)
{
  char v2; // bl
  _QWORD *v3; // r14
  struct W32_PUSH_LOCK *v4; // rsi
  _QWORD *i; // rcx
  _QWORD *v6; // rbp
  __int64 v7; // r11
  unsigned __int64 v8; // rax
  __int64 v9; // rdx
  unsigned __int64 v10; // r9
  struct W32_PUSH_LOCK *v12; // [rsp+20h] [rbp-18h] BYREF
  char v13; // [rsp+28h] [rbp-10h]

  v2 = 0;
  v3 = *(_QWORD **)(*(_QWORD *)(*(_QWORD *)(W32GetSessionState(a1) + 88) + 4384LL) + 48LL);
  if ( !v3 )
    return 0;
  if ( a1 )
  {
    v4 = (struct W32_PUSH_LOCK *)v3[2];
    v12 = v4;
    v13 = 0;
    RIMLockShared((__int64)v4);
    for ( i = (_QWORD *)*v3; ; i = (_QWORD *)*i )
    {
      if ( i == v3 )
      {
        W32ReleasePushLockShared(v4);
        return v2;
      }
      v6 = (_QWORD *)i[4];
      v7 = v6[1];
      v8 = v7 ^ v6[2];
      if ( a1 >= v8 && a1 < v8 + 909312 )
        break;
    }
    v9 = ((a1 & 0xFFF) * (unsigned __int128)0x27350B88127350B9uLL) >> 64;
    v10 = (v9 + (((a1 & 0xFFF) - v9) >> 1)) >> 11;
    if ( (a1 & 0xFFF) == 3552 * v10
      && RtlTestBit(
           (PRTL_BITMAP)(v6[3] ^ v6[2]),
           v10 + (((unsigned int)a1 - ((unsigned int)v6[2] ^ (unsigned int)v7)) >> 12)) )
    {
      W32ReleasePushLockShared(v4);
      return 1;
    }
    else
    {
      NSInstrumentation::CAutoReleasableSharedCReaderWriterLock<NSInstrumentation::CPlatformReaderWriterLock>::ReleaseShared(&v12);
    }
  }
  return v2;
}
