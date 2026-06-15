/*
 * XREFs of sub_14003E860 @ 0x14003E860
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     sub_14005A040 @ 0x14005A040 (sub_14005A040.c)
 *     sub_14005A470 @ 0x14005A470 (sub_14005A470.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_14003E860(__int64 a1)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  int v3; // ebx
  __int128 v5; // [rsp+30h] [rbp-28h] BYREF

  v5 = *(_OWORD *)(a1 + 104);
  EtwEventActivityIdControl(4LL, &v5);
  v2 = (struct _RTL_CRITICAL_SECTION *)(a1 + 40);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 40));
  v3 = sub_1400B6010(*(_QWORD *)(a1 + 184));
  if ( v3 < 0 )
  {
    if ( off_1400E73D8 != (_UNKNOWN *)&off_1400E73D8
      && (*((_DWORD *)off_1400E73D8 + 7) & 0x200) != 0
      && *((_BYTE *)off_1400E73D8 + 25) >= 2u )
    {
      sub_14005A040(*((_QWORD *)off_1400E73D8 + 2), 20LL, &unk_1400C6808);
    }
    sub_14005A470("CSystemAudioDeviceSharedBase::ResetEndpoint", 367LL, (unsigned int)v3);
  }
  if ( v2 )
    LeaveCriticalSection(v2);
  EtwEventActivityIdControl(4LL, &v5);
  return (unsigned int)v3;
}
