/*
 * XREFs of ?ReplyMessage@DXGCHANNELENDPOINTPROXY@@UEAAJPEAXI@Z @ 0x140424220
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DXGCHANNELENDPOINTPROXY::ReplyMessage(DXGCHANNELENDPOINTPROXY *this, void *a2)
{
  __int64 result; // rax
  __int64 v4; // rcx

  result = 3221225473LL;
  v4 = *((_QWORD *)this + 18);
  if ( v4 )
  {
    ((void (__fastcall *)(__int64, void *))qword_140168488)(v4, a2);
    result = 0LL;
    *((_QWORD *)this + 18) = 0LL;
  }
  return result;
}
