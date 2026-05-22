/*
 * XREFs of ?CheckAndUpdateRasterizationScale@DWMCursor@@AEAAJ_N@Z @ 0x18006E1EC
 * Callers:
 *     ?OnInputConfigUpdated@DWMCursorBroker@@AEAAJXZ @ 0x18006E170 (-OnInputConfigUpdated@DWMCursorBroker@@AEAAJXZ.c)
 *     ?Initialize@DWMCursor@@QEAAJXZ @ 0x1801CD08C (-Initialize@DWMCursor@@QEAAJXZ.c)
 *     ?SetPosition@DWMCursor@@UEAAJJJ@Z @ 0x1801CD510 (-SetPosition@DWMCursor@@UEAAJJJ@Z.c)
 * Callees:
 *     ?OnRasterizationScaleChanged@DWMCursor@@AEAAJXZ @ 0x180078D84 (-OnRasterizationScaleChanged@DWMCursor@@AEAAJXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F7EC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateRasterizationScale@Cursor@InputTraceLogging@@SAX_KH@Z @ 0x1800983D0 (-UpdateRasterizationScale@Cursor@InputTraceLogging@@SAX_KH@Z.c)
 */

__int64 __fastcall DWMCursor::CheckAndUpdateRasterizationScale(POINT *this, char a2)
{
  int x; // ebx
  POINT v4; // rcx
  __int64 v6; // rsi
  __int64 v7; // rbp
  int v8; // ecx
  int v9; // eax
  unsigned __int64 v11; // rcx
  int v12; // eax
  int v13; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  POINT pt; // [rsp+40h] [rbp+8h]

  x = this[11].x;
  v4 = this[4];
  if ( v4 )
  {
    x = 100;
    v6 = *(_QWORD *)(*(_QWORD *)&v4 + 480LL);
    v7 = *(_QWORD *)(*(_QWORD *)&v4 + 488LL);
    pt = this[10];
    while ( v6 != v7 )
    {
      if ( PtInRect((const RECT *)v6, pt) )
      {
        v8 = *(unsigned __int16 *)(v6 + 22);
        if ( !*(_WORD *)(v6 + 22) )
          v8 = *(unsigned __int16 *)(v6 + 20);
        v9 = MulDiv(v8, 100, 96);
        if ( !v9 )
          v9 = 100;
        x = v9;
        break;
      }
      v6 += 200LL;
    }
  }
  if ( this[11].x != x )
  {
    v11 = (unsigned int)this[5].x;
    this[11].x = x;
    InputTraceLogging::Cursor::UpdateRasterizationScale(v11, x);
    if ( a2 )
    {
      v12 = DWMCursor::OnRasterizationScaleChanged((DWMCursor *)this);
      if ( v12 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x1B7,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursor.cpp",
          (const char *)(unsigned int)v12,
          v13);
    }
  }
  return 0LL;
}
