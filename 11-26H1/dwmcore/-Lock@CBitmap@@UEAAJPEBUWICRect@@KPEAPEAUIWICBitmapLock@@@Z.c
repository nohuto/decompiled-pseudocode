/*
 * XREFs of ?Lock@CBitmap@@UEAAJPEBUWICRect@@KPEAPEAUIWICBitmapLock@@@Z @ 0x180224ED0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$ReleaseInterfaceNoNULL@UID2D1Ink@@@@YAXPEAUID2D1Ink@@@Z @ 0x1800AEB40 (--$ReleaseInterfaceNoNULL@UID2D1Ink@@@@YAXPEAUID2D1Ink@@@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1801785D0 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CBitmap::Lock(CBitmap *this, const struct WICRect *a2, unsigned int a3, struct IWICBitmapLock **a4)
{
  unsigned int v8; // ebx
  int v9; // eax
  unsigned int v11; // [rsp+20h] [rbp-28h]
  __int64 (__fastcall ***v12)(_QWORD, GUID *, struct IWICBitmapLock **); // [rsp+50h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+58h] [rbp+10h] BYREF

  v12 = 0LL;
  v13 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 8);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 8));
  if ( a2 )
  {
    if ( a4 )
    {
      v9 = (*(__int64 (__fastcall **)(char *, const struct WICRect *, _QWORD, __int64 (__fastcall ****)(_QWORD, GUID *, struct IWICBitmapLock **)))(*((_QWORD *)this - 2) + 24LL))(
             (char *)this - 16,
             a2,
             a3,
             &v12);
      v8 = v9;
      if ( v9 < 0 )
      {
        v11 = 278;
      }
      else
      {
        v9 = (**v12)(v12, &IID_IWICBitmapLock, a4);
        v8 = v9;
        if ( v9 >= 0 )
          goto LABEL_10;
        v11 = 280;
      }
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, v11, 0LL);
      goto LABEL_10;
    }
    v8 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0x112u, 0LL);
  }
  else
  {
    v8 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0x111u, 0LL);
  }
LABEL_10:
  ReleaseInterfaceNoNULL<ID2D1Ink>((__int64)v12);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v13);
  return v8;
}
