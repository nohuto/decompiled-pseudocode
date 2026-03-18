/*
 * XREFs of Controller_ExecuteDSMToSendPORTSCValues @ 0x140033900
 * Callers:
 *     Controller_WdfEvtDeviceD0Exit @ 0x14002BD60 (Controller_WdfEvtDeviceD0Exit.c)
 * Callees:
 *     XilRegister_ReadUlong @ 0x14000B620 (XilRegister_ReadUlong.c)
 *     WPP_RECORDER_SF_P @ 0x140045580 (WPP_RECORDER_SF_P.c)
 *     Controller_ExecuteDSM @ 0x140080FE4 (Controller_ExecuteDSM.c)
 */

void __fastcall Controller_ExecuteDSMToSendPORTSCValues(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // r13
  __int64 v4; // rbp
  _DWORD *Pool2; // rax
  int v6; // edx
  int v7; // r8d
  void *v8; // rsi
  _DWORD *v9; // r14
  int Ulong; // eax

  v1 = 0LL;
  if ( *(_BYTE *)(a1 + 1032) )
  {
    v3 = *(_QWORD *)(a1 + 152);
    v4 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 88) + 87LL);
    Pool2 = (_DWORD *)ExAllocatePool2(64LL, (unsigned int)(4 * v4 + 4), 1229146200LL);
    v8 = Pool2;
    if ( Pool2 )
    {
      *Pool2 = v4;
      if ( (_DWORD)v4 )
      {
        v9 = Pool2 + 1;
        do
        {
          Ulong = XilRegister_ReadUlong(
                    *(_QWORD *)(*(_QWORD *)(v3 + 8) + 88LL),
                    (unsigned int *)(v1 + *(_QWORD *)(v3 + 40)));
          v1 += 16LL;
          *v9++ = Ulong;
          --v4;
        }
        while ( v4 );
      }
      Controller_ExecuteDSM(a1, &GUID_DSM_SEND_PORTSC_VALUES, 1LL);
      ExFreePoolWithTag(v8, 0x49434858u);
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_P(*(_QWORD *)(a1 + 72), v6, v7, 275);
    }
  }
}
