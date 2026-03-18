/*
 * XREFs of ?GetPixelFormatInfo@CFormatConverter@@UEBA?AUPixelFormatInfo@@XZ @ 0x1802B4450
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1801785D0 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 */

__int64 __fastcall CFormatConverter::GetPixelFormatInfo(__int64 a1, __int64 a2)
{
  int v4; // eax
  struct _RTL_CRITICAL_SECTION *v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = (struct _RTL_CRITICAL_SECTION *)(a1 + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 16));
  v4 = *(_DWORD *)(a1 + 84);
  *(_QWORD *)a2 = *(_QWORD *)(a1 + 76);
  *(_DWORD *)(a2 + 8) = v4;
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v6);
  return a2;
}
