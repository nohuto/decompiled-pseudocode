/*
 * XREFs of ?Next@CEnumerableObjectCollection@@UEAAJKAEBU_GUID@@PEAPEAXPEAK@Z @ 0x1802E2E00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CEnumerableObjectCollection::Next(
        CEnumerableObjectCollection *this,
        unsigned int a2,
        const struct _GUID *a3,
        void **a4,
        unsigned int *a5)
{
  unsigned int v5; // esi
  void **v10; // rdi
  unsigned int v11; // r14d
  __int64 (__fastcall ***v12)(_QWORD, const struct _GUID *, void **); // rcx
  int v13; // ebx
  unsigned int v14; // eax
  unsigned __int64 v15; // rax
  unsigned int v16; // eax

  v5 = *((_DWORD *)this + 6);
  v10 = a4;
  v11 = v5 + a2;
  if ( v5 + a2 >= *((_DWORD *)this + 10) )
    v11 = *((_DWORD *)this + 10);
  while ( v5 < v11 )
  {
    v12 = *(__int64 (__fastcall ****)(_QWORD, const struct _GUID *, void **))(*((_QWORD *)this + 4) + 8LL * v5);
    v13 = (**v12)(v12, a3, v10);
    v14 = v5 + 1;
    if ( v13 < 0 )
      v14 = v5;
    v5 = v14;
    v15 = (unsigned __int64)(v10 + 1);
    if ( v13 < 0 )
      v15 = (unsigned __int64)v10;
    v10 = (void **)v15;
    if ( v13 < 0 )
    {
      if ( v15 > (unsigned __int64)a4 )
      {
        do
        {
          --v10;
          (*(void (__fastcall **)(void *))(*(_QWORD *)*v10 + 16LL))(*v10);
        }
        while ( v10 > a4 );
      }
      if ( a5 )
        *a5 = 0;
      return (unsigned int)v13;
    }
  }
  v16 = v5 - *((_DWORD *)this + 6);
  *((_DWORD *)this + 6) = v5;
  if ( a5 )
    *a5 = v16;
  return v16 < a2;
}
