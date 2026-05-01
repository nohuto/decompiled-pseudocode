/*
 * XREFs of ?AddRef@PriorityBoostHelper@@UEAAKXZ @ 0x1801E82D0
 * Callers:
 *     ?AddRef@PriorityBoostHelper@@W7EAAKXZ @ 0x180396B70 (-AddRef@PriorityBoostHelper@@W7EAAKXZ.c)
 *     ?AddRef@PriorityBoostHelper@@WBA@EAAKXZ @ 0x180396B80 (-AddRef@PriorityBoostHelper@@WBA@EAAKXZ.c)
 *     ?AddRef@PriorityBoostHelper@@WBI@EAAKXZ @ 0x180396B90 (-AddRef@PriorityBoostHelper@@WBI@EAAKXZ.c)
 *     ?AddRef@PriorityBoostHelper@@WCA@EAAKXZ @ 0x180396BA0 (-AddRef@PriorityBoostHelper@@WCA@EAAKXZ.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1800532A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 */

__int64 __fastcall PriorityBoostHelper::AddRef(PriorityBoostHelper *this)
{
  signed __int64 v1; // rax
  unsigned int v3; // ecx
  signed __int64 v4; // rtt

  v1 = *((_QWORD *)this + 6);
  while ( v1 >= 0 )
  {
    if ( (_DWORD)v1 == 0x7FFFFFFF )
      return 0x7FFFFFFF;
    v3 = v1 + 1;
    v4 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 6, v1 + 1, v1);
    if ( v4 == v1 )
      return v3;
  }
  return (unsigned int)Microsoft::WRL::Details::SafeUnknownIncrementReference(
                         (Microsoft::WRL::Details *)(2 * v1 + 16),
                         (volatile int *)((unsigned __int64)v1 >> 63));
}
