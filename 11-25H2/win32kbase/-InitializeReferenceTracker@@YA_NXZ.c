/*
 * XREFs of ?InitializeReferenceTracker@@YA_NXZ @ 0x140029AEC
 * Callers:
 *     HmgCreate @ 0x140028D7C (HmgCreate.c)
 * Callees:
 *     ?Create@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@SAPEAV123@PEAU_LIST_ENTRY@@K@Z @ 0x1401D4288 (-Create@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@SAPEAV123@PEAU_LIST_ENTRY@@K@.c)
 */

char __fastcall InitializeReferenceTracker(__int64 a1)
{
  __int64 v1; // rdi
  _QWORD *Pool2; // rax
  __int64 i; // rbx
  int v4; // eax
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType *v5; // rax

  v1 = *(_QWORD *)(W32GetSessionState(a1) + 88);
  if ( v1 != -5696 )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(258LL, 16LL, 961114965LL);
    if ( Pool2 )
    {
      Pool2[1] = Pool2;
      *Pool2 = Pool2;
    }
    *(_QWORD *)(v1 + 5688) = Pool2;
    if ( !Pool2 )
      return 0;
    for ( i = 0LL; (unsigned int)i < 3; i = (unsigned int)(i + 1) )
    {
      v4 = *(_DWORD *)(v1 + 5680);
      if ( _bittest(&v4, i) )
      {
        v5 = NSInstrumentation::CReferenceTracker::CReferenceCountedType::Create(
               *(struct _LIST_ENTRY **)(v1 + 5688),
               *(_DWORD *)(v1 + 16 * (i + 356)));
        if ( !v5 )
          return 0;
        *(_QWORD *)(v1 + 16LL * (unsigned int)i + 5704) = v5;
      }
    }
  }
  return 1;
}
