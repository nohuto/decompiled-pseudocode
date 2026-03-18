/*
 * XREFs of DxgkNetDispStopMiracastDisplayDevice @ 0x1401B7A60
 * Callers:
 *     <none>
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?RtlStringCchLengthW@@YAJPEBG_KPEA_K@Z @ 0x14004D4D0 (-RtlStringCchLengthW@@YAJPEBG_KPEA_K@Z.c)
 *     ?DxgkNetDispAccessCheck@@YAJPEAVDXGPROCESS@@@Z @ 0x1400738F0 (-DxgkNetDispAccessCheck@@YAJPEAVDXGPROCESS@@@Z.c)
 *     ?IsAllowedToCallMiracast@@YA_NXZ @ 0x140073DE0 (-IsAllowedToCallMiracast@@YA_NXZ.c)
 *     DxgkMiracastStopMiracastSession @ 0x140089744 (DxgkMiracastStopMiracastSession.c)
 *     memmove @ 0x1400A5B00 (memmove.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkNetDispStopMiracastDisplayDevice(unsigned __int16 *a1, HANDLE Handle)
{
  WCHAR *v4; // rsi
  struct _KEVENT *v5; // r12
  struct DXGPROCESS *Current; // rax
  unsigned int v8; // ebx
  PVOID v9; // rbx
  unsigned __int64 v10; // rax
  WCHAR *v11; // rax
  size_t v12; // rbx
  NTSTATUS v13; // eax
  PVOID Object; // [rsp+90h] [rbp+18h] BYREF

  v4 = 0LL;
  v5 = 0LL;
  if ( !IsAllowedToCallMiracast() )
    return 2147483656LL;
  Current = DXGPROCESS::GetCurrent();
  if ( (int)DxgkNetDispAccessCheck(Current) >= 0 )
  {
    Object = (PVOID)520;
    ProbeForRead(a1, 0x208uLL, 2u);
    if ( RtlStringCchLengthW(a1, 0x208uLL, (unsigned __int64 *)&Object) >= 0 )
    {
      v9 = Object;
      v10 = 2LL * ((_QWORD)Object + 1);
      if ( !is_mul_ok((unsigned __int64)Object + 1, 2uLL) )
        v10 = -1LL;
      v11 = (WCHAR *)operator new[](v10, 0x4B677844u, 256LL);
      v4 = v11;
      if ( v11 )
      {
        v12 = (unsigned __int64)v9;
        memmove(v11, a1, v12 * 2);
        v4[v12] = 0;
        if ( Handle
          && (Object = 0LL,
              v13 = ObReferenceObjectByHandle(Handle, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL),
              v5 = (struct _KEVENT *)Object,
              v13 < 0) )
        {
          v8 = -2147483640;
          WdLogSingleEntry1(2LL);
          WdLogGlobalForLineNumber = 9759;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Caller specified event handle (0x%I64x) is not an valid event handle.",
            (__int64)Handle,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        else
        {
          v8 = DxgkMiracastStopMiracastSession(v4, v5);
        }
      }
      else
      {
        v8 = -2147483638;
        WdLogSingleEntry1(6LL);
        WdLogGlobalForLineNumber = 9727;
        DxgkLogInternalTriageEvent(
          0LL,
          262145,
          -1,
          (__int64)L"Failed to allocate buffer for LocalDeviceName, returning 0x%I64x",
          -2147483638LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
    }
    else
    {
      v8 = -2147483640;
      WdLogSingleEntry1(3LL);
      WdLogGlobalForLineNumber = 9716;
    }
  }
  else
  {
    v8 = -2147483643;
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 9692;
  }
  if ( v4 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v4);
  return v8;
}
