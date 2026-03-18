/*
 * XREFs of ?SetIconFonts@@YAHPEAU_UNICODE_STRING@@PEAUtagICONMETRICSW@@@Z @ 0x1400CE68C
 * Callers:
 *     SetIconMetrics @ 0x1400CE144 (SetIconMetrics.c)
 * Callees:
 *     GreMarkDeletableFont @ 0x14010FAD4 (GreMarkDeletableFont.c)
 *     UserSetAltScaleFont @ 0x14012478C (UserSetAltScaleFont.c)
 *     UserSetFont @ 0x1401249BC (UserSetFont.c)
 *     InvalidateKMDpiMetricsCacheDPIMETRICS @ 0x140248CB8 (InvalidateKMDpiMetricsCacheDPIMETRICS.c)
 *     Get96DpiMetrics @ 0x140302300 (Get96DpiMetrics.c)
 *     GetSessionDpiMetrics @ 0x140302624 (GetSessionDpiMetrics.c)
 */

__int64 __fastcall SetIconFonts(struct _UNICODE_STRING *a1, struct tagICONMETRICSW *a2)
{
  struct HLFONT__ **v4; // rsi
  unsigned int v5; // ebx
  __int64 v6; // rax

  v4 = (struct HLFONT__ **)(GetSessionDpiMetrics(a1) + 64);
  v5 = UserSetFont(a1, ((unsigned __int64)a2 + 16) & -(__int64)(a2 != 0LL), 154LL, v4);
  if ( v5 )
  {
    v6 = Get96DpiMetrics();
    v5 = UserSetAltScaleFont(*v4, v6 + 64);
    if ( !v5 )
    {
      GreMarkDeletableFont(*v4);
      GreDeleteObject(*v4);
      *v4 = 0LL;
    }
  }
  InvalidateKMDpiMetricsCacheDPIMETRICS();
  return v5;
}
