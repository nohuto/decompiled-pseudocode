/*
 * XREFs of ?GetStride@CBitmapLock@@UEAAJPEAI@Z @ 0x18019FBA0
 * Callers:
 *     ?GetStride@CBitmapLock@@WBA@EAAJPEAI@Z @ 0x180225250 (-GetStride@CBitmapLock@@WBA@EAAJPEAI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CBitmapLock::GetStride(CBitmapLock *this, unsigned int *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  unsigned int v5; // ebx

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 24);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  if ( a2 )
  {
    if ( *((_BYTE *)this + 124) )
    {
      v5 = 0;
      *a2 = *((_DWORD *)this + 22);
    }
    else
    {
      v5 = -2003292412;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003292412, 0x8Cu, 0LL);
    }
  }
  else
  {
    v5 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0x8Au, 0LL);
  }
  if ( v2 )
    LeaveCriticalSection(v2);
  return v5;
}
