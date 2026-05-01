/*
 * XREFs of ??0resume_apartment_context@impl@winrt@@QEAA@$$T@Z @ 0x1800BA098
 * Callers:
 *     ??0CJumpViewExperienceManager@@QEAA@XZ @ 0x1800B9DEC (--0CJumpViewExperienceManager@@QEAA@XZ.c)
 *     ??0CVirtualDesktopManager@@QEAA@XZ @ 0x18052E408 (--0CVirtualDesktopManager@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::resume_apartment_context::resume_apartment_context(__int64 a1)
{
  __int64 result; // rax

  *(_QWORD *)a1 = 0LL;
  result = a1;
  *(_DWORD *)(a1 + 8) = -1;
  return result;
}
