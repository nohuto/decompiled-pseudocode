/*
 * XREFs of sub_140059BCC @ 0x140059BCC
 * Callers:
 *     sub_14001DD58 @ 0x14001DD58 (sub_14001DD58.c)
 * Callees:
 *     sub_1400125D4 @ 0x1400125D4 (sub_1400125D4.c)
 *     sub_14005A010 @ 0x14005A010 (sub_14005A010.c)
 *     sub_14005A040 @ 0x14005A040 (sub_14005A040.c)
 *     sub_14005A470 @ 0x14005A470 (sub_14005A470.c)
 */

__int64 __fastcall sub_140059BCC(__int64 a1)
{
  _UNKNOWN ***v2; // rdi
  HRESULT v3; // ebx
  _UNKNOWN ***v4; // rax
  DWORD v5; // ecx
  _QWORD *v6; // rcx
  int v8; // [rsp+40h] [rbp+8h] BYREF

  if ( off_1400E73D8 != (_UNKNOWN *)&off_1400E73D8
    && (*((_BYTE *)off_1400E73D8 + 28) & 0x10) != 0
    && *((_BYTE *)off_1400E73D8 + 25) >= 4u )
  {
    sub_14005A010(*((_QWORD *)off_1400E73D8 + 2), 16LL, &unk_1400C8AF0);
  }
  v2 = off_1400E74C0;
  v3 = 0;
  v4 = (_UNKNOWN ***)off_1400E74C8;
  while ( v2 < v4 && !v3 )
  {
    if ( *v2 )
    {
      v5 = *((_DWORD *)*v2 + 10);
      if ( v5 )
      {
        v3 = CoRevokeClassObject(v5);
        v4 = (_UNKNOWN ***)off_1400E74C8;
      }
    }
    ++v2;
  }
  if ( *(_BYTE *)(a1 + 96) )
    Sleep(*(_DWORD *)(a1 + 92));
  if ( dword_1400E8948 )
  {
    NtDeleteWnfStateName(&qword_1400E8940);
    qword_1400E8940 = 0LL;
    dword_1400E8948 = 0;
  }
  if ( dword_1400E8924 )
  {
    if ( RpcServerUnregisterIfEx(&unk_1400C1860, 0LL, 1)
      && off_1400E73D8 != (_UNKNOWN *)&off_1400E73D8
      && (*((_BYTE *)off_1400E73D8 + 28) & 0x10) != 0
      && *((_BYTE *)off_1400E73D8 + 25) >= 4u )
    {
      sub_14005A040(*((_QWORD *)off_1400E73D8 + 2), 17LL, &unk_1400C8AF0);
    }
    dword_1400E8924 = 0;
  }
  MMDevAPI_2();
  sub_1400125D4(&qword_1400E8718);
  NtSetSystemInformation(SystemPlugPlayBusInformation|0x80, 0LL, 0);
  v8 = -1;
  RtlPublishWnfStateData(0x2821B2CA3BC2875LL, 0LL, &v8, 4LL, 0LL);
  CoUninitialize();
  v6 = off_1400E73D8;
  if ( off_1400E73D8 != (_UNKNOWN *)&off_1400E73D8
    && (*((_BYTE *)off_1400E73D8 + 28) & 0x10) != 0
    && *((_BYTE *)off_1400E73D8 + 25) >= 4u )
  {
    sub_14005A010(*((_QWORD *)off_1400E73D8 + 2), 18LL, &unk_1400C8AF0);
    v6 = off_1400E73D8;
  }
  if ( v3 < 0 )
  {
    if ( v6 != &off_1400E73D8 && (*((_DWORD *)v6 + 7) & 0x40000) != 0 && *((_BYTE *)v6 + 25) >= 2u )
      sub_14005A040(v6[2], 19LL, &unk_1400C8AF0);
    sub_14005A470("CAudioDGModule::PostMessageLoop", 510LL, (unsigned int)v3);
  }
  return (unsigned int)v3;
}
