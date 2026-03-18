/*
 * XREFs of ?SetIconFonts@@YAHPEAU_UNICODE_STRING@@PEAUtagICONMETRICSW@@@Z @ 0x1401489C4
 * Callers:
 *     SetIconMetrics @ 0x140148734 (SetIconMetrics.c)
 * Callees:
 *     UserSetFont @ 0x1400C044C (UserSetFont.c)
 *     UserSetAltScaleFont @ 0x1401491DC (UserSetAltScaleFont.c)
 *     InvalidateKMDpiMetricsCacheDPIMETRICS @ 0x1401492C8 (InvalidateKMDpiMetricsCacheDPIMETRICS.c)
 *     GreMarkDeletableFont @ 0x14014AA78 (GreMarkDeletableFont.c)
 */

__int64 __fastcall SetIconFonts(struct _UNICODE_STRING *a1, struct tagICONMETRICSW *a2)
{
  struct HLFONT__ **v4; // rsi
  unsigned int v5; // ebx
  __int64 v6; // rax

  v4 = (struct HLFONT__ **)(GetSessionDpiMetrics() + 64);
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
