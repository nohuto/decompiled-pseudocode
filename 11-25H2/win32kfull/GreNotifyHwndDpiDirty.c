/*
 * XREFs of GreNotifyHwndDpiDirty @ 0x14010AE1C
 * Callers:
 *     ?UpdateWindowMonitorAndDpiInfoHelper@@YAXPEAUtagWND@@PEAUtagMONITOR@@@Z @ 0x1400341EC (-UpdateWindowMonitorAndDpiInfoHelper@@YAXPEAUtagWND@@PEAUtagMONITOR@@@Z.c)
 * Callees:
 *     ?Insert@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX0@Z @ 0x1400B26AC (-Insert@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX0@Z.c)
 *     ?Remove@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z @ 0x14010A754 (-Remove@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z.c)
 *     ?GrepGetHwndDpiBucket@@YA_NAEBUSESSION_GLOBALS@Full@Gre@@PEAUHWND__@@PEAUHWND_LOGPIXELS_BUCKET@@@Z @ 0x14010B01C (-GrepGetHwndDpiBucket@@YA_NAEBUSESSION_GLOBALS@Full@Gre@@PEAUHWND__@@PEAUHWND_LOGPIXELS_BUCKET@@.c)
 *     ?LookupInterlockedExchangePointer@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX0PEAPEAX@Z @ 0x14026AEB0 (-LookupInterlockedExchangePointer@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX0PEAPEAX@Z.c)
 */

void __fastcall GreNotifyHwndDpiDirty(HWND a1, __int64 a2, __int64 a3)
{
  __int16 v3; // si
  const void *v5; // rbx
  __int64 SessionState; // rax
  __int64 v7; // rdi
  bool HwndDpiBucket; // al
  NSInstrumentation::CPointerHashTable *v9; // rcx
  void *v10; // [rsp+40h] [rbp+8h] BYREF
  void *v11; // [rsp+50h] [rbp+18h] BYREF

  v3 = a2;
  v5 = (const void *)(((unsigned __int64)a1 >> 1) & 0x3FFF);
  SessionState = W32GetSessionState(a1, a2, a3);
  v10 = 0LL;
  v7 = *(_QWORD *)(SessionState + 96);
  if ( v3 )
  {
    HwndDpiBucket = GrepGetHwndDpiBucket(
                      *(const struct Gre::Full::SESSION_GLOBALS **)(SessionState + 96),
                      a1,
                      (struct HWND_LOGPIXELS_BUCKET *)&v10);
    v9 = *(NSInstrumentation::CPointerHashTable **)(v7 + 4840);
    LOWORD(v10) = v3;
    if ( HwndDpiBucket )
    {
      v11 = 0LL;
      NSInstrumentation::CPointerHashTable::LookupInterlockedExchangePointer(v9, v5, v10, &v11);
    }
    else if ( NSInstrumentation::CPointerHashTable::Insert(v9, v5, v10) )
    {
      RtlSetBit((PRTL_BITMAP)(v7 + 4848), (ULONG)v5);
    }
  }
  else
  {
    NSInstrumentation::CPointerHashTable::Remove(
      *(NSInstrumentation::CPointerHashTable **)(v7 + 4840),
      (unsigned int)v5,
      &v10);
    RtlClearBit((PRTL_BITMAP)(v7 + 4848), (ULONG)v5);
  }
}
