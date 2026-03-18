/*
 * XREFs of ?DrvProbeAndCaptureString@@YAJPEAU_UNICODE_STRING@@PEAUAUTO_FREE_STRING@@@Z @ 0x14004B800
 * Callers:
 *     DrvEnumDisplayDevices @ 0x140047DF0 (DrvEnumDisplayDevices.c)
 *     DrvEnumDisplaySettings @ 0x14004AE70 (DrvEnumDisplaySettings.c)
 *     ?DrvGetDeviceFromNameAndValidateDevice@@YAJPEAU_UNICODE_STRING@@W4_MODE@@PEAPEAUtagGRAPHICS_DEVICE@@@Z @ 0x14007F62C (-DrvGetDeviceFromNameAndValidateDevice@@YAJPEAU_UNICODE_STRING@@W4_MODE@@PEAPEAUtagGRAPHICS_DEVI.c)
 * Callees:
 *     PALLOCNOZ @ 0x14004B924 (PALLOCNOZ.c)
 *     memmove @ 0x140243540 (memmove.c)
 */

__int64 __fastcall DrvProbeAndCaptureString(struct _UNICODE_STRING *a1, struct AUTO_FREE_STRING *a2)
{
  __int64 Length; // rbx
  __int64 v5; // rax
  PWSTR Buffer; // rdx
  struct _UNICODE_STRING Src; // [rsp+20h] [rbp-18h]

  Src = *a1;
  Length = a1->Length;
  v5 = PALLOCNOZ((unsigned int)a1->Length + 18, 1936876615LL);
  *(_QWORD *)a2 = v5;
  if ( v5 )
  {
    *(_QWORD *)(v5 + 8) = v5 + 16;
    **(_WORD **)a2 = Length;
    *(_WORD *)(*(_QWORD *)a2 + 2LL) = Length + 2;
    if ( (_WORD)Length )
    {
      Buffer = Src.Buffer;
      if ( (PWSTR)((char *)Src.Buffer + Length) > (PWSTR)MmUserProbeAddress
        || (PWSTR)((unsigned __int64)Src.Buffer + Length) < Src.Buffer )
      {
        Buffer = Src.Buffer;
        LOWORD(Length) = Src.Length;
      }
      memmove(*(void **)(*(_QWORD *)a2 + 8LL), Buffer, (unsigned __int16)Length);
    }
    *(_WORD *)(*(_QWORD *)(*(_QWORD *)a2 + 8LL) + 2 * ((unsigned __int64)(unsigned __int16)Length >> 1)) = 0;
    return 0LL;
  }
  else
  {
    WdLogSingleEntry2(6LL, a1, Length);
    WdLogGlobalForLineNumber = 4266;
    return 3221225495LL;
  }
}
