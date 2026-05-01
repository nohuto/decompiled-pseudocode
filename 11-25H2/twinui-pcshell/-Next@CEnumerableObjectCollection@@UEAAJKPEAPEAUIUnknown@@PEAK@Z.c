/*
 * XREFs of ?Next@CEnumerableObjectCollection@@UEAAJKPEAPEAUIUnknown@@PEAK@Z @ 0x1802E90F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CEnumerableObjectCollection::Next(
        CEnumerableObjectCollection *this,
        unsigned int a2,
        struct IUnknown **a3,
        unsigned int *a4)
{
  unsigned int v4; // r14d
  struct IUnknown **v9; // rdi
  unsigned int v10; // r15d
  __int64 (__fastcall ***v11)(_QWORD, GUID *, struct IUnknown **); // rcx
  int v12; // ebx
  unsigned int v13; // eax
  unsigned __int64 v14; // rax
  unsigned int v15; // eax

  v4 = *((_DWORD *)this + 4);
  v9 = a3;
  v10 = v4 + a2;
  if ( v4 + a2 >= *((_DWORD *)this + 8) )
    v10 = *((_DWORD *)this + 8);
  while ( v4 < v10 )
  {
    v11 = *(__int64 (__fastcall ****)(_QWORD, GUID *, struct IUnknown **))(*((_QWORD *)this + 3) + 8LL * v4);
    v12 = (**v11)(v11, &GUID_00000000_0000_0000_c000_000000000046, v9);
    v13 = v4 + 1;
    if ( v12 < 0 )
      v13 = v4;
    v4 = v13;
    v14 = (unsigned __int64)(v9 + 1);
    if ( v12 < 0 )
      v14 = (unsigned __int64)v9;
    v9 = (struct IUnknown **)v14;
    if ( v12 < 0 )
    {
      if ( v14 > (unsigned __int64)a3 )
      {
        do
        {
          --v9;
          ((void (__fastcall *)(struct IUnknown *))(*v9)->lpVtbl->Release)(*v9);
        }
        while ( v9 > a3 );
      }
      if ( a4 )
        *a4 = 0;
      return (unsigned int)v12;
    }
  }
  v15 = v4 - *((_DWORD *)this + 4);
  *((_DWORD *)this + 4) = v4;
  if ( a4 )
    *a4 = v15;
  return v15 < a2;
}
