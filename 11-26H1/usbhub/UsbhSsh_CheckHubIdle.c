/*
 * XREFs of UsbhSsh_CheckHubIdle @ 0x1400398B8
 * Callers:
 *     UsbhBusPause_Action @ 0x14001498C (UsbhBusPause_Action.c)
 *     Usbh_SSH_HubActive @ 0x14001B5C0 (Usbh_SSH_HubActive.c)
 * Callees:
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhSsh_CheckPortChangeQueuesIdle @ 0x140030598 (UsbhSsh_CheckPortChangeQueuesIdle.c)
 */

__int64 __fastcall UsbhSsh_CheckHubIdle(__int64 a1)
{
  _DWORD *v2; // rax
  _DWORD *v3; // rbx
  _QWORD *v4; // rax
  __int64 result; // rax

  v2 = FdoExt(a1);
  v3 = v2;
  if ( *((_BYTE *)v2 + 5280) )
  {
    if ( *((_BYTE *)v2 + 3408) || *((_DWORD **)v2 + 388) != v2 + 776 || v2[780] )
      goto LABEL_15;
    v4 = v2 + 1206;
  }
  else
  {
    if ( *((_BYTE *)v2 + 3408) || *((_DWORD **)v2 + 388) != v2 + 776 || v2[780] )
      goto LABEL_15;
    v4 = v2 + 1206;
  }
  if ( (_QWORD *)*v4 != v4
    || (v3[640] & 0x10) != 0
    || (int)v3[685] > 1
    || (int)UsbhSsh_CheckPortChangeQueuesIdle(a1) < 0 )
  {
LABEL_15:
    result = 3221225473LL;
    goto LABEL_16;
  }
  result = 0LL;
LABEL_16:
  *((_BYTE *)v3 + 3408) = 0;
  return result;
}
