/*
 * XREFs of ?GetAt@CDropFeedbackList@@UEAAJIAEBU_GUID@@PEAPEAX@Z @ 0x18053D1B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDropFeedbackList::GetAt(
        CDropFeedbackList *this,
        unsigned int a2,
        const struct _GUID *a3,
        void **a4)
{
  __int64 result; // rax
  __int64 (__fastcall ***v5)(_QWORD, const struct _GUID *, void **); // rcx

  result = 2147942487LL;
  if ( (unsigned __int64)a2 < *((_QWORD *)this + 3) )
  {
    _mm_lfence();
    v5 = *(__int64 (__fastcall ****)(_QWORD, const struct _GUID *, void **))(*((_QWORD *)this + 2) + 8LL * a2);
    return (**v5)(v5, a3, a4);
  }
  return result;
}
