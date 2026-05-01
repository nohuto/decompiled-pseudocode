/*
 * XREFs of wistd::__function::__func__lambda_a51e24e15fdf40f4d1fd81dbe1cb4918__void___cdecl(unsigned_char_const_(&)[32])_::operator() @ 0x1800B8980
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnModalityInfoChanged@TabTipAdapter@KeyboardHosting@@QEAAJUCoreKeyboardModalityInfo@Core@Text@Internal@UI@Windows@@@Z @ 0x1800B8BF8 (-OnModalityInfoChanged@TabTipAdapter@KeyboardHosting@@QEAAJUCoreKeyboardModalityInfo@Core@Text@I.c)
 *     ??$OnTouchEvent@IAEA_NAEA_N@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAIAEA_N1@Z @ 0x1800B8DD8 (--$OnTouchEvent@IAEA_NAEA_N@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAIAEA_N1@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_PATKTI@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800B8FF8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_PATKTI@@@details@wil@@QEAAX_NW4ReportingK.c)
 *     memcpy_s_4 @ 0x18067D5D8 (memcpy_s_4.c)
 */

void __fastcall wistd::__function::__func__lambda_a51e24e15fdf40f4d1fd81dbe1cb4918__void___cdecl_unsigned_char_const_____32___::operator()(
        __int64 a1,
        __int64 *a2)
{
  __int64 v2; // r15
  int v4; // edi
  unsigned __int8 v5; // r14
  unsigned int v6; // eax
  char v7; // si
  char v8; // si
  __int64 v9; // rcx
  unsigned int v10; // ebx
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rdi
  __int64 v14; // [rsp+30h] [rbp-10h] BYREF
  int v15; // [rsp+38h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+38h]
  __int64 Destination; // [rsp+80h] [rbp+40h] BYREF
  __int64 Source; // [rsp+88h] [rbp+48h] BYREF
  unsigned int v19; // [rsp+90h] [rbp+50h] BYREF

  v2 = *(_QWORD *)(a1 + 8);
  Source = a2[1];
  LODWORD(Destination) = 0;
  memcpy_s_4(&Destination, 4uLL, &Source, 4uLL);
  v4 = Destination;
  Source = a2[2];
  LODWORD(Destination) = 0;
  memcpy_s_4(&Destination, 4uLL, &Source, 4uLL);
  Destination = *a2;
  Source = 0LL;
  memcpy_s_4(&Source, 8uLL, &Destination, 8uLL);
  Destination = a2[3];
  v19 = 0;
  memcpy_s_4(&v19, 4uLL, &Destination, 4uLL);
  v5 = v19;
  v6 = v19 >> 8;
  v7 = BYTE1(v19);
  v19 = (unsigned __int8)v19;
  v8 = v7 & 1;
  LOBYTE(Destination) = v8;
  LOBYTE(Source) = (v6 & 2) != 0;
  TouchKeyboardExperienceTelemetryLogger::OnTouchEvent<unsigned int,bool &,bool &>(&v19, &Source, &Destination);
  v9 = *(_QWORD *)(v2 + 584);
  if ( v9 )
  {
    v10 = 0;
    if ( v5 < 2u )
    {
      v10 = v8 != 0 ? 16 : 2;
    }
    else if ( v5 == 4 )
    {
      if ( (unsigned int)(v4 - 256) > 9 )
      {
        if ( v4 == 514 || v4 == 517 )
          v10 = 1;
      }
      else
      {
        v10 = 4;
      }
    }
    v14 = v10;
    v15 = 0;
    v11 = KeyboardHosting::TabTipAdapter::OnModalityInfoChanged(v9, &v14);
    if ( v11 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1802,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v11);
    LOBYTE(v12) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_PATKTI>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_PATKTI>::GetImpl'::`2'::impl,
      v12);
    v13 = *(_QWORD *)(v2 + 2208);
    if ( v13 )
    {
      AcquireSRWLockExclusive(*(PSRWLOCK *)(v2 + 2208));
      *(_BYTE *)(v13 + 8) = v10 == 16;
      *(_BYTE *)(v13 + 16) |= v10 == 2;
      ReleaseSRWLockExclusive((PSRWLOCK)v13);
    }
  }
}
