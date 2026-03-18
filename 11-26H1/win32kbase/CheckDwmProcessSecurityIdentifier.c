/*
 * XREFs of CheckDwmProcessSecurityIdentifier @ 0x140119760
 * Callers:
 *     RIMIsCurrentProcessTrusted @ 0x1400D7D30 (RIMIsCurrentProcessTrusted.c)
 *     ?xxxDwmProcessStartup@@YAJPEAX@Z @ 0x1401ADDE8 (-xxxDwmProcessStartup@@YAJPEAX@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     AllocateWindowManagerSid @ 0x1401197D0 (AllocateWindowManagerSid.c)
 */

__int64 CheckDwmProcessSecurityIdentifier()
{
  int v0; // ebx
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9
  char v5; // [rsp+30h] [rbp+8h] BYREF
  PVOID Buffer; // [rsp+38h] [rbp+10h] BYREF

  Buffer = 0LL;
  v5 = 0;
  v0 = AllocateWindowManagerSid(&Buffer);
  if ( v0 >= 0 )
  {
    v0 = RtlCheckTokenMembership(0LL, Buffer, &v5);
    if ( v0 >= 0 && !v5 )
      v0 = -1073741720;
    GreDeleteFastMutex((char *)Buffer, v1, v2, v3);
  }
  return (unsigned int)v0;
}
