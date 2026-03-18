/*
 * XREFs of ?xxxRetrieveInteractiveControlInputMessage@@YA?AW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@KK@Z @ 0x1402658D0
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x14027D2B8 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x14012FC60 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     ?GetInputReport@InteractiveControlDevice@@QEAAHKPEAPEAVInteractiveControlInput@@@Z @ 0x1402ED5D0 (-GetInputReport@InteractiveControlDevice@@QEAAHKPEAPEAVInteractiveControlInput@@@Z.c)
 */

__int64 __fastcall xxxRetrieveInteractiveControlInputMessage(__int64 a1, __int64 a2)
{
  unsigned __int16 v2; // di
  int v3; // ebx
  struct InteractiveControlManager *v4; // rax
  __int64 i; // r8
  InteractiveControlDevice *v6; // rcx
  unsigned int v7; // r9d
  struct InteractiveControlInput *v9; // [rsp+40h] [rbp+18h] BYREF

  v2 = a2;
  v3 = a1;
  v4 = InteractiveControlManager::Instance(a1, a2);
  v9 = 0LL;
  for ( i = 0LL; (unsigned int)i < 5; i = (unsigned int)(i + 1) )
  {
    v6 = (InteractiveControlDevice *)*((_QWORD *)v4 + i + 5);
    if ( v6 && (!*(_QWORD *)v6 || *((_DWORD *)v6 + 2) == v3) )
    {
      if ( (unsigned int)InteractiveControlDevice::GetInputReport(v6, v2, &v9) )
      {
        *((_DWORD *)v9 + 6) = v7;
        return v7;
      }
      return 2;
    }
  }
  return 2;
}
