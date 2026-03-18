/*
 * XREFs of NtGdiGetMonitorID @ 0x1401DBB10
 * Callers:
 *     <none>
 * Callees:
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14007ED70 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x140084B40 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x140084C80 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@XZ @ 0x14009344C (--0-$SEMOBJSHARED@$00@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     memmove @ 0x140342600 (memmove.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

__int64 __fastcall NtGdiGetMonitorID(HDC a1, SIZE_T Length, void *a3)
{
  SIZE_T v4; // r15
  unsigned int v6; // edi
  _WORD *v7; // rcx
  __int64 v8; // rax
  size_t v9; // rsi
  __int64 v11; // rbx
  int v12; // ecx
  __int64 v13; // rdx
  __int64 v14; // [rsp+20h] [rbp-428h]
  __int64 v15; // [rsp+30h] [rbp-418h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-410h] BYREF
  _QWORD v17[14]; // [rsp+50h] [rbp-3F8h] BYREF
  _DWORD v18[82]; // [rsp+C0h] [rbp-388h] BYREF
  _WORD Src[260]; // [rsp+208h] [rbp-240h] BYREF

  v4 = (unsigned int)Length;
  v6 = 0;
  memset_0(v18, 0, 0x348uLL);
  if ( (unsigned int)UserSessionSwitchEnterCrit() )
    return 0LL;
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v17, a1);
  if ( v17[0] )
  {
    v11 = *(_QWORD *)(v17[0] + 48LL);
    SEMOBJSHARED<1>::SEMOBJSHARED<1>((Gre::Base *)&v15);
    v12 = *(_DWORD *)(v11 + 40);
    if ( (v12 & 0x20000) != 0 )
      v13 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 1784) + 40LL) + 2568LL);
    else
      v13 = *(_QWORD *)(v11 + 2568);
    if ( v13 == -4 )
    {
      HIDWORD(v14) = 0;
      GrepCaptureLiveMemoryDump(400LL, 46LL, *(_QWORD *)&v12 & 0x20000LL);
      v13 = 0LL;
    }
    if ( v13 )
    {
      DestinationString = 0LL;
      RtlInitUnicodeString(&DestinationString, (PCWSTR)(v13 + 64));
      v18[0] = 840;
      LODWORD(v14) = 0;
      if ( (int)DrvEnumDisplayDevices(&DestinationString, 0LL, 0LL, v18, v14, 0) >= 0 )
        v6 = 1;
    }
    GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
      v15);
  }
  if ( v6 )
  {
    v7 = Src;
    v8 = -1LL;
    do
      ++v8;
    while ( Src[v8] );
    v9 = 2 * v8 + 2;
    if ( v9 > v4 )
    {
      v6 = 0;
    }
    else
    {
      ProbeForWrite(a3, v4, 1u);
      memmove(a3, Src, v9);
    }
  }
  UserSessionSwitchLeaveCrit(v7);
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v17);
  return v6;
}
