/*
 * XREFs of ?QueryPotentials@GestureSession@@UEAAJPEAW4GestureType@@@Z @ 0x1801B80D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall GestureSession::QueryPotentials(GestureSession *this, enum GestureType *a2)
{
  int v2; // edi
  _QWORD *v5; // r14
  __int64 v6; // rbp
  int v7; // eax

  v2 = 0;
  if ( *((_BYTE *)this + 24) )
  {
    *((_DWORD *)this + 4) = 0;
    *((_BYTE *)this + 24) = 0;
    if ( !*((_BYTE *)this + 25) )
    {
      v5 = (_QWORD *)((char *)this + 704);
      v6 = 5LL;
      do
      {
        v7 = v2 | (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v5 + 16LL))(*v5);
        ++v5;
        *((_DWORD *)this + 4) = v7;
        v2 = v7;
        --v6;
      }
      while ( v6 );
    }
  }
  *(_DWORD *)a2 = *((_DWORD *)this + 3) & *((_DWORD *)this + 4);
  return 0LL;
}
