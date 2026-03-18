/*
 * XREFs of DxgkNetDispStartMiracastDisplayDevice @ 0x1401B77F0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     DxgkMiracastStartMiracastSession @ 0x1400685F0 (DxgkMiracastStartMiracastSession.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     ?DxgkNetDispAccessCheck@@YAJPEAVDXGPROCESS@@@Z @ 0x1400738F0 (-DxgkNetDispAccessCheck@@YAJPEAVDXGPROCESS@@@Z.c)
 *     ?IsAllowedToCallMiracast@@YA_NXZ @ 0x140073DE0 (-IsAllowedToCallMiracast@@YA_NXZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     memcmp @ 0x1400A6320 (memcmp.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkNetDispStartMiracastDisplayDevice(void *Src)
{
  struct _KEVENT *v2; // rdi
  unsigned int v4; // ebx
  struct DXGPROCESS *Current; // rax
  NTSTATUS v6; // eax
  NTSTATUS v7; // [rsp+50h] [rbp-258h] BYREF
  PVOID Object; // [rsp+58h] [rbp-250h] BYREF
  HANDLE v9[70]; // [rsp+60h] [rbp-248h] BYREF

  memset(v9, 0, 0x228uLL);
  v2 = 0LL;
  if ( !IsAllowedToCallMiracast() )
    return -2147483640LL;
  RtlCopyFromUser(v9, Src, 0x228uLL);
  if ( LODWORD(v9[0]) == 552 )
  {
    Current = DXGPROCESS::GetCurrent();
    v7 = DxgkNetDispAccessCheck(Current);
    if ( v7 >= 0 )
    {
      if ( !memcmp(&v9[67], &GUID_NULL, 0x10uLL) && (v7 = ExUuidCreate((UUID *)&v9[67]), v7 < 0) )
      {
        v4 = -2147483647;
        WdLogSingleEntry1(3LL);
        WdLogGlobalForLineNumber = 9618;
      }
      else if ( v9[66]
             && (Object = 0LL,
                 v6 = ObReferenceObjectByHandle(v9[66], 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL),
                 v2 = (struct _KEVENT *)Object,
                 v7 = v6,
                 v6 < 0) )
      {
        v4 = -2147483640;
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 9636;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Caller specified event handle (0x%I64x) is not an valid event handle.",
          (__int64)v9[66],
          0LL,
          0LL,
          0LL,
          0LL);
      }
      else
      {
        return (unsigned int)DxgkMiracastStartMiracastSession((__int64)v9, v2, &v7);
      }
    }
    else
    {
      v4 = -2147483643;
      WdLogSingleEntry1(3LL);
      WdLogGlobalForLineNumber = 9607;
    }
  }
  else
  {
    v4 = -2147483640;
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 9597;
  }
  return v4;
}
