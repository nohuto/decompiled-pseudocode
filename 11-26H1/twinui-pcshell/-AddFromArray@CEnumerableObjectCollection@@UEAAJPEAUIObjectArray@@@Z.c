/*
 * XREFs of ?AddFromArray@CEnumerableObjectCollection@@UEAAJPEAUIObjectArray@@@Z @ 0x1802DE490
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CEnumerableObjectCollection::AddFromArray(
        CEnumerableObjectCollection *this,
        struct IObjectArray *a2)
{
  struct IObjectArrayVtbl *lpVtbl; // rax
  unsigned int v5; // edi
  int i; // ebx
  struct IObjectArrayVtbl *v7; // rax
  unsigned int v9; // [rsp+58h] [rbp+10h] BYREF
  __int64 v10; // [rsp+60h] [rbp+18h] BYREF

  lpVtbl = a2->lpVtbl;
  v9 = 0;
  v5 = 0;
  for ( i = ((__int64 (__fastcall *)(struct IObjectArray *, unsigned int *))lpVtbl->GetCount)(a2, &v9); i >= 0; ++v5 )
  {
    if ( v5 >= v9 )
      break;
    v7 = a2->lpVtbl;
    v10 = 0LL;
    i = ((__int64 (__fastcall *)(struct IObjectArray *, _QWORD, GUID *, __int64 *))v7->GetAt)(
          a2,
          v5,
          &GUID_00000000_0000_0000_c000_000000000046,
          &v10);
    if ( i >= 0 )
    {
      i = (*(__int64 (__fastcall **)(CEnumerableObjectCollection *, __int64))(*(_QWORD *)this + 40LL))(this, v10);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
  }
  return (unsigned int)i;
}
