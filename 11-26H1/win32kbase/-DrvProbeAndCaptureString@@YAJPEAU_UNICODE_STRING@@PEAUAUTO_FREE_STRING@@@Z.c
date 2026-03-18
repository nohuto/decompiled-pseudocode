/*
 * XREFs of ?DrvProbeAndCaptureString@@YAJPEAU_UNICODE_STRING@@PEAUAUTO_FREE_STRING@@@Z @ 0x14000E47C
 * Callers:
 *     ?DrvGetDeviceFromNameAndValidateDevice@@YAJPEAU_UNICODE_STRING@@W4_MODE@@PEAPEAUtagGRAPHICS_DEVICE@@@Z @ 0x14000C7AC (-DrvGetDeviceFromNameAndValidateDevice@@YAJPEAU_UNICODE_STRING@@W4_MODE@@PEAPEAUtagGRAPHICS_DEVI.c)
 *     DrvEnumDisplayDevices @ 0x140046490 (DrvEnumDisplayDevices.c)
 *     DrvEnumDisplaySettings @ 0x14013BA10 (DrvEnumDisplaySettings.c)
 *     DrvPrepareModeListCacheAndLeaveUserCrit @ 0x1401F80B0 (DrvPrepareModeListCacheAndLeaveUserCrit.c)
 * Callees:
 *     PALLOCNOZ @ 0x14000E6AC (PALLOCNOZ.c)
 *     RtlCopyFromUser @ 0x1401C9358 (RtlCopyFromUser.c)
 *     RtlReadULong64FromUser @ 0x1402D2164 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x1402D21A0 (RtlReadULongFromUser.c)
 */

__int64 __fastcall DrvProbeAndCaptureString(struct _UNICODE_STRING *a1, struct AUTO_FREE_STRING *a2)
{
  unsigned __int16 ULongFromUser; // r14
  void *ULong64FromUser; // r15
  __int64 v6; // rax

  ULongFromUser = RtlReadULongFromUser(a1, a2);
  ULong64FromUser = (void *)RtlReadULong64FromUser(&a1->Buffer);
  v6 = PALLOCNOZ((unsigned int)ULongFromUser + 18, 1936876615LL);
  *(_QWORD *)a2 = v6;
  if ( v6 )
  {
    *(_QWORD *)(v6 + 8) = v6 + 16;
    **(_WORD **)a2 = ULongFromUser;
    *(_WORD *)(*(_QWORD *)a2 + 2LL) = ULongFromUser + 2;
    if ( ULongFromUser )
      RtlCopyFromUser(*(void **)(*(_QWORD *)a2 + 8LL), ULong64FromUser, ULongFromUser);
    *(_WORD *)(*(_QWORD *)(*(_QWORD *)a2 + 8LL) + 2 * ((unsigned __int64)ULongFromUser >> 1)) = 0;
    return 0LL;
  }
  else
  {
    WdLogSingleEntry2(6LL, a1, ULongFromUser);
    WdLogGlobalForLineNumber = 4057;
    return 3221225495LL;
  }
}
