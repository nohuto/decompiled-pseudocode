/*
 * XREFs of TtmiGetTerminalById @ 0x1407EBD10
 * Callers:
 *     TtmNotifyDeviceInput @ 0x1407E4EE0 (TtmNotifyDeviceInput.c)
 *     TtmpPushTerminalState @ 0x1407E5F08 (TtmpPushTerminalState.c)
 *     TtmiSetDisplayPowerRequest @ 0x1407E68A0 (TtmiSetDisplayPowerRequest.c)
 *     TtmpSetDisplayRequestEnded @ 0x1407E772C (TtmpSetDisplayRequestEnded.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TtmiGetTerminalById(_QWORD *a1, __int64 a2, int a3)
{
  __int64 *v3; // r9
  __int64 *i; // rax
  __int64 *v5; // rdx

  v3 = (__int64 *)(a2 + 40);
  for ( i = *(__int64 **)(a2 + 40); ; i = (__int64 *)*i )
  {
    v5 = 0LL;
    if ( i == v3 )
      break;
    v5 = i;
    if ( *((_DWORD *)i + 7) == a3 )
      break;
  }
  *a1 = v5;
  return v5 == 0LL ? 0xC0000225 : 0;
}
