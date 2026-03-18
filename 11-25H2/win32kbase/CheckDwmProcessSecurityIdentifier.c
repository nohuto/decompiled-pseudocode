/*
 * XREFs of CheckDwmProcessSecurityIdentifier @ 0x140154050
 * Callers:
 *     RIMIsCurrentProcessTrusted @ 0x1400CD380 (RIMIsCurrentProcessTrusted.c)
 *     ?xxxDwmProcessStartup@@YAJPEAX@Z @ 0x14017DD8C (-xxxDwmProcessStartup@@YAJPEAX@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     AllocateWindowManagerSid @ 0x1400497C0 (AllocateWindowManagerSid.c)
 */

__int64 CheckDwmProcessSecurityIdentifier()
{
  int WindowManagerSid; // ebx
  char v2; // [rsp+30h] [rbp+8h] BYREF
  PVOID Buffer; // [rsp+38h] [rbp+10h] BYREF

  Buffer = 0LL;
  v2 = 0;
  WindowManagerSid = AllocateWindowManagerSid((char **)&Buffer);
  if ( WindowManagerSid >= 0 )
  {
    WindowManagerSid = RtlCheckTokenMembership(0LL, Buffer, &v2);
    if ( WindowManagerSid >= 0 && !v2 )
      WindowManagerSid = -1073741720;
    GreDeleteFastMutex((char *)Buffer);
  }
  return (unsigned int)WindowManagerSid;
}
