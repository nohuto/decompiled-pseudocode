/*
 * XREFs of ?GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1401A3738
 * Callers:
 *     PostIAMShellHookMessageEx @ 0x140010AC0 (PostIAMShellHookMessageEx.c)
 *     ?_GetNextQueueWindow@@YAPEAUtagWND@@PEAU1@HH@Z @ 0x14008BAC4 (-_GetNextQueueWindow@@YAPEAUtagWND@@PEAU1@HH@Z.c)
 *     xxxCreateWindowEx @ 0x14017B3B8 (xxxCreateWindowEx.c)
 *     ?IsWindowActivateable@@YA_NPEBUtagWND@@@Z @ 0x1401A36FC (-IsWindowActivateable@@YA_NPEBUtagWND@@@Z.c)
 *     ?CompositeAppHasForeground@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1401CB2E8 (-CompositeAppHasForeground@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     NtUserGetForegroundWindow @ 0x140244830 (NtUserGetForegroundWindow.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x140272C18 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     NtUserNavigateFocus @ 0x1402B88D0 (NtUserNavigateFocus.c)
 *     _lambda_f1f8f0736c0bde49f507539c36edf3c7_::operator() @ 0x1402C3C94 (_lambda_f1f8f0736c0bde49f507539c36edf3c7_--operator().c)
 * Callees:
 *     ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x140039400 (-IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ?GetHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1401A37C0 (-GetHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 */

struct tagWND *__fastcall CoreWindowProp::GetCompositeAppFrameWindowOrSelf(const struct tagWND *a1, __int64 a2)
{
  const struct tagWND *v3; // rbx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rdx
  const struct tagWND *Host; // rax
  __int64 v9; // rdx

  v3 = 0LL;
  if ( (unsigned int)CoreWindowProp::IsComponent(a1, a2) )
  {
    v3 = a1;
    do
    {
      Host = CoreWindowProp::GetHost(v3);
      v3 = Host;
    }
    while ( Host && (unsigned int)CoreWindowProp::IsComponent(Host, v9) );
  }
  if ( !v3 )
    return a1;
  do
  {
    v5 = *((_QWORD *)v3 + 13);
    if ( v5 )
    {
      v6 = *((_QWORD *)v3 + 3);
      if ( v6 )
      {
        v7 = *(_QWORD *)(v6 + 8);
        if ( v7 )
        {
          if ( v5 == *(_QWORD *)(v7 + 24) )
            break;
        }
      }
    }
    v3 = (const struct tagWND *)*((_QWORD *)v3 + 13);
  }
  while ( v5 );
  if ( !v3 )
    return a1;
  return v3;
}
