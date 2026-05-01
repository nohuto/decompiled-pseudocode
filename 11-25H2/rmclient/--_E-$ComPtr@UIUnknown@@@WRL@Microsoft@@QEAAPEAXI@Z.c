/*
 * XREFs of ??_E?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAPEAXI@Z @ 0x18000FFE8
 * Callers:
 *     ?RuntimeClassInitialize@EventTargetArray@Details@WRL@Microsoft@@QEAAJ_K@Z @ 0x180001EA0 (-RuntimeClassInitialize@EventTargetArray@Details@WRL@Microsoft@@QEAAJ_K@Z.c)
 *     ??1EventTargetArray@Details@WRL@Microsoft@@UEAA@XZ @ 0x18000FFA8 (--1EventTargetArray@Details@WRL@Microsoft@@UEAA@XZ.c)
 * Callees:
 *     ??1?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAA@XZ @ 0x18001003C (--1-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800137FC (--3@YAXPEAX@Z.c)
 */

void *__fastcall Microsoft::WRL::ComPtr<IUnknown>::`vector deleting destructor'(__int64 a1)
{
  void *v1; // rdi
  __int64 v2; // rbx
  __int64 i; // rsi

  v1 = (void *)(a1 - 8);
  v2 = *(_QWORD *)(a1 - 8);
  for ( i = a1 + 8 * v2; v2; --v2 )
  {
    i -= 8LL;
    Microsoft::WRL::ComPtr<IUnknown>::~ComPtr<IUnknown>(i);
  }
  operator delete(v1);
  return v1;
}
