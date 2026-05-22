/*
 * XREFs of ?evaluate@_tip_ISMSessionMonitorCreationTipTest@@QEAAXXZ @ 0x1800A3954
 * Callers:
 *     ?evaluate@?$merged_data@U_tip_ISMSessionMonitorCreationTipTest@@U1@@details@tip2@@EEAAXXZ @ 0x1800A38D0 (-evaluate@-$merged_data@U_tip_ISMSessionMonitorCreationTipTest@@U1@@details@tip2@@EEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall _tip_ISMSessionMonitorCreationTipTest::evaluate(_tip_ISMSessionMonitorCreationTipTest *this)
{
  const char *v1; // r8
  char v2; // al
  const char *v3; // r9
  __int64 v4; // rax
  const char *v5; // r8
  char v6; // al
  __int64 v7; // rax

  if ( *((_BYTE *)this + 16) )
  {
    v1 = "reason::wait_failed";
    v2 = 114;
    v3 = "reason::wait_failed";
    do
    {
      ++v1;
      if ( v2 == 58 )
        v3 = v1;
      v2 = *v1;
    }
    while ( *v1 );
    v4 = *((_QWORD *)this + 1);
    if ( !*(_BYTE *)(v4 + 152) )
    {
      *(_WORD *)(v4 + 154) = 0;
LABEL_8:
      *(_BYTE *)(v4 + 152) = 3;
      *(_QWORD *)(v4 + 160) = v3;
    }
  }
  else if ( *((_BYTE *)this + 17) )
  {
    v5 = "reason::fallback_failed";
    v6 = 114;
    v3 = "reason::fallback_failed";
    do
    {
      ++v5;
      if ( v6 == 58 )
        v3 = v5;
      v6 = *v5;
    }
    while ( *v5 );
    v4 = *((_QWORD *)this + 1);
    if ( !*(_BYTE *)(v4 + 152) )
    {
      *(_WORD *)(v4 + 154) = 1;
      goto LABEL_8;
    }
  }
  else
  {
    v7 = *((_QWORD *)this + 1);
    if ( !*(_BYTE *)(v7 + 152) )
    {
      *(_BYTE *)(v7 + 152) = 1;
      *(_WORD *)(v7 + 154) = 0x8000;
      *(_QWORD *)(v7 + 160) = 0LL;
    }
  }
}
