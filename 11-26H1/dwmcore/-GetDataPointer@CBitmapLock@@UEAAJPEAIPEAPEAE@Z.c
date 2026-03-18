/*
 * XREFs of ?GetDataPointer@CBitmapLock@@UEAAJPEAIPEAPEAE@Z @ 0x18019C9F0
 * Callers:
 *     ?GetDataPointer@CBitmapLock@@WBA@EAAJPEAIPEAPEAE@Z @ 0x1802251A0 (-GetDataPointer@CBitmapLock@@WBA@EAAJPEAIPEAPEAE@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CBitmapLock::GetDataPointer(CBitmapLock *this, unsigned int *a2, unsigned __int8 **a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rsi
  unsigned int v7; // ebx

  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 24);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  if ( a3 )
  {
    if ( a2 )
    {
      if ( *((_BYTE *)this + 124) )
      {
        v7 = 0;
        *a2 = *((_DWORD *)this + 28);
        *a3 = (unsigned __int8 *)*((_QWORD *)this + 13);
      }
      else
      {
        v7 = -2003292412;
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003292412, 0x9Eu, 0LL);
      }
    }
    else
    {
      v7 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0x9Cu, 0LL);
    }
  }
  else
  {
    v7 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0x9Bu, 0LL);
  }
  if ( v3 )
    LeaveCriticalSection(v3);
  return v7;
}
