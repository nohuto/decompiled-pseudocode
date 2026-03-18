/*
 * XREFs of VrpRegistryCallback @ 0x140973A30
 * Callers:
 *     <none>
 * Callees:
 *     EtwActivityIdControl @ 0x140466BF0 (EtwActivityIdControl.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     VrpPostOpenOrCreate @ 0x1408A5A98 (VrpPostOpenOrCreate.c)
 *     VrpPreRenameKey @ 0x1408A5E90 (VrpPreRenameKey.c)
 *     VrpPreOpenOrCreate @ 0x140975760 (VrpPreOpenOrCreate.c)
 *     VrpPostEnumerateKey @ 0x140976950 (VrpPostEnumerateKey.c)
 *     VrpPostQueryKey @ 0x140976F10 (VrpPostQueryKey.c)
 *     VrpShouldOperateOnCall @ 0x140978140 (VrpShouldOperateOnCall.c)
 *     VrpFreeKeyContext @ 0x140A7F588 (VrpFreeKeyContext.c)
 *     VrpDecommissionKeyContext @ 0x140A7F5C0 (VrpDecommissionKeyContext.c)
 *     VrpPreQueryKeyName @ 0x140AA9B60 (VrpPreQueryKeyName.c)
 *     VrpPreLoadKey @ 0x140B1B118 (VrpPreLoadKey.c)
 *     VrpPreUnloadKey @ 0x140B27FF4 (VrpPreUnloadKey.c)
 *     VrpPostUnloadKey @ 0x140B60EDC (VrpPostUnloadKey.c)
 *     VrpPreFlushKey @ 0x140B60F54 (VrpPreFlushKey.c)
 */

__int64 __fastcall VrpRegistryCallback(__int64 a1, int a2, __int64 a3)
{
  unsigned int v3; // edi
  __int64 v7; // rcx
  int v8; // ebx
  int v10; // ebx
  int v11; // ebx
  int v12; // ebx
  int v13; // ebx
  void *v14; // [rsp+20h] [rbp-30h] BYREF
  __int64 v15; // [rsp+28h] [rbp-28h] BYREF
  GUID ActivityId; // [rsp+30h] [rbp-20h] BYREF

  v3 = 0;
  v14 = 0LL;
  v15 = 0LL;
  ActivityId = 0LL;
  if ( (unsigned int)a2 > 0x33 || !(unsigned int)VrpShouldOperateOnCall((unsigned int)a2, a3, &v15, &v14) )
    return v3;
  EtwActivityIdControl(1u, &ActivityId);
  if ( a2 <= 27 )
  {
    if ( a2 != 27 )
    {
      if ( a2 <= 15 )
      {
        if ( a2 == 15 )
          return v3;
        if ( a2 > 5 )
        {
          if ( a2 == 14 && *(_QWORD *)(a3 + 16) )
            VrpDecommissionKeyContext();
          return v3;
        }
        if ( a2 != 4 )
          return v3;
        return (unsigned int)VrpPreRenameKey(a3);
      }
      if ( a2 <= 21 )
      {
        if ( a2 != 20 )
          return v3;
        return (unsigned int)VrpPostEnumerateKey(a3, v14);
      }
      v13 = a2 - 22;
      if ( !v13 )
        return (unsigned int)VrpPostQueryKey(a3);
      if ( v13 != 4 )
        return v3;
      return (unsigned int)VrpPreOpenOrCreate(a3, v14);
    }
    return (unsigned int)VrpPostOpenOrCreate((__int64 *)a3, v14);
  }
  if ( a2 <= 39 )
  {
    if ( a2 == 39 )
      return v3;
    if ( a2 > 33 )
    {
      v12 = a2 - 34;
      if ( v12 )
      {
        if ( v12 != 1 )
          return v3;
        return (unsigned int)VrpPostUnloadKey(a3, v14);
      }
      else
      {
        return (unsigned int)VrpPreUnloadKey(a3, v14);
      }
    }
    if ( a2 == 33 )
      return v3;
    v8 = a2 - 28;
    if ( !v8 )
      return (unsigned int)VrpPreOpenOrCreate(a3, v14);
    v10 = v8 - 1;
    if ( v10 )
    {
      v11 = v10 - 1;
      if ( v11 )
      {
        if ( v11 != 2 )
          return v3;
        return (unsigned int)VrpPreLoadKey(a3, v14);
      }
      else
      {
        return (unsigned int)VrpPreFlushKey(v7, v14);
      }
    }
    return (unsigned int)VrpPostOpenOrCreate((__int64 *)a3, v14);
  }
  if ( a2 > 45 )
  {
    if ( a2 != 47 )
      return v3;
    return (unsigned int)VrpPreQueryKeyName(a3);
  }
  if ( a2 == 40 )
    VrpFreeKeyContext(*(PVOID *)(a3 + 8));
  return v3;
}
