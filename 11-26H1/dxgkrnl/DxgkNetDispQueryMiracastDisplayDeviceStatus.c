/*
 * XREFs of DxgkNetDispQueryMiracastDisplayDeviceStatus @ 0x1401B74E0
 * Callers:
 *     <none>
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?RtlStringCchLengthW@@YAJPEBG_KPEA_K@Z @ 0x14004D4D0 (-RtlStringCchLengthW@@YAJPEBG_KPEA_K@Z.c)
 *     ?DxgkNetDispAccessCheck@@YAJPEAVDXGPROCESS@@@Z @ 0x1400738F0 (-DxgkNetDispAccessCheck@@YAJPEAVDXGPROCESS@@@Z.c)
 *     memmove @ 0x1400A5B00 (memmove.c)
 *     RtlWriteULongToUser @ 0x140196858 (RtlWriteULongToUser.c)
 *     DxgkMiracastQueryMiracastStatus @ 0x14024D658 (DxgkMiracastQueryMiracastStatus.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkNetDispQueryMiracastDisplayDeviceStatus(unsigned __int16 *a1, _DWORD *a2)
{
  char *v4; // rsi
  struct DXGPROCESS *Current; // rax
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rax
  char *v8; // rax
  size_t v9; // rbx
  int v11; // [rsp+58h] [rbp-20h] BYREF
  unsigned int v12; // [rsp+90h] [rbp+18h] BYREF
  unsigned __int64 v13; // [rsp+98h] [rbp+20h] BYREF

  v4 = 0LL;
  v11 = 0;
  v12 = 0;
  Current = DXGPROCESS::GetCurrent();
  if ( (int)DxgkNetDispAccessCheck(Current) >= 0 )
  {
    v13 = 520LL;
    ProbeForRead(a1, 0x208uLL, 2u);
    if ( RtlStringCchLengthW(a1, 0x208uLL, &v13) >= 0 )
    {
      v6 = v13;
      v7 = 2 * (v13 + 1);
      if ( !is_mul_ok(v13 + 1, 2uLL) )
        v7 = -1LL;
      v8 = (char *)operator new[](v7, 0x4B677844u, 256LL);
      v4 = v8;
      if ( v8 )
      {
        v9 = 2 * v6;
        memmove(v8, a1, v9);
        *(_WORD *)&v4[v9] = 0;
        LODWORD(v13) = DxgkMiracastQueryMiracastStatus(v4, &v11, &v12);
        if ( (v13 & 0x80000000) == 0LL )
          RtlWriteULongToUser(a2, v11);
      }
      else
      {
        v12 = -2147483638;
        WdLogSingleEntry1(6LL);
        WdLogGlobalForLineNumber = 9848;
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
      v12 = -2147483640;
      WdLogSingleEntry1(3LL);
      WdLogGlobalForLineNumber = 9837;
    }
  }
  else
  {
    v12 = -2147483643;
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 9813;
  }
  if ( v4 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v4);
  return v12;
}
