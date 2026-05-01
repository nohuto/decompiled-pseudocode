/*
 * XREFs of wistd::__function::__func__lambda_a51e24e15fdf40f4d1fd81dbe1cb4918__void___cdecl(unsigned_char_const_(&)[32])_::operator() @ 0x18018BF30
 * Callers:
 *     <none>
 * Callees:
 *     ?OnModalityInfoChanged@TabTipAdapter@KeyboardHosting@@QEAAJUCoreKeyboardModalityInfo@Core@Text@Internal@UI@Windows@@@Z @ 0x180034EB8 (-OnModalityInfoChanged@TabTipAdapter@KeyboardHosting@@QEAAJUCoreKeyboardModalityInfo@Core@Text@I.c)
 *     ??$OnTouchEvent@IAEA_NAEA_N@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAIAEA_N1@Z @ 0x18003508C (--$OnTouchEvent@IAEA_NAEA_N@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAIAEA_N1@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_PATKTI@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800352AC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_PATKTI@@@details@wil@@QEAAX_NW4ReportingK.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memcpy_s_4 @ 0x180657578 (memcpy_s_4.c)
 */

void __fastcall wistd::__function::__func__lambda_a51e24e15fdf40f4d1fd81dbe1cb4918__void___cdecl_unsigned_char_const_____32___::operator()(
        __int64 a1,
        __int64 *a2)
{
  __int64 v2; // rax
  __int64 v3; // r15
  __int64 v5; // rax
  int v6; // edi
  __int64 v7; // rax
  __int64 v8; // rax
  unsigned int v9; // r14d
  unsigned int v10; // eax
  char v11; // si
  char v12; // si
  __int64 v13; // rcx
  unsigned int v14; // ebx
  int v15; // eax
  char v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdi
  __int64 v19; // [rsp+30h] [rbp-10h] BYREF
  int v20; // [rsp+38h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+38h]
  __int64 Destination; // [rsp+80h] [rbp+40h] BYREF
  __int64 Source; // [rsp+88h] [rbp+48h] BYREF
  unsigned int v24; // [rsp+90h] [rbp+50h] BYREF

  v2 = a2[1];
  v3 = *(_QWORD *)(a1 + 8);
  LODWORD(Destination) = 0;
  Source = v2;
  memcpy_s_4(&Destination, 4uLL, &Source, 4uLL);
  v5 = a2[2];
  v6 = Destination;
  LODWORD(Destination) = 0;
  Source = v5;
  memcpy_s_4(&Destination, 4uLL, &Source, 4uLL);
  v7 = *a2;
  Source = 0LL;
  Destination = v7;
  memcpy_s_4(&Source, 8uLL, &Destination, 8uLL);
  v8 = a2[3];
  v24 = 0;
  Destination = v8;
  memcpy_s_4(&v24, 4uLL, &Destination, 4uLL);
  v9 = (unsigned __int8)v24;
  v10 = v24 >> 8;
  v11 = BYTE1(v24);
  v24 = (unsigned __int8)v24;
  v12 = v11 & 1;
  LOBYTE(Destination) = v12;
  LOBYTE(Source) = (v10 & 2) != 0;
  TouchKeyboardExperienceTelemetryLogger::OnTouchEvent<unsigned int,bool &,bool &>(
    &v24,
    (char *)&Source,
    (char *)&Destination);
  v13 = *(_QWORD *)(v3 + 584);
  if ( v13 )
  {
    v14 = 0;
    if ( v9 < 2 )
    {
      v14 = v12 != 0 ? 16 : 2;
    }
    else if ( v9 == 4 )
    {
      if ( (unsigned int)(v6 - 256) > 9 )
      {
        if ( v6 == 514 || v6 == 517 )
          v14 = 1;
      }
      else
      {
        v14 = 4;
      }
    }
    v19 = v14;
    v20 = 0;
    v15 = KeyboardHosting::TabTipAdapter::OnModalityInfoChanged(v13, (unsigned __int32 *)&v19);
    if ( v15 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1841,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v15);
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_PATKTI>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_PATKTI>::GetImpl'::`2'::impl,
      1u,
      v16,
      v17);
    v18 = *(_QWORD *)(v3 + 2208);
    if ( v18 )
    {
      AcquireSRWLockExclusive(*(PSRWLOCK *)(v3 + 2208));
      *(_BYTE *)(v18 + 8) = v14 == 16;
      *(_BYTE *)(v18 + 16) |= v14 == 2;
      ReleaseSRWLockExclusive((PSRWLOCK)v18);
    }
  }
}
