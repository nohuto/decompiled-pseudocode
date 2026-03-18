/*
 * XREFs of ?GreDecodeUserModePointer@@YAPEAXPEAX@Z @ 0x140041EB0
 * Callers:
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x14001E0D0 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z.c)
 *     ?UpdateUserRgn@RGNOBJ@@QEAAXXZ @ 0x14001E310 (-UpdateUserRgn@RGNOBJ@@QEAAXXZ.c)
 *     ?SetCachedDpiScaleValue@DC@@QEAAXJ@Z @ 0x140039950 (-SetCachedDpiScaleValue@DC@@QEAAXJ@Z.c)
 *     ?RestoreAttributesHelper@DCOBJ@@AEAAXXZ @ 0x14003DE00 (-RestoreAttributesHelper@DCOBJ@@AEAAXXZ.c)
 *     ?bDelete@XDCOBJ@@QEAA_NK@Z @ 0x14003E5B4 (-bDelete@XDCOBJ@@QEAA_NK@Z.c)
 *     GrepDeleteDC @ 0x14003ECB0 (GrepDeleteDC.c)
 *     ?SaveAttributesHelper@DCOBJ@@AEAAHXZ @ 0x140040510 (-SaveAttributesHelper@DCOBJ@@AEAAHXZ.c)
 *     ?SaveAttributes@DCOBJ@@AEAAHXZ @ 0x140040610 (-SaveAttributes@DCOBJ@@AEAAHXZ.c)
 *     ?vLock@DCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1400407D4 (-vLock@DCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     bDeleteBrush @ 0x140054210 (bDeleteBrush.c)
 *     ?bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ @ 0x140055690 (-bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ.c)
 *     ?GetUserAttr@DCOBJ@@AEAAPEAU_DC_ATTR@@XZ @ 0x14016CA40 (-GetUserAttr@DCOBJ@@AEAAPEAU_DC_ATTR@@XZ.c)
 *     ?FreeDCAttributes@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAVDC@@@Z @ 0x140186EB4 (-FreeDCAttributes@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAVDC@@@Z.c)
 * Callees:
 *     EngSetLastError @ 0x140020060 (EngSetLastError.c)
 *     PALLOCMEM @ 0x1400420F8 (PALLOCMEM.c)
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?GreAcquirePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z @ 0x1400431F0 (-GreAcquirePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z.c)
 *     ?GreReleasePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z @ 0x140043320 (-GreReleasePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z.c)
 *     _GrepCaptureLiveMemoryDump_::_2_::_lambda_1_::operator() @ 0x1401C205C (_GrepCaptureLiveMemoryDump_--_2_--_lambda_1_--operator().c)
 *     ??1Serializer@NSInstrumentation@@QEAA@XZ @ 0x1401EE3EC (--1Serializer@NSInstrumentation@@QEAA@XZ.c)
 *     ?Deserialize@?$DeserializedTypeIsolationFactory@V?$CDeserializedTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@V?$CDeserializedTypeIsolation@$0KAAA@$0KA@@2@V?$CDeserializedTypeIsolation@$0MAAA@$0MA@@2@V?$CDeserializedTypeIsolation@$0JAAA@$0JA@@2@V?$CDeserializedTypeIsolation@$0BEAAA@$0BEA@@2@V?$CDeserializedTypeIsolation@$0NOAAA@$0NOA@@2@V?$CDeserializedTypeIsolation@$0IAAA@$0IA@@2@@gdi@@SA_NPEAPEAEAEAVDeserializer@NSInstrumentation@@@Z @ 0x1401EF4F4 (-Deserialize@-$DeserializedTypeIsolationFactory@V-$CDeserializedTypeIsolation@$0CMAAA@$0CMA@@NSI.c)
 *     ?Serialize@?$TypeIsolationFactory@V?$CLookAsideTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@V?$CTypeIsolation@$0KAAA@$0KA@@2@V?$CTypeIsolation@$0MAAA@$0MA@@2@V?$CLookAsideTypeIsolation@$0JAAA@$0JA@@2@V?$CTypeIsolation@$0BEAAA@$0BEA@@2@V?$CTypeIsolation@$0NOAAA@$0NOA@@2@V?$CTypeIsolation@$0IAAA@$0IA@@2@@gdi@@SA_NPEAPEAEAEAVSerializer@NSInstrumentation@@@Z @ 0x1401F0640 (-Serialize@-$TypeIsolationFactory@V-$CLookAsideTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@V.c)
 *     memmove @ 0x14024C2C0 (memmove.c)
 */

__int64 __fastcall GreDecodeUserModePointer(void *a1)
{
  _QWORD *CurrentProcessWin32Process; // rax
  __int64 v3; // rcx
  _QWORD *v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v9; // rsi
  void *v10; // rax
  void *v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // [rsp+50h] [rbp-38h] BYREF
  __int64 v16; // [rsp+58h] [rbp-30h]
  __int128 v17; // [rsp+60h] [rbp-28h] BYREF
  __int64 v18; // [rsp+70h] [rbp-18h]
  __int64 v19; // [rsp+78h] [rbp-10h]

  if ( a1 )
  {
    CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(a1);
    v4 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process && *CurrentProcessWin32Process )
    {
      if ( PsGetProcessWow64Process(*CurrentProcessWin32Process) )
      {
        v5 = *((unsigned int *)v4 + 70);
        v6 = (unsigned int)__ROR4__((_DWORD)a1, 32 - (v4[35] & 0x1F));
      }
      else
      {
        if ( (*((_DWORD *)v4 + 69) & 0x20) != 0 )
          return __ROR8__(a1, 64 - ((_BYTE)v4[35] & 0x3Fu)) ^ *((unsigned int *)v4 + 70);
        v5 = v4[35];
        v6 = __ROR8__(a1, 64 - ((_BYTE)v4[35] & 0x3Fu));
      }
      return v5 ^ v6;
    }
    v9 = *(_QWORD *)(W32GetSessionState(v3) + 88);
    if ( v9 != -3736 )
      GreAcquirePushLockExclusive((struct W32_PUSH_LOCK *)(v9 + 3736));
    v10 = (void *)PALLOCMEM(1572864LL, 1886221383LL);
    v11 = v10;
    if ( v10 )
    {
      memmove(v10, *(const void **)(v9 + 1856), 0x180000uLL);
      *(_QWORD *)(v9 + 3752) = v11;
    }
    else
    {
      EngSetLastError(8u);
    }
    v12 = PALLOCMEM(64LL, 1869834581LL);
    *(_QWORD *)(v9 + 3744) = v12;
    if ( v12 )
    {
      v13 = *(_QWORD *)(v9 + 4384);
      v18 = 0LL;
      v17 = 0LL;
      v19 = 0LL;
      if ( (unsigned __int8)gdi::TypeIsolationFactory<NSInstrumentation::CLookAsideTypeIsolation<180224,704>,NSInstrumentation::CTypeIsolation<40960,160>,NSInstrumentation::CTypeIsolation<49152,192>,NSInstrumentation::CLookAsideTypeIsolation<36864,144>,NSInstrumentation::CTypeIsolation<81920,320>,NSInstrumentation::CTypeIsolation<909312,3552>,NSInstrumentation::CTypeIsolation<32768,128>>::Serialize(
                              v13,
                              &v17) )
      {
        v14 = *(_QWORD *)(v9 + 3744);
        v15 = v17;
        v16 = v18;
        gdi::DeserializedTypeIsolationFactory<NSInstrumentation::CDeserializedTypeIsolation<180224,704>,NSInstrumentation::CDeserializedTypeIsolation<40960,160>,NSInstrumentation::CDeserializedTypeIsolation<49152,192>,NSInstrumentation::CDeserializedTypeIsolation<36864,144>,NSInstrumentation::CDeserializedTypeIsolation<81920,320>,NSInstrumentation::CDeserializedTypeIsolation<909312,3552>,NSInstrumentation::CDeserializedTypeIsolation<32768,128>>::Deserialize(
          v14,
          &v15);
      }
      NSInstrumentation::Serializer::~Serializer((NSInstrumentation::Serializer *)&v17);
    }
    v15 = v9;
    DbgkWerCaptureLiveKernelDump(L"GreLKD", 400LL, 41LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
    LOBYTE(v16) = 0;
    GrepCaptureLiveMemoryDump_::_2_::_lambda_1_::operator()(&v15);
    if ( v11 )
      GreDeleteFastMutex(v11);
    if ( v9 != -3736 )
      GreReleasePushLockExclusive((struct W32_PUSH_LOCK *)(v9 + 3736));
  }
  return 0LL;
}
