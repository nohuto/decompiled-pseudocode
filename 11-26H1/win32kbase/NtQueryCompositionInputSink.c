/*
 * XREFs of NtQueryCompositionInputSink @ 0x1400A4290
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x14006EEBC (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     RIMLockShared @ 0x14006F3F0 (RIMLockShared.c)
 *     UserIsCurrentProcessDwm @ 0x14006F430 (UserIsCurrentProcessDwm.c)
 *     ?QueryInputQueueTypes@CInputSink@@QEBAJPEAUCOMPOSITION_INPUT_SINK_QUERY_V2@@@Z @ 0x1400A41F8 (-QueryInputQueueTypes@CInputSink@@QEBAJPEAUCOMPOSITION_INPUT_SINK_QUERY_V2@@@Z.c)
 *     ?ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1400A4600 (-ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     RtlCopyFromUser @ 0x1401C9358 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     RtlCopyToUser @ 0x1402D2054 (RtlCopyToUser.c)
 */

__int64 __fastcall NtQueryCompositionInputSink(void *a1, void *a2, int a3)
{
  BOOL IsCurrentProcessDwm; // eax
  signed int InputQueueTypes; // ebx
  char *v7; // rsi
  size_t v8; // r8
  int v10; // [rsp+20h] [rbp-58h] BYREF
  PVOID Object; // [rsp+28h] [rbp-50h] BYREF
  int v12; // [rsp+30h] [rbp-48h]
  void *v13; // [rsp+38h] [rbp-40h]
  __int128 Src; // [rsp+40h] [rbp-38h] BYREF
  __int64 v15; // [rsp+50h] [rbp-28h]

  Object = a1;
  v13 = a2;
  Src = 0LL;
  v15 = 0LL;
  v10 = 0;
  IsCurrentProcessDwm = UserIsCurrentProcessDwm((int)a1, (int)a2, a3);
  InputQueueTypes = !IsCurrentProcessDwm ? 0xC0000022 : 0;
  if ( IsCurrentProcessDwm )
  {
    RtlCopyFromUser(&v10, a2, 4uLL);
    if ( v10 == 20 )
    {
      RtlCopyFromUser(&Src, a2, 0x14uLL);
      HIDWORD(v15) = 0;
    }
    else if ( v10 == 24 )
    {
      RtlCopyFromUser(&Src, a2, 0x18uLL);
    }
    else
    {
      InputQueueTypes = -1073741811;
      v12 = -1073741811;
    }
  }
  if ( InputQueueTypes >= 0 )
  {
    Object = 0LL;
    InputQueueTypes = CompositionInputObject::ResolveHandle(a1, 1u, 1, (struct CompositionInputObject **)&Object);
    if ( InputQueueTypes >= 0 )
    {
      v7 = (char *)Object;
      RIMLockShared((__int64)Object + 32);
      InputQueueTypes = CInputSink::QueryInputQueueTypes(
                          (CInputSink *)(v7 + 24),
                          (struct COMPOSITION_INPUT_SINK_QUERY_V2 *)&Src);
      CPushLock::ReleaseLock((CPushLock *)(v7 + 32));
      ObfDereferenceObject(v7);
    }
    if ( InputQueueTypes >= 0 )
    {
      if ( v10 == 20 )
      {
        v8 = 20LL;
        goto LABEL_14;
      }
      if ( v10 == 24 )
      {
        v8 = 24LL;
LABEL_14:
        RtlCopyToUser(a2, &Src, v8);
      }
    }
  }
  return (unsigned int)InputQueueTypes;
}
